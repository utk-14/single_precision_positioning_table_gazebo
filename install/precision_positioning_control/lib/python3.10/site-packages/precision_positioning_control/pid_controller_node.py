import rclpy
from rclpy.node import Node
from std_msgs.msg import Float64, Int64, Float64MultiArray
from sensor_msgs.msg import JointState
from precision_positioning_interfaces.srv import (
    Home, EmergencyStop, ResetEncoder, MoveAbsolute, MoveRelative
)
import math

class PrecisionPIDControllerNode(Node):
    def __init__(self):
        super().__init__('pid_controller_node')
        
        # Parameters
        self.declare_parameter('lead_mm_per_rev', 2.0)
        self.declare_parameter('max_travel_mm', 180.79)
        self.declare_parameter('backlash_mm', 0.00)
        self.declare_parameter('kp', 8.0)
        self.declare_parameter('ki', 0.1)
        self.declare_parameter('kd', 0.5)
        self.declare_parameter('ticks_per_rev', 1000)
        
        self.lead_mm = self.get_parameter('lead_mm_per_rev').get_parameter_value().double_value
        self.max_travel_mm = self.get_parameter('max_travel_mm').get_parameter_value().double_value
        self.backlash_mm = self.get_parameter('backlash_mm').get_parameter_value().double_value
        self.kp = self.get_parameter('kp').get_parameter_value().double_value
        self.ki = self.get_parameter('ki').get_parameter_value().double_value
        self.kd = self.get_parameter('kd').get_parameter_value().double_value
        self.ticks_per_rev = self.get_parameter('ticks_per_rev').get_parameter_value().integer_value
        
        # Internal State Variables
        self.target_position_mm = 0.0
        self.current_position_mm = 0.0
        self.encoder_offset_mm = 0.0
        self.last_direction = 0  # +1 for positive, -1 for negative, 0 for initial
        self.backlash_accumulated_mm = 0.0
        self.is_e_stopped = False
        
        # PID internal state
        self.integral_error = 0.0
        self.prev_error = 0.0
        self.dt = 0.02  # 50 Hz control loop
        
        # Publishers
        self.pub_platform_pos = self.create_publisher(Float64, '/platform_position', 10)
        self.pub_target_pos = self.create_publisher(Float64, '/target_position', 10)
        self.pub_pos_error = self.create_publisher(Float64, '/position_error', 10)
        self.pub_encoder_ticks = self.create_publisher(Int64, '/encoder_ticks', 10)
        self.pub_joint_states = self.create_publisher(JointState, '/joint_states', 10)
        
        # Hardware joint command publishers for Gazebo Controllers
        self.pub_lead_screw_cmd = self.create_publisher(Float64MultiArray, '/lead_screw_position_controller/commands', 10)
        self.pub_platform_cmd = self.create_publisher(Float64MultiArray, '/platform_position_controller/commands', 10)
        
        # Subscribers
        self.sub_target = self.create_subscription(
            Float64,
            '/target_position',
            self.target_callback,
            10
        )
        
        # Services
        self.srv_home = self.create_service(Home, 'home_table', self.handle_home)
        self.srv_estop = self.create_service(EmergencyStop, 'emergency_stop', self.handle_estop)
        self.srv_reset_enc = self.create_service(ResetEncoder, 'reset_encoder', self.handle_reset_encoder)
        self.srv_move_abs = self.create_service(MoveAbsolute, 'move_absolute', self.handle_move_absolute)
        self.srv_move_rel = self.create_service(MoveRelative, 'move_relative', self.handle_move_relative)
        
        # Control Loop Timer (50 Hz)
        self.timer = self.create_timer(self.dt, self.control_loop)
        
        self.get_logger().info('Precision Positioning Table PID Controller Initialized.')
        self.get_logger().info(f'Lead: {self.lead_mm} mm/rev | Max Travel: {self.max_travel_mm} mm | Backlash: {self.backlash_mm} mm')

    def set_target(self, requested_target_mm: float) -> str:
        if self.is_e_stopped:
            msg = "Emergency Stop Active! Movement command rejected."
            self.get_logger().warn(msg)
            return msg

        limit_msg = ""
        if requested_target_mm > self.max_travel_mm:
            self.target_position_mm = self.max_travel_mm
            limit_msg = "Maximum travel reached."
            self.get_logger().warn(f"Requested {requested_target_mm:.2f} mm exceeds limit ({self.max_travel_mm:.2f} mm). Clamped to {self.max_travel_mm:.2f} mm. Maximum travel reached.")
            print("Maximum travel reached.")
        elif requested_target_mm < 0.0:
            self.target_position_mm = 0.0
            limit_msg = "Minimum travel limit reached (0.0 mm)."
            self.get_logger().warn(f"Requested {requested_target_mm:.2f} mm below 0.0. Clamped to 0.0 mm.")
        else:
            self.target_position_mm = requested_target_mm
            limit_msg = f"Target set to {self.target_position_mm:.2f} mm"
            
        return limit_msg

    def target_callback(self, msg: Float64):
        self.set_target(msg.data)

    def handle_home(self, request, response):
        if self.is_e_stopped:
            response.success = False
            response.message = "Emergency Stop is Active!"
            return response
            
        self.target_position_mm = 0.0
        self.current_position_mm = 0.0
        self.encoder_offset_mm = 0.0
        self.integral_error = 0.0
        self.prev_error = 0.0
        response.success = True
        response.message = "Home Complete"
        self.get_logger().info("Home Complete")
        print("Home Complete")
        return response

    def handle_estop(self, request, response):
        self.is_e_stopped = True
        self.target_position_mm = self.current_position_mm
        response.success = True
        response.message = "Emergency Stop"
        self.get_logger().error("Emergency Stop triggered! Motor stopped immediately.")
        print("Emergency Stop")
        return response

    def handle_reset_encoder(self, request, response):
        self.encoder_offset_mm = self.current_position_mm - request.reset_position_mm
        response.success = True
        response.message = f"Encoder reset to {request.reset_position_mm:.2f} mm"
        self.get_logger().info(response.message)
        return response

    def handle_move_absolute(self, request, response):
        status = self.set_target(request.target_position_mm)
        response.success = not self.is_e_stopped
        response.message = status
        response.final_position_mm = self.target_position_mm
        return response

    def handle_move_relative(self, request, response):
        new_target = self.target_position_mm + request.distance_mm
        status = self.set_target(new_target)
        response.success = not self.is_e_stopped
        response.message = status
        response.final_position_mm = self.target_position_mm
        return response

    def control_loop(self):
        if self.is_e_stopped:
            return

        # 1. Error calculation in mm
        raw_error = self.target_position_mm - self.current_position_mm
        
        # Direction determination for Backlash Simulation
        current_dir = 0
        if raw_error > 0.001:
            current_dir = 1
        elif raw_error < -0.001:
            current_dir = -1

        # Process direction change backlash compensation
        effective_error = raw_error
        if current_dir != 0 and current_dir != self.last_direction and self.last_direction != 0:
            if abs(self.backlash_accumulated_mm) < self.backlash_mm:
                backlash_step = current_dir * 0.05
                self.backlash_accumulated_mm += abs(backlash_step)
                effective_error = 0.0
                self.get_logger().info(f"Reversing direction! Absorbing backlash: {self.backlash_accumulated_mm:.3f} / {self.backlash_mm:.3f} mm")
            else:
                self.last_direction = current_dir
                self.backlash_accumulated_mm = 0.0
        else:
            if current_dir != 0:
                self.last_direction = current_dir

        # 2. PID Control Loop calculation
        self.integral_error += effective_error * self.dt
        derivative_error = (effective_error - self.prev_error) / self.dt
        self.prev_error = effective_error
        
        velocity_mm_s = (self.kp * effective_error) + (self.ki * self.integral_error) + (self.kd * derivative_error)
        velocity_mm_s = max(min(velocity_mm_s, 20.0), -20.0)
        
        # Update current platform position
        self.current_position_mm += velocity_mm_s * self.dt
        
        # Hard mechanical stop check
        if self.current_position_mm > self.max_travel_mm:
            self.current_position_mm = self.max_travel_mm
            velocity_mm_s = 0.0
            print("Maximum travel reached.")
        elif self.current_position_mm < 0.0:
            self.current_position_mm = 0.0
            velocity_mm_s = 0.0

        # Calculated outputs
        encoder_position_mm = self.current_position_mm - self.encoder_offset_mm
        rotations = encoder_position_mm / self.lead_mm
        encoder_counts = int(rotations * self.ticks_per_rev)
        lead_screw_angle_rad = rotations * (2.0 * math.pi)
        platform_position_meters = self.current_position_mm / 1000.0

        # Publish status topics
        msg_platform = Float64()
        msg_platform.data = self.current_position_mm
        self.pub_platform_pos.publish(msg_platform)

        msg_target = Float64()
        msg_target.data = self.target_position_mm
        self.pub_target_pos.publish(msg_target)

        msg_err = Float64()
        msg_err.data = raw_error
        self.pub_pos_error.publish(msg_err)

        msg_ticks = Int64()
        msg_ticks.data = encoder_counts
        self.pub_encoder_ticks.publish(msg_ticks)

        # Publish Joint States for RViz / TF visualization
        joint_state = JointState()
        joint_state.header.stamp = self.get_clock().now().to_msg()
        joint_state.name = ['lead_screw_joint', 'platform_joint']
        joint_state.position = [lead_screw_angle_rad, platform_position_meters]
        joint_state.velocity = [velocity_mm_s * (2.0 * math.pi / self.lead_mm), velocity_mm_s / 1000.0]
        self.pub_joint_states.publish(joint_state)

        # Send command to Gazebo ros2_control controllers
        cmd_screw = Float64MultiArray()
        cmd_screw.data = [lead_screw_angle_rad]
        self.pub_lead_screw_cmd.publish(cmd_screw)

        cmd_plat = Float64MultiArray()
        cmd_plat.data = [platform_position_meters]
        self.pub_platform_cmd.publish(cmd_plat)

        # Periodic terminal logging
        if int(self.get_clock().now().nanoseconds / 1e8) % 25 == 0:
            print(f"[STATUS] Target Position: {self.target_position_mm:6.2f} mm | "
                  f"Current Position: {self.current_position_mm:6.2f} mm | "
                  f"Encoder Counts: {encoder_counts:8d} | "
                  f"Error: {raw_error:6.2f} mm | "
                  f"Travel Limit: {self.max_travel_mm:.2f} mm")

def main(args=None):
    rclpy.init(args=args)
    node = PrecisionPIDControllerNode()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        node.destroy_node()
        rclpy.shutdown()

if __name__ == '__main__':
    main()

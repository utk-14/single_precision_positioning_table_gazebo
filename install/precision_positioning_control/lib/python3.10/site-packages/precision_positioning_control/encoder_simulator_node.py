import rclpy
from rclpy.node import Node
from std_msgs.msg import Float64, Int64
from sensor_msgs.msg import JointState
import math

class EncoderSimulatorNode(Node):
    def __init__(self):
        super().__init__('encoder_simulator_node')
        
        self.declare_parameter('lead_mm', 2.0)
        self.declare_parameter('ticks_per_rev', 1000)
        
        self.lead_mm = self.get_parameter('lead_mm').get_parameter_value().double_value
        self.ticks_per_rev = self.get_parameter('ticks_per_rev').get_parameter_value().integer_value
        
        self.lead_screw_angle_rad = 0.0
        
        self.sub_joint_states = self.create_subscription(
            JointState,
            '/joint_states',
            self.joint_state_callback,
            10
        )
        
        self.pub_encoder_ticks = self.create_publisher(Int64, '/encoder_ticks', 10)
        self.pub_encoder_pos = self.create_publisher(Float64, '/encoder_position', 10)
        
        self.get_logger().info('Encoder Simulator Node started. 1000 CPR Rotary Encoder initialized on lead screw.')

    def joint_state_callback(self, msg: JointState):
        if 'lead_screw_joint' in msg.name:
            idx = msg.name.index('lead_screw_joint')
            self.lead_screw_angle_rad = msg.position[idx]
            
            # Encoder ticks calculation (incremental rotary encoder mounted on lead screw)
            revs = self.lead_screw_angle_rad / (2.0 * math.pi)
            total_ticks = int(revs * self.ticks_per_rev)
            
            # Linear position measured by rotary encoder (1 rev = 2.0 mm)
            measured_pos_mm = revs * self.lead_mm
            
            msg_ticks = Int64()
            msg_ticks.data = total_ticks
            self.pub_encoder_ticks.publish(msg_ticks)
            
            msg_pos = Float64()
            msg_pos.data = measured_pos_mm
            self.pub_encoder_pos.publish(msg_pos)

def main(args=None):
    rclpy.init(args=args)
    node = EncoderSimulatorNode()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        node.destroy_node()
        rclpy.shutdown()

if __name__ == '__main__':
    main()

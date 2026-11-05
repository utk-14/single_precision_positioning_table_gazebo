# Precision Positioning Table using Stepper Motor and Rotary Encoder

A complete ROS 2 Humble + Gazebo Classic simulation project of a single-axis precision positioning table with a NEMA17 stepper motor, lead screw (2.0 mm lead), rotary encoder, linear guide rods, and PID controller with travel limiting and backlash simulation.

## Workspace Structure
```
precision_positioning_ws/
├── README.md
└── src/
    ├── precision_positioning_interfaces/   # Service definitions (Home, E-Stop, Reset, Move)
    ├── precision_positioning_description/  # URDF/Xacro, materials, RViz config
    ├── precision_positioning_control/      # PID controller & Encoder simulator nodes, controllers.yaml
    ├── precision_positioning_gazebo/       # World file and Gazebo launch
    └── precision_positioning_bringup/      # Complete system bringup launch file and system config
```

## Prerequisites
- Ubuntu 22.04 LTS
- ROS 2 Humble Hawksbill
- Gazebo Classic 11
- ROS 2 Control & Gazebo Plugins:
  ```bash
  sudo apt update
  sudo apt install ros-humble-gazebo-ros-pkgs ros-humble-gazebo-ros2-control ros-humble-ros2-control ros-humble-ros2-controllers
  ```

## Build Instructions
1. Extract workspace and navigate to directory:
   ```bash
   cd precision_positioning_ws
   ```
2. Build the packages using `colcon`:
   ```bash
   colcon build --symlink-install
   ```
3. Source the setup file:
   ```bash
   source install/setup.bash
   ```

## Launch System
To bring up Gazebo Classic, RViz2, ros2_control, PID controller node, and Encoder Simulator:
```bash
ros2 launch precision_positioning_bringup system_bringup.launch.py
```

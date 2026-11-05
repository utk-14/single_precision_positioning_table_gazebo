import os
from launch import LaunchDescription
from launch.actions import IncludeLaunchDescription
from launch.launch_description_sources import PythonLaunchDescriptionSource
from launch_ros.actions import Node
from launch_ros.substitutions import FindPackageShare

def generate_launch_description():
    desc_pkg = FindPackageShare('precision_positioning_description').find('precision_positioning_description')
    gaz_pkg = FindPackageShare('precision_positioning_gazebo').find('precision_positioning_gazebo')
    bringup_pkg = FindPackageShare('precision_positioning_bringup').find('precision_positioning_bringup')

    rviz_config_file = os.path.join(desc_pkg, 'rviz', 'config.rviz')
    sys_params_file = os.path.join(bringup_pkg, 'config', 'system_params.yaml')

    gazebo_launch = IncludeLaunchDescription(
        PythonLaunchDescriptionSource(os.path.join(gaz_pkg, 'launch', 'gazebo.launch.py'))
    )

    pid_node = Node(
        package='precision_positioning_control',
        executable='pid_controller_node',
        name='pid_controller_node',
        output='screen',
        parameters=[sys_params_file, {'use_sim_time': True}]
    )

    encoder_node = Node(
        package='precision_positioning_control',
        executable='encoder_simulator_node',
        name='encoder_simulator_node',
        output='screen',
        parameters=[sys_params_file, {'use_sim_time': True}]
    )

    rviz_node = Node(
        package='rviz2',
        executable='rviz2',
        name='rviz2',
        output='screen',
        arguments=['-d', rviz_config_file],
        parameters=[{'use_sim_time': True}]
    )

    return LaunchDescription([
        gazebo_launch,
        pid_node,
        encoder_node,
        rviz_node
    ])

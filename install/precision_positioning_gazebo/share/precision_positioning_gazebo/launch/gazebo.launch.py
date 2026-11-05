import os
from launch import LaunchDescription
from launch.actions import IncludeLaunchDescription, RegisterEventHandler
from launch.event_handlers import OnProcessExit
from launch.launch_description_sources import PythonLaunchDescriptionSource
from launch_ros.actions import Node
from launch.substitutions import Command
from launch_ros.substitutions import FindPackageShare

def generate_launch_description():
    gazebo_pkg = FindPackageShare('gazebo_ros').find('gazebo_ros')
    desc_pkg = FindPackageShare('precision_positioning_description').find('precision_positioning_description')
    gaz_pkg = FindPackageShare('precision_positioning_gazebo').find('precision_positioning_gazebo')
    
    world_path = os.path.join(gaz_pkg, 'worlds', 'empty_table.world')
    xacro_file = os.path.join(desc_pkg, 'urdf', 'table.urdf.xacro')

    robot_description = Command(['xacro ', xacro_file])

    gazebo = IncludeLaunchDescription(
        PythonLaunchDescriptionSource(os.path.join(gazebo_pkg, 'launch', 'gazebo.launch.py')),
        launch_arguments={'world': world_path}.items()
    )

    rsp_node = Node(
        package='robot_state_publisher',
        executable='robot_state_publisher',
        output='screen',
        parameters=[{'robot_description': robot_description, 'use_sim_time': True}]
    )

    spawn_entity = Node(
        package='gazebo_ros',
        executable='spawn_entity.py',
        arguments=['-topic', 'robot_description', '-entity', 'precision_table'],
        output='screen'
    )

    jsb_spawner = Node(
        package='controller_manager',
        executable='spawner',
        arguments=['joint_state_broadcaster', '--controller-manager', '/controller_manager']
    )

    lead_screw_spawner = Node(
        package='controller_manager',
        executable='spawner',
        arguments=['lead_screw_position_controller', '--controller-manager', '/controller_manager']
    )

    platform_spawner = Node(
        package='controller_manager',
        executable='spawner',
        arguments=['platform_position_controller', '--controller-manager', '/controller_manager']
    )

    return LaunchDescription([
        gazebo,
        rsp_node,
        spawn_entity,
        RegisterEventHandler(
            event_handler=OnProcessExit(
                target_action=spawn_entity,
                on_exit=[jsb_spawner, lead_screw_spawner, platform_spawner]
            )
        )
    ])

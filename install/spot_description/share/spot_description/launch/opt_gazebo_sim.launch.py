#!/usr/bin/env python3

import os
from launch import LaunchDescription
from launch.actions import ExecuteProcess
from launch_ros.actions import Node
from ament_index_python.packages import get_package_share_directory

def generate_launch_description():
    # Assuming the first script has already run and generated the URDF file, 
    # we just need to locate it.
    # Replace 'spot_with_arm.urdf' with the actual name of the generated URDF file if different.
    urdf_file_path = os.path.join(get_package_share_directory('spot_description'), 'urdf', 'spot_with_arm.urdf')

    # Path to the Gazebo world file and models folder for all of the objects in that world
    world_file_path = '/usr/share/gazebo-11/worlds/empty.world'  # Ensure this path is correct for Gazebo 11

    return LaunchDescription([
        # Launch Gazebo with the specified world file
        ExecuteProcess(
            cmd=['gazebo', '--verbose', world_file_path, '-s', 'libgazebo_ros_factory.so'],
            output='screen'),
        
        # Spawn your robot model into Gazebo
        Node(package='gazebo_ros', executable='spawn_entity.py',
             arguments=['-file', urdf_file_path, '-entity', 'Spot'],
             output='screen'),

        # Start necessary ROS2 controllers (if any)
        # Add Nodes for any additional ROS2 controllers you need to launch
    ])


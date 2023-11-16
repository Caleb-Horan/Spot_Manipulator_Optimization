#!/usr/bin/env python3
#caleb
import sys
sys.path.append('/home/caleb/ros2_ws/src/spot_ros/spot_description/launch/state_publisher.launch.py')
from state_publisher import generate_launch_description as spot_launch
import os
from launch import LaunchDescription
from launch.actions import ExecuteProcess
from launch_ros.actions import Node
from ament_index_python.packages import get_package_share_directory
# from state_publisher.launch.py import generate_launch_description as spot_launch

def generate_launch_description():
    # Use the launch description from the first script to generate and get the URDF file path
    spot_description = spot_launch()
    this_pkg_share = get_package_share_directory('spot_description')
    urdf_file_path = os.path.join(this_pkg_share, 'urdf', 'spot.urdf')  # Adjust this path if the URDF is saved differently

    # Path to the Gazebo world file
    world_file_path = '/usr/share/gazebo-11/worlds/empty.world'  # Adjust the path and version as necessary

    return LaunchDescription([
        # Include the launch description from the first script
        spot_description,

        # Launch Gazebo with the specified world file
        ExecuteProcess(
            cmd=['gazebo', '--verbose', world_file_path, '-s', 'libgazebo_ros_factory.so'],
            output='screen'),
        
        # Spawn your robot model into Gazebo
        Node(package='gazebo_ros', executable='spawn_entity.py',
             arguments=['-file', urdf_file_path, '-entity', 'Alph'],
             output='screen'),

        # Start necessary ROS2 controllers
        # ...
    ])








# import os
# import subprocess
# from launch import LaunchDescription
# from launch.actions import ExecuteProcess,SetEnvironmentVariable  # Corrected import
# from launch_ros.actions import Node
# from ament_index_python.packages import get_package_share_directory



# def convert_xacro_to_urdf(xacro_file, urdf_file):
#     try:
#         subprocess.check_call(['xacro', xacro_file, '-o', urdf_file])
#     except subprocess.CalledProcessError as e:
#         print('Failed to convert xacro to URDF:', str(e))
#         raise e

# #setting paths for changing spot xacro to urdf 
# xacro_file_path = os.path.join(get_package_share_directory('spot_description'), 'urdf', 'spot_with_arm.urdf.xacro')
# urdf_file_path = os.path.join(get_package_share_directory('spot_description'), 'urdf', 'spot_with_arm.urdf')


# convert_xacro_to_urdf(xacro_file_path, urdf_file_path)

# def generate_launch_description():
#     # Path to your robot's URDF file
#     urdf_file_path = os.path.join(get_package_share_directory('spot_description'), 'urdf', 'spot_with_arm.urdf')

#     # Path to the Gazebo world file and models folder for all of the objects in that world
#     world_file_path = '/usr/share/gazebo-11/worlds/empty.world'  # Replace '9' with your Gazebo version

       
#     return LaunchDescription([
        
    
#         # Launch Gazebo with the specified world file
#         ExecuteProcess(
#             cmd=['gazebo', '--verbose', world_file_path, '-s', 'libgazebo_ros_factory.so'],
#             output='screen'),
        
#         # Spawn your robot model into Gazebo
#         Node(package='gazebo_ros', executable='spawn_entity.py',
#              arguments=['-file', urdf_file_path, '-entity', 'Alph'],
#              output='screen'),

#         # Start necessary ROS2 controllers
#         # ...
#     ])

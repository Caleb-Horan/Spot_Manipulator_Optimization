#!/usr/bin/env python3


import sys
import rclpy
from rclpy.node import Node
from moveit import MoveGroupInterface
from geometry_msgs.msg import Pose

class MoveRobotNode(Node):
    def __init__(self):
        super().__init__('move_robot_node')
        self.move_group = MoveGroupInterface("your_planning_group", "robot_description")

    def move_robot(self):
        pose_target = Pose()
        pose_target.orientation.w = 1.0
        pose_target.position.x = 1.0
        pose_target.position.y = 1.0
        pose_target.position.z = 1.0

        self.move_group.set_pose_target(pose_target)
        plan = self.move_group.plan()
        success = self.move_group.go(wait=True)
        self.move_group.stop()
        self.move_group.clear_pose_targets()

        return success

def main(args=None):
    rclpy.init(args=args)
    move_robot_node = MoveRobotNode()
    try:
        success = move_robot_node.move_robot()
        if success:
            move_robot_node.get_logger().info('Motion completed successfully.')
        else:
            move_robot_node.get_logger().info('Motion failed.')
    except Exception as e:
        move_robot_node.get_logger().info('Error in moving robot: %r' % (e,))
    finally:
        move_robot_node.destroy_node()
        rclpy.shutdown()

if __name__ == '__main__':
    main()

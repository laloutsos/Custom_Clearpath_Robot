#!/usr/bin/env python3

import rclpy
from rclpy.node import Node
from rclpy.action import ActionClient

from control_msgs.action import GripperCommand


class GripperControllerNode(Node):
    def __init__(self):
        super().__init__("gripper_controlelr")

        self._client = ActionClient(
            self,
            GripperCommand,
            "/j100_0000/arm_0_gripper_controller/gripper_cmd"
        )

    def send_goal(self, position, max_effort):
        goal_msg = GripperCommand.Goal()
        goal_msg.command.position = position
        goal_msg.command.max_effort = max_effort

        self.get_logger().info("Waiting for gripper action server...")
        self._client.wait_for_server()

        self.get_logger().info(
            f"Sending goal -> position={position}, max_effort={max_effort}"
        )

        future = self._client.send_goal_async(
            goal_msg,
            feedback_callback=self.feedback_callback
        )
        future.add_done_callback(self.goal_response_callback)

    def goal_response_callback(self, future):
        goal_handle = future.result()

        if not goal_handle.accepted:
            self.get_logger().error("Goal rejected by gripper controller.")
            rclpy.shutdown()
            return

        self.get_logger().info("Goal accepted by gripper controller.")

        result_future = goal_handle.get_result_async()
        result_future.add_done_callback(self.result_callback)

    def feedback_callback(self, feedback_msg):
        feedback = feedback_msg.feedback
        self.get_logger().info(
            f"Feedback -> position={feedback.position:.4f}, "
            f"effort={feedback.effort:.4f}, "
            f"stalled={feedback.stalled}, "
            f"reached_goal={feedback.reached_goal}"
        )

    def result_callback(self, future):
        result = future.result().result
        self.get_logger().info(
            f"Result -> position={result.position:.4f}, "
            f"effort={result.effort:.4f}, "
            f"stalled={result.stalled}, "
            f"reached_goal={result.reached_goal}"
        )
        rclpy.shutdown()


def main(args=None):
    rclpy.init(args=args)

    node = GripperControllerNode()

    node.send_goal(position=0.4, max_effort=10.0)
    



    rclpy.spin(node)


if __name__ == "__main__":
    main()
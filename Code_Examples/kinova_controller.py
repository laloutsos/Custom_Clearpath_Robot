#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from trajectory_msgs.msg import JointTrajectory, JointTrajectoryPoint

class KinovaControllerNode(Node): 
    def __init__(self):
        super().__init__("kinova_controller") 

        self.arm_pub = self.create_publisher(
            JointTrajectory,
            "/j100_0000/arm_0_joint_trajectory_controller/joint_trajectory",
            10
        )

        self.sent = False
        self.timer = self.create_timer(1.0, self.send_joint_positions_callback)


    def send_joint_positions(self, positions, duration_sec):
        msg = JointTrajectory()
        msg.joint_names = [
            "arm_0_joint_1",
            "arm_0_joint_2",
            "arm_0_joint_3",
            "arm_0_joint_4",
            "arm_0_joint_5",
            "arm_0_joint_6",
        ]

        point = JointTrajectoryPoint()

        point.positions = positions

        point.time_from_start.sec = duration_sec

        msg.points.append(point)
        self.arm_pub.publish(msg)

    def send_joint_positions_callback(self):
        if self.sent:
            return
        
        self.send_joint_positions([0.5, 0.3, 0.2, 0.4, 0.3, 0.6], 3)

        self.get_logger().info("Command sent")
        self.sent = True

    


def main(args=None):
    rclpy.init(args=args)
    node = KinovaControllerNode() 
    rclpy.spin(node)
    rclpy.shutdown()


if __name__ == "__main__":
    main()


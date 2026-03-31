#!/usr/bin/env python3
import rclpy
import math
from rclpy.node import Node
from sensor_msgs.msg import PointCloud2
from geometry_msgs.msg import TwistStamped

import sensor_msgs_py.point_cloud2 as pc2

class First_Jackal_Driver(Node): 
    def __init__(self):
        super().__init__("first_jackal_driver") 

        self.sub = self.create_subscription(PointCloud2, "/j100_0000/sensors/lidar3d_0/points", self.lidar_callback, 10)
        self.pub = self.create_publisher(TwistStamped, "/j100_0000/cmd_vel", 10)

        self.get_logger().info("First Jackal Driver Node started")

    def lidar_callback(self, msg):

        left_min = float('inf')
        right_min = float('inf')
        obstacle = False 

        
        # read point cloud
        for point in pc2.read_points(msg, field_names=("x", "y", "z"), skip_nans=True):

            x = point[0]
            y = point[1]
            z = point[2]

            distance = math.hypot(x,y)

            # check only points in front of robot
            if 0.2 < x < 1.5 and abs(y) < 0.5:
                obstacle = True
            # check for the nearest right obstacle
            if 0.2 < x < 1.5 and y < -0.3:
                if distance < right_min:
                    right_min = distance
            # check for the nearest left obstacle 
            if 0.2 < x < 1.5 and y > 0.3:
                if distance < left_min:
                    left_min = distance


        twist = TwistStamped()
        twist.header.stamp = self.get_clock().now().to_msg()
        twist.header.frame_id = "base_link"

        if obstacle:

            if left_min > right_min:
                # turn left
                twist.twist.linear.x = 0.0
                twist.twist.angular.z = 0.6
                self.get_logger().info("Obstacle: turning LEFT")

            else:
                # turn rght 
                twist.twist.linear.x = 0.0
                twist.twist.angular.z = -0.6
                self.get_logger().info("Obstacle: turning RIGHT")

        else:
            twist.twist.linear.x = 1.0
            twist.twist.angular.z = 0.0


        self.pub.publish(twist)


def main(args=None):
    rclpy.init(args=args)
    node = First_Jackal_Driver() 
    rclpy.spin(node)
    rclpy.shutdown()


if __name__ == "__main__":
    main()


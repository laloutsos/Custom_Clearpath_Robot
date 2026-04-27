# Driving Jackal by publishing to cmd_vel

In our configuration, every topic is placed inside the j100_000 namespace, so the correct topic is ```/j100_000/cmd_vel``` .

In order to understand how all this works, we need to take a closer look at the robot’s topics and interfaces. 

## 1: Topic Info

The first thing we want to look at is what kind of message is being sent to this topic. This way, we will know what we need to “construct” before publishing to the corresponding topic. This can be done by running:

`ros2 topic info /j100_0000/cmd_vel`

and the output is:
```
Type: geometry_msgs/msg/TwistStamped
Publisher count: 1
Subscription count: 1
```

## 2: Iinterface Info 

Now that we know the message type, we want to learn the exact details of this specific interface. This can be done by running:

```
ros2 interface show geometry_msgs/msg/TwistStamped
```

and the output is:
```
# A twist with reference coordinate frame and timestamp

std_msgs/Header header
	builtin_interfaces/Time stamp
		int32 sec
		uint32 nanosec
	string frame_id
Twist twist
	Vector3  linear
		float64 x
		float64 y
		float64 z
	Vector3  angular
		float64 x
		float64 y
		float64 z

```

The `header` section contains the timestamp (sec and nanosec) indicating when the message was created, as well as the `frame_id`, which defines the coordinate frame the data refers to. This section is not needed and probably we will never need to publish these. 


 The `twist` section describes the actual motion of the robot: the `linear` vector (x, y, z) represents translational velocity in the three spatial directions, while the `angular` vector (x, y, z) represents rotational velocity around the three axes (roll, pitch, and yaw). In simple terms, this message tells us where the data is defined in space and time, and how the robot is moving and rotating at that exact moment. That's the actual message we want to publish and the only infomation the robot needs in order to move.

 ## 3: Controlling the robot.

 Now that we know exactly what the message should contain, we can control the robot from the terminal or a python script.

 ### Terminal example:
 ```
 ros2 topic pub -r 10 /j100_0000/cmd_vel geometry_msgs/msg/TwistStamped "
twist:
  linear:
    x: 0.5
    y: 0.0
    z: 0.0
  angular:
    x: 0.0
    y: 0.0
    z: 0.2
"
 ```

 ### Very simple Python example:
```python
#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from geometry_msgs.msg import TwistStamped


class CmdVelPublisher(Node):
    def __init__(self):
        super().__init__("cmd_vel_publisher")

        self.publisher_ = self.create_publisher(
            TwistStamped,
            "/j100_0000/cmd_vel",
            10
        )

        self.timer = self.create_timer(0.1, self.publish_cmd)  # 10 Hz

    def publish_cmd(self):
        msg = TwistStamped()

        msg.twist.linear.x = 0.5
        msg.twist.linear.y = 0.0
        msg.twist.linear.z = 0.0

        msg.twist.angular.x = 0.0
        msg.twist.angular.y = 0.0
        msg.twist.angular.z = 0.2

        self.publisher_.publish(msg)


def main(args=None):
    rclpy.init(args=args)
    node = CmdVelPublisher()
    rclpy.spin(node)
    rclpy.shutdown()


if __name__ == "__main__":
    main()
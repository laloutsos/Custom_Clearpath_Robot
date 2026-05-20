# Connecting to the actual robot and controlling it.

## JACKAL J100
### Connencting to the robot terminal
Make sure that your PC is connected to the same network with the robot.Then, open a terminal and type

 ```ssh robot@cpr-j100-0710``` 

Then it will ask you for password. The password is by default:

 ```clearpath```.

>  **IMPORTANT**: In my configuration the namespace is j100-0710. You should put the actual namespace of your robot.
>

### Opening rviz 
Type in the terminal:

```rviz2 --ros-args   -r /tf:=/j100_0710/tf   -r /tf_static:=/j100_0710/tf_static```

>  **IMPORTANT**: Type the actual namespace of your robot.
>
## KINOVA GEN3 LITE
Make sure that the the robot is connected to the jackal with a mini usb 2.0 cable. You can verify that there is a connection by typing in your terminal

```ping 192.168.1.10```

The final output should look like this:
```
--- 192.168.1.10 ping statistics ---
6 packets transmitted, 6 received, 0% packet loss, time 5109ms
rtt min/avg/max/mdev = 0.184/0.206/0.233/0.018 ms
```

For the kinova Gen3 Lite this is a fixed IP configured by the company and cannot be changed.


### Controlling the manipulator 
Open a terminal from a PC that is connected to the same network with your robot, or a terminal with ssh via the robot, and type the below command. As always, first you have to check and type the correct topic name with the correct namespace.

```
ros2 topic pub --once /j100_0710/manipulators/arm_0_joint_trajectory_controller/joint_trajectory trajectory_msgs/msg/JointTrajectory "
joint_names:
- arm_0_joint_1
- arm_0_joint_2
- arm_0_joint_3
- arm_0_joint_4
- arm_0_joint_5
- arm_0_joint_6

points:
- positions: [0.0, 0.0, 0.0, 0.0, 0.0, 0.0]
  time_from_start:
    sec: 3
"
```

### Controlling the gripper
Same as before, open a terminal and type:
```
ros2 action send_goal /j100_0710/manipulators/arm_0_gripper_controller/gripper_cmd control_msgs/action/GripperCommand "{command: {position: 0.0, max_effort: 10.0}}" --feedback
```
Result:
```
Waiting for an action server to become available...
Sending goal:
     command:
  position: 0.0
  max_effort: 10.0

Goal accepted with ID: 268e515f391147a4b47b15e0e5902f6d

Result:
    position: 0.00868704618215561
effort: 10.0
stalled: false
reached_goal: true

Goal finished with status: SUCCEEDED
```

### TODO

The robot hardware can accept velocity commands, to the end effector and the joints, but there is no controller to send those commands, so I am about to make one and update this repo as soon as possible.

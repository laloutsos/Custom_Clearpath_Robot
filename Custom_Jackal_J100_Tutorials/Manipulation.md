# Manipulation in Gazebo Harmonic with Kinova Gen3 Lite
**The more I explore this topic, the more I will continuously update the repo with new info.**
## Moveit
Open 3 Terminal Windows in your home directory and type one command in each terminal:
```bash
# Terminal 1
ros2 launch clearpath_gz simulation.launch.py setup_path:=$HOME/clearpath

# Terminal 2 
ros2 launch clearpath_manipulators moveit.launch.py setup_path:=$HOME/clearpath use_sim_time:=true

# Terminal 3 
ros2 launch clearpath_viz view_moveit.launch.py namespace:=a200_0000 use_sim_time:=True
```

## Plan and execute motion in Rviz 
- 1: Open the new Rviz, drag with your mouse the manipulator and move it anywhere you want 

    ![man_drag](/images/man_drag.png)
- 2: Set Start State to previous and goal state to current. Then press plan and execute. Now you can watch the manipulator moving either from Rviz or Gazebo.

  *In case it fails, try changing fixed frame from base_link to arm_0_base_link: Global Options->Fixed Frame*

  ![man_conf](/images/man_conf.png)

    ## Final Result 

    ![man_final](/images/man_final.png)


---

## Controlling the manipulator with Topics and Controllers. Exploration Step By Step.
> While the simulation of the robot is running, open a new terminal and do the  following:
 - A: **Joints**
    - 1: ```ros2 topic list```
      
      ![joint_trajectory](/images/joint_trajectory.png)

    - 2: We are intersted in ```/j100_0000/arm_0_joint_trajectory_controller/joint_trajectory```. So we type in the terminal:
      ```bash
      ros2 topic info /j100_0000/arm_0_joint_trajectory_controller/joint_trajectory
      ```
      ![img](/images/traj_topic_info.png)

    - 3: Now we will see more information about the interface: 
    - 
      ![img](/images/man_interface.png)

      The `trajectory_msgs/msg/JointTrajectory` message consists of three main components: `header`, `joint_names`, and `points`. The `joint_names` field specifies which joints are being controlled and defines their order, while each element in `points` represents a desired configuration of the arm at a specific time from the start of the motion. The official structure of the message is: `Header header`, `string[] joint_names`, and `JointTrajectoryPoint[] points`.
    
    - 3: We can see the actual names of the gripper and the joints by typing in the terminal: 
      ```bash
      rostopic echo /j100_0000/platform/joint_states
      ```

      ![img](/images/joint_names.png)

      Now we know and the names of each joint and also the gripper 

      ![img](/images/visual_joints.png)

      Now that we knpw everything, we can controll the joints via the terminal by typing for example:
      ```bash
      ros2 topic pub --once /j100_0000/arm_0_joint_trajectory_controller/joint_trajectory trajectory_msgs/msg/JointTrajectory "
      joint_names:
      - arm_0_joint_1
      - arm_0_joint_2
      - arm_0_joint_3
      - arm_0_joint_4
      - arm_0_joint_5
      - arm_0_joint_6
      points:
      - positions: [0.5, 0.3, 0.2, 0.4, 0.3, 0.6]
        time_from_start: {sec: 3, nanosec: 0}
      "
      ``` 
      Final Result: 

      ![img](/images/man_final.png)

      > Remember that you can exaxtly the same with velocities and acceleratins instead of straight giving the desired points.

  - B: **Gripper**
      
      - 1: The gripper is controled through actions: 

          ![img](/images/gripper_actions.png)
      - 2: And now we can see what is inside the interface 
      
        ![img](/images/gripper_interface.png)

        The gripper uses the `control_msgs/action/GripperCommand` action interface, which is very straightforward. When you send a command, you only provide two values: `position` and `max_effort`. The `position` represents the opening width of the gripper in meters (e.g., 0.0 = fully closed, 0.02 = 2 cm open), while `max_effort` defines the maximum force (in Newtons) the gripper is allowed to apply—lower values result in a softer grasp, higher values in a stronger one. As the action executes, the system provides feedback and a final result including the actual position reached, the effort applied, and two important flags: `stalled` (if the gripper could not continue moving, usually due to contact or limits) and `reached_goal` (if it successfully achieved the requested position).

      - 3: Controlling the gripper: Now that we know everything we can send commands to the gripper:
        ```bash
        ros2 action send_goal /j100_0000/arm_0_gripper_controller/gripper_cmd control_msgs/action/GripperCommand "
        command:
          position: 0.8
          max_effort: 10.0
        " --feedback
        ```
        Final Result:

        ![img](/images/closed_gripper.png)

        **Note:** If you run the same command with ```position: 0.0``` the gripper will open again and come back to the state where it was at the start of the simulation.


      


# Manipulation in Gazebo Harmonic with Kinova Gen3 Lite

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


**The more I explore this topic, the more I will continuously update the repo with new info.**
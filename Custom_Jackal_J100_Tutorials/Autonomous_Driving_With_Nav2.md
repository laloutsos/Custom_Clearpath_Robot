# Autonomous Driving with Nav2
With Nav2, the robot creates a map of the environment so it knows exactly where it is and its orientation. By manually driving the robot around, it detects obstacles and updates the map. Once the robot has recorded the environment, it can navigate on its own to any location, as long as you tell it where to go. Essentially, it “learns” the space first and then can move autonomously, avoiding obstacles and following the planned path. Follow the below steps in order to set it up and experiment with it:

- 1: To install the package, run: 
  ```bash
  sudo apt-get update
  sudo apt-get install ros-jazzy-clearpath-nav2-demos
  ```
- 2: Now open 4 new terminal windows and type one command in each terminal:
  ```bash
    # Terminal 1 
    ros2 launch clearpath_gz simulation.launch.py rviz:=true

    # Terminmal 2
    ros2 launch clearpath_nav2_demos nav2.launch.py scan_topic:=/j100_0000/sensors/lidar3d_0/scan use_sim_time:=true setup_path:=clearpath

    # Terminal 3 
    ros2 launch clearpath_nav2_demos slam.launch.py scan_topic:=/j100_0000/sensors/lidar3d_0/scan use_sim_time:=true setup_path:=clearpath

    # Terminal 4
    ros2 launch clearpath_viz view_navigation.launch.py namespace:=/j100_0000 use_sim_time:=true
  ```

**The more I explore this topic, the more I will continuously update the repo with new info.**
# Important Additional Information 

- ### Customizing the robot 
  If you want to make experiments and customise the robot, you can do it by editing the robot.yaml file inside the clearpath folder. Every time you make a change, after saving you need to type the following commands in order everything to work properly 

  ```bash
  ros2 run clearpath_generator_common generate_bash -s ~/clearpath
  source /opt/ros/jazzy/setup.bash
  ```
  If you want to add new meshes, I suggest you to add them in an existing directory that contains meshes. For example ```/clearpath_ws/src/clearpath_common/clearpath_mounts_description/meshes```. After that open a new terminal in clearpath_ws directory and type:
  ```bash
  rm -rf build install log
  colcon build
  source install/setup.bash
  cd ..
  ```

- ### Clearpath Docs: 
  Basic Source of this Tutorial is [official documentation of Clearpath Robotics](https://docs.clearpathrobotics.com/docs/ros/). I adjusted the commands and set up the configurations for this specific robot, and I reduced the setup complexity as much as I could so that anyone can get it running. 

- ### Always build in workspace directories, never src
  But if you do it by mistake just go to the folder you did ```colcon build``` by mistake, open the terminal and type:
  ```bash
  rm -rf build install log
  ```
- ### Building in the same Workspace multiple times
  It is suggested to always do ```rm -rf build install log``` before you type ```colcon build``` in an already built workspace.

- ### Terminator 
  Try using terminator instead of the system's terminal, it is much better for running multiple windows. You can install it by typing in your terminal 
  ```bash
  sudo apt update
  sudo apt install terminator
  ```
  Click [here](https://github.com/spabinger/terminator-cheat-sheet) to see how to use it. 
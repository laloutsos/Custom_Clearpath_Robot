# How to set up Lighter Gazebo emulation in Ubuntu
### I created 3 custom files that you need to install in order to avoid simulating your robot in a heavy enviroment. Just follow the below instructions.

- 1: Move/Copy ```cse_simulation.launch.py``` and ```empty.sdf``` to your home directory
- 2: Open a terminal window 
- 3: Type the below command 
  ```bash
  sudo cp ~/cse_simulation.launch.py /opt/ros/jazzy/share/clearpath_gz/launch/
  ```

    **The remaining steps are optional, but they make the simulation even lighter in order to avoid errors and crashes.**
- 4: Go to ```clearpath``` directory, rename ```robot.yaml``` to anything you want and then and rename ```light_robot.yaml``` to ```robot.yaml```.
- 5: return to your home directory, open a new terminal and type 
  ```
  ros2 run clearpath_generator_common generate_bash -s ~/clearpath
  source /opt/ros/jazzy/setup.bash
  ``` 

# Using YOLO with the cameras mounted to J100
 **After downloading YOLO library inside clearpath_ws from [here](https://github.com/mgonzs13/yolo_ros). follow the below instructions** 

 - 1: 
    ```bash
    export PYTHONPATH=$HOME/clearpath_ws/.venv/lib/python3.12/site-packages:$PYTHONPATH
    ```

- 2: We connect YOLO with the flir camera

    ```bash
    ros2 launch yolo_bringup yolo.launch.py   input_image_topic:=/j100_0000/sensors/camera_1/color/image   yolo_encoding:=rgb8   threshold:=0.2   device:=cpu
    ```
    **RESULT:**

    ![img](/images/yolo_flir.png)

### YOU MAY ENCOUNTER MANY ERRORS THROUGH THE DOWNLOAD PROCESS. BY THE TIME I INSTALL YOLO IN ANOTHER SYSTEM, I WILL UPDATE THIS FILE WITH CLEAR INSTRUCTIONS. THOSE COMMANDS WILL WORK ONLY IF YOU DOWNLOADED EVERYTHING REQUIRED.
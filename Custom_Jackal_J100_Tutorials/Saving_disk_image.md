# Creating a Disk Image of the Robot Computer for Backup and Recovery

### IMPORTANT: Make sure the robot is up and running, and also connected to the same Wifi with your PC trhough the whole process.

- Step 1: Connect to your robot via ssh:
  
  ```ssh administrator@your_robots_host_name```
- Step 2: dentify the available storage devices and their paths using ```lsblk``` command.
  
  ![disk1](/images/disk1.png)

- Step 2: Open a new terminal  and start the transfering process by typing(change 'your_password' with the robot's computer password): 
  - Note: You may still be asked for password.
    ```bash
    ssh administrator@cpr-j100-0710 "echo your_password | sudo -S dd if=/dev/sda bs=8M conv=noerror,sync" \
    | pv \
    | gzip > ~/j100_full.img.gz
    
    ```
  - Note: You may have an error if you have not installed pv, which is for viewing proggres. Install it by typing:
    ```bash
    sudo apt update
    sudo apt install pv
    ```

# Recovering with Safe way: LIve USB  
> **CAUTION**  
> This process will completely overwrite the robot's disk.  
> All existing data will be permanently lost and replaced.

Initially transfer the img.gz file into an external ssd/hdd or a usb and connect it to the robot. Then do the following **very carefully** 
- 1: Boot the robot via the usb:
  Open the terminal and type ```lsblk```
- 2: Make sure that the robot's disk IS NOT mounted
  ```bash
    mount | grep sda
  ```
- 3: If it is mounted type ```sudo umount /dev/sda``` 
- 4: Write the path to the img.gz file and type
  ```bash
  gunzip -c /path/to/j100_full.img.gz | sudo dd of=/dev/sda bs=8M status=progress
  ```
- 5: After it finishes type 
    ```bash
    sync
    sudo reboot
    ```
    and disconnect the usb.

# !IMPORTANT NOTICE
- if your robot is booted from sda NEVER type ```dd of=/dev/sda```
- Keep track of the disks!!(Your robot's drive and the external drive or usb)
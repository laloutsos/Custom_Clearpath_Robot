# Creating a Disk Image of the Robot Computer for Backup and Recovery

### IMPORTANT: Make sure the robot is up and running, and also connected to the same Wifi with your PC trhough the whole process.

- Step 1: Connect to your robot via ssh:
  
  ```ssh administrator@your_robots_host_name```
- Step 2: dentify the available storage devices and their paths using ```lsblk``` command.
  
  ![disk1](/images/disk1.png)

  In the robot's computer 2 paths can be recognised,
  ```/dev/sda1``` and ```/dev/sda2```. The one is for booting up the system and the other one is the Storage of the computer.

- Step 2: Open 2 new terminal windows and start the transfering process by typing(change 'your_password' with the robot's computer password): 
  ```bash
  # Terminal 1
  ssh administrator@cpr-j100-0710 "echo your_password | sudo -S dd if=/dev/sda1 bs=8M conv=noerror,sync" | pv > ~/j100_efi.img

  # Terminal 2 
  ssh administrator@cpr-j100-0710 "echo clearpath | sudo -S dd if=/dev/sda2 bs=8M conv=noerror,sync" | pv > ~/j100_efi.img
  
  ```
  - Note: You may have an error if you have not installed pv, which is for viewing proggres. Install it by typing:
    ```bash
    sudo apt update
    sudo apt install pv
    ```

- Now, if you want you can compress those files and transfer them into a flash drive
    ```bash
    j100_root.img.gz
    j100_efi.img.gz
    ```

# Recovering 
- 1: Unzip and restore root 
  ```bash
  gunzip -c j100_root.img.gz | ssh administrator@REMOTE "echo PASSWORD | sudo -S dd of=/dev/sda2 bs=8M conv=noerror,sync"
  ```
- 2: Unzip and Restore EFI
  ```bash
  gunzip -c j100_efi.img.gz | ssh administrator@REMOTE "echo 'PASSWORD' | sudo -S dd of=/dev/sda1 bs=8M conv=noerror,sync"
  ```
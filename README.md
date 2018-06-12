# Quadcopter-QUADX
### Quadcopter using MPU6050 (Gyroscope+Acceleration Sensor+Temprature), 6-Channel Transmitter and Receiver, Arduino Nano board

###### Requirements--
Hardware:-
1) Arduino Nano
2) Receiver and Transmitter
3) MPU6050 module.
4) 30A Electronic Speed Controller(ESC) - 4 Pcs
5) A2212 1000KV Brushless Motor - 4 Pcs
6) Carbon Nylon 1045 Propeller Positive + Reverse
6) Battery - 3S (11.1V) Li-Po 2200mAh
7) 0 PCB
8) Pin Headers and connecting Wires.

Software:- 
1) Arduino IDE
##### DIY quadcopter- Follow following steps :-

###### STEP 1--

3D print the chassis required for Quadcopter.

Folder name in repository- Drone_stl

###### STEP 2--

Make connection of all ESC with motors, And connect one pair at a time with arduino.(Uno or Nano- having same digital pin numbers)
Follow - https://i.pinimg.com/originals/69/61/22/696122ff6a9ad8f3f686156daa0ae00c.png.
Code to burn in Arduino - esc_check.ino
Check pin number in code before burning.

Process to follow after burning code in Arduino -
Connect Li-Po battery to ESC (make sure polarity is correct other ESC may get damaged).
ESC should beep as battery is connected.
Now plug in Arduino in PC using USB cable and open Serial Monitor. As soon as usb cable is plugged in ESC will count number of cells in battery by which it is powered by. We have used 3 cell battery so ESC will beep 3 times. 
Now give integer input in Serial Monitor between 1000 to 2000.(at 1000 motor won't rotate and at 2000 motor will rotate at maximum speed)
###### STEP 3--

Now remove ESC connections and connect MPU6050 Gyro sensor with Arduino.
Follow - http://www.electronoobs.com/images/Robotica/tut_9/IMU_schematic.png  
Download MultiWii_2_4.rar file from repository.
For multiWii Configuration follow - http://rztronics.com/arduino-flight-controller-for-your-quadcopter/ (Flight Controller section)
On opening MultiWii and selecting COM port PID values will apear and on moving MPU6050 module updates can be seen on MultiWii application.
To know what does Roll, Pitch, Yaw, Trottle means refer - http://cuongtv.com/project/Drone-Project-Part-2/

###### STEP 4-- 
Now bind receiver with transmitter
Refer - https://www.youtube.com/watch?v=9FobYWahn5M
  
###### STEP 5--
Now check receiver channel for Roll, Pitch, Trottle, Yaw. 
Arduino code in repository - channel_check.ino
Refer - https://www.sparkfun.com/tutorials/348

###### STEP 6--
Now connect receiver and gyro with arduino and open Multiiwii.
Make sure to complete step number 4.
MPU-6050 Connections

A4 << SDA

A5 << SCL

Receiver Connections

D2 << Throttle

D4 << Pitch

D5 << Roll

D6 << Yaw
Refer - https://i1.wp.com/rztronics.com/wp-content/uploads/2016/12/fc-new-mw.png?resize=768%2C383

Now  turn on transmitter, this will turn receiver light also. Now on changing joystick Trottle, Roll, Pitch, Yaw values should vary on MultiWii which is 1500 initially.This varying value will lie between 1000 to 2000.
Refer - https://www.youtube.com/watch?v=PO7R_S7OfTs

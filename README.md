# Quadcopter-QUADX
### Quadcopter using MPU6050 (Gyroscope+Acceleration Sensor+Temprature), 6-Channel Transmitter and Receiver, Arduino Nano board

##### DIY quadcopter- Follow following steps :-

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
###### STEP 1--

3D print the chassis required for Quadcopter.

Folder name in repository- Drone_stl

###### STEP 2--

Make connection of all ESC with motors. And connect one pair at a time with arduino.(Uno or Nano- having same digital pin numbers)
Follow - https://i.pinimg.com/originals/69/61/22/696122ff6a9ad8f3f686156daa0ae00c.png.
Make sure you make Li-Po battery ESC connection correct, otherwise ESC will be burned. Also check connection with Arduino.
This how we have checked every 4 pair of ESC and motor.
Code to burn in Arduino - esc_check.ino


  

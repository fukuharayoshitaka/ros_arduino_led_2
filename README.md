# ros_arduino_led_2
Communicate arduino and raspberryPi 3B using ROS and light one LED.

## Overview
Communicating with arduino Uno and Raspberry Pi 3B with Ros serial.
I blinked the LED every second.

-raspberry side
Node (talker - 6062 - 1529308414440) is Pablish to Topic (chatter).
1 and 0 are alternately displayed every second.

-Arduino side
After receiving the message, the function "called callback" moves.

When ”1”, LED lights up.
When ”0”, LED turn off.

## Demonstration
-https://youtu.be/7fUJhAGeCLA

## Requirements
- Raspberry Pi 3 Model B
  - Ubuntu MATE 16.04.2 (Xenial)
- Arduino Uno
  - ArduinoIDE
- LED
  - red LED :GPIO8
  
## Usage
```
roscore
rosrun test led.py

```

```
rosrunroserial_node.py /dev/ttyACM0

```

## Licence
This repository is licensed under the BSD 3-Clause License.


# ROS-Simple-Publisher-and-Subscriber
A simple ROS project, with a publisher node, publishing two ints, and a subscriber node publishing the sum of the two ints.

## Getting Started
Download the folders and add them to your catkin folder.

## Prerequisites
You need a complete installation of ROS.

### Python execution
```
Start your roscore: roscore
In another terminal starts the two_int_talker: rosrun two_int_talker two_int_talker.py
In another terminal starts the sum_publisher: rosrun sum_publisher sum.py

Then you can listen to the topics:
rostopic echo /two_ints
rostopic echo /sum
```
#### Results
![Image of a running example](/execution.png)

### C++ execution
```
First execute in your catkin folder: catkin_make
Then start your roscore: roscore
In another terminal starts the two_int_talker: rosrun CPP twoInts
In another terminal starts the sum_publisher: rosrun CPP sum

Then you can listen to the topics:
rostopic echo /two_ints
rostopic echo /sum
```

## Author
* **Mickaël Trezzy**

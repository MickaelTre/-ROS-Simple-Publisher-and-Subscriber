# -ROS-Simple-Publisher-and-Subscriber
A simple ROS project, with a publisher node, publishing two ints, and a subscriber node publishing the sum of the two ints.

## Getting Started
Download the folders and add them to your catkin folder.

```
Start your roscore: roscore
In another terminal starts the two_int_talker: rosrun two_int_talker two_int_talker.py
In another terminal starts the sum_publisher: rosrun sum_publisher solution.py
Then you can listen to the topics with rostopic: rosrun rostopic echo /sum
and: rosrun rostopic echo /two_ints
```

### Prerequisites
You need a complete installation of ROS.

## Author
* **Mickaël Trezzy**

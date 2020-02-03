#!/usr/bin/env python  
import rospy

from std_msgs.msg import Int16
from sum_publisher.msg import TwoInts

def callback(data):
	pub.publish(data.a + data.b)

def listener():
	rospy.init_node('solution', anonymous=True)
	rospy.Subscriber("two_ints", TwoInts, callback)
	rospy.spin()

if __name__ == '__main__':
    try:
		pub = rospy.Publisher('sum', Int16, queue_size=10)
		listener()
    except rospy.ROSInterruptException:
        pass
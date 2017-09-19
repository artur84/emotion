#!/usr/bin/env python
# license removed for brevity
import rospy
from std_msgs.msg import String

if __name__ == '__main__':
    rospy.init_node('talker', anonymous=True)
    pub = rospy.Publisher('chatter', String, queue_size=10)
    rate = rospy.Rate(10) # 10hz
    while not rospy.is_shutdown():
        hello_str = "hola"
        pub.publish(hello_str)
        rate.sleep()
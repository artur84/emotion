#!/usr/bin/env python
import rospy
from geometry_msgs.msg import Twist

if __name__ == '__main__':
    #Init the node
    rospy.init_node('twist_publisher_example', anonymous=True)
    rospy.loginfo("twist_publisher_example started")
    #Creates the publisher
    pub = rospy.Publisher('twist_topic', Twist, queue_size=10)
    #Creates the Twist message to be sent
    my_twist =Twist()
    my_twist.angular.z=1.0
    my_twist.linear.x=1.0
    
    rate=rospy.Rate(1.0) #Rate in Hz
    while not rospy.is_shutdown():
        pub.publish(my_twist)
        rate.sleep()
        
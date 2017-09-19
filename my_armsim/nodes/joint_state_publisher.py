#!/usr/bin/env python
# license removed for brevity
import rospy
from std_msgs.msg import String
from sensor_msgs.msg import JointState


if __name__ == '__main__':
    rospy.init_node('talker', anonymous=True)
    pub = rospy.Publisher('joint_input', JointState, queue_size=10)
    rate = rospy.Rate(10) # 10hz
    state = JointState()
    count=-1.5
    while not rospy.is_shutdown():
        state.name=["base_to_link1", "link1_to_link2"]
        state.position=[count, count]
        pub.publish(state)
        count+=0.01
        if count>=1.5:
            count=-1.5
        rate.sleep()

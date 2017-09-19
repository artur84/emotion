#!/usr/bin/env python
import rospy
import tf
import numpy as np


    

if __name__ == '__main__':
    rospy.init_node( 'pose2Dexample' )

    
    position=(1,1,0)
    theta=np.deg2rad(180)
    
    orientation=tf.transformations.quaternion_from_euler(0, 0, theta)
    br = tf.TransformBroadcaster()
    rate=rospy.Rate(1)
    while not rospy.is_shutdown():
        br.sendTransform(position,orientation,rospy.Time.now(),"child", "father")
        rate.sleep()

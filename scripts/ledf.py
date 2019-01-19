#!/usr/bin/env python

import rospy
from std_msgs.msg import Int32

def talker():
    pub = rospy.Publisher('chatter', Int32, queue_size=10)
    rospy.init_node('talker', anonymous=True)
    r = rospy.Rate(1)
    num = 0
    while not rospy.is_shutdown():
        num +=1
        num %=2

        rospy.loginfo(num)
        pub.publish(num)
        r.sleep()

if __name__ == '__main__':
   try:
       talker()
   except rospy.ROSInterruptException:
       pass

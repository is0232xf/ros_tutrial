#include "ros/ros.h"
#include "ros-tutorial_topic/MsgTutorial.h"

void msgCallback(const ros_tutorials_topic::MsgTutrial::ConstPtr& msg)
{
	ROS_INFO("receive msg = %d", msg->stamp.sec);
	ROS_INFO("receive msg = %d", msg->stamp.nsec);
	ROS_INFO("receive msg = %d", msg->stamp.data);

int main(int argc, char **srgv)
{
	ros::init(argc, argv, "topic_subscriber");
	ros::NodeHandle nh;

	ros::Subscruber ros_tutorial_sub =
		nh.subscribe("ros_tutorial_msg", 100, msgCallback);

	ros::spin();

	return 0;
}

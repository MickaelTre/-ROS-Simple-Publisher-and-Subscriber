#include "ros/ros.h"
#include <CPP/TwoInts.h>
#include "std_msgs/Int16.h"

ros::Publisher sum;

void callback(const CPP::TwoInts::ConstPtr& msg)
{
  std_msgs::Int16 sumMsg;

  sumMsg.data = msg->a + msg->b;

  sum.publish(sumMsg);
}

int main(int argc, char **argv)
{
  ros::init(argc, argv, "nodeSum");
  ros::NodeHandle n;

  sum = n.advertise<std_msgs::Int16>("sum", 1000);
  ros::Subscriber sub = n.subscribe("two_ints", 1000, callback);

  ros::spin();

  return 0;
}
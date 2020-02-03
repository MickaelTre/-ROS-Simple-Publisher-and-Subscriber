#include "ros/ros.h"
#include <CPP/TwoInts.h>

#include <stdlib.h>
#include <time.h>

int main(int argc, char **argv) {
  ros::init(argc, argv, "nodeTwoInts");
  ros::NodeHandle n;
  ros::Publisher two_ints = n.advertise<CPP::TwoInts>("two_ints", 1000);

  ros::Rate loop_rate(1);

  srand (time(NULL));

  while (ros::ok()) {
    CPP::TwoInts msg;

    msg.a = rand() % 100 + 1;
    msg.b = rand() % 100 + 1;

    two_ints.publish(msg);

    ros::spinOnce();

    loop_rate.sleep();
  }
  return 0;
}
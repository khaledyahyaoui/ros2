#include <cstdio>
#include "rclcpp/rclcpp.hpp"
#include "mas_solarsystem/celestial_body.h"
int main(int argc, char ** argv)
{

  rclcpp::init(argc,argv);
  rclcpp::spin(std::make_shared<CelestialBody>());
  rclcpp::shutdown();
 

 
  return 0;
}

#ifndef __MAS_SOLARSYSTEM__CELESTIAL_BODY_H__
#define __MAS_SOLARSYSTEM__CELESTIAL_BODY_H__

#include <rclcpp/rclcpp.hpp>
#include <visualization_msgs/msg/marker.hpp>

class CelestialBody : public rclcpp::Node
{
public:
  CelestialBody();
private:
  std::string planet_name_;
  std::string parent_name_;
  double orbit_distance_;
  double radius_;
  double revolution_period_;
  double rotation_period_;
  double inclination_;
  double mass_;
  std::vector<double> color_;

  // ...
};

#endif // __MAS_SOLARSYSTEM__CELESTIAL_BODY_H__

#ifndef __MAS_SOLARSYSTEM__CELESTIAL_BODY_H__
#define __MAS_SOLARSYSTEM__CELESTIAL_BODY_H__
#include <rclcpp/rclcpp.hpp>
#include <geometry_msgs/msg/transform_stamped.hpp>
#include <visualization_msgs/msg/marker.hpp>
#include <tf2_ros/transform_broadcaster.h>
#include <tf2_ros/transform_broadcaster.h>
#include <geometry_msgs/msg/transform_stamped.hpp>
#include <string>
class CelestialBody : public rclcpp::Node
{
public:
 CelestialBody();
private:
         double rayons_;
     double  periode_revolutions_ ;
     double  periode_rotations_ ;

    double angular_pos_;
     double radus_ ;
     std::string  parentframe_id_ ;
     std::string  childframe_id_ ;

rclcpp::Publisher<visualization_msgs::msg::Marker>::SharedPtr marker_pub_;
rclcpp::TimerBase::SharedPtr timer_pub_;
std::shared_ptr<tf2_ros::TransformBroadcaster> tf_broadcaster_;
geometry_msgs::msg::TransformStamped transform_;
visualization_msgs::msg::Marker marker;
 void  pubMarkerTransform();
 
 };

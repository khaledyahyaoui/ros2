#include "mas_solarsystem/celestial_body.h"

CelestialBody::CelestialBody()
    : Node("celestial_body_node",
           rclcpp::NodeOptions()
               .allow_undeclared_parameters(true)
               .automatically_declare_parameters_from_overrides(true))
{
    // Extract the parameters
    planet_name_ = this->get_parameter("planet_name").as_string();
    parent_name_ = this->get_parameter("parent_name").as_string();
    orbit_distance_ =this->get_parameter("orbit_distance").as_double();
    radius_ =this->get_parameter("radius").as_double();
    revolution_period_ =this->get_parameter("revolution_period").as_double();
    rotation_period_ =this->get_parameter("rotation_period").as_double();
    inclination_ =this->get_parameter("inclination").as_double();
    mass_ =this->get_parameter("mass").as_double();
    this->get_parameter("color", color_); //as_double();
//color_ =this->get_parameter("color").as_double();


    // Use the parameters to perform further initialization or calculations

    // ...
}

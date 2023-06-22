#include "mas_solarsystem/celestial_body.h"

CelestialBody::CelestialBody()
    : Node("celestial_body_node",
           rclcpp::NodeOptions()
               .allow_undeclared_parameters(true)
               .automatically_declare_parameters_from_overrides(true))
{
    // Get the parameters
    SolarSystemParams params = getSolarSystemParams();

    // Extract the parameters
    std::string planetName = params.planet_name;
    std::string parentName = params.parent_name;
    double orbitDistance = params.orbit_distance;
    double radius = params.radius;
    double revolutionPeriod = params.revolution_period;
    double rotationPeriod = params.rotation_period;
    double inclination = params.inclination;
    double mass = params.mass;
    std::vector<int> color = params.color;

    // Use the parameters to perform further initialization or calculations

    // ...
}

SolarSystemParams CelestialBody::getSolarSystemParams() const
{
    // Retrieve the parameters from the ROS 2 parameter server

    SolarSystemParams params;

    this->get_parameter("planet_name", params.planet_name);
    this->get_parameter("parent_name", params.parent_name);
    this->get_parameter("orbit_distance", params.orbit_distance);
    this->get_parameter("radius", params.radius);
    this->get_parameter("revolution_period", params.revolution_period);
    this->get_parameter("rotation_period", params.rotation_period);
    this->get_parameter("inclination", params.inclination);
    this->get_parameter("mass", params.mass);
    this->get_parameter("color", params.color);

    return params;
}


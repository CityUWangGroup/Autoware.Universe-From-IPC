// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from morai_msgs:msg/EgoVehicleStatus.idl
// generated code does not contain a copyright notice

#ifndef MORAI_MSGS__MSG__DETAIL__EGO_VEHICLE_STATUS__TRAITS_HPP_
#define MORAI_MSGS__MSG__DETAIL__EGO_VEHICLE_STATUS__TRAITS_HPP_

#include "morai_msgs/msg/detail/ego_vehicle_status__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'acceleration'
// Member 'position'
// Member 'velocity'
#include "geometry_msgs/msg/detail/vector3__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const morai_msgs::msg::EgoVehicleStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_yaml(msg.header, out, indentation + 2);
  }

  // member: unique_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "unique_id: ";
    value_to_yaml(msg.unique_id, out);
    out << "\n";
  }

  // member: acceleration
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "acceleration:\n";
    to_yaml(msg.acceleration, out, indentation + 2);
  }

  // member: position
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "position:\n";
    to_yaml(msg.position, out, indentation + 2);
  }

  // member: velocity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "velocity:\n";
    to_yaml(msg.velocity, out, indentation + 2);
  }

  // member: heading
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "heading: ";
    value_to_yaml(msg.heading, out);
    out << "\n";
  }

  // member: accel
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "accel: ";
    value_to_yaml(msg.accel, out);
    out << "\n";
  }

  // member: brake
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "brake: ";
    value_to_yaml(msg.brake, out);
    out << "\n";
  }

  // member: wheel_angle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "wheel_angle: ";
    value_to_yaml(msg.wheel_angle, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const morai_msgs::msg::EgoVehicleStatus & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<morai_msgs::msg::EgoVehicleStatus>()
{
  return "morai_msgs::msg::EgoVehicleStatus";
}

template<>
inline const char * name<morai_msgs::msg::EgoVehicleStatus>()
{
  return "morai_msgs/msg/EgoVehicleStatus";
}

template<>
struct has_fixed_size<morai_msgs::msg::EgoVehicleStatus>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::Vector3>::value && has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<morai_msgs::msg::EgoVehicleStatus>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::Vector3>::value && has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<morai_msgs::msg::EgoVehicleStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MORAI_MSGS__MSG__DETAIL__EGO_VEHICLE_STATUS__TRAITS_HPP_

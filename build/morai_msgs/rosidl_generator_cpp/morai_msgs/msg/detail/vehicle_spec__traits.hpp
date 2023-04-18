// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from morai_msgs:msg/VehicleSpec.idl
// generated code does not contain a copyright notice

#ifndef MORAI_MSGS__MSG__DETAIL__VEHICLE_SPEC__TRAITS_HPP_
#define MORAI_MSGS__MSG__DETAIL__VEHICLE_SPEC__TRAITS_HPP_

#include "morai_msgs/msg/detail/vehicle_spec__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'size'
#include "geometry_msgs/msg/detail/vector3__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const morai_msgs::msg::VehicleSpec & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: size
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "size:\n";
    to_yaml(msg.size, out, indentation + 2);
  }

  // member: wheel_base
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "wheel_base: ";
    value_to_yaml(msg.wheel_base, out);
    out << "\n";
  }

  // member: max_steering
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "max_steering: ";
    value_to_yaml(msg.max_steering, out);
    out << "\n";
  }

  // member: overhang
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "overhang: ";
    value_to_yaml(msg.overhang, out);
    out << "\n";
  }

  // member: rear_overhang
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rear_overhang: ";
    value_to_yaml(msg.rear_overhang, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const morai_msgs::msg::VehicleSpec & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<morai_msgs::msg::VehicleSpec>()
{
  return "morai_msgs::msg::VehicleSpec";
}

template<>
inline const char * name<morai_msgs::msg::VehicleSpec>()
{
  return "morai_msgs/msg/VehicleSpec";
}

template<>
struct has_fixed_size<morai_msgs::msg::VehicleSpec>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::Vector3>::value> {};

template<>
struct has_bounded_size<morai_msgs::msg::VehicleSpec>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::Vector3>::value> {};

template<>
struct is_message<morai_msgs::msg::VehicleSpec>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MORAI_MSGS__MSG__DETAIL__VEHICLE_SPEC__TRAITS_HPP_

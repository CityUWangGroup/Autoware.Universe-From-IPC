// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from morai_msgs:msg/MapSpec.idl
// generated code does not contain a copyright notice

#ifndef MORAI_MSGS__MSG__DETAIL__MAP_SPEC__TRAITS_HPP_
#define MORAI_MSGS__MSG__DETAIL__MAP_SPEC__TRAITS_HPP_

#include "morai_msgs/msg/detail/map_spec__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'utm_offset'
#include "geometry_msgs/msg/detail/vector3__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const morai_msgs::msg::MapSpec & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: plane_coordinate_system
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "plane_coordinate_system: ";
    value_to_yaml(msg.plane_coordinate_system, out);
    out << "\n";
  }

  // member: utm_num
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "utm_num: ";
    value_to_yaml(msg.utm_num, out);
    out << "\n";
  }

  // member: utm_offset
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "utm_offset:\n";
    to_yaml(msg.utm_offset, out, indentation + 2);
  }

  // member: ellipse
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ellipse: ";
    value_to_yaml(msg.ellipse, out);
    out << "\n";
  }

  // member: central_latitude
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "central_latitude: ";
    value_to_yaml(msg.central_latitude, out);
    out << "\n";
  }

  // member: central_meridian
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "central_meridian: ";
    value_to_yaml(msg.central_meridian, out);
    out << "\n";
  }

  // member: scale_factor
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "scale_factor: ";
    value_to_yaml(msg.scale_factor, out);
    out << "\n";
  }

  // member: false_easting
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "false_easting: ";
    value_to_yaml(msg.false_easting, out);
    out << "\n";
  }

  // member: false_northing
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "false_northing: ";
    value_to_yaml(msg.false_northing, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const morai_msgs::msg::MapSpec & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<morai_msgs::msg::MapSpec>()
{
  return "morai_msgs::msg::MapSpec";
}

template<>
inline const char * name<morai_msgs::msg::MapSpec>()
{
  return "morai_msgs/msg/MapSpec";
}

template<>
struct has_fixed_size<morai_msgs::msg::MapSpec>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<morai_msgs::msg::MapSpec>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<morai_msgs::msg::MapSpec>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MORAI_MSGS__MSG__DETAIL__MAP_SPEC__TRAITS_HPP_

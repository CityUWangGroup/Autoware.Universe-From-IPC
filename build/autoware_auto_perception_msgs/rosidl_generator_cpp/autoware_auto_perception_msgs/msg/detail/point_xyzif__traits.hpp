// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from autoware_auto_perception_msgs:msg/PointXYZIF.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_AUTO_PERCEPTION_MSGS__MSG__DETAIL__POINT_XYZIF__TRAITS_HPP_
#define AUTOWARE_AUTO_PERCEPTION_MSGS__MSG__DETAIL__POINT_XYZIF__TRAITS_HPP_

#include "autoware_auto_perception_msgs/msg/detail/point_xyzif__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const autoware_auto_perception_msgs::msg::PointXYZIF & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "x: ";
    value_to_yaml(msg.x, out);
    out << "\n";
  }

  // member: y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "y: ";
    value_to_yaml(msg.y, out);
    out << "\n";
  }

  // member: z
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "z: ";
    value_to_yaml(msg.z, out);
    out << "\n";
  }

  // member: intensity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "intensity: ";
    value_to_yaml(msg.intensity, out);
    out << "\n";
  }

  // member: id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "id: ";
    value_to_yaml(msg.id, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const autoware_auto_perception_msgs::msg::PointXYZIF & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<autoware_auto_perception_msgs::msg::PointXYZIF>()
{
  return "autoware_auto_perception_msgs::msg::PointXYZIF";
}

template<>
inline const char * name<autoware_auto_perception_msgs::msg::PointXYZIF>()
{
  return "autoware_auto_perception_msgs/msg/PointXYZIF";
}

template<>
struct has_fixed_size<autoware_auto_perception_msgs::msg::PointXYZIF>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<autoware_auto_perception_msgs::msg::PointXYZIF>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<autoware_auto_perception_msgs::msg::PointXYZIF>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // AUTOWARE_AUTO_PERCEPTION_MSGS__MSG__DETAIL__POINT_XYZIF__TRAITS_HPP_

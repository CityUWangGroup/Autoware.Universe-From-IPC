// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from autoware_auto_perception_msgs:msg/Shape.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_AUTO_PERCEPTION_MSGS__MSG__DETAIL__SHAPE__TRAITS_HPP_
#define AUTOWARE_AUTO_PERCEPTION_MSGS__MSG__DETAIL__SHAPE__TRAITS_HPP_

#include "autoware_auto_perception_msgs/msg/detail/shape__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'footprint'
#include "geometry_msgs/msg/detail/polygon__traits.hpp"
// Member 'dimensions'
#include "geometry_msgs/msg/detail/vector3__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const autoware_auto_perception_msgs::msg::Shape & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "type: ";
    value_to_yaml(msg.type, out);
    out << "\n";
  }

  // member: footprint
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "footprint:\n";
    to_yaml(msg.footprint, out, indentation + 2);
  }

  // member: dimensions
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "dimensions:\n";
    to_yaml(msg.dimensions, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const autoware_auto_perception_msgs::msg::Shape & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<autoware_auto_perception_msgs::msg::Shape>()
{
  return "autoware_auto_perception_msgs::msg::Shape";
}

template<>
inline const char * name<autoware_auto_perception_msgs::msg::Shape>()
{
  return "autoware_auto_perception_msgs/msg/Shape";
}

template<>
struct has_fixed_size<autoware_auto_perception_msgs::msg::Shape>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::Polygon>::value && has_fixed_size<geometry_msgs::msg::Vector3>::value> {};

template<>
struct has_bounded_size<autoware_auto_perception_msgs::msg::Shape>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::Polygon>::value && has_bounded_size<geometry_msgs::msg::Vector3>::value> {};

template<>
struct is_message<autoware_auto_perception_msgs::msg::Shape>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // AUTOWARE_AUTO_PERCEPTION_MSGS__MSG__DETAIL__SHAPE__TRAITS_HPP_

// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from autoware_map_msgs:msg/AreaInfo.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_MAP_MSGS__MSG__DETAIL__AREA_INFO__TRAITS_HPP_
#define AUTOWARE_MAP_MSGS__MSG__DETAIL__AREA_INFO__TRAITS_HPP_

#include "autoware_map_msgs/msg/detail/area_info__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'center'
#include "geometry_msgs/msg/detail/point__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const autoware_map_msgs::msg::AreaInfo & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: center
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "center:\n";
    to_yaml(msg.center, out, indentation + 2);
  }

  // member: radius
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "radius: ";
    value_to_yaml(msg.radius, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const autoware_map_msgs::msg::AreaInfo & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<autoware_map_msgs::msg::AreaInfo>()
{
  return "autoware_map_msgs::msg::AreaInfo";
}

template<>
inline const char * name<autoware_map_msgs::msg::AreaInfo>()
{
  return "autoware_map_msgs/msg/AreaInfo";
}

template<>
struct has_fixed_size<autoware_map_msgs::msg::AreaInfo>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::Point>::value> {};

template<>
struct has_bounded_size<autoware_map_msgs::msg::AreaInfo>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::Point>::value> {};

template<>
struct is_message<autoware_map_msgs::msg::AreaInfo>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // AUTOWARE_MAP_MSGS__MSG__DETAIL__AREA_INFO__TRAITS_HPP_

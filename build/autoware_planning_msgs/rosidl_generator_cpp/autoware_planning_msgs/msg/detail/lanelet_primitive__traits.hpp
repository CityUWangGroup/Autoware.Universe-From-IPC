// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from autoware_planning_msgs:msg/LaneletPrimitive.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_PLANNING_MSGS__MSG__DETAIL__LANELET_PRIMITIVE__TRAITS_HPP_
#define AUTOWARE_PLANNING_MSGS__MSG__DETAIL__LANELET_PRIMITIVE__TRAITS_HPP_

#include "autoware_planning_msgs/msg/detail/lanelet_primitive__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const autoware_planning_msgs::msg::LaneletPrimitive & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "id: ";
    value_to_yaml(msg.id, out);
    out << "\n";
  }

  // member: primitive_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "primitive_type: ";
    value_to_yaml(msg.primitive_type, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const autoware_planning_msgs::msg::LaneletPrimitive & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<autoware_planning_msgs::msg::LaneletPrimitive>()
{
  return "autoware_planning_msgs::msg::LaneletPrimitive";
}

template<>
inline const char * name<autoware_planning_msgs::msg::LaneletPrimitive>()
{
  return "autoware_planning_msgs/msg/LaneletPrimitive";
}

template<>
struct has_fixed_size<autoware_planning_msgs::msg::LaneletPrimitive>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<autoware_planning_msgs::msg::LaneletPrimitive>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<autoware_planning_msgs::msg::LaneletPrimitive>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // AUTOWARE_PLANNING_MSGS__MSG__DETAIL__LANELET_PRIMITIVE__TRAITS_HPP_

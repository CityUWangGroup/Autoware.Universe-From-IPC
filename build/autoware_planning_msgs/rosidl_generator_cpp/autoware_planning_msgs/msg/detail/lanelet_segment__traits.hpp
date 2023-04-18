// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from autoware_planning_msgs:msg/LaneletSegment.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_PLANNING_MSGS__MSG__DETAIL__LANELET_SEGMENT__TRAITS_HPP_
#define AUTOWARE_PLANNING_MSGS__MSG__DETAIL__LANELET_SEGMENT__TRAITS_HPP_

#include "autoware_planning_msgs/msg/detail/lanelet_segment__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'preferred_primitive'
// Member 'primitives'
#include "autoware_planning_msgs/msg/detail/lanelet_primitive__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const autoware_planning_msgs::msg::LaneletSegment & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: preferred_primitive
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "preferred_primitive:\n";
    to_yaml(msg.preferred_primitive, out, indentation + 2);
  }

  // member: primitives
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.primitives.size() == 0) {
      out << "primitives: []\n";
    } else {
      out << "primitives:\n";
      for (auto item : msg.primitives) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const autoware_planning_msgs::msg::LaneletSegment & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<autoware_planning_msgs::msg::LaneletSegment>()
{
  return "autoware_planning_msgs::msg::LaneletSegment";
}

template<>
inline const char * name<autoware_planning_msgs::msg::LaneletSegment>()
{
  return "autoware_planning_msgs/msg/LaneletSegment";
}

template<>
struct has_fixed_size<autoware_planning_msgs::msg::LaneletSegment>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<autoware_planning_msgs::msg::LaneletSegment>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<autoware_planning_msgs::msg::LaneletSegment>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // AUTOWARE_PLANNING_MSGS__MSG__DETAIL__LANELET_SEGMENT__TRAITS_HPP_

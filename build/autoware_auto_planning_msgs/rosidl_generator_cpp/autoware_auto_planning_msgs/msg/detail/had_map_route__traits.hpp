// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from autoware_auto_planning_msgs:msg/HADMapRoute.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_AUTO_PLANNING_MSGS__MSG__DETAIL__HAD_MAP_ROUTE__TRAITS_HPP_
#define AUTOWARE_AUTO_PLANNING_MSGS__MSG__DETAIL__HAD_MAP_ROUTE__TRAITS_HPP_

#include "autoware_auto_planning_msgs/msg/detail/had_map_route__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'start_pose'
// Member 'goal_pose'
#include "geometry_msgs/msg/detail/pose__traits.hpp"
// Member 'segments'
#include "autoware_auto_mapping_msgs/msg/detail/had_map_segment__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const autoware_auto_planning_msgs::msg::HADMapRoute & msg,
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

  // member: start_pose
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "start_pose:\n";
    to_yaml(msg.start_pose, out, indentation + 2);
  }

  // member: goal_pose
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_pose:\n";
    to_yaml(msg.goal_pose, out, indentation + 2);
  }

  // member: segments
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.segments.size() == 0) {
      out << "segments: []\n";
    } else {
      out << "segments:\n";
      for (auto item : msg.segments) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const autoware_auto_planning_msgs::msg::HADMapRoute & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<autoware_auto_planning_msgs::msg::HADMapRoute>()
{
  return "autoware_auto_planning_msgs::msg::HADMapRoute";
}

template<>
inline const char * name<autoware_auto_planning_msgs::msg::HADMapRoute>()
{
  return "autoware_auto_planning_msgs/msg/HADMapRoute";
}

template<>
struct has_fixed_size<autoware_auto_planning_msgs::msg::HADMapRoute>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<autoware_auto_planning_msgs::msg::HADMapRoute>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<autoware_auto_planning_msgs::msg::HADMapRoute>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // AUTOWARE_AUTO_PLANNING_MSGS__MSG__DETAIL__HAD_MAP_ROUTE__TRAITS_HPP_

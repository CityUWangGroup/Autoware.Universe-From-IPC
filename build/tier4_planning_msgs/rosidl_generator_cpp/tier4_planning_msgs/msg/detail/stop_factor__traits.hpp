// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from tier4_planning_msgs:msg/StopFactor.idl
// generated code does not contain a copyright notice

#ifndef TIER4_PLANNING_MSGS__MSG__DETAIL__STOP_FACTOR__TRAITS_HPP_
#define TIER4_PLANNING_MSGS__MSG__DETAIL__STOP_FACTOR__TRAITS_HPP_

#include "tier4_planning_msgs/msg/detail/stop_factor__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'stop_pose'
#include "geometry_msgs/msg/detail/pose__traits.hpp"
// Member 'stop_factor_points'
#include "geometry_msgs/msg/detail/point__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const tier4_planning_msgs::msg::StopFactor & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: stop_pose
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stop_pose:\n";
    to_yaml(msg.stop_pose, out, indentation + 2);
  }

  // member: dist_to_stop_pose
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "dist_to_stop_pose: ";
    value_to_yaml(msg.dist_to_stop_pose, out);
    out << "\n";
  }

  // member: stop_factor_points
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.stop_factor_points.size() == 0) {
      out << "stop_factor_points: []\n";
    } else {
      out << "stop_factor_points:\n";
      for (auto item : msg.stop_factor_points) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const tier4_planning_msgs::msg::StopFactor & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<tier4_planning_msgs::msg::StopFactor>()
{
  return "tier4_planning_msgs::msg::StopFactor";
}

template<>
inline const char * name<tier4_planning_msgs::msg::StopFactor>()
{
  return "tier4_planning_msgs/msg/StopFactor";
}

template<>
struct has_fixed_size<tier4_planning_msgs::msg::StopFactor>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<tier4_planning_msgs::msg::StopFactor>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<tier4_planning_msgs::msg::StopFactor>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // TIER4_PLANNING_MSGS__MSG__DETAIL__STOP_FACTOR__TRAITS_HPP_

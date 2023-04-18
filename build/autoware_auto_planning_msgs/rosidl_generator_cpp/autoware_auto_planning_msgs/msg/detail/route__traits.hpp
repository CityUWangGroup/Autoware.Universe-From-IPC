// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from autoware_auto_planning_msgs:msg/Route.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_AUTO_PLANNING_MSGS__MSG__DETAIL__ROUTE__TRAITS_HPP_
#define AUTOWARE_AUTO_PLANNING_MSGS__MSG__DETAIL__ROUTE__TRAITS_HPP_

#include "autoware_auto_planning_msgs/msg/detail/route__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'start_point'
// Member 'goal_point'
#include "autoware_auto_planning_msgs/msg/detail/trajectory_point__traits.hpp"
// Member 'primitives'
#include "autoware_auto_mapping_msgs/msg/detail/map_primitive__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const autoware_auto_planning_msgs::msg::Route & msg,
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

  // member: start_point
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "start_point:\n";
    to_yaml(msg.start_point, out, indentation + 2);
  }

  // member: goal_point
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_point:\n";
    to_yaml(msg.goal_point, out, indentation + 2);
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

inline std::string to_yaml(const autoware_auto_planning_msgs::msg::Route & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<autoware_auto_planning_msgs::msg::Route>()
{
  return "autoware_auto_planning_msgs::msg::Route";
}

template<>
inline const char * name<autoware_auto_planning_msgs::msg::Route>()
{
  return "autoware_auto_planning_msgs/msg/Route";
}

template<>
struct has_fixed_size<autoware_auto_planning_msgs::msg::Route>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<autoware_auto_planning_msgs::msg::Route>
  : std::integral_constant<bool, has_bounded_size<autoware_auto_mapping_msgs::msg::MapPrimitive>::value && has_bounded_size<autoware_auto_planning_msgs::msg::TrajectoryPoint>::value && has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<autoware_auto_planning_msgs::msg::Route>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // AUTOWARE_AUTO_PLANNING_MSGS__MSG__DETAIL__ROUTE__TRAITS_HPP_

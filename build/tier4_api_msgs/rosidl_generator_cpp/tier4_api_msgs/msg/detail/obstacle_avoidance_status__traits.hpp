// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from tier4_api_msgs:msg/ObstacleAvoidanceStatus.idl
// generated code does not contain a copyright notice

#ifndef TIER4_API_MSGS__MSG__DETAIL__OBSTACLE_AVOIDANCE_STATUS__TRAITS_HPP_
#define TIER4_API_MSGS__MSG__DETAIL__OBSTACLE_AVOIDANCE_STATUS__TRAITS_HPP_

#include "tier4_api_msgs/msg/detail/obstacle_avoidance_status__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'candidate_path'
#include "tier4_planning_msgs/msg/detail/trajectory__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const tier4_api_msgs::msg::ObstacleAvoidanceStatus & msg,
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

  // member: obstacle_avoidance_ready
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "obstacle_avoidance_ready: ";
    value_to_yaml(msg.obstacle_avoidance_ready, out);
    out << "\n";
  }

  // member: candidate_path
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "candidate_path:\n";
    to_yaml(msg.candidate_path, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const tier4_api_msgs::msg::ObstacleAvoidanceStatus & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<tier4_api_msgs::msg::ObstacleAvoidanceStatus>()
{
  return "tier4_api_msgs::msg::ObstacleAvoidanceStatus";
}

template<>
inline const char * name<tier4_api_msgs::msg::ObstacleAvoidanceStatus>()
{
  return "tier4_api_msgs/msg/ObstacleAvoidanceStatus";
}

template<>
struct has_fixed_size<tier4_api_msgs::msg::ObstacleAvoidanceStatus>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value && has_fixed_size<tier4_planning_msgs::msg::Trajectory>::value> {};

template<>
struct has_bounded_size<tier4_api_msgs::msg::ObstacleAvoidanceStatus>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value && has_bounded_size<tier4_planning_msgs::msg::Trajectory>::value> {};

template<>
struct is_message<tier4_api_msgs::msg::ObstacleAvoidanceStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // TIER4_API_MSGS__MSG__DETAIL__OBSTACLE_AVOIDANCE_STATUS__TRAITS_HPP_

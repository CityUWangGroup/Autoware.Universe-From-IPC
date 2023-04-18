// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from tier4_planning_msgs:msg/AvoidanceDebugMsg.idl
// generated code does not contain a copyright notice

#ifndef TIER4_PLANNING_MSGS__MSG__DETAIL__AVOIDANCE_DEBUG_MSG__TRAITS_HPP_
#define TIER4_PLANNING_MSGS__MSG__DETAIL__AVOIDANCE_DEBUG_MSG__TRAITS_HPP_

#include "tier4_planning_msgs/msg/detail/avoidance_debug_msg__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const tier4_planning_msgs::msg::AvoidanceDebugMsg & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: object_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "object_id: ";
    value_to_yaml(msg.object_id, out);
    out << "\n";
  }

  // member: allow_avoidance
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "allow_avoidance: ";
    value_to_yaml(msg.allow_avoidance, out);
    out << "\n";
  }

  // member: longitudinal_distance
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "longitudinal_distance: ";
    value_to_yaml(msg.longitudinal_distance, out);
    out << "\n";
  }

  // member: lateral_distance_from_centerline
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lateral_distance_from_centerline: ";
    value_to_yaml(msg.lateral_distance_from_centerline, out);
    out << "\n";
  }

  // member: to_furthest_linestring_distance
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "to_furthest_linestring_distance: ";
    value_to_yaml(msg.to_furthest_linestring_distance, out);
    out << "\n";
  }

  // member: max_shift_length
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "max_shift_length: ";
    value_to_yaml(msg.max_shift_length, out);
    out << "\n";
  }

  // member: required_jerk
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "required_jerk: ";
    value_to_yaml(msg.required_jerk, out);
    out << "\n";
  }

  // member: maximum_jerk
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "maximum_jerk: ";
    value_to_yaml(msg.maximum_jerk, out);
    out << "\n";
  }

  // member: failed_reason
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "failed_reason: ";
    value_to_yaml(msg.failed_reason, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const tier4_planning_msgs::msg::AvoidanceDebugMsg & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<tier4_planning_msgs::msg::AvoidanceDebugMsg>()
{
  return "tier4_planning_msgs::msg::AvoidanceDebugMsg";
}

template<>
inline const char * name<tier4_planning_msgs::msg::AvoidanceDebugMsg>()
{
  return "tier4_planning_msgs/msg/AvoidanceDebugMsg";
}

template<>
struct has_fixed_size<tier4_planning_msgs::msg::AvoidanceDebugMsg>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<tier4_planning_msgs::msg::AvoidanceDebugMsg>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<tier4_planning_msgs::msg::AvoidanceDebugMsg>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // TIER4_PLANNING_MSGS__MSG__DETAIL__AVOIDANCE_DEBUG_MSG__TRAITS_HPP_

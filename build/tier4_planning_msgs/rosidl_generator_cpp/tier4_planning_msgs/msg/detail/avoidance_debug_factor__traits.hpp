// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from tier4_planning_msgs:msg/AvoidanceDebugFactor.idl
// generated code does not contain a copyright notice

#ifndef TIER4_PLANNING_MSGS__MSG__DETAIL__AVOIDANCE_DEBUG_FACTOR__TRAITS_HPP_
#define TIER4_PLANNING_MSGS__MSG__DETAIL__AVOIDANCE_DEBUG_FACTOR__TRAITS_HPP_

#include "tier4_planning_msgs/msg/detail/avoidance_debug_factor__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const tier4_planning_msgs::msg::AvoidanceDebugFactor & msg,
  std::ostream & out, size_t indentation = 0)
{
  (void)msg;
  (void)indentation;
  out << "null\n";
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const tier4_planning_msgs::msg::AvoidanceDebugFactor & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<tier4_planning_msgs::msg::AvoidanceDebugFactor>()
{
  return "tier4_planning_msgs::msg::AvoidanceDebugFactor";
}

template<>
inline const char * name<tier4_planning_msgs::msg::AvoidanceDebugFactor>()
{
  return "tier4_planning_msgs/msg/AvoidanceDebugFactor";
}

template<>
struct has_fixed_size<tier4_planning_msgs::msg::AvoidanceDebugFactor>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<tier4_planning_msgs::msg::AvoidanceDebugFactor>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<tier4_planning_msgs::msg::AvoidanceDebugFactor>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // TIER4_PLANNING_MSGS__MSG__DETAIL__AVOIDANCE_DEBUG_FACTOR__TRAITS_HPP_

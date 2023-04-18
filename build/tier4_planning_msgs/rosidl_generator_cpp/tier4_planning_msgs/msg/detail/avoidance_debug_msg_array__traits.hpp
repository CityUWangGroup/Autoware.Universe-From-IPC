// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from tier4_planning_msgs:msg/AvoidanceDebugMsgArray.idl
// generated code does not contain a copyright notice

#ifndef TIER4_PLANNING_MSGS__MSG__DETAIL__AVOIDANCE_DEBUG_MSG_ARRAY__TRAITS_HPP_
#define TIER4_PLANNING_MSGS__MSG__DETAIL__AVOIDANCE_DEBUG_MSG_ARRAY__TRAITS_HPP_

#include "tier4_planning_msgs/msg/detail/avoidance_debug_msg_array__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'avoidance_info'
#include "tier4_planning_msgs/msg/detail/avoidance_debug_msg__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const tier4_planning_msgs::msg::AvoidanceDebugMsgArray & msg,
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

  // member: avoidance_info
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.avoidance_info.size() == 0) {
      out << "avoidance_info: []\n";
    } else {
      out << "avoidance_info:\n";
      for (auto item : msg.avoidance_info) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const tier4_planning_msgs::msg::AvoidanceDebugMsgArray & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<tier4_planning_msgs::msg::AvoidanceDebugMsgArray>()
{
  return "tier4_planning_msgs::msg::AvoidanceDebugMsgArray";
}

template<>
inline const char * name<tier4_planning_msgs::msg::AvoidanceDebugMsgArray>()
{
  return "tier4_planning_msgs/msg/AvoidanceDebugMsgArray";
}

template<>
struct has_fixed_size<tier4_planning_msgs::msg::AvoidanceDebugMsgArray>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<tier4_planning_msgs::msg::AvoidanceDebugMsgArray>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<tier4_planning_msgs::msg::AvoidanceDebugMsgArray>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // TIER4_PLANNING_MSGS__MSG__DETAIL__AVOIDANCE_DEBUG_MSG_ARRAY__TRAITS_HPP_

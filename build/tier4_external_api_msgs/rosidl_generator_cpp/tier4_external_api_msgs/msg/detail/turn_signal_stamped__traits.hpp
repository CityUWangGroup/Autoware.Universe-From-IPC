// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from tier4_external_api_msgs:msg/TurnSignalStamped.idl
// generated code does not contain a copyright notice

#ifndef TIER4_EXTERNAL_API_MSGS__MSG__DETAIL__TURN_SIGNAL_STAMPED__TRAITS_HPP_
#define TIER4_EXTERNAL_API_MSGS__MSG__DETAIL__TURN_SIGNAL_STAMPED__TRAITS_HPP_

#include "tier4_external_api_msgs/msg/detail/turn_signal_stamped__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"
// Member 'turn_signal'
#include "tier4_external_api_msgs/msg/detail/turn_signal__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const tier4_external_api_msgs::msg::TurnSignalStamped & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: stamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stamp:\n";
    to_yaml(msg.stamp, out, indentation + 2);
  }

  // member: turn_signal
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "turn_signal:\n";
    to_yaml(msg.turn_signal, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const tier4_external_api_msgs::msg::TurnSignalStamped & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<tier4_external_api_msgs::msg::TurnSignalStamped>()
{
  return "tier4_external_api_msgs::msg::TurnSignalStamped";
}

template<>
inline const char * name<tier4_external_api_msgs::msg::TurnSignalStamped>()
{
  return "tier4_external_api_msgs/msg/TurnSignalStamped";
}

template<>
struct has_fixed_size<tier4_external_api_msgs::msg::TurnSignalStamped>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value && has_fixed_size<tier4_external_api_msgs::msg::TurnSignal>::value> {};

template<>
struct has_bounded_size<tier4_external_api_msgs::msg::TurnSignalStamped>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value && has_bounded_size<tier4_external_api_msgs::msg::TurnSignal>::value> {};

template<>
struct is_message<tier4_external_api_msgs::msg::TurnSignalStamped>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // TIER4_EXTERNAL_API_MSGS__MSG__DETAIL__TURN_SIGNAL_STAMPED__TRAITS_HPP_

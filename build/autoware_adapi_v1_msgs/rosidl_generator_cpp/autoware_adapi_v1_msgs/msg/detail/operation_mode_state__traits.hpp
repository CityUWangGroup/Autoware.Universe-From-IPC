// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from autoware_adapi_v1_msgs:msg/OperationModeState.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_ADAPI_V1_MSGS__MSG__DETAIL__OPERATION_MODE_STATE__TRAITS_HPP_
#define AUTOWARE_ADAPI_V1_MSGS__MSG__DETAIL__OPERATION_MODE_STATE__TRAITS_HPP_

#include "autoware_adapi_v1_msgs/msg/detail/operation_mode_state__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const autoware_adapi_v1_msgs::msg::OperationModeState & msg,
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

  // member: mode
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mode: ";
    value_to_yaml(msg.mode, out);
    out << "\n";
  }

  // member: is_autoware_control_enabled
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_autoware_control_enabled: ";
    value_to_yaml(msg.is_autoware_control_enabled, out);
    out << "\n";
  }

  // member: is_in_transition
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_in_transition: ";
    value_to_yaml(msg.is_in_transition, out);
    out << "\n";
  }

  // member: is_stop_mode_available
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_stop_mode_available: ";
    value_to_yaml(msg.is_stop_mode_available, out);
    out << "\n";
  }

  // member: is_autonomous_mode_available
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_autonomous_mode_available: ";
    value_to_yaml(msg.is_autonomous_mode_available, out);
    out << "\n";
  }

  // member: is_local_mode_available
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_local_mode_available: ";
    value_to_yaml(msg.is_local_mode_available, out);
    out << "\n";
  }

  // member: is_remote_mode_available
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_remote_mode_available: ";
    value_to_yaml(msg.is_remote_mode_available, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const autoware_adapi_v1_msgs::msg::OperationModeState & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<autoware_adapi_v1_msgs::msg::OperationModeState>()
{
  return "autoware_adapi_v1_msgs::msg::OperationModeState";
}

template<>
inline const char * name<autoware_adapi_v1_msgs::msg::OperationModeState>()
{
  return "autoware_adapi_v1_msgs/msg/OperationModeState";
}

template<>
struct has_fixed_size<autoware_adapi_v1_msgs::msg::OperationModeState>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<autoware_adapi_v1_msgs::msg::OperationModeState>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<autoware_adapi_v1_msgs::msg::OperationModeState>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // AUTOWARE_ADAPI_V1_MSGS__MSG__DETAIL__OPERATION_MODE_STATE__TRAITS_HPP_

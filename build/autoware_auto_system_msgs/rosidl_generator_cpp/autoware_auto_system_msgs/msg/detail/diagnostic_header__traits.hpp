// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from autoware_auto_system_msgs:msg/DiagnosticHeader.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_AUTO_SYSTEM_MSGS__MSG__DETAIL__DIAGNOSTIC_HEADER__TRAITS_HPP_
#define AUTOWARE_AUTO_SYSTEM_MSGS__MSG__DETAIL__DIAGNOSTIC_HEADER__TRAITS_HPP_

#include "autoware_auto_system_msgs/msg/detail/diagnostic_header__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'data_stamp'
// Member 'computation_start'
#include "builtin_interfaces/msg/detail/time__traits.hpp"
// Member 'runtime'
#include "builtin_interfaces/msg/detail/duration__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const autoware_auto_system_msgs::msg::DiagnosticHeader & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "name: ";
    value_to_yaml(msg.name, out);
    out << "\n";
  }

  // member: data_stamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "data_stamp:\n";
    to_yaml(msg.data_stamp, out, indentation + 2);
  }

  // member: computation_start
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "computation_start:\n";
    to_yaml(msg.computation_start, out, indentation + 2);
  }

  // member: runtime
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "runtime:\n";
    to_yaml(msg.runtime, out, indentation + 2);
  }

  // member: iterations
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "iterations: ";
    value_to_yaml(msg.iterations, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const autoware_auto_system_msgs::msg::DiagnosticHeader & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<autoware_auto_system_msgs::msg::DiagnosticHeader>()
{
  return "autoware_auto_system_msgs::msg::DiagnosticHeader";
}

template<>
inline const char * name<autoware_auto_system_msgs::msg::DiagnosticHeader>()
{
  return "autoware_auto_system_msgs/msg/DiagnosticHeader";
}

template<>
struct has_fixed_size<autoware_auto_system_msgs::msg::DiagnosticHeader>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<autoware_auto_system_msgs::msg::DiagnosticHeader>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Duration>::value && has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<autoware_auto_system_msgs::msg::DiagnosticHeader>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // AUTOWARE_AUTO_SYSTEM_MSGS__MSG__DETAIL__DIAGNOSTIC_HEADER__TRAITS_HPP_

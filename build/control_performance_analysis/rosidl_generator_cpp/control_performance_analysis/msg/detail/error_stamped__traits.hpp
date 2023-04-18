// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from control_performance_analysis:msg/ErrorStamped.idl
// generated code does not contain a copyright notice

#ifndef CONTROL_PERFORMANCE_ANALYSIS__MSG__DETAIL__ERROR_STAMPED__TRAITS_HPP_
#define CONTROL_PERFORMANCE_ANALYSIS__MSG__DETAIL__ERROR_STAMPED__TRAITS_HPP_

#include "control_performance_analysis/msg/detail/error_stamped__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'error'
#include "control_performance_analysis/msg/detail/error__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const control_performance_analysis::msg::ErrorStamped & msg,
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

  // member: error
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "error:\n";
    to_yaml(msg.error, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const control_performance_analysis::msg::ErrorStamped & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<control_performance_analysis::msg::ErrorStamped>()
{
  return "control_performance_analysis::msg::ErrorStamped";
}

template<>
inline const char * name<control_performance_analysis::msg::ErrorStamped>()
{
  return "control_performance_analysis/msg/ErrorStamped";
}

template<>
struct has_fixed_size<control_performance_analysis::msg::ErrorStamped>
  : std::integral_constant<bool, has_fixed_size<control_performance_analysis::msg::Error>::value && has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<control_performance_analysis::msg::ErrorStamped>
  : std::integral_constant<bool, has_bounded_size<control_performance_analysis::msg::Error>::value && has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<control_performance_analysis::msg::ErrorStamped>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CONTROL_PERFORMANCE_ANALYSIS__MSG__DETAIL__ERROR_STAMPED__TRAITS_HPP_

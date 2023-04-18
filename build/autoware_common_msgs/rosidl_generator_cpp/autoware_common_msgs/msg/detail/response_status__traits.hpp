// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from autoware_common_msgs:msg/ResponseStatus.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_COMMON_MSGS__MSG__DETAIL__RESPONSE_STATUS__TRAITS_HPP_
#define AUTOWARE_COMMON_MSGS__MSG__DETAIL__RESPONSE_STATUS__TRAITS_HPP_

#include "autoware_common_msgs/msg/detail/response_status__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const autoware_common_msgs::msg::ResponseStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "success: ";
    value_to_yaml(msg.success, out);
    out << "\n";
  }

  // member: code
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "code: ";
    value_to_yaml(msg.code, out);
    out << "\n";
  }

  // member: message
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "message: ";
    value_to_yaml(msg.message, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const autoware_common_msgs::msg::ResponseStatus & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<autoware_common_msgs::msg::ResponseStatus>()
{
  return "autoware_common_msgs::msg::ResponseStatus";
}

template<>
inline const char * name<autoware_common_msgs::msg::ResponseStatus>()
{
  return "autoware_common_msgs/msg/ResponseStatus";
}

template<>
struct has_fixed_size<autoware_common_msgs::msg::ResponseStatus>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<autoware_common_msgs::msg::ResponseStatus>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<autoware_common_msgs::msg::ResponseStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // AUTOWARE_COMMON_MSGS__MSG__DETAIL__RESPONSE_STATUS__TRAITS_HPP_

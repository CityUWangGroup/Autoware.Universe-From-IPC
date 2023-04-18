// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from tier4_rtc_msgs:msg/CooperateCommand.idl
// generated code does not contain a copyright notice

#ifndef TIER4_RTC_MSGS__MSG__DETAIL__COOPERATE_COMMAND__TRAITS_HPP_
#define TIER4_RTC_MSGS__MSG__DETAIL__COOPERATE_COMMAND__TRAITS_HPP_

#include "tier4_rtc_msgs/msg/detail/cooperate_command__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'uuid'
#include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'module'
#include "tier4_rtc_msgs/msg/detail/module__traits.hpp"
// Member 'command'
#include "tier4_rtc_msgs/msg/detail/command__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const tier4_rtc_msgs::msg::CooperateCommand & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: uuid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "uuid:\n";
    to_yaml(msg.uuid, out, indentation + 2);
  }

  // member: module
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "module:\n";
    to_yaml(msg.module, out, indentation + 2);
  }

  // member: command
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "command:\n";
    to_yaml(msg.command, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const tier4_rtc_msgs::msg::CooperateCommand & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<tier4_rtc_msgs::msg::CooperateCommand>()
{
  return "tier4_rtc_msgs::msg::CooperateCommand";
}

template<>
inline const char * name<tier4_rtc_msgs::msg::CooperateCommand>()
{
  return "tier4_rtc_msgs/msg/CooperateCommand";
}

template<>
struct has_fixed_size<tier4_rtc_msgs::msg::CooperateCommand>
  : std::integral_constant<bool, has_fixed_size<tier4_rtc_msgs::msg::Command>::value && has_fixed_size<tier4_rtc_msgs::msg::Module>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<tier4_rtc_msgs::msg::CooperateCommand>
  : std::integral_constant<bool, has_bounded_size<tier4_rtc_msgs::msg::Command>::value && has_bounded_size<tier4_rtc_msgs::msg::Module>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<tier4_rtc_msgs::msg::CooperateCommand>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // TIER4_RTC_MSGS__MSG__DETAIL__COOPERATE_COMMAND__TRAITS_HPP_

// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from tier4_rtc_msgs:msg/Module.idl
// generated code does not contain a copyright notice

#ifndef TIER4_RTC_MSGS__MSG__DETAIL__MODULE__TRAITS_HPP_
#define TIER4_RTC_MSGS__MSG__DETAIL__MODULE__TRAITS_HPP_

#include "tier4_rtc_msgs/msg/detail/module__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const tier4_rtc_msgs::msg::Module & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "type: ";
    value_to_yaml(msg.type, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const tier4_rtc_msgs::msg::Module & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<tier4_rtc_msgs::msg::Module>()
{
  return "tier4_rtc_msgs::msg::Module";
}

template<>
inline const char * name<tier4_rtc_msgs::msg::Module>()
{
  return "tier4_rtc_msgs/msg/Module";
}

template<>
struct has_fixed_size<tier4_rtc_msgs::msg::Module>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<tier4_rtc_msgs::msg::Module>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<tier4_rtc_msgs::msg::Module>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // TIER4_RTC_MSGS__MSG__DETAIL__MODULE__TRAITS_HPP_

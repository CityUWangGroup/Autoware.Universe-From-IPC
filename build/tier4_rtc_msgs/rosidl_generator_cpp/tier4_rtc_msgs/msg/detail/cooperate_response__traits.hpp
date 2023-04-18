// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from tier4_rtc_msgs:msg/CooperateResponse.idl
// generated code does not contain a copyright notice

#ifndef TIER4_RTC_MSGS__MSG__DETAIL__COOPERATE_RESPONSE__TRAITS_HPP_
#define TIER4_RTC_MSGS__MSG__DETAIL__COOPERATE_RESPONSE__TRAITS_HPP_

#include "tier4_rtc_msgs/msg/detail/cooperate_response__struct.hpp"
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

namespace rosidl_generator_traits
{

inline void to_yaml(
  const tier4_rtc_msgs::msg::CooperateResponse & msg,
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

  // member: success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "success: ";
    value_to_yaml(msg.success, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const tier4_rtc_msgs::msg::CooperateResponse & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<tier4_rtc_msgs::msg::CooperateResponse>()
{
  return "tier4_rtc_msgs::msg::CooperateResponse";
}

template<>
inline const char * name<tier4_rtc_msgs::msg::CooperateResponse>()
{
  return "tier4_rtc_msgs/msg/CooperateResponse";
}

template<>
struct has_fixed_size<tier4_rtc_msgs::msg::CooperateResponse>
  : std::integral_constant<bool, has_fixed_size<tier4_rtc_msgs::msg::Module>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<tier4_rtc_msgs::msg::CooperateResponse>
  : std::integral_constant<bool, has_bounded_size<tier4_rtc_msgs::msg::Module>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<tier4_rtc_msgs::msg::CooperateResponse>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // TIER4_RTC_MSGS__MSG__DETAIL__COOPERATE_RESPONSE__TRAITS_HPP_

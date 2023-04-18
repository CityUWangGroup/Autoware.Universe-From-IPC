// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from tier4_external_api_msgs:msg/LocalizationScore.idl
// generated code does not contain a copyright notice

#ifndef TIER4_EXTERNAL_API_MSGS__MSG__DETAIL__LOCALIZATION_SCORE__TRAITS_HPP_
#define TIER4_EXTERNAL_API_MSGS__MSG__DETAIL__LOCALIZATION_SCORE__TRAITS_HPP_

#include "tier4_external_api_msgs/msg/detail/localization_score__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const tier4_external_api_msgs::msg::LocalizationScore & msg,
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

  // member: value
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "value: ";
    value_to_yaml(msg.value, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const tier4_external_api_msgs::msg::LocalizationScore & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<tier4_external_api_msgs::msg::LocalizationScore>()
{
  return "tier4_external_api_msgs::msg::LocalizationScore";
}

template<>
inline const char * name<tier4_external_api_msgs::msg::LocalizationScore>()
{
  return "tier4_external_api_msgs/msg/LocalizationScore";
}

template<>
struct has_fixed_size<tier4_external_api_msgs::msg::LocalizationScore>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<tier4_external_api_msgs::msg::LocalizationScore>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<tier4_external_api_msgs::msg::LocalizationScore>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // TIER4_EXTERNAL_API_MSGS__MSG__DETAIL__LOCALIZATION_SCORE__TRAITS_HPP_

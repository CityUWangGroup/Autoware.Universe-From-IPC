// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from tier4_external_api_msgs:msg/Observer.idl
// generated code does not contain a copyright notice

#ifndef TIER4_EXTERNAL_API_MSGS__MSG__DETAIL__OBSERVER__TRAITS_HPP_
#define TIER4_EXTERNAL_API_MSGS__MSG__DETAIL__OBSERVER__TRAITS_HPP_

#include "tier4_external_api_msgs/msg/detail/observer__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const tier4_external_api_msgs::msg::Observer & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: mode
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mode: ";
    value_to_yaml(msg.mode, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const tier4_external_api_msgs::msg::Observer & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<tier4_external_api_msgs::msg::Observer>()
{
  return "tier4_external_api_msgs::msg::Observer";
}

template<>
inline const char * name<tier4_external_api_msgs::msg::Observer>()
{
  return "tier4_external_api_msgs/msg/Observer";
}

template<>
struct has_fixed_size<tier4_external_api_msgs::msg::Observer>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<tier4_external_api_msgs::msg::Observer>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<tier4_external_api_msgs::msg::Observer>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // TIER4_EXTERNAL_API_MSGS__MSG__DETAIL__OBSERVER__TRAITS_HPP_

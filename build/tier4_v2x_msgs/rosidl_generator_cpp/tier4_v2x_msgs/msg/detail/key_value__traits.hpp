// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from tier4_v2x_msgs:msg/KeyValue.idl
// generated code does not contain a copyright notice

#ifndef TIER4_V2X_MSGS__MSG__DETAIL__KEY_VALUE__TRAITS_HPP_
#define TIER4_V2X_MSGS__MSG__DETAIL__KEY_VALUE__TRAITS_HPP_

#include "tier4_v2x_msgs/msg/detail/key_value__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const tier4_v2x_msgs::msg::KeyValue & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: key
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "key: ";
    value_to_yaml(msg.key, out);
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

inline std::string to_yaml(const tier4_v2x_msgs::msg::KeyValue & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<tier4_v2x_msgs::msg::KeyValue>()
{
  return "tier4_v2x_msgs::msg::KeyValue";
}

template<>
inline const char * name<tier4_v2x_msgs::msg::KeyValue>()
{
  return "tier4_v2x_msgs/msg/KeyValue";
}

template<>
struct has_fixed_size<tier4_v2x_msgs::msg::KeyValue>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<tier4_v2x_msgs::msg::KeyValue>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<tier4_v2x_msgs::msg::KeyValue>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // TIER4_V2X_MSGS__MSG__DETAIL__KEY_VALUE__TRAITS_HPP_

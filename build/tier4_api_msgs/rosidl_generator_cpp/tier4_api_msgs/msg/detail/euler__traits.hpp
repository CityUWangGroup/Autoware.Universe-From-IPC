// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from tier4_api_msgs:msg/Euler.idl
// generated code does not contain a copyright notice

#ifndef TIER4_API_MSGS__MSG__DETAIL__EULER__TRAITS_HPP_
#define TIER4_API_MSGS__MSG__DETAIL__EULER__TRAITS_HPP_

#include "tier4_api_msgs/msg/detail/euler__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const tier4_api_msgs::msg::Euler & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: roll
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "roll: ";
    value_to_yaml(msg.roll, out);
    out << "\n";
  }

  // member: pitch
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pitch: ";
    value_to_yaml(msg.pitch, out);
    out << "\n";
  }

  // member: yaw
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "yaw: ";
    value_to_yaml(msg.yaw, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const tier4_api_msgs::msg::Euler & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<tier4_api_msgs::msg::Euler>()
{
  return "tier4_api_msgs::msg::Euler";
}

template<>
inline const char * name<tier4_api_msgs::msg::Euler>()
{
  return "tier4_api_msgs/msg/Euler";
}

template<>
struct has_fixed_size<tier4_api_msgs::msg::Euler>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<tier4_api_msgs::msg::Euler>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<tier4_api_msgs::msg::Euler>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // TIER4_API_MSGS__MSG__DETAIL__EULER__TRAITS_HPP_

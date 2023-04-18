// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from tier4_api_msgs:msg/DoorStatus.idl
// generated code does not contain a copyright notice

#ifndef TIER4_API_MSGS__MSG__DETAIL__DOOR_STATUS__TRAITS_HPP_
#define TIER4_API_MSGS__MSG__DETAIL__DOOR_STATUS__TRAITS_HPP_

#include "tier4_api_msgs/msg/detail/door_status__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const tier4_api_msgs::msg::DoorStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status: ";
    value_to_yaml(msg.status, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const tier4_api_msgs::msg::DoorStatus & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<tier4_api_msgs::msg::DoorStatus>()
{
  return "tier4_api_msgs::msg::DoorStatus";
}

template<>
inline const char * name<tier4_api_msgs::msg::DoorStatus>()
{
  return "tier4_api_msgs/msg/DoorStatus";
}

template<>
struct has_fixed_size<tier4_api_msgs::msg::DoorStatus>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<tier4_api_msgs::msg::DoorStatus>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<tier4_api_msgs::msg::DoorStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // TIER4_API_MSGS__MSG__DETAIL__DOOR_STATUS__TRAITS_HPP_

// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from morai_msgs:msg/PREvent.idl
// generated code does not contain a copyright notice

#ifndef MORAI_MSGS__MSG__DETAIL__PR_EVENT__TRAITS_HPP_
#define MORAI_MSGS__MSG__DETAIL__PR_EVENT__TRAITS_HPP_

#include "morai_msgs/msg/detail/pr_event__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const morai_msgs::msg::PREvent & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: mount_vehicle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mount_vehicle: ";
    value_to_yaml(msg.mount_vehicle, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const morai_msgs::msg::PREvent & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<morai_msgs::msg::PREvent>()
{
  return "morai_msgs::msg::PREvent";
}

template<>
inline const char * name<morai_msgs::msg::PREvent>()
{
  return "morai_msgs/msg/PREvent";
}

template<>
struct has_fixed_size<morai_msgs::msg::PREvent>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<morai_msgs::msg::PREvent>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<morai_msgs::msg::PREvent>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MORAI_MSGS__MSG__DETAIL__PR_EVENT__TRAITS_HPP_

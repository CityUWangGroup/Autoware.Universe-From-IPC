// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from morai_msgs:msg/WaitForTick.idl
// generated code does not contain a copyright notice

#ifndef MORAI_MSGS__MSG__DETAIL__WAIT_FOR_TICK__TRAITS_HPP_
#define MORAI_MSGS__MSG__DETAIL__WAIT_FOR_TICK__TRAITS_HPP_

#include "morai_msgs/msg/detail/wait_for_tick__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const morai_msgs::msg::WaitForTick & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: user_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "user_id: ";
    value_to_yaml(msg.user_id, out);
    out << "\n";
  }

  // member: frame
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "frame: ";
    value_to_yaml(msg.frame, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const morai_msgs::msg::WaitForTick & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<morai_msgs::msg::WaitForTick>()
{
  return "morai_msgs::msg::WaitForTick";
}

template<>
inline const char * name<morai_msgs::msg::WaitForTick>()
{
  return "morai_msgs/msg/WaitForTick";
}

template<>
struct has_fixed_size<morai_msgs::msg::WaitForTick>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<morai_msgs::msg::WaitForTick>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<morai_msgs::msg::WaitForTick>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MORAI_MSGS__MSG__DETAIL__WAIT_FOR_TICK__TRAITS_HPP_

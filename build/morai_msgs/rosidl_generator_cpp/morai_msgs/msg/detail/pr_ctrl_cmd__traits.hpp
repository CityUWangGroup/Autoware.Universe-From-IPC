// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from morai_msgs:msg/PRCtrlCmd.idl
// generated code does not contain a copyright notice

#ifndef MORAI_MSGS__MSG__DETAIL__PR_CTRL_CMD__TRAITS_HPP_
#define MORAI_MSGS__MSG__DETAIL__PR_CTRL_CMD__TRAITS_HPP_

#include "morai_msgs/msg/detail/pr_ctrl_cmd__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const morai_msgs::msg::PRCtrlCmd & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: longitudinal_velocity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "longitudinal_velocity: ";
    value_to_yaml(msg.longitudinal_velocity, out);
    out << "\n";
  }

  // member: latitudinal_velocity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "latitudinal_velocity: ";
    value_to_yaml(msg.latitudinal_velocity, out);
    out << "\n";
  }

  // member: angular_velocity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "angular_velocity: ";
    value_to_yaml(msg.angular_velocity, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const morai_msgs::msg::PRCtrlCmd & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<morai_msgs::msg::PRCtrlCmd>()
{
  return "morai_msgs::msg::PRCtrlCmd";
}

template<>
inline const char * name<morai_msgs::msg::PRCtrlCmd>()
{
  return "morai_msgs/msg/PRCtrlCmd";
}

template<>
struct has_fixed_size<morai_msgs::msg::PRCtrlCmd>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<morai_msgs::msg::PRCtrlCmd>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<morai_msgs::msg::PRCtrlCmd>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MORAI_MSGS__MSG__DETAIL__PR_CTRL_CMD__TRAITS_HPP_

// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from morai_msgs:msg/SkidCtrlCmd.idl
// generated code does not contain a copyright notice

#ifndef MORAI_MSGS__MSG__DETAIL__SKID_CTRL_CMD__TRAITS_HPP_
#define MORAI_MSGS__MSG__DETAIL__SKID_CTRL_CMD__TRAITS_HPP_

#include "morai_msgs/msg/detail/skid_ctrl_cmd__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'skid_model_ctrl'
#include "morai_msgs/msg/detail/skid_model__traits.hpp"
// Member 'velocity_ctrl'
#include "geometry_msgs/msg/detail/twist__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const morai_msgs::msg::SkidCtrlCmd & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: cmd_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cmd_type: ";
    value_to_yaml(msg.cmd_type, out);
    out << "\n";
  }

  // member: skid_model_ctrl
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "skid_model_ctrl:\n";
    to_yaml(msg.skid_model_ctrl, out, indentation + 2);
  }

  // member: velocity_ctrl
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "velocity_ctrl:\n";
    to_yaml(msg.velocity_ctrl, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const morai_msgs::msg::SkidCtrlCmd & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<morai_msgs::msg::SkidCtrlCmd>()
{
  return "morai_msgs::msg::SkidCtrlCmd";
}

template<>
inline const char * name<morai_msgs::msg::SkidCtrlCmd>()
{
  return "morai_msgs/msg/SkidCtrlCmd";
}

template<>
struct has_fixed_size<morai_msgs::msg::SkidCtrlCmd>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::Twist>::value && has_fixed_size<morai_msgs::msg::SkidModel>::value> {};

template<>
struct has_bounded_size<morai_msgs::msg::SkidCtrlCmd>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::Twist>::value && has_bounded_size<morai_msgs::msg::SkidModel>::value> {};

template<>
struct is_message<morai_msgs::msg::SkidCtrlCmd>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MORAI_MSGS__MSG__DETAIL__SKID_CTRL_CMD__TRAITS_HPP_

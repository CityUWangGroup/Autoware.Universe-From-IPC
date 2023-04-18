// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from morai_msgs:msg/CtrlCmd.idl
// generated code does not contain a copyright notice

#ifndef MORAI_MSGS__MSG__DETAIL__CTRL_CMD__TRAITS_HPP_
#define MORAI_MSGS__MSG__DETAIL__CTRL_CMD__TRAITS_HPP_

#include "morai_msgs/msg/detail/ctrl_cmd__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const morai_msgs::msg::CtrlCmd & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: longl_cmd_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "longl_cmd_type: ";
    value_to_yaml(msg.longl_cmd_type, out);
    out << "\n";
  }

  // member: accel
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "accel: ";
    value_to_yaml(msg.accel, out);
    out << "\n";
  }

  // member: brake
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "brake: ";
    value_to_yaml(msg.brake, out);
    out << "\n";
  }

  // member: steering
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "steering: ";
    value_to_yaml(msg.steering, out);
    out << "\n";
  }

  // member: velocity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "velocity: ";
    value_to_yaml(msg.velocity, out);
    out << "\n";
  }

  // member: acceleration
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "acceleration: ";
    value_to_yaml(msg.acceleration, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const morai_msgs::msg::CtrlCmd & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<morai_msgs::msg::CtrlCmd>()
{
  return "morai_msgs::msg::CtrlCmd";
}

template<>
inline const char * name<morai_msgs::msg::CtrlCmd>()
{
  return "morai_msgs/msg/CtrlCmd";
}

template<>
struct has_fixed_size<morai_msgs::msg::CtrlCmd>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<morai_msgs::msg::CtrlCmd>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<morai_msgs::msg::CtrlCmd>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MORAI_MSGS__MSG__DETAIL__CTRL_CMD__TRAITS_HPP_

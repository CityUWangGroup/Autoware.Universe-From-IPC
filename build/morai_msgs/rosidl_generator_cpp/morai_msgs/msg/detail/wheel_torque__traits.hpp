// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from morai_msgs:msg/WheelTorque.idl
// generated code does not contain a copyright notice

#ifndef MORAI_MSGS__MSG__DETAIL__WHEEL_TORQUE__TRAITS_HPP_
#define MORAI_MSGS__MSG__DETAIL__WHEEL_TORQUE__TRAITS_HPP_

#include "morai_msgs/msg/detail/wheel_torque__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const morai_msgs::msg::WheelTorque & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: left_front_wheel_torque_off
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "left_front_wheel_torque_off: ";
    value_to_yaml(msg.left_front_wheel_torque_off, out);
    out << "\n";
  }

  // member: left_rear_wheel_torque_off
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "left_rear_wheel_torque_off: ";
    value_to_yaml(msg.left_rear_wheel_torque_off, out);
    out << "\n";
  }

  // member: right_front_wheel_torque_off
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "right_front_wheel_torque_off: ";
    value_to_yaml(msg.right_front_wheel_torque_off, out);
    out << "\n";
  }

  // member: right_rear_wheel_torque_off
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "right_rear_wheel_torque_off: ";
    value_to_yaml(msg.right_rear_wheel_torque_off, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const morai_msgs::msg::WheelTorque & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<morai_msgs::msg::WheelTorque>()
{
  return "morai_msgs::msg::WheelTorque";
}

template<>
inline const char * name<morai_msgs::msg::WheelTorque>()
{
  return "morai_msgs/msg/WheelTorque";
}

template<>
struct has_fixed_size<morai_msgs::msg::WheelTorque>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<morai_msgs::msg::WheelTorque>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<morai_msgs::msg::WheelTorque>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MORAI_MSGS__MSG__DETAIL__WHEEL_TORQUE__TRAITS_HPP_

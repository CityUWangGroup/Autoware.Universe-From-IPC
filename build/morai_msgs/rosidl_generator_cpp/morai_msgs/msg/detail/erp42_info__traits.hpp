// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from morai_msgs:msg/ERP42Info.idl
// generated code does not contain a copyright notice

#ifndef MORAI_MSGS__MSG__DETAIL__ERP42_INFO__TRAITS_HPP_
#define MORAI_MSGS__MSG__DETAIL__ERP42_INFO__TRAITS_HPP_

#include "morai_msgs/msg/detail/erp42_info__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const morai_msgs::msg::ERP42Info & msg,
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

  // member: position_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "position_x: ";
    value_to_yaml(msg.position_x, out);
    out << "\n";
  }

  // member: position_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "position_y: ";
    value_to_yaml(msg.position_y, out);
    out << "\n";
  }

  // member: position_z
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "position_z: ";
    value_to_yaml(msg.position_z, out);
    out << "\n";
  }

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

  // member: velocity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "velocity: ";
    value_to_yaml(msg.velocity, out);
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
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const morai_msgs::msg::ERP42Info & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<morai_msgs::msg::ERP42Info>()
{
  return "morai_msgs::msg::ERP42Info";
}

template<>
inline const char * name<morai_msgs::msg::ERP42Info>()
{
  return "morai_msgs/msg/ERP42Info";
}

template<>
struct has_fixed_size<morai_msgs::msg::ERP42Info>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<morai_msgs::msg::ERP42Info>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<morai_msgs::msg::ERP42Info>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MORAI_MSGS__MSG__DETAIL__ERP42_INFO__TRAITS_HPP_

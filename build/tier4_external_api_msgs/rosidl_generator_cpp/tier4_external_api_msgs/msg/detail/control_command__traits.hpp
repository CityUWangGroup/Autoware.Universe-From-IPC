// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from tier4_external_api_msgs:msg/ControlCommand.idl
// generated code does not contain a copyright notice

#ifndef TIER4_EXTERNAL_API_MSGS__MSG__DETAIL__CONTROL_COMMAND__TRAITS_HPP_
#define TIER4_EXTERNAL_API_MSGS__MSG__DETAIL__CONTROL_COMMAND__TRAITS_HPP_

#include "tier4_external_api_msgs/msg/detail/control_command__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const tier4_external_api_msgs::msg::ControlCommand & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: steering_angle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "steering_angle: ";
    value_to_yaml(msg.steering_angle, out);
    out << "\n";
  }

  // member: steering_angle_velocity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "steering_angle_velocity: ";
    value_to_yaml(msg.steering_angle_velocity, out);
    out << "\n";
  }

  // member: throttle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "throttle: ";
    value_to_yaml(msg.throttle, out);
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
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const tier4_external_api_msgs::msg::ControlCommand & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<tier4_external_api_msgs::msg::ControlCommand>()
{
  return "tier4_external_api_msgs::msg::ControlCommand";
}

template<>
inline const char * name<tier4_external_api_msgs::msg::ControlCommand>()
{
  return "tier4_external_api_msgs/msg/ControlCommand";
}

template<>
struct has_fixed_size<tier4_external_api_msgs::msg::ControlCommand>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<tier4_external_api_msgs::msg::ControlCommand>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<tier4_external_api_msgs::msg::ControlCommand>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // TIER4_EXTERNAL_API_MSGS__MSG__DETAIL__CONTROL_COMMAND__TRAITS_HPP_

// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from tier4_vehicle_msgs:msg/ActuationCommand.idl
// generated code does not contain a copyright notice

#ifndef TIER4_VEHICLE_MSGS__MSG__DETAIL__ACTUATION_COMMAND__TRAITS_HPP_
#define TIER4_VEHICLE_MSGS__MSG__DETAIL__ACTUATION_COMMAND__TRAITS_HPP_

#include "tier4_vehicle_msgs/msg/detail/actuation_command__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const tier4_vehicle_msgs::msg::ActuationCommand & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: accel_cmd
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "accel_cmd: ";
    value_to_yaml(msg.accel_cmd, out);
    out << "\n";
  }

  // member: brake_cmd
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "brake_cmd: ";
    value_to_yaml(msg.brake_cmd, out);
    out << "\n";
  }

  // member: steer_cmd
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "steer_cmd: ";
    value_to_yaml(msg.steer_cmd, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const tier4_vehicle_msgs::msg::ActuationCommand & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<tier4_vehicle_msgs::msg::ActuationCommand>()
{
  return "tier4_vehicle_msgs::msg::ActuationCommand";
}

template<>
inline const char * name<tier4_vehicle_msgs::msg::ActuationCommand>()
{
  return "tier4_vehicle_msgs/msg/ActuationCommand";
}

template<>
struct has_fixed_size<tier4_vehicle_msgs::msg::ActuationCommand>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<tier4_vehicle_msgs::msg::ActuationCommand>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<tier4_vehicle_msgs::msg::ActuationCommand>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // TIER4_VEHICLE_MSGS__MSG__DETAIL__ACTUATION_COMMAND__TRAITS_HPP_

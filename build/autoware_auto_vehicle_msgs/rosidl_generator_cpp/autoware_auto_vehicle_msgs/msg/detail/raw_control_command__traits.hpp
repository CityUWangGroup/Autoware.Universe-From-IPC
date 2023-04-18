// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from autoware_auto_vehicle_msgs:msg/RawControlCommand.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_AUTO_VEHICLE_MSGS__MSG__DETAIL__RAW_CONTROL_COMMAND__TRAITS_HPP_
#define AUTOWARE_AUTO_VEHICLE_MSGS__MSG__DETAIL__RAW_CONTROL_COMMAND__TRAITS_HPP_

#include "autoware_auto_vehicle_msgs/msg/detail/raw_control_command__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const autoware_auto_vehicle_msgs::msg::RawControlCommand & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: stamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stamp:\n";
    to_yaml(msg.stamp, out, indentation + 2);
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

  // member: front_steer
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "front_steer: ";
    value_to_yaml(msg.front_steer, out);
    out << "\n";
  }

  // member: rear_steer
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rear_steer: ";
    value_to_yaml(msg.rear_steer, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const autoware_auto_vehicle_msgs::msg::RawControlCommand & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<autoware_auto_vehicle_msgs::msg::RawControlCommand>()
{
  return "autoware_auto_vehicle_msgs::msg::RawControlCommand";
}

template<>
inline const char * name<autoware_auto_vehicle_msgs::msg::RawControlCommand>()
{
  return "autoware_auto_vehicle_msgs/msg/RawControlCommand";
}

template<>
struct has_fixed_size<autoware_auto_vehicle_msgs::msg::RawControlCommand>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<autoware_auto_vehicle_msgs::msg::RawControlCommand>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<autoware_auto_vehicle_msgs::msg::RawControlCommand>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // AUTOWARE_AUTO_VEHICLE_MSGS__MSG__DETAIL__RAW_CONTROL_COMMAND__TRAITS_HPP_

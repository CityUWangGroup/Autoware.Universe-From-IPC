// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from autoware_auto_vehicle_msgs:msg/VehicleStateCommand.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_AUTO_VEHICLE_MSGS__MSG__DETAIL__VEHICLE_STATE_COMMAND__TRAITS_HPP_
#define AUTOWARE_AUTO_VEHICLE_MSGS__MSG__DETAIL__VEHICLE_STATE_COMMAND__TRAITS_HPP_

#include "autoware_auto_vehicle_msgs/msg/detail/vehicle_state_command__struct.hpp"
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
  const autoware_auto_vehicle_msgs::msg::VehicleStateCommand & msg,
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

  // member: blinker
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "blinker: ";
    value_to_yaml(msg.blinker, out);
    out << "\n";
  }

  // member: headlight
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "headlight: ";
    value_to_yaml(msg.headlight, out);
    out << "\n";
  }

  // member: wiper
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "wiper: ";
    value_to_yaml(msg.wiper, out);
    out << "\n";
  }

  // member: gear
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gear: ";
    value_to_yaml(msg.gear, out);
    out << "\n";
  }

  // member: mode
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mode: ";
    value_to_yaml(msg.mode, out);
    out << "\n";
  }

  // member: hand_brake
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hand_brake: ";
    value_to_yaml(msg.hand_brake, out);
    out << "\n";
  }

  // member: horn
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "horn: ";
    value_to_yaml(msg.horn, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const autoware_auto_vehicle_msgs::msg::VehicleStateCommand & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<autoware_auto_vehicle_msgs::msg::VehicleStateCommand>()
{
  return "autoware_auto_vehicle_msgs::msg::VehicleStateCommand";
}

template<>
inline const char * name<autoware_auto_vehicle_msgs::msg::VehicleStateCommand>()
{
  return "autoware_auto_vehicle_msgs/msg/VehicleStateCommand";
}

template<>
struct has_fixed_size<autoware_auto_vehicle_msgs::msg::VehicleStateCommand>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<autoware_auto_vehicle_msgs::msg::VehicleStateCommand>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<autoware_auto_vehicle_msgs::msg::VehicleStateCommand>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // AUTOWARE_AUTO_VEHICLE_MSGS__MSG__DETAIL__VEHICLE_STATE_COMMAND__TRAITS_HPP_

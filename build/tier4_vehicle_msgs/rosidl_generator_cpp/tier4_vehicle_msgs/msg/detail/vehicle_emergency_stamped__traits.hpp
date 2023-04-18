// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from tier4_vehicle_msgs:msg/VehicleEmergencyStamped.idl
// generated code does not contain a copyright notice

#ifndef TIER4_VEHICLE_MSGS__MSG__DETAIL__VEHICLE_EMERGENCY_STAMPED__TRAITS_HPP_
#define TIER4_VEHICLE_MSGS__MSG__DETAIL__VEHICLE_EMERGENCY_STAMPED__TRAITS_HPP_

#include "tier4_vehicle_msgs/msg/detail/vehicle_emergency_stamped__struct.hpp"
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
  const tier4_vehicle_msgs::msg::VehicleEmergencyStamped & msg,
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

  // member: emergency
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "emergency: ";
    value_to_yaml(msg.emergency, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const tier4_vehicle_msgs::msg::VehicleEmergencyStamped & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<tier4_vehicle_msgs::msg::VehicleEmergencyStamped>()
{
  return "tier4_vehicle_msgs::msg::VehicleEmergencyStamped";
}

template<>
inline const char * name<tier4_vehicle_msgs::msg::VehicleEmergencyStamped>()
{
  return "tier4_vehicle_msgs/msg/VehicleEmergencyStamped";
}

template<>
struct has_fixed_size<tier4_vehicle_msgs::msg::VehicleEmergencyStamped>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<tier4_vehicle_msgs::msg::VehicleEmergencyStamped>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<tier4_vehicle_msgs::msg::VehicleEmergencyStamped>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // TIER4_VEHICLE_MSGS__MSG__DETAIL__VEHICLE_EMERGENCY_STAMPED__TRAITS_HPP_
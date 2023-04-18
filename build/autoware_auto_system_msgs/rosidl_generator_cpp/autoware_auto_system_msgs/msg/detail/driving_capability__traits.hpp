// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from autoware_auto_system_msgs:msg/DrivingCapability.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_AUTO_SYSTEM_MSGS__MSG__DETAIL__DRIVING_CAPABILITY__TRAITS_HPP_
#define AUTOWARE_AUTO_SYSTEM_MSGS__MSG__DETAIL__DRIVING_CAPABILITY__TRAITS_HPP_

#include "autoware_auto_system_msgs/msg/detail/driving_capability__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"
// Member 'autonomous_driving'
// Member 'remote_control'
#include "autoware_auto_system_msgs/msg/detail/hazard_status__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const autoware_auto_system_msgs::msg::DrivingCapability & msg,
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

  // member: autonomous_driving
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "autonomous_driving:\n";
    to_yaml(msg.autonomous_driving, out, indentation + 2);
  }

  // member: remote_control
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "remote_control:\n";
    to_yaml(msg.remote_control, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const autoware_auto_system_msgs::msg::DrivingCapability & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<autoware_auto_system_msgs::msg::DrivingCapability>()
{
  return "autoware_auto_system_msgs::msg::DrivingCapability";
}

template<>
inline const char * name<autoware_auto_system_msgs::msg::DrivingCapability>()
{
  return "autoware_auto_system_msgs/msg/DrivingCapability";
}

template<>
struct has_fixed_size<autoware_auto_system_msgs::msg::DrivingCapability>
  : std::integral_constant<bool, has_fixed_size<autoware_auto_system_msgs::msg::HazardStatus>::value && has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<autoware_auto_system_msgs::msg::DrivingCapability>
  : std::integral_constant<bool, has_bounded_size<autoware_auto_system_msgs::msg::HazardStatus>::value && has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<autoware_auto_system_msgs::msg::DrivingCapability>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // AUTOWARE_AUTO_SYSTEM_MSGS__MSG__DETAIL__DRIVING_CAPABILITY__TRAITS_HPP_

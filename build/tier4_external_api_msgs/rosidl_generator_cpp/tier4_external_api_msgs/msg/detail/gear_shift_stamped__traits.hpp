// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from tier4_external_api_msgs:msg/GearShiftStamped.idl
// generated code does not contain a copyright notice

#ifndef TIER4_EXTERNAL_API_MSGS__MSG__DETAIL__GEAR_SHIFT_STAMPED__TRAITS_HPP_
#define TIER4_EXTERNAL_API_MSGS__MSG__DETAIL__GEAR_SHIFT_STAMPED__TRAITS_HPP_

#include "tier4_external_api_msgs/msg/detail/gear_shift_stamped__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"
// Member 'gear_shift'
#include "tier4_external_api_msgs/msg/detail/gear_shift__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const tier4_external_api_msgs::msg::GearShiftStamped & msg,
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

  // member: gear_shift
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gear_shift:\n";
    to_yaml(msg.gear_shift, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const tier4_external_api_msgs::msg::GearShiftStamped & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<tier4_external_api_msgs::msg::GearShiftStamped>()
{
  return "tier4_external_api_msgs::msg::GearShiftStamped";
}

template<>
inline const char * name<tier4_external_api_msgs::msg::GearShiftStamped>()
{
  return "tier4_external_api_msgs/msg/GearShiftStamped";
}

template<>
struct has_fixed_size<tier4_external_api_msgs::msg::GearShiftStamped>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value && has_fixed_size<tier4_external_api_msgs::msg::GearShift>::value> {};

template<>
struct has_bounded_size<tier4_external_api_msgs::msg::GearShiftStamped>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value && has_bounded_size<tier4_external_api_msgs::msg::GearShift>::value> {};

template<>
struct is_message<tier4_external_api_msgs::msg::GearShiftStamped>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // TIER4_EXTERNAL_API_MSGS__MSG__DETAIL__GEAR_SHIFT_STAMPED__TRAITS_HPP_

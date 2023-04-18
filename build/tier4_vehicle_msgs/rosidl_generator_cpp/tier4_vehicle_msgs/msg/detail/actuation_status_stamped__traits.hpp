// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from tier4_vehicle_msgs:msg/ActuationStatusStamped.idl
// generated code does not contain a copyright notice

#ifndef TIER4_VEHICLE_MSGS__MSG__DETAIL__ACTUATION_STATUS_STAMPED__TRAITS_HPP_
#define TIER4_VEHICLE_MSGS__MSG__DETAIL__ACTUATION_STATUS_STAMPED__TRAITS_HPP_

#include "tier4_vehicle_msgs/msg/detail/actuation_status_stamped__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'status'
#include "tier4_vehicle_msgs/msg/detail/actuation_status__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const tier4_vehicle_msgs::msg::ActuationStatusStamped & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_yaml(msg.header, out, indentation + 2);
  }

  // member: status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status:\n";
    to_yaml(msg.status, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const tier4_vehicle_msgs::msg::ActuationStatusStamped & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<tier4_vehicle_msgs::msg::ActuationStatusStamped>()
{
  return "tier4_vehicle_msgs::msg::ActuationStatusStamped";
}

template<>
inline const char * name<tier4_vehicle_msgs::msg::ActuationStatusStamped>()
{
  return "tier4_vehicle_msgs/msg/ActuationStatusStamped";
}

template<>
struct has_fixed_size<tier4_vehicle_msgs::msg::ActuationStatusStamped>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value && has_fixed_size<tier4_vehicle_msgs::msg::ActuationStatus>::value> {};

template<>
struct has_bounded_size<tier4_vehicle_msgs::msg::ActuationStatusStamped>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value && has_bounded_size<tier4_vehicle_msgs::msg::ActuationStatus>::value> {};

template<>
struct is_message<tier4_vehicle_msgs::msg::ActuationStatusStamped>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // TIER4_VEHICLE_MSGS__MSG__DETAIL__ACTUATION_STATUS_STAMPED__TRAITS_HPP_

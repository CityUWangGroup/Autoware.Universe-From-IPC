// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from tier4_system_msgs:msg/HazardStatusStamped.idl
// generated code does not contain a copyright notice

#ifndef TIER4_SYSTEM_MSGS__MSG__DETAIL__HAZARD_STATUS_STAMPED__TRAITS_HPP_
#define TIER4_SYSTEM_MSGS__MSG__DETAIL__HAZARD_STATUS_STAMPED__TRAITS_HPP_

#include "tier4_system_msgs/msg/detail/hazard_status_stamped__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'status'
#include "tier4_system_msgs/msg/detail/hazard_status__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const tier4_system_msgs::msg::HazardStatusStamped & msg,
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

inline std::string to_yaml(const tier4_system_msgs::msg::HazardStatusStamped & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<tier4_system_msgs::msg::HazardStatusStamped>()
{
  return "tier4_system_msgs::msg::HazardStatusStamped";
}

template<>
inline const char * name<tier4_system_msgs::msg::HazardStatusStamped>()
{
  return "tier4_system_msgs/msg/HazardStatusStamped";
}

template<>
struct has_fixed_size<tier4_system_msgs::msg::HazardStatusStamped>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value && has_fixed_size<tier4_system_msgs::msg::HazardStatus>::value> {};

template<>
struct has_bounded_size<tier4_system_msgs::msg::HazardStatusStamped>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value && has_bounded_size<tier4_system_msgs::msg::HazardStatus>::value> {};

template<>
struct is_message<tier4_system_msgs::msg::HazardStatusStamped>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // TIER4_SYSTEM_MSGS__MSG__DETAIL__HAZARD_STATUS_STAMPED__TRAITS_HPP_

// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from morai_msgs:msg/GetTrafficLightStatus.idl
// generated code does not contain a copyright notice

#ifndef MORAI_MSGS__MSG__DETAIL__GET_TRAFFIC_LIGHT_STATUS__TRAITS_HPP_
#define MORAI_MSGS__MSG__DETAIL__GET_TRAFFIC_LIGHT_STATUS__TRAITS_HPP_

#include "morai_msgs/msg/detail/get_traffic_light_status__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const morai_msgs::msg::GetTrafficLightStatus & msg,
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

  // member: traffic_light_index
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "traffic_light_index: ";
    value_to_yaml(msg.traffic_light_index, out);
    out << "\n";
  }

  // member: traffic_light_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "traffic_light_type: ";
    value_to_yaml(msg.traffic_light_type, out);
    out << "\n";
  }

  // member: traffic_light_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "traffic_light_status: ";
    value_to_yaml(msg.traffic_light_status, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const morai_msgs::msg::GetTrafficLightStatus & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<morai_msgs::msg::GetTrafficLightStatus>()
{
  return "morai_msgs::msg::GetTrafficLightStatus";
}

template<>
inline const char * name<morai_msgs::msg::GetTrafficLightStatus>()
{
  return "morai_msgs/msg/GetTrafficLightStatus";
}

template<>
struct has_fixed_size<morai_msgs::msg::GetTrafficLightStatus>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<morai_msgs::msg::GetTrafficLightStatus>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<morai_msgs::msg::GetTrafficLightStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MORAI_MSGS__MSG__DETAIL__GET_TRAFFIC_LIGHT_STATUS__TRAITS_HPP_

// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from morai_msgs:msg/TrafficLight.idl
// generated code does not contain a copyright notice

#ifndef MORAI_MSGS__MSG__DETAIL__TRAFFIC_LIGHT__TRAITS_HPP_
#define MORAI_MSGS__MSG__DETAIL__TRAFFIC_LIGHT__TRAITS_HPP_

#include "morai_msgs/msg/detail/traffic_light__struct.hpp"
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
  const morai_msgs::msg::TrafficLight & msg,
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

  // member: light
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "light: ";
    value_to_yaml(msg.light, out);
    out << "\n";
  }

  // member: num_of_light
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "num_of_light: ";
    value_to_yaml(msg.num_of_light, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const morai_msgs::msg::TrafficLight & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<morai_msgs::msg::TrafficLight>()
{
  return "morai_msgs::msg::TrafficLight";
}

template<>
inline const char * name<morai_msgs::msg::TrafficLight>()
{
  return "morai_msgs/msg/TrafficLight";
}

template<>
struct has_fixed_size<morai_msgs::msg::TrafficLight>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<morai_msgs::msg::TrafficLight>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<morai_msgs::msg::TrafficLight>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MORAI_MSGS__MSG__DETAIL__TRAFFIC_LIGHT__TRAITS_HPP_

// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from morai_msgs:msg/IntersectionControl.idl
// generated code does not contain a copyright notice

#ifndef MORAI_MSGS__MSG__DETAIL__INTERSECTION_CONTROL__TRAITS_HPP_
#define MORAI_MSGS__MSG__DETAIL__INTERSECTION_CONTROL__TRAITS_HPP_

#include "morai_msgs/msg/detail/intersection_control__struct.hpp"
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
  const morai_msgs::msg::IntersectionControl & msg,
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

  // member: intersection_index
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "intersection_index: ";
    value_to_yaml(msg.intersection_index, out);
    out << "\n";
  }

  // member: intersection_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "intersection_status: ";
    value_to_yaml(msg.intersection_status, out);
    out << "\n";
  }

  // member: intersection_status_time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "intersection_status_time: ";
    value_to_yaml(msg.intersection_status_time, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const morai_msgs::msg::IntersectionControl & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<morai_msgs::msg::IntersectionControl>()
{
  return "morai_msgs::msg::IntersectionControl";
}

template<>
inline const char * name<morai_msgs::msg::IntersectionControl>()
{
  return "morai_msgs/msg/IntersectionControl";
}

template<>
struct has_fixed_size<morai_msgs::msg::IntersectionControl>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<morai_msgs::msg::IntersectionControl>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<morai_msgs::msg::IntersectionControl>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MORAI_MSGS__MSG__DETAIL__INTERSECTION_CONTROL__TRAITS_HPP_

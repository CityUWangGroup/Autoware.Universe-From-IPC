// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from tier4_api_msgs:msg/IntersectionStatus.idl
// generated code does not contain a copyright notice

#ifndef TIER4_API_MSGS__MSG__DETAIL__INTERSECTION_STATUS__TRAITS_HPP_
#define TIER4_API_MSGS__MSG__DETAIL__INTERSECTION_STATUS__TRAITS_HPP_

#include "tier4_api_msgs/msg/detail/intersection_status__struct.hpp"
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
  const tier4_api_msgs::msg::IntersectionStatus & msg,
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
    out << "status: ";
    value_to_yaml(msg.status, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const tier4_api_msgs::msg::IntersectionStatus & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<tier4_api_msgs::msg::IntersectionStatus>()
{
  return "tier4_api_msgs::msg::IntersectionStatus";
}

template<>
inline const char * name<tier4_api_msgs::msg::IntersectionStatus>()
{
  return "tier4_api_msgs/msg/IntersectionStatus";
}

template<>
struct has_fixed_size<tier4_api_msgs::msg::IntersectionStatus>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<tier4_api_msgs::msg::IntersectionStatus>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<tier4_api_msgs::msg::IntersectionStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // TIER4_API_MSGS__MSG__DETAIL__INTERSECTION_STATUS__TRAITS_HPP_
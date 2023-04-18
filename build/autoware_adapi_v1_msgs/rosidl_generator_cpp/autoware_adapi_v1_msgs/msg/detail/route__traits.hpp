// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from autoware_adapi_v1_msgs:msg/Route.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_ADAPI_V1_MSGS__MSG__DETAIL__ROUTE__TRAITS_HPP_
#define AUTOWARE_ADAPI_V1_MSGS__MSG__DETAIL__ROUTE__TRAITS_HPP_

#include "autoware_adapi_v1_msgs/msg/detail/route__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'data'
#include "autoware_adapi_v1_msgs/msg/detail/route_data__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const autoware_adapi_v1_msgs::msg::Route & msg,
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

  // member: data
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.data.size() == 0) {
      out << "data: []\n";
    } else {
      out << "data:\n";
      for (auto item : msg.data) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const autoware_adapi_v1_msgs::msg::Route & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<autoware_adapi_v1_msgs::msg::Route>()
{
  return "autoware_adapi_v1_msgs::msg::Route";
}

template<>
inline const char * name<autoware_adapi_v1_msgs::msg::Route>()
{
  return "autoware_adapi_v1_msgs/msg/Route";
}

template<>
struct has_fixed_size<autoware_adapi_v1_msgs::msg::Route>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<autoware_adapi_v1_msgs::msg::Route>
  : std::integral_constant<bool, has_bounded_size<autoware_adapi_v1_msgs::msg::RouteData>::value && has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<autoware_adapi_v1_msgs::msg::Route>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // AUTOWARE_ADAPI_V1_MSGS__MSG__DETAIL__ROUTE__TRAITS_HPP_

// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from autoware_auto_geometry_msgs:msg/Complex32.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_AUTO_GEOMETRY_MSGS__MSG__DETAIL__COMPLEX32__TRAITS_HPP_
#define AUTOWARE_AUTO_GEOMETRY_MSGS__MSG__DETAIL__COMPLEX32__TRAITS_HPP_

#include "autoware_auto_geometry_msgs/msg/detail/complex32__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const autoware_auto_geometry_msgs::msg::Complex32 & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: real
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "real: ";
    value_to_yaml(msg.real, out);
    out << "\n";
  }

  // member: imag
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "imag: ";
    value_to_yaml(msg.imag, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const autoware_auto_geometry_msgs::msg::Complex32 & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<autoware_auto_geometry_msgs::msg::Complex32>()
{
  return "autoware_auto_geometry_msgs::msg::Complex32";
}

template<>
inline const char * name<autoware_auto_geometry_msgs::msg::Complex32>()
{
  return "autoware_auto_geometry_msgs/msg/Complex32";
}

template<>
struct has_fixed_size<autoware_auto_geometry_msgs::msg::Complex32>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<autoware_auto_geometry_msgs::msg::Complex32>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<autoware_auto_geometry_msgs::msg::Complex32>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // AUTOWARE_AUTO_GEOMETRY_MSGS__MSG__DETAIL__COMPLEX32__TRAITS_HPP_

// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from autoware_sensing_msgs:msg/GnssInsOrientationStamped.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_SENSING_MSGS__MSG__DETAIL__GNSS_INS_ORIENTATION_STAMPED__TRAITS_HPP_
#define AUTOWARE_SENSING_MSGS__MSG__DETAIL__GNSS_INS_ORIENTATION_STAMPED__TRAITS_HPP_

#include "autoware_sensing_msgs/msg/detail/gnss_ins_orientation_stamped__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'orientation'
#include "autoware_sensing_msgs/msg/detail/gnss_ins_orientation__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const autoware_sensing_msgs::msg::GnssInsOrientationStamped & msg,
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

  // member: orientation
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "orientation:\n";
    to_yaml(msg.orientation, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const autoware_sensing_msgs::msg::GnssInsOrientationStamped & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<autoware_sensing_msgs::msg::GnssInsOrientationStamped>()
{
  return "autoware_sensing_msgs::msg::GnssInsOrientationStamped";
}

template<>
inline const char * name<autoware_sensing_msgs::msg::GnssInsOrientationStamped>()
{
  return "autoware_sensing_msgs/msg/GnssInsOrientationStamped";
}

template<>
struct has_fixed_size<autoware_sensing_msgs::msg::GnssInsOrientationStamped>
  : std::integral_constant<bool, has_fixed_size<autoware_sensing_msgs::msg::GnssInsOrientation>::value && has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<autoware_sensing_msgs::msg::GnssInsOrientationStamped>
  : std::integral_constant<bool, has_bounded_size<autoware_sensing_msgs::msg::GnssInsOrientation>::value && has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<autoware_sensing_msgs::msg::GnssInsOrientationStamped>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // AUTOWARE_SENSING_MSGS__MSG__DETAIL__GNSS_INS_ORIENTATION_STAMPED__TRAITS_HPP_

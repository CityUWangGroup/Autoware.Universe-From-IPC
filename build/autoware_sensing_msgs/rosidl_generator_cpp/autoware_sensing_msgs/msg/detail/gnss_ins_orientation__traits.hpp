// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from autoware_sensing_msgs:msg/GnssInsOrientation.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_SENSING_MSGS__MSG__DETAIL__GNSS_INS_ORIENTATION__TRAITS_HPP_
#define AUTOWARE_SENSING_MSGS__MSG__DETAIL__GNSS_INS_ORIENTATION__TRAITS_HPP_

#include "autoware_sensing_msgs/msg/detail/gnss_ins_orientation__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'orientation'
#include "geometry_msgs/msg/detail/quaternion__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const autoware_sensing_msgs::msg::GnssInsOrientation & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: orientation
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "orientation:\n";
    to_yaml(msg.orientation, out, indentation + 2);
  }

  // member: rmse_rotation_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rmse_rotation_x: ";
    value_to_yaml(msg.rmse_rotation_x, out);
    out << "\n";
  }

  // member: rmse_rotation_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rmse_rotation_y: ";
    value_to_yaml(msg.rmse_rotation_y, out);
    out << "\n";
  }

  // member: rmse_rotation_z
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rmse_rotation_z: ";
    value_to_yaml(msg.rmse_rotation_z, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const autoware_sensing_msgs::msg::GnssInsOrientation & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<autoware_sensing_msgs::msg::GnssInsOrientation>()
{
  return "autoware_sensing_msgs::msg::GnssInsOrientation";
}

template<>
inline const char * name<autoware_sensing_msgs::msg::GnssInsOrientation>()
{
  return "autoware_sensing_msgs/msg/GnssInsOrientation";
}

template<>
struct has_fixed_size<autoware_sensing_msgs::msg::GnssInsOrientation>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::Quaternion>::value> {};

template<>
struct has_bounded_size<autoware_sensing_msgs::msg::GnssInsOrientation>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::Quaternion>::value> {};

template<>
struct is_message<autoware_sensing_msgs::msg::GnssInsOrientation>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // AUTOWARE_SENSING_MSGS__MSG__DETAIL__GNSS_INS_ORIENTATION__TRAITS_HPP_

// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from morai_msgs:msg/SkidModel.idl
// generated code does not contain a copyright notice

#ifndef MORAI_MSGS__MSG__DETAIL__SKID_MODEL__TRAITS_HPP_
#define MORAI_MSGS__MSG__DETAIL__SKID_MODEL__TRAITS_HPP_

#include "morai_msgs/msg/detail/skid_model__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'rpm'
#include "morai_msgs/msg/detail/wheel_rpm__traits.hpp"
// Member 'torque'
#include "morai_msgs/msg/detail/wheel_torque__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const morai_msgs::msg::SkidModel & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: rpm
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rpm:\n";
    to_yaml(msg.rpm, out, indentation + 2);
  }

  // member: torque
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "torque:\n";
    to_yaml(msg.torque, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const morai_msgs::msg::SkidModel & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<morai_msgs::msg::SkidModel>()
{
  return "morai_msgs::msg::SkidModel";
}

template<>
inline const char * name<morai_msgs::msg::SkidModel>()
{
  return "morai_msgs/msg/SkidModel";
}

template<>
struct has_fixed_size<morai_msgs::msg::SkidModel>
  : std::integral_constant<bool, has_fixed_size<morai_msgs::msg::WheelRpm>::value && has_fixed_size<morai_msgs::msg::WheelTorque>::value> {};

template<>
struct has_bounded_size<morai_msgs::msg::SkidModel>
  : std::integral_constant<bool, has_bounded_size<morai_msgs::msg::WheelRpm>::value && has_bounded_size<morai_msgs::msg::WheelTorque>::value> {};

template<>
struct is_message<morai_msgs::msg::SkidModel>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MORAI_MSGS__MSG__DETAIL__SKID_MODEL__TRAITS_HPP_

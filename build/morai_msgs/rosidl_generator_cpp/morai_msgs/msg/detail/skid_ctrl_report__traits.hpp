// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from morai_msgs:msg/SkidCtrlReport.idl
// generated code does not contain a copyright notice

#ifndef MORAI_MSGS__MSG__DETAIL__SKID_CTRL_REPORT__TRAITS_HPP_
#define MORAI_MSGS__MSG__DETAIL__SKID_CTRL_REPORT__TRAITS_HPP_

#include "morai_msgs/msg/detail/skid_ctrl_report__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'acceleration'
// Member 'position'
// Member 'velocity'
// Member 'angular_velocity'
#include "geometry_msgs/msg/detail/vector3__traits.hpp"
// Member 'skid_model_report'
#include "morai_msgs/msg/detail/skid_model__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const morai_msgs::msg::SkidCtrlReport & msg,
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

  // member: ctrl_mode
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ctrl_mode: ";
    value_to_yaml(msg.ctrl_mode, out);
    out << "\n";
  }

  // member: acceleration
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "acceleration:\n";
    to_yaml(msg.acceleration, out, indentation + 2);
  }

  // member: position
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "position:\n";
    to_yaml(msg.position, out, indentation + 2);
  }

  // member: velocity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "velocity:\n";
    to_yaml(msg.velocity, out, indentation + 2);
  }

  // member: angular_velocity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "angular_velocity:\n";
    to_yaml(msg.angular_velocity, out, indentation + 2);
  }

  // member: heading
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "heading: ";
    value_to_yaml(msg.heading, out);
    out << "\n";
  }

  // member: cmd_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cmd_type: ";
    value_to_yaml(msg.cmd_type, out);
    out << "\n";
  }

  // member: skid_model_report
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "skid_model_report:\n";
    to_yaml(msg.skid_model_report, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const morai_msgs::msg::SkidCtrlReport & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<morai_msgs::msg::SkidCtrlReport>()
{
  return "morai_msgs::msg::SkidCtrlReport";
}

template<>
inline const char * name<morai_msgs::msg::SkidCtrlReport>()
{
  return "morai_msgs/msg/SkidCtrlReport";
}

template<>
struct has_fixed_size<morai_msgs::msg::SkidCtrlReport>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::Vector3>::value && has_fixed_size<morai_msgs::msg::SkidModel>::value && has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<morai_msgs::msg::SkidCtrlReport>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::Vector3>::value && has_bounded_size<morai_msgs::msg::SkidModel>::value && has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<morai_msgs::msg::SkidCtrlReport>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MORAI_MSGS__MSG__DETAIL__SKID_CTRL_REPORT__TRAITS_HPP_

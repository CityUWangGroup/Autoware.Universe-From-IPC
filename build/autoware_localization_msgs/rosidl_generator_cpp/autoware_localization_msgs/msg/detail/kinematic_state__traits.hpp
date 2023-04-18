// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from autoware_localization_msgs:msg/KinematicState.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_LOCALIZATION_MSGS__MSG__DETAIL__KINEMATIC_STATE__TRAITS_HPP_
#define AUTOWARE_LOCALIZATION_MSGS__MSG__DETAIL__KINEMATIC_STATE__TRAITS_HPP_

#include "autoware_localization_msgs/msg/detail/kinematic_state__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'pose_with_covariance'
#include "geometry_msgs/msg/detail/pose_with_covariance__traits.hpp"
// Member 'twist_with_covariance'
#include "geometry_msgs/msg/detail/twist_with_covariance__traits.hpp"
// Member 'accel_with_covariance'
#include "geometry_msgs/msg/detail/accel_with_covariance__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const autoware_localization_msgs::msg::KinematicState & msg,
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

  // member: child_frame_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "child_frame_id: ";
    value_to_yaml(msg.child_frame_id, out);
    out << "\n";
  }

  // member: pose_with_covariance
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pose_with_covariance:\n";
    to_yaml(msg.pose_with_covariance, out, indentation + 2);
  }

  // member: twist_with_covariance
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "twist_with_covariance:\n";
    to_yaml(msg.twist_with_covariance, out, indentation + 2);
  }

  // member: accel_with_covariance
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "accel_with_covariance:\n";
    to_yaml(msg.accel_with_covariance, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const autoware_localization_msgs::msg::KinematicState & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<autoware_localization_msgs::msg::KinematicState>()
{
  return "autoware_localization_msgs::msg::KinematicState";
}

template<>
inline const char * name<autoware_localization_msgs::msg::KinematicState>()
{
  return "autoware_localization_msgs/msg/KinematicState";
}

template<>
struct has_fixed_size<autoware_localization_msgs::msg::KinematicState>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<autoware_localization_msgs::msg::KinematicState>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<autoware_localization_msgs::msg::KinematicState>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // AUTOWARE_LOCALIZATION_MSGS__MSG__DETAIL__KINEMATIC_STATE__TRAITS_HPP_

// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from autoware_auto_perception_msgs:msg/DetectedObjectKinematics.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_AUTO_PERCEPTION_MSGS__MSG__DETAIL__DETECTED_OBJECT_KINEMATICS__TRAITS_HPP_
#define AUTOWARE_AUTO_PERCEPTION_MSGS__MSG__DETAIL__DETECTED_OBJECT_KINEMATICS__TRAITS_HPP_

#include "autoware_auto_perception_msgs/msg/detail/detected_object_kinematics__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'pose_with_covariance'
#include "geometry_msgs/msg/detail/pose_with_covariance__traits.hpp"
// Member 'twist_with_covariance'
#include "geometry_msgs/msg/detail/twist_with_covariance__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const autoware_auto_perception_msgs::msg::DetectedObjectKinematics & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: pose_with_covariance
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pose_with_covariance:\n";
    to_yaml(msg.pose_with_covariance, out, indentation + 2);
  }

  // member: has_position_covariance
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "has_position_covariance: ";
    value_to_yaml(msg.has_position_covariance, out);
    out << "\n";
  }

  // member: orientation_availability
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "orientation_availability: ";
    value_to_yaml(msg.orientation_availability, out);
    out << "\n";
  }

  // member: twist_with_covariance
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "twist_with_covariance:\n";
    to_yaml(msg.twist_with_covariance, out, indentation + 2);
  }

  // member: has_twist
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "has_twist: ";
    value_to_yaml(msg.has_twist, out);
    out << "\n";
  }

  // member: has_twist_covariance
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "has_twist_covariance: ";
    value_to_yaml(msg.has_twist_covariance, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const autoware_auto_perception_msgs::msg::DetectedObjectKinematics & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<autoware_auto_perception_msgs::msg::DetectedObjectKinematics>()
{
  return "autoware_auto_perception_msgs::msg::DetectedObjectKinematics";
}

template<>
inline const char * name<autoware_auto_perception_msgs::msg::DetectedObjectKinematics>()
{
  return "autoware_auto_perception_msgs/msg/DetectedObjectKinematics";
}

template<>
struct has_fixed_size<autoware_auto_perception_msgs::msg::DetectedObjectKinematics>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::PoseWithCovariance>::value && has_fixed_size<geometry_msgs::msg::TwistWithCovariance>::value> {};

template<>
struct has_bounded_size<autoware_auto_perception_msgs::msg::DetectedObjectKinematics>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::PoseWithCovariance>::value && has_bounded_size<geometry_msgs::msg::TwistWithCovariance>::value> {};

template<>
struct is_message<autoware_auto_perception_msgs::msg::DetectedObjectKinematics>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // AUTOWARE_AUTO_PERCEPTION_MSGS__MSG__DETAIL__DETECTED_OBJECT_KINEMATICS__TRAITS_HPP_

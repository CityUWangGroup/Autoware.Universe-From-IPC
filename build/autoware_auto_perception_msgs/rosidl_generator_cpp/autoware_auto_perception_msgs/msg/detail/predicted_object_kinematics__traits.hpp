// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from autoware_auto_perception_msgs:msg/PredictedObjectKinematics.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_AUTO_PERCEPTION_MSGS__MSG__DETAIL__PREDICTED_OBJECT_KINEMATICS__TRAITS_HPP_
#define AUTOWARE_AUTO_PERCEPTION_MSGS__MSG__DETAIL__PREDICTED_OBJECT_KINEMATICS__TRAITS_HPP_

#include "autoware_auto_perception_msgs/msg/detail/predicted_object_kinematics__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'initial_pose_with_covariance'
#include "geometry_msgs/msg/detail/pose_with_covariance__traits.hpp"
// Member 'initial_twist_with_covariance'
#include "geometry_msgs/msg/detail/twist_with_covariance__traits.hpp"
// Member 'initial_acceleration_with_covariance'
#include "geometry_msgs/msg/detail/accel_with_covariance__traits.hpp"
// Member 'predicted_paths'
#include "autoware_auto_perception_msgs/msg/detail/predicted_path__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const autoware_auto_perception_msgs::msg::PredictedObjectKinematics & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: initial_pose_with_covariance
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "initial_pose_with_covariance:\n";
    to_yaml(msg.initial_pose_with_covariance, out, indentation + 2);
  }

  // member: initial_twist_with_covariance
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "initial_twist_with_covariance:\n";
    to_yaml(msg.initial_twist_with_covariance, out, indentation + 2);
  }

  // member: initial_acceleration_with_covariance
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "initial_acceleration_with_covariance:\n";
    to_yaml(msg.initial_acceleration_with_covariance, out, indentation + 2);
  }

  // member: predicted_paths
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.predicted_paths.size() == 0) {
      out << "predicted_paths: []\n";
    } else {
      out << "predicted_paths:\n";
      for (auto item : msg.predicted_paths) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const autoware_auto_perception_msgs::msg::PredictedObjectKinematics & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<autoware_auto_perception_msgs::msg::PredictedObjectKinematics>()
{
  return "autoware_auto_perception_msgs::msg::PredictedObjectKinematics";
}

template<>
inline const char * name<autoware_auto_perception_msgs::msg::PredictedObjectKinematics>()
{
  return "autoware_auto_perception_msgs/msg/PredictedObjectKinematics";
}

template<>
struct has_fixed_size<autoware_auto_perception_msgs::msg::PredictedObjectKinematics>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<autoware_auto_perception_msgs::msg::PredictedObjectKinematics>
  : std::integral_constant<bool, has_bounded_size<autoware_auto_perception_msgs::msg::PredictedPath>::value && has_bounded_size<geometry_msgs::msg::AccelWithCovariance>::value && has_bounded_size<geometry_msgs::msg::PoseWithCovariance>::value && has_bounded_size<geometry_msgs::msg::TwistWithCovariance>::value> {};

template<>
struct is_message<autoware_auto_perception_msgs::msg::PredictedObjectKinematics>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // AUTOWARE_AUTO_PERCEPTION_MSGS__MSG__DETAIL__PREDICTED_OBJECT_KINEMATICS__TRAITS_HPP_

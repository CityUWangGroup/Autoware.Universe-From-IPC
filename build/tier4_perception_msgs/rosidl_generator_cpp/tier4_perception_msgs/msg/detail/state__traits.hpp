// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from tier4_perception_msgs:msg/State.idl
// generated code does not contain a copyright notice

#ifndef TIER4_PERCEPTION_MSGS__MSG__DETAIL__STATE__TRAITS_HPP_
#define TIER4_PERCEPTION_MSGS__MSG__DETAIL__STATE__TRAITS_HPP_

#include "tier4_perception_msgs/msg/detail/state__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'pose_covariance'
#include "geometry_msgs/msg/detail/pose_with_covariance__traits.hpp"
// Member 'twist_covariance'
#include "geometry_msgs/msg/detail/twist_with_covariance__traits.hpp"
// Member 'acceleration_covariance'
#include "geometry_msgs/msg/detail/accel_with_covariance__traits.hpp"
// Member 'predicted_paths'
#include "tier4_perception_msgs/msg/detail/predicted_path__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const tier4_perception_msgs::msg::State & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: pose_covariance
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pose_covariance:\n";
    to_yaml(msg.pose_covariance, out, indentation + 2);
  }

  // member: orientation_reliable
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "orientation_reliable: ";
    value_to_yaml(msg.orientation_reliable, out);
    out << "\n";
  }

  // member: twist_covariance
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "twist_covariance:\n";
    to_yaml(msg.twist_covariance, out, indentation + 2);
  }

  // member: twist_reliable
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "twist_reliable: ";
    value_to_yaml(msg.twist_reliable, out);
    out << "\n";
  }

  // member: acceleration_covariance
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "acceleration_covariance:\n";
    to_yaml(msg.acceleration_covariance, out, indentation + 2);
  }

  // member: acceleration_reliable
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "acceleration_reliable: ";
    value_to_yaml(msg.acceleration_reliable, out);
    out << "\n";
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

inline std::string to_yaml(const tier4_perception_msgs::msg::State & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<tier4_perception_msgs::msg::State>()
{
  return "tier4_perception_msgs::msg::State";
}

template<>
inline const char * name<tier4_perception_msgs::msg::State>()
{
  return "tier4_perception_msgs/msg/State";
}

template<>
struct has_fixed_size<tier4_perception_msgs::msg::State>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<tier4_perception_msgs::msg::State>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<tier4_perception_msgs::msg::State>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // TIER4_PERCEPTION_MSGS__MSG__DETAIL__STATE__TRAITS_HPP_

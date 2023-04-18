// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from autoware_planning_msgs:msg/PoseWithUuid.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_PLANNING_MSGS__MSG__DETAIL__POSE_WITH_UUID__TRAITS_HPP_
#define AUTOWARE_PLANNING_MSGS__MSG__DETAIL__POSE_WITH_UUID__TRAITS_HPP_

#include "autoware_planning_msgs/msg/detail/pose_with_uuid__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'pose'
#include "geometry_msgs/msg/detail/pose__traits.hpp"
// Member 'uuid'
#include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const autoware_planning_msgs::msg::PoseWithUuid & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: pose
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pose:\n";
    to_yaml(msg.pose, out, indentation + 2);
  }

  // member: uuid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "uuid:\n";
    to_yaml(msg.uuid, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const autoware_planning_msgs::msg::PoseWithUuid & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<autoware_planning_msgs::msg::PoseWithUuid>()
{
  return "autoware_planning_msgs::msg::PoseWithUuid";
}

template<>
inline const char * name<autoware_planning_msgs::msg::PoseWithUuid>()
{
  return "autoware_planning_msgs/msg/PoseWithUuid";
}

template<>
struct has_fixed_size<autoware_planning_msgs::msg::PoseWithUuid>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::Pose>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<autoware_planning_msgs::msg::PoseWithUuid>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::Pose>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<autoware_planning_msgs::msg::PoseWithUuid>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // AUTOWARE_PLANNING_MSGS__MSG__DETAIL__POSE_WITH_UUID__TRAITS_HPP_

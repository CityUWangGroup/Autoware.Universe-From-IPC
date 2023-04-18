// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from autoware_auto_planning_msgs:msg/PathPointWithLaneId.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_AUTO_PLANNING_MSGS__MSG__DETAIL__PATH_POINT_WITH_LANE_ID__TRAITS_HPP_
#define AUTOWARE_AUTO_PLANNING_MSGS__MSG__DETAIL__PATH_POINT_WITH_LANE_ID__TRAITS_HPP_

#include "autoware_auto_planning_msgs/msg/detail/path_point_with_lane_id__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'point'
#include "autoware_auto_planning_msgs/msg/detail/path_point__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const autoware_auto_planning_msgs::msg::PathPointWithLaneId & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: point
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "point:\n";
    to_yaml(msg.point, out, indentation + 2);
  }

  // member: lane_ids
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.lane_ids.size() == 0) {
      out << "lane_ids: []\n";
    } else {
      out << "lane_ids:\n";
      for (auto item : msg.lane_ids) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const autoware_auto_planning_msgs::msg::PathPointWithLaneId & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<autoware_auto_planning_msgs::msg::PathPointWithLaneId>()
{
  return "autoware_auto_planning_msgs::msg::PathPointWithLaneId";
}

template<>
inline const char * name<autoware_auto_planning_msgs::msg::PathPointWithLaneId>()
{
  return "autoware_auto_planning_msgs/msg/PathPointWithLaneId";
}

template<>
struct has_fixed_size<autoware_auto_planning_msgs::msg::PathPointWithLaneId>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<autoware_auto_planning_msgs::msg::PathPointWithLaneId>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<autoware_auto_planning_msgs::msg::PathPointWithLaneId>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // AUTOWARE_AUTO_PLANNING_MSGS__MSG__DETAIL__PATH_POINT_WITH_LANE_ID__TRAITS_HPP_

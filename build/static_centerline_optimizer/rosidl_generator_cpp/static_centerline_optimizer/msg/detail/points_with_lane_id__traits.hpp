// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from static_centerline_optimizer:msg/PointsWithLaneId.idl
// generated code does not contain a copyright notice

#ifndef STATIC_CENTERLINE_OPTIMIZER__MSG__DETAIL__POINTS_WITH_LANE_ID__TRAITS_HPP_
#define STATIC_CENTERLINE_OPTIMIZER__MSG__DETAIL__POINTS_WITH_LANE_ID__TRAITS_HPP_

#include "static_centerline_optimizer/msg/detail/points_with_lane_id__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'points'
#include "geometry_msgs/msg/detail/point__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const static_centerline_optimizer::msg::PointsWithLaneId & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: lane_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lane_id: ";
    value_to_yaml(msg.lane_id, out);
    out << "\n";
  }

  // member: points
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.points.size() == 0) {
      out << "points: []\n";
    } else {
      out << "points:\n";
      for (auto item : msg.points) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const static_centerline_optimizer::msg::PointsWithLaneId & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<static_centerline_optimizer::msg::PointsWithLaneId>()
{
  return "static_centerline_optimizer::msg::PointsWithLaneId";
}

template<>
inline const char * name<static_centerline_optimizer::msg::PointsWithLaneId>()
{
  return "static_centerline_optimizer/msg/PointsWithLaneId";
}

template<>
struct has_fixed_size<static_centerline_optimizer::msg::PointsWithLaneId>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<static_centerline_optimizer::msg::PointsWithLaneId>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<static_centerline_optimizer::msg::PointsWithLaneId>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // STATIC_CENTERLINE_OPTIMIZER__MSG__DETAIL__POINTS_WITH_LANE_ID__TRAITS_HPP_

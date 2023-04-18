// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from autoware_map_msgs:msg/PointCloudMapCellWithID.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_MAP_MSGS__MSG__DETAIL__POINT_CLOUD_MAP_CELL_WITH_ID__TRAITS_HPP_
#define AUTOWARE_MAP_MSGS__MSG__DETAIL__POINT_CLOUD_MAP_CELL_WITH_ID__TRAITS_HPP_

#include "autoware_map_msgs/msg/detail/point_cloud_map_cell_with_id__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'pointcloud'
#include "sensor_msgs/msg/detail/point_cloud2__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const autoware_map_msgs::msg::PointCloudMapCellWithID & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: cell_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cell_id: ";
    value_to_yaml(msg.cell_id, out);
    out << "\n";
  }

  // member: pointcloud
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pointcloud:\n";
    to_yaml(msg.pointcloud, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const autoware_map_msgs::msg::PointCloudMapCellWithID & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<autoware_map_msgs::msg::PointCloudMapCellWithID>()
{
  return "autoware_map_msgs::msg::PointCloudMapCellWithID";
}

template<>
inline const char * name<autoware_map_msgs::msg::PointCloudMapCellWithID>()
{
  return "autoware_map_msgs/msg/PointCloudMapCellWithID";
}

template<>
struct has_fixed_size<autoware_map_msgs::msg::PointCloudMapCellWithID>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<autoware_map_msgs::msg::PointCloudMapCellWithID>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<autoware_map_msgs::msg::PointCloudMapCellWithID>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // AUTOWARE_MAP_MSGS__MSG__DETAIL__POINT_CLOUD_MAP_CELL_WITH_ID__TRAITS_HPP_

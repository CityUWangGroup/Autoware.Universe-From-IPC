// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from tier4_perception_msgs:msg/Feature.idl
// generated code does not contain a copyright notice

#ifndef TIER4_PERCEPTION_MSGS__MSG__DETAIL__FEATURE__TRAITS_HPP_
#define TIER4_PERCEPTION_MSGS__MSG__DETAIL__FEATURE__TRAITS_HPP_

#include "tier4_perception_msgs/msg/detail/feature__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'cluster'
#include "sensor_msgs/msg/detail/point_cloud2__traits.hpp"
// Member 'roi'
#include "sensor_msgs/msg/detail/region_of_interest__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const tier4_perception_msgs::msg::Feature & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: cluster
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cluster:\n";
    to_yaml(msg.cluster, out, indentation + 2);
  }

  // member: roi
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "roi:\n";
    to_yaml(msg.roi, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const tier4_perception_msgs::msg::Feature & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<tier4_perception_msgs::msg::Feature>()
{
  return "tier4_perception_msgs::msg::Feature";
}

template<>
inline const char * name<tier4_perception_msgs::msg::Feature>()
{
  return "tier4_perception_msgs/msg/Feature";
}

template<>
struct has_fixed_size<tier4_perception_msgs::msg::Feature>
  : std::integral_constant<bool, has_fixed_size<sensor_msgs::msg::PointCloud2>::value && has_fixed_size<sensor_msgs::msg::RegionOfInterest>::value> {};

template<>
struct has_bounded_size<tier4_perception_msgs::msg::Feature>
  : std::integral_constant<bool, has_bounded_size<sensor_msgs::msg::PointCloud2>::value && has_bounded_size<sensor_msgs::msg::RegionOfInterest>::value> {};

template<>
struct is_message<tier4_perception_msgs::msg::Feature>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // TIER4_PERCEPTION_MSGS__MSG__DETAIL__FEATURE__TRAITS_HPP_

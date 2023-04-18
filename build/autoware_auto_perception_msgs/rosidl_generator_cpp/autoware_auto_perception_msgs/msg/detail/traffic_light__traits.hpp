// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from autoware_auto_perception_msgs:msg/TrafficLight.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_AUTO_PERCEPTION_MSGS__MSG__DETAIL__TRAFFIC_LIGHT__TRAITS_HPP_
#define AUTOWARE_AUTO_PERCEPTION_MSGS__MSG__DETAIL__TRAFFIC_LIGHT__TRAITS_HPP_

#include "autoware_auto_perception_msgs/msg/detail/traffic_light__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const autoware_auto_perception_msgs::msg::TrafficLight & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: color
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "color: ";
    value_to_yaml(msg.color, out);
    out << "\n";
  }

  // member: shape
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "shape: ";
    value_to_yaml(msg.shape, out);
    out << "\n";
  }

  // member: status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status: ";
    value_to_yaml(msg.status, out);
    out << "\n";
  }

  // member: confidence
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "confidence: ";
    value_to_yaml(msg.confidence, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const autoware_auto_perception_msgs::msg::TrafficLight & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<autoware_auto_perception_msgs::msg::TrafficLight>()
{
  return "autoware_auto_perception_msgs::msg::TrafficLight";
}

template<>
inline const char * name<autoware_auto_perception_msgs::msg::TrafficLight>()
{
  return "autoware_auto_perception_msgs/msg/TrafficLight";
}

template<>
struct has_fixed_size<autoware_auto_perception_msgs::msg::TrafficLight>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<autoware_auto_perception_msgs::msg::TrafficLight>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<autoware_auto_perception_msgs::msg::TrafficLight>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // AUTOWARE_AUTO_PERCEPTION_MSGS__MSG__DETAIL__TRAFFIC_LIGHT__TRAITS_HPP_

// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from autoware_auto_perception_msgs:msg/LookingTrafficSignal.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_AUTO_PERCEPTION_MSGS__MSG__DETAIL__LOOKING_TRAFFIC_SIGNAL__TRAITS_HPP_
#define AUTOWARE_AUTO_PERCEPTION_MSGS__MSG__DETAIL__LOOKING_TRAFFIC_SIGNAL__TRAITS_HPP_

#include "autoware_auto_perception_msgs/msg/detail/looking_traffic_signal__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'perception'
// Member 'external'
// Member 'result'
#include "autoware_auto_perception_msgs/msg/detail/traffic_signal_with_judge__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const autoware_auto_perception_msgs::msg::LookingTrafficSignal & msg,
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

  // member: is_module_running
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_module_running: ";
    value_to_yaml(msg.is_module_running, out);
    out << "\n";
  }

  // member: perception
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "perception:\n";
    to_yaml(msg.perception, out, indentation + 2);
  }

  // member: external
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "external:\n";
    to_yaml(msg.external, out, indentation + 2);
  }

  // member: result
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "result:\n";
    to_yaml(msg.result, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const autoware_auto_perception_msgs::msg::LookingTrafficSignal & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<autoware_auto_perception_msgs::msg::LookingTrafficSignal>()
{
  return "autoware_auto_perception_msgs::msg::LookingTrafficSignal";
}

template<>
inline const char * name<autoware_auto_perception_msgs::msg::LookingTrafficSignal>()
{
  return "autoware_auto_perception_msgs/msg/LookingTrafficSignal";
}

template<>
struct has_fixed_size<autoware_auto_perception_msgs::msg::LookingTrafficSignal>
  : std::integral_constant<bool, has_fixed_size<autoware_auto_perception_msgs::msg::TrafficSignalWithJudge>::value && has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<autoware_auto_perception_msgs::msg::LookingTrafficSignal>
  : std::integral_constant<bool, has_bounded_size<autoware_auto_perception_msgs::msg::TrafficSignalWithJudge>::value && has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<autoware_auto_perception_msgs::msg::LookingTrafficSignal>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // AUTOWARE_AUTO_PERCEPTION_MSGS__MSG__DETAIL__LOOKING_TRAFFIC_SIGNAL__TRAITS_HPP_

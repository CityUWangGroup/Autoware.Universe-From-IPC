// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from autoware_auto_perception_msgs:msg/TrafficSignalWithJudge.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_AUTO_PERCEPTION_MSGS__MSG__DETAIL__TRAFFIC_SIGNAL_WITH_JUDGE__TRAITS_HPP_
#define AUTOWARE_AUTO_PERCEPTION_MSGS__MSG__DETAIL__TRAFFIC_SIGNAL_WITH_JUDGE__TRAITS_HPP_

#include "autoware_auto_perception_msgs/msg/detail/traffic_signal_with_judge__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'signal'
#include "autoware_auto_perception_msgs/msg/detail/traffic_signal__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const autoware_auto_perception_msgs::msg::TrafficSignalWithJudge & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: judge
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "judge: ";
    value_to_yaml(msg.judge, out);
    out << "\n";
  }

  // member: has_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "has_state: ";
    value_to_yaml(msg.has_state, out);
    out << "\n";
  }

  // member: signal
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "signal:\n";
    to_yaml(msg.signal, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const autoware_auto_perception_msgs::msg::TrafficSignalWithJudge & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<autoware_auto_perception_msgs::msg::TrafficSignalWithJudge>()
{
  return "autoware_auto_perception_msgs::msg::TrafficSignalWithJudge";
}

template<>
inline const char * name<autoware_auto_perception_msgs::msg::TrafficSignalWithJudge>()
{
  return "autoware_auto_perception_msgs/msg/TrafficSignalWithJudge";
}

template<>
struct has_fixed_size<autoware_auto_perception_msgs::msg::TrafficSignalWithJudge>
  : std::integral_constant<bool, has_fixed_size<autoware_auto_perception_msgs::msg::TrafficSignal>::value> {};

template<>
struct has_bounded_size<autoware_auto_perception_msgs::msg::TrafficSignalWithJudge>
  : std::integral_constant<bool, has_bounded_size<autoware_auto_perception_msgs::msg::TrafficSignal>::value> {};

template<>
struct is_message<autoware_auto_perception_msgs::msg::TrafficSignalWithJudge>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // AUTOWARE_AUTO_PERCEPTION_MSGS__MSG__DETAIL__TRAFFIC_SIGNAL_WITH_JUDGE__TRAITS_HPP_

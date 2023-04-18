// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from tier4_simulation_msgs:msg/SimulationEvents.idl
// generated code does not contain a copyright notice

#ifndef TIER4_SIMULATION_MSGS__MSG__DETAIL__SIMULATION_EVENTS__TRAITS_HPP_
#define TIER4_SIMULATION_MSGS__MSG__DETAIL__SIMULATION_EVENTS__TRAITS_HPP_

#include "tier4_simulation_msgs/msg/detail/simulation_events__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"
// Member 'fault_injection_events'
#include "tier4_simulation_msgs/msg/detail/fault_injection_event__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const tier4_simulation_msgs::msg::SimulationEvents & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: stamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stamp:\n";
    to_yaml(msg.stamp, out, indentation + 2);
  }

  // member: fault_injection_events
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.fault_injection_events.size() == 0) {
      out << "fault_injection_events: []\n";
    } else {
      out << "fault_injection_events:\n";
      for (auto item : msg.fault_injection_events) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const tier4_simulation_msgs::msg::SimulationEvents & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<tier4_simulation_msgs::msg::SimulationEvents>()
{
  return "tier4_simulation_msgs::msg::SimulationEvents";
}

template<>
inline const char * name<tier4_simulation_msgs::msg::SimulationEvents>()
{
  return "tier4_simulation_msgs/msg/SimulationEvents";
}

template<>
struct has_fixed_size<tier4_simulation_msgs::msg::SimulationEvents>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<tier4_simulation_msgs::msg::SimulationEvents>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<tier4_simulation_msgs::msg::SimulationEvents>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // TIER4_SIMULATION_MSGS__MSG__DETAIL__SIMULATION_EVENTS__TRAITS_HPP_

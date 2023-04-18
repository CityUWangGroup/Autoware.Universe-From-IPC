// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from tier4_api_msgs:msg/AwapiAutowareStatus.idl
// generated code does not contain a copyright notice

#ifndef TIER4_API_MSGS__MSG__DETAIL__AWAPI_AUTOWARE_STATUS__TRAITS_HPP_
#define TIER4_API_MSGS__MSG__DETAIL__AWAPI_AUTOWARE_STATUS__TRAITS_HPP_

#include "tier4_api_msgs/msg/detail/awapi_autoware_status__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'hazard_status'
#include "tier4_system_msgs/msg/detail/hazard_status_stamped__traits.hpp"
// Member 'stop_reason'
#include "tier4_planning_msgs/msg/detail/stop_reason_array__traits.hpp"
// Member 'diagnostics'
// Member 'error_diagnostics'
#include "diagnostic_msgs/msg/detail/diagnostic_status__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const tier4_api_msgs::msg::AwapiAutowareStatus & msg,
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

  // member: autoware_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "autoware_state: ";
    value_to_yaml(msg.autoware_state, out);
    out << "\n";
  }

  // member: control_mode
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "control_mode: ";
    value_to_yaml(msg.control_mode, out);
    out << "\n";
  }

  // member: gate_mode
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gate_mode: ";
    value_to_yaml(msg.gate_mode, out);
    out << "\n";
  }

  // member: emergency_stopped
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "emergency_stopped: ";
    value_to_yaml(msg.emergency_stopped, out);
    out << "\n";
  }

  // member: current_max_velocity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "current_max_velocity: ";
    value_to_yaml(msg.current_max_velocity, out);
    out << "\n";
  }

  // member: hazard_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hazard_status:\n";
    to_yaml(msg.hazard_status, out, indentation + 2);
  }

  // member: stop_reason
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stop_reason:\n";
    to_yaml(msg.stop_reason, out, indentation + 2);
  }

  // member: diagnostics
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.diagnostics.size() == 0) {
      out << "diagnostics: []\n";
    } else {
      out << "diagnostics:\n";
      for (auto item : msg.diagnostics) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: error_diagnostics
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.error_diagnostics.size() == 0) {
      out << "error_diagnostics: []\n";
    } else {
      out << "error_diagnostics:\n";
      for (auto item : msg.error_diagnostics) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: autonomous_overridden
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "autonomous_overridden: ";
    value_to_yaml(msg.autonomous_overridden, out);
    out << "\n";
  }

  // member: arrived_goal
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "arrived_goal: ";
    value_to_yaml(msg.arrived_goal, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const tier4_api_msgs::msg::AwapiAutowareStatus & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<tier4_api_msgs::msg::AwapiAutowareStatus>()
{
  return "tier4_api_msgs::msg::AwapiAutowareStatus";
}

template<>
inline const char * name<tier4_api_msgs::msg::AwapiAutowareStatus>()
{
  return "tier4_api_msgs/msg/AwapiAutowareStatus";
}

template<>
struct has_fixed_size<tier4_api_msgs::msg::AwapiAutowareStatus>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<tier4_api_msgs::msg::AwapiAutowareStatus>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<tier4_api_msgs::msg::AwapiAutowareStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // TIER4_API_MSGS__MSG__DETAIL__AWAPI_AUTOWARE_STATUS__TRAITS_HPP_

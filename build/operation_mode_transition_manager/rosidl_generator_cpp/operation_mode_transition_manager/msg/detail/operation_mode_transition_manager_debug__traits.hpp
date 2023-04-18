// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from operation_mode_transition_manager:msg/OperationModeTransitionManagerDebug.idl
// generated code does not contain a copyright notice

#ifndef OPERATION_MODE_TRANSITION_MANAGER__MSG__DETAIL__OPERATION_MODE_TRANSITION_MANAGER_DEBUG__TRAITS_HPP_
#define OPERATION_MODE_TRANSITION_MANAGER__MSG__DETAIL__OPERATION_MODE_TRANSITION_MANAGER_DEBUG__TRAITS_HPP_

#include "operation_mode_transition_manager/msg/detail/operation_mode_transition_manager_debug__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const operation_mode_transition_manager::msg::OperationModeTransitionManagerDebug & msg,
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

  // member: previous_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "previous_state: ";
    value_to_yaml(msg.previous_state, out);
    out << "\n";
  }

  // member: current_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "current_state: ";
    value_to_yaml(msg.current_state, out);
    out << "\n";
  }

  // member: is_all_ok
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_all_ok: ";
    value_to_yaml(msg.is_all_ok, out);
    out << "\n";
  }

  // member: engage_allowed_for_stopped_vehicle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "engage_allowed_for_stopped_vehicle: ";
    value_to_yaml(msg.engage_allowed_for_stopped_vehicle, out);
    out << "\n";
  }

  // member: trajectory_available_ok
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "trajectory_available_ok: ";
    value_to_yaml(msg.trajectory_available_ok, out);
    out << "\n";
  }

  // member: lateral_deviation_ok
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lateral_deviation_ok: ";
    value_to_yaml(msg.lateral_deviation_ok, out);
    out << "\n";
  }

  // member: yaw_deviation_ok
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "yaw_deviation_ok: ";
    value_to_yaml(msg.yaw_deviation_ok, out);
    out << "\n";
  }

  // member: speed_upper_deviation_ok
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "speed_upper_deviation_ok: ";
    value_to_yaml(msg.speed_upper_deviation_ok, out);
    out << "\n";
  }

  // member: speed_lower_deviation_ok
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "speed_lower_deviation_ok: ";
    value_to_yaml(msg.speed_lower_deviation_ok, out);
    out << "\n";
  }

  // member: stop_ok
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stop_ok: ";
    value_to_yaml(msg.stop_ok, out);
    out << "\n";
  }

  // member: large_acceleration_ok
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "large_acceleration_ok: ";
    value_to_yaml(msg.large_acceleration_ok, out);
    out << "\n";
  }

  // member: large_lateral_acceleration_ok
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "large_lateral_acceleration_ok: ";
    value_to_yaml(msg.large_lateral_acceleration_ok, out);
    out << "\n";
  }

  // member: large_lateral_acceleration_diff_ok
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "large_lateral_acceleration_diff_ok: ";
    value_to_yaml(msg.large_lateral_acceleration_diff_ok, out);
    out << "\n";
  }

  // member: current_speed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "current_speed: ";
    value_to_yaml(msg.current_speed, out);
    out << "\n";
  }

  // member: target_control_speed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "target_control_speed: ";
    value_to_yaml(msg.target_control_speed, out);
    out << "\n";
  }

  // member: target_planning_speed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "target_planning_speed: ";
    value_to_yaml(msg.target_planning_speed, out);
    out << "\n";
  }

  // member: target_control_acceleration
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "target_control_acceleration: ";
    value_to_yaml(msg.target_control_acceleration, out);
    out << "\n";
  }

  // member: lateral_acceleration
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lateral_acceleration: ";
    value_to_yaml(msg.lateral_acceleration, out);
    out << "\n";
  }

  // member: lateral_acceleration_deviation
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lateral_acceleration_deviation: ";
    value_to_yaml(msg.lateral_acceleration_deviation, out);
    out << "\n";
  }

  // member: lateral_deviation
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lateral_deviation: ";
    value_to_yaml(msg.lateral_deviation, out);
    out << "\n";
  }

  // member: yaw_deviation
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "yaw_deviation: ";
    value_to_yaml(msg.yaw_deviation, out);
    out << "\n";
  }

  // member: speed_deviation
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "speed_deviation: ";
    value_to_yaml(msg.speed_deviation, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const operation_mode_transition_manager::msg::OperationModeTransitionManagerDebug & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<operation_mode_transition_manager::msg::OperationModeTransitionManagerDebug>()
{
  return "operation_mode_transition_manager::msg::OperationModeTransitionManagerDebug";
}

template<>
inline const char * name<operation_mode_transition_manager::msg::OperationModeTransitionManagerDebug>()
{
  return "operation_mode_transition_manager/msg/OperationModeTransitionManagerDebug";
}

template<>
struct has_fixed_size<operation_mode_transition_manager::msg::OperationModeTransitionManagerDebug>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<operation_mode_transition_manager::msg::OperationModeTransitionManagerDebug>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<operation_mode_transition_manager::msg::OperationModeTransitionManagerDebug>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // OPERATION_MODE_TRANSITION_MANAGER__MSG__DETAIL__OPERATION_MODE_TRANSITION_MANAGER_DEBUG__TRAITS_HPP_

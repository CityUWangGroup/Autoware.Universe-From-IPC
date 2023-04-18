// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from control_performance_analysis:msg/Error.idl
// generated code does not contain a copyright notice

#ifndef CONTROL_PERFORMANCE_ANALYSIS__MSG__DETAIL__ERROR__TRAITS_HPP_
#define CONTROL_PERFORMANCE_ANALYSIS__MSG__DETAIL__ERROR__TRAITS_HPP_

#include "control_performance_analysis/msg/detail/error__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const control_performance_analysis::msg::Error & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: lateral_error
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lateral_error: ";
    value_to_yaml(msg.lateral_error, out);
    out << "\n";
  }

  // member: lateral_error_velocity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lateral_error_velocity: ";
    value_to_yaml(msg.lateral_error_velocity, out);
    out << "\n";
  }

  // member: lateral_error_acceleration
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lateral_error_acceleration: ";
    value_to_yaml(msg.lateral_error_acceleration, out);
    out << "\n";
  }

  // member: longitudinal_error
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "longitudinal_error: ";
    value_to_yaml(msg.longitudinal_error, out);
    out << "\n";
  }

  // member: longitudinal_error_velocity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "longitudinal_error_velocity: ";
    value_to_yaml(msg.longitudinal_error_velocity, out);
    out << "\n";
  }

  // member: longitudinal_error_acceleration
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "longitudinal_error_acceleration: ";
    value_to_yaml(msg.longitudinal_error_acceleration, out);
    out << "\n";
  }

  // member: heading_error
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "heading_error: ";
    value_to_yaml(msg.heading_error, out);
    out << "\n";
  }

  // member: heading_error_velocity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "heading_error_velocity: ";
    value_to_yaml(msg.heading_error_velocity, out);
    out << "\n";
  }

  // member: control_effort_energy
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "control_effort_energy: ";
    value_to_yaml(msg.control_effort_energy, out);
    out << "\n";
  }

  // member: error_energy
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "error_energy: ";
    value_to_yaml(msg.error_energy, out);
    out << "\n";
  }

  // member: value_approximation
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "value_approximation: ";
    value_to_yaml(msg.value_approximation, out);
    out << "\n";
  }

  // member: curvature_estimate
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "curvature_estimate: ";
    value_to_yaml(msg.curvature_estimate, out);
    out << "\n";
  }

  // member: curvature_estimate_pp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "curvature_estimate_pp: ";
    value_to_yaml(msg.curvature_estimate_pp, out);
    out << "\n";
  }

  // member: vehicle_velocity_error
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vehicle_velocity_error: ";
    value_to_yaml(msg.vehicle_velocity_error, out);
    out << "\n";
  }

  // member: tracking_curvature_discontinuity_ability
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "tracking_curvature_discontinuity_ability: ";
    value_to_yaml(msg.tracking_curvature_discontinuity_ability, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const control_performance_analysis::msg::Error & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<control_performance_analysis::msg::Error>()
{
  return "control_performance_analysis::msg::Error";
}

template<>
inline const char * name<control_performance_analysis::msg::Error>()
{
  return "control_performance_analysis/msg/Error";
}

template<>
struct has_fixed_size<control_performance_analysis::msg::Error>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<control_performance_analysis::msg::Error>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<control_performance_analysis::msg::Error>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CONTROL_PERFORMANCE_ANALYSIS__MSG__DETAIL__ERROR__TRAITS_HPP_

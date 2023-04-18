// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from autoware_auto_system_msgs:msg/HazardStatus.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_AUTO_SYSTEM_MSGS__MSG__DETAIL__HAZARD_STATUS__TRAITS_HPP_
#define AUTOWARE_AUTO_SYSTEM_MSGS__MSG__DETAIL__HAZARD_STATUS__TRAITS_HPP_

#include "autoware_auto_system_msgs/msg/detail/hazard_status__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'diag_no_fault'
// Member 'diag_safe_fault'
// Member 'diag_latent_fault'
// Member 'diag_single_point_fault'
#include "diagnostic_msgs/msg/detail/diagnostic_status__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const autoware_auto_system_msgs::msg::HazardStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: level
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "level: ";
    value_to_yaml(msg.level, out);
    out << "\n";
  }

  // member: emergency
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "emergency: ";
    value_to_yaml(msg.emergency, out);
    out << "\n";
  }

  // member: emergency_holding
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "emergency_holding: ";
    value_to_yaml(msg.emergency_holding, out);
    out << "\n";
  }

  // member: diag_no_fault
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.diag_no_fault.size() == 0) {
      out << "diag_no_fault: []\n";
    } else {
      out << "diag_no_fault:\n";
      for (auto item : msg.diag_no_fault) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: diag_safe_fault
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.diag_safe_fault.size() == 0) {
      out << "diag_safe_fault: []\n";
    } else {
      out << "diag_safe_fault:\n";
      for (auto item : msg.diag_safe_fault) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: diag_latent_fault
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.diag_latent_fault.size() == 0) {
      out << "diag_latent_fault: []\n";
    } else {
      out << "diag_latent_fault:\n";
      for (auto item : msg.diag_latent_fault) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: diag_single_point_fault
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.diag_single_point_fault.size() == 0) {
      out << "diag_single_point_fault: []\n";
    } else {
      out << "diag_single_point_fault:\n";
      for (auto item : msg.diag_single_point_fault) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const autoware_auto_system_msgs::msg::HazardStatus & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<autoware_auto_system_msgs::msg::HazardStatus>()
{
  return "autoware_auto_system_msgs::msg::HazardStatus";
}

template<>
inline const char * name<autoware_auto_system_msgs::msg::HazardStatus>()
{
  return "autoware_auto_system_msgs/msg/HazardStatus";
}

template<>
struct has_fixed_size<autoware_auto_system_msgs::msg::HazardStatus>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<autoware_auto_system_msgs::msg::HazardStatus>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<autoware_auto_system_msgs::msg::HazardStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // AUTOWARE_AUTO_SYSTEM_MSGS__MSG__DETAIL__HAZARD_STATUS__TRAITS_HPP_

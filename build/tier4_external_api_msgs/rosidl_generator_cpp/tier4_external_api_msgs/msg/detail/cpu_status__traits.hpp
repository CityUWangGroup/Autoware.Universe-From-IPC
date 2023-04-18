// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from tier4_external_api_msgs:msg/CpuStatus.idl
// generated code does not contain a copyright notice

#ifndef TIER4_EXTERNAL_API_MSGS__MSG__DETAIL__CPU_STATUS__TRAITS_HPP_
#define TIER4_EXTERNAL_API_MSGS__MSG__DETAIL__CPU_STATUS__TRAITS_HPP_

#include "tier4_external_api_msgs/msg/detail/cpu_status__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const tier4_external_api_msgs::msg::CpuStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status: ";
    value_to_yaml(msg.status, out);
    out << "\n";
  }

  // member: total
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "total: ";
    value_to_yaml(msg.total, out);
    out << "\n";
  }

  // member: usr
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "usr: ";
    value_to_yaml(msg.usr, out);
    out << "\n";
  }

  // member: nice
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "nice: ";
    value_to_yaml(msg.nice, out);
    out << "\n";
  }

  // member: sys
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sys: ";
    value_to_yaml(msg.sys, out);
    out << "\n";
  }

  // member: idle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "idle: ";
    value_to_yaml(msg.idle, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const tier4_external_api_msgs::msg::CpuStatus & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<tier4_external_api_msgs::msg::CpuStatus>()
{
  return "tier4_external_api_msgs::msg::CpuStatus";
}

template<>
inline const char * name<tier4_external_api_msgs::msg::CpuStatus>()
{
  return "tier4_external_api_msgs/msg/CpuStatus";
}

template<>
struct has_fixed_size<tier4_external_api_msgs::msg::CpuStatus>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<tier4_external_api_msgs::msg::CpuStatus>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<tier4_external_api_msgs::msg::CpuStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // TIER4_EXTERNAL_API_MSGS__MSG__DETAIL__CPU_STATUS__TRAITS_HPP_

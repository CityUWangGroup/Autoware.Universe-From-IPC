// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from tier4_system_msgs:msg/ServiceLog.idl
// generated code does not contain a copyright notice

#ifndef TIER4_SYSTEM_MSGS__MSG__DETAIL__SERVICE_LOG__TRAITS_HPP_
#define TIER4_SYSTEM_MSGS__MSG__DETAIL__SERVICE_LOG__TRAITS_HPP_

#include "tier4_system_msgs/msg/detail/service_log__struct.hpp"
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
  const tier4_system_msgs::msg::ServiceLog & msg,
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

  // member: type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "type: ";
    value_to_yaml(msg.type, out);
    out << "\n";
  }

  // member: name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "name: ";
    value_to_yaml(msg.name, out);
    out << "\n";
  }

  // member: node
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "node: ";
    value_to_yaml(msg.node, out);
    out << "\n";
  }

  // member: yaml
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "yaml: ";
    value_to_yaml(msg.yaml, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const tier4_system_msgs::msg::ServiceLog & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<tier4_system_msgs::msg::ServiceLog>()
{
  return "tier4_system_msgs::msg::ServiceLog";
}

template<>
inline const char * name<tier4_system_msgs::msg::ServiceLog>()
{
  return "tier4_system_msgs/msg/ServiceLog";
}

template<>
struct has_fixed_size<tier4_system_msgs::msg::ServiceLog>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<tier4_system_msgs::msg::ServiceLog>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<tier4_system_msgs::msg::ServiceLog>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // TIER4_SYSTEM_MSGS__MSG__DETAIL__SERVICE_LOG__TRAITS_HPP_

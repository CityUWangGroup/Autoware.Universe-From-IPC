// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from tier4_v2x_msgs:msg/InfrastructureCommand.idl
// generated code does not contain a copyright notice

#ifndef TIER4_V2X_MSGS__MSG__DETAIL__INFRASTRUCTURE_COMMAND__TRAITS_HPP_
#define TIER4_V2X_MSGS__MSG__DETAIL__INFRASTRUCTURE_COMMAND__TRAITS_HPP_

#include "tier4_v2x_msgs/msg/detail/infrastructure_command__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"
// Member 'custom_tags'
#include "tier4_v2x_msgs/msg/detail/key_value__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const tier4_v2x_msgs::msg::InfrastructureCommand & msg,
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

  // member: id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "id: ";
    value_to_yaml(msg.id, out);
    out << "\n";
  }

  // member: custom_tags
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.custom_tags.size() == 0) {
      out << "custom_tags: []\n";
    } else {
      out << "custom_tags:\n";
      for (auto item : msg.custom_tags) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "state: ";
    value_to_yaml(msg.state, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const tier4_v2x_msgs::msg::InfrastructureCommand & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<tier4_v2x_msgs::msg::InfrastructureCommand>()
{
  return "tier4_v2x_msgs::msg::InfrastructureCommand";
}

template<>
inline const char * name<tier4_v2x_msgs::msg::InfrastructureCommand>()
{
  return "tier4_v2x_msgs/msg/InfrastructureCommand";
}

template<>
struct has_fixed_size<tier4_v2x_msgs::msg::InfrastructureCommand>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<tier4_v2x_msgs::msg::InfrastructureCommand>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<tier4_v2x_msgs::msg::InfrastructureCommand>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // TIER4_V2X_MSGS__MSG__DETAIL__INFRASTRUCTURE_COMMAND__TRAITS_HPP_

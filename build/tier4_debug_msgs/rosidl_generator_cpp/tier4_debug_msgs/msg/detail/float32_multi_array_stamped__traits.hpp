// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from tier4_debug_msgs:msg/Float32MultiArrayStamped.idl
// generated code does not contain a copyright notice

#ifndef TIER4_DEBUG_MSGS__MSG__DETAIL__FLOAT32_MULTI_ARRAY_STAMPED__TRAITS_HPP_
#define TIER4_DEBUG_MSGS__MSG__DETAIL__FLOAT32_MULTI_ARRAY_STAMPED__TRAITS_HPP_

#include "tier4_debug_msgs/msg/detail/float32_multi_array_stamped__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"
// Member 'layout'
#include "tier4_debug_msgs/msg/detail/multi_array_layout__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const tier4_debug_msgs::msg::Float32MultiArrayStamped & msg,
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

  // member: layout
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "layout:\n";
    to_yaml(msg.layout, out, indentation + 2);
  }

  // member: data
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.data.size() == 0) {
      out << "data: []\n";
    } else {
      out << "data:\n";
      for (auto item : msg.data) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const tier4_debug_msgs::msg::Float32MultiArrayStamped & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<tier4_debug_msgs::msg::Float32MultiArrayStamped>()
{
  return "tier4_debug_msgs::msg::Float32MultiArrayStamped";
}

template<>
inline const char * name<tier4_debug_msgs::msg::Float32MultiArrayStamped>()
{
  return "tier4_debug_msgs/msg/Float32MultiArrayStamped";
}

template<>
struct has_fixed_size<tier4_debug_msgs::msg::Float32MultiArrayStamped>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<tier4_debug_msgs::msg::Float32MultiArrayStamped>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<tier4_debug_msgs::msg::Float32MultiArrayStamped>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // TIER4_DEBUG_MSGS__MSG__DETAIL__FLOAT32_MULTI_ARRAY_STAMPED__TRAITS_HPP_

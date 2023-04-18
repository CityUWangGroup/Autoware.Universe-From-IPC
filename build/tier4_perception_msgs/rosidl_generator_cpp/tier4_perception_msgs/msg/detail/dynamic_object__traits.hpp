// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from tier4_perception_msgs:msg/DynamicObject.idl
// generated code does not contain a copyright notice

#ifndef TIER4_PERCEPTION_MSGS__MSG__DETAIL__DYNAMIC_OBJECT__TRAITS_HPP_
#define TIER4_PERCEPTION_MSGS__MSG__DETAIL__DYNAMIC_OBJECT__TRAITS_HPP_

#include "tier4_perception_msgs/msg/detail/dynamic_object__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'id'
#include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'semantic'
#include "tier4_perception_msgs/msg/detail/semantic__traits.hpp"
// Member 'state'
#include "tier4_perception_msgs/msg/detail/state__traits.hpp"
// Member 'shape'
#include "tier4_perception_msgs/msg/detail/shape__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const tier4_perception_msgs::msg::DynamicObject & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "id:\n";
    to_yaml(msg.id, out, indentation + 2);
  }

  // member: semantic
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "semantic:\n";
    to_yaml(msg.semantic, out, indentation + 2);
  }

  // member: state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "state:\n";
    to_yaml(msg.state, out, indentation + 2);
  }

  // member: shape
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "shape:\n";
    to_yaml(msg.shape, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const tier4_perception_msgs::msg::DynamicObject & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<tier4_perception_msgs::msg::DynamicObject>()
{
  return "tier4_perception_msgs::msg::DynamicObject";
}

template<>
inline const char * name<tier4_perception_msgs::msg::DynamicObject>()
{
  return "tier4_perception_msgs/msg/DynamicObject";
}

template<>
struct has_fixed_size<tier4_perception_msgs::msg::DynamicObject>
  : std::integral_constant<bool, has_fixed_size<tier4_perception_msgs::msg::Semantic>::value && has_fixed_size<tier4_perception_msgs::msg::Shape>::value && has_fixed_size<tier4_perception_msgs::msg::State>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<tier4_perception_msgs::msg::DynamicObject>
  : std::integral_constant<bool, has_bounded_size<tier4_perception_msgs::msg::Semantic>::value && has_bounded_size<tier4_perception_msgs::msg::Shape>::value && has_bounded_size<tier4_perception_msgs::msg::State>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<tier4_perception_msgs::msg::DynamicObject>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // TIER4_PERCEPTION_MSGS__MSG__DETAIL__DYNAMIC_OBJECT__TRAITS_HPP_

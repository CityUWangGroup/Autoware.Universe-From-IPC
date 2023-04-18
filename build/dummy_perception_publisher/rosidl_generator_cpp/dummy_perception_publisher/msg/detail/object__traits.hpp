// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from dummy_perception_publisher:msg/Object.idl
// generated code does not contain a copyright notice

#ifndef DUMMY_PERCEPTION_PUBLISHER__MSG__DETAIL__OBJECT__TRAITS_HPP_
#define DUMMY_PERCEPTION_PUBLISHER__MSG__DETAIL__OBJECT__TRAITS_HPP_

#include "dummy_perception_publisher/msg/detail/object__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'id'
#include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'initial_state'
#include "dummy_perception_publisher/msg/detail/initial_state__traits.hpp"
// Member 'classification'
#include "autoware_auto_perception_msgs/msg/detail/object_classification__traits.hpp"
// Member 'shape'
#include "autoware_auto_perception_msgs/msg/detail/shape__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const dummy_perception_publisher::msg::Object & msg,
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

  // member: id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "id:\n";
    to_yaml(msg.id, out, indentation + 2);
  }

  // member: initial_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "initial_state:\n";
    to_yaml(msg.initial_state, out, indentation + 2);
  }

  // member: classification
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "classification:\n";
    to_yaml(msg.classification, out, indentation + 2);
  }

  // member: shape
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "shape:\n";
    to_yaml(msg.shape, out, indentation + 2);
  }

  // member: max_velocity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "max_velocity: ";
    value_to_yaml(msg.max_velocity, out);
    out << "\n";
  }

  // member: min_velocity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "min_velocity: ";
    value_to_yaml(msg.min_velocity, out);
    out << "\n";
  }

  // member: action
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "action: ";
    value_to_yaml(msg.action, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const dummy_perception_publisher::msg::Object & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<dummy_perception_publisher::msg::Object>()
{
  return "dummy_perception_publisher::msg::Object";
}

template<>
inline const char * name<dummy_perception_publisher::msg::Object>()
{
  return "dummy_perception_publisher/msg/Object";
}

template<>
struct has_fixed_size<dummy_perception_publisher::msg::Object>
  : std::integral_constant<bool, has_fixed_size<autoware_auto_perception_msgs::msg::ObjectClassification>::value && has_fixed_size<autoware_auto_perception_msgs::msg::Shape>::value && has_fixed_size<dummy_perception_publisher::msg::InitialState>::value && has_fixed_size<std_msgs::msg::Header>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<dummy_perception_publisher::msg::Object>
  : std::integral_constant<bool, has_bounded_size<autoware_auto_perception_msgs::msg::ObjectClassification>::value && has_bounded_size<autoware_auto_perception_msgs::msg::Shape>::value && has_bounded_size<dummy_perception_publisher::msg::InitialState>::value && has_bounded_size<std_msgs::msg::Header>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<dummy_perception_publisher::msg::Object>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DUMMY_PERCEPTION_PUBLISHER__MSG__DETAIL__OBJECT__TRAITS_HPP_

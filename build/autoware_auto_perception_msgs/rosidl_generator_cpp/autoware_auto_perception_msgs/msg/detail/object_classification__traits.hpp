// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from autoware_auto_perception_msgs:msg/ObjectClassification.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_AUTO_PERCEPTION_MSGS__MSG__DETAIL__OBJECT_CLASSIFICATION__TRAITS_HPP_
#define AUTOWARE_AUTO_PERCEPTION_MSGS__MSG__DETAIL__OBJECT_CLASSIFICATION__TRAITS_HPP_

#include "autoware_auto_perception_msgs/msg/detail/object_classification__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const autoware_auto_perception_msgs::msg::ObjectClassification & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: label
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "label: ";
    value_to_yaml(msg.label, out);
    out << "\n";
  }

  // member: probability
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "probability: ";
    value_to_yaml(msg.probability, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const autoware_auto_perception_msgs::msg::ObjectClassification & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<autoware_auto_perception_msgs::msg::ObjectClassification>()
{
  return "autoware_auto_perception_msgs::msg::ObjectClassification";
}

template<>
inline const char * name<autoware_auto_perception_msgs::msg::ObjectClassification>()
{
  return "autoware_auto_perception_msgs/msg/ObjectClassification";
}

template<>
struct has_fixed_size<autoware_auto_perception_msgs::msg::ObjectClassification>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<autoware_auto_perception_msgs::msg::ObjectClassification>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<autoware_auto_perception_msgs::msg::ObjectClassification>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // AUTOWARE_AUTO_PERCEPTION_MSGS__MSG__DETAIL__OBJECT_CLASSIFICATION__TRAITS_HPP_

// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from autoware_auto_perception_msgs:msg/DetectedObject.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_AUTO_PERCEPTION_MSGS__MSG__DETAIL__DETECTED_OBJECT__TRAITS_HPP_
#define AUTOWARE_AUTO_PERCEPTION_MSGS__MSG__DETAIL__DETECTED_OBJECT__TRAITS_HPP_

#include "autoware_auto_perception_msgs/msg/detail/detected_object__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'classification'
#include "autoware_auto_perception_msgs/msg/detail/object_classification__traits.hpp"
// Member 'kinematics'
#include "autoware_auto_perception_msgs/msg/detail/detected_object_kinematics__traits.hpp"
// Member 'shape'
#include "autoware_auto_perception_msgs/msg/detail/shape__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const autoware_auto_perception_msgs::msg::DetectedObject & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: existence_probability
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "existence_probability: ";
    value_to_yaml(msg.existence_probability, out);
    out << "\n";
  }

  // member: classification
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.classification.size() == 0) {
      out << "classification: []\n";
    } else {
      out << "classification:\n";
      for (auto item : msg.classification) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: kinematics
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "kinematics:\n";
    to_yaml(msg.kinematics, out, indentation + 2);
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

inline std::string to_yaml(const autoware_auto_perception_msgs::msg::DetectedObject & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<autoware_auto_perception_msgs::msg::DetectedObject>()
{
  return "autoware_auto_perception_msgs::msg::DetectedObject";
}

template<>
inline const char * name<autoware_auto_perception_msgs::msg::DetectedObject>()
{
  return "autoware_auto_perception_msgs/msg/DetectedObject";
}

template<>
struct has_fixed_size<autoware_auto_perception_msgs::msg::DetectedObject>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<autoware_auto_perception_msgs::msg::DetectedObject>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<autoware_auto_perception_msgs::msg::DetectedObject>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // AUTOWARE_AUTO_PERCEPTION_MSGS__MSG__DETAIL__DETECTED_OBJECT__TRAITS_HPP_

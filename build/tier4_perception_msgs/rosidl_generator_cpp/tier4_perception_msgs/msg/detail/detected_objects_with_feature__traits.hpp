// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from tier4_perception_msgs:msg/DetectedObjectsWithFeature.idl
// generated code does not contain a copyright notice

#ifndef TIER4_PERCEPTION_MSGS__MSG__DETAIL__DETECTED_OBJECTS_WITH_FEATURE__TRAITS_HPP_
#define TIER4_PERCEPTION_MSGS__MSG__DETAIL__DETECTED_OBJECTS_WITH_FEATURE__TRAITS_HPP_

#include "tier4_perception_msgs/msg/detail/detected_objects_with_feature__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'feature_objects'
#include "tier4_perception_msgs/msg/detail/detected_object_with_feature__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const tier4_perception_msgs::msg::DetectedObjectsWithFeature & msg,
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

  // member: feature_objects
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.feature_objects.size() == 0) {
      out << "feature_objects: []\n";
    } else {
      out << "feature_objects:\n";
      for (auto item : msg.feature_objects) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const tier4_perception_msgs::msg::DetectedObjectsWithFeature & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<tier4_perception_msgs::msg::DetectedObjectsWithFeature>()
{
  return "tier4_perception_msgs::msg::DetectedObjectsWithFeature";
}

template<>
inline const char * name<tier4_perception_msgs::msg::DetectedObjectsWithFeature>()
{
  return "tier4_perception_msgs/msg/DetectedObjectsWithFeature";
}

template<>
struct has_fixed_size<tier4_perception_msgs::msg::DetectedObjectsWithFeature>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<tier4_perception_msgs::msg::DetectedObjectsWithFeature>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<tier4_perception_msgs::msg::DetectedObjectsWithFeature>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // TIER4_PERCEPTION_MSGS__MSG__DETAIL__DETECTED_OBJECTS_WITH_FEATURE__TRAITS_HPP_

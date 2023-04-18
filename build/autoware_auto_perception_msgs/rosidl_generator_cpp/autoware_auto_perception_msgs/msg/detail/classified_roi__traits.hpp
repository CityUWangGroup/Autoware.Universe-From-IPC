// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from autoware_auto_perception_msgs:msg/ClassifiedRoi.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_AUTO_PERCEPTION_MSGS__MSG__DETAIL__CLASSIFIED_ROI__TRAITS_HPP_
#define AUTOWARE_AUTO_PERCEPTION_MSGS__MSG__DETAIL__CLASSIFIED_ROI__TRAITS_HPP_

#include "autoware_auto_perception_msgs/msg/detail/classified_roi__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'classifications'
#include "autoware_auto_perception_msgs/msg/detail/object_classification__traits.hpp"
// Member 'polygon'
#include "geometry_msgs/msg/detail/polygon__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const autoware_auto_perception_msgs::msg::ClassifiedRoi & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: classifications
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.classifications.size() == 0) {
      out << "classifications: []\n";
    } else {
      out << "classifications:\n";
      for (auto item : msg.classifications) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: polygon
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "polygon:\n";
    to_yaml(msg.polygon, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const autoware_auto_perception_msgs::msg::ClassifiedRoi & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<autoware_auto_perception_msgs::msg::ClassifiedRoi>()
{
  return "autoware_auto_perception_msgs::msg::ClassifiedRoi";
}

template<>
inline const char * name<autoware_auto_perception_msgs::msg::ClassifiedRoi>()
{
  return "autoware_auto_perception_msgs/msg/ClassifiedRoi";
}

template<>
struct has_fixed_size<autoware_auto_perception_msgs::msg::ClassifiedRoi>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<autoware_auto_perception_msgs::msg::ClassifiedRoi>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<autoware_auto_perception_msgs::msg::ClassifiedRoi>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // AUTOWARE_AUTO_PERCEPTION_MSGS__MSG__DETAIL__CLASSIFIED_ROI__TRAITS_HPP_

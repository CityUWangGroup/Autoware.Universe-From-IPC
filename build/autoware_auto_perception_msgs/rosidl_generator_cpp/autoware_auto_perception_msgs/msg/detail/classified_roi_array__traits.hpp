// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from autoware_auto_perception_msgs:msg/ClassifiedRoiArray.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_AUTO_PERCEPTION_MSGS__MSG__DETAIL__CLASSIFIED_ROI_ARRAY__TRAITS_HPP_
#define AUTOWARE_AUTO_PERCEPTION_MSGS__MSG__DETAIL__CLASSIFIED_ROI_ARRAY__TRAITS_HPP_

#include "autoware_auto_perception_msgs/msg/detail/classified_roi_array__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'rois'
#include "autoware_auto_perception_msgs/msg/detail/classified_roi__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const autoware_auto_perception_msgs::msg::ClassifiedRoiArray & msg,
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

  // member: rois
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.rois.size() == 0) {
      out << "rois: []\n";
    } else {
      out << "rois:\n";
      for (auto item : msg.rois) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const autoware_auto_perception_msgs::msg::ClassifiedRoiArray & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<autoware_auto_perception_msgs::msg::ClassifiedRoiArray>()
{
  return "autoware_auto_perception_msgs::msg::ClassifiedRoiArray";
}

template<>
inline const char * name<autoware_auto_perception_msgs::msg::ClassifiedRoiArray>()
{
  return "autoware_auto_perception_msgs/msg/ClassifiedRoiArray";
}

template<>
struct has_fixed_size<autoware_auto_perception_msgs::msg::ClassifiedRoiArray>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<autoware_auto_perception_msgs::msg::ClassifiedRoiArray>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<autoware_auto_perception_msgs::msg::ClassifiedRoiArray>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // AUTOWARE_AUTO_PERCEPTION_MSGS__MSG__DETAIL__CLASSIFIED_ROI_ARRAY__TRAITS_HPP_

// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from autoware_auto_mapping_msgs:msg/HADMapSegment.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_AUTO_MAPPING_MSGS__MSG__DETAIL__HAD_MAP_SEGMENT__TRAITS_HPP_
#define AUTOWARE_AUTO_MAPPING_MSGS__MSG__DETAIL__HAD_MAP_SEGMENT__TRAITS_HPP_

#include "autoware_auto_mapping_msgs/msg/detail/had_map_segment__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'primitives'
#include "autoware_auto_mapping_msgs/msg/detail/map_primitive__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const autoware_auto_mapping_msgs::msg::HADMapSegment & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: primitives
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.primitives.size() == 0) {
      out << "primitives: []\n";
    } else {
      out << "primitives:\n";
      for (auto item : msg.primitives) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: preferred_primitive_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "preferred_primitive_id: ";
    value_to_yaml(msg.preferred_primitive_id, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const autoware_auto_mapping_msgs::msg::HADMapSegment & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<autoware_auto_mapping_msgs::msg::HADMapSegment>()
{
  return "autoware_auto_mapping_msgs::msg::HADMapSegment";
}

template<>
inline const char * name<autoware_auto_mapping_msgs::msg::HADMapSegment>()
{
  return "autoware_auto_mapping_msgs/msg/HADMapSegment";
}

template<>
struct has_fixed_size<autoware_auto_mapping_msgs::msg::HADMapSegment>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<autoware_auto_mapping_msgs::msg::HADMapSegment>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<autoware_auto_mapping_msgs::msg::HADMapSegment>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // AUTOWARE_AUTO_MAPPING_MSGS__MSG__DETAIL__HAD_MAP_SEGMENT__TRAITS_HPP_

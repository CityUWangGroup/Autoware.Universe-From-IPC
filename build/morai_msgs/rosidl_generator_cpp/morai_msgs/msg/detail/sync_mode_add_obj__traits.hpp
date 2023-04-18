// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from morai_msgs:msg/SyncModeAddObj.idl
// generated code does not contain a copyright notice

#ifndef MORAI_MSGS__MSG__DETAIL__SYNC_MODE_ADD_OBJ__TRAITS_HPP_
#define MORAI_MSGS__MSG__DETAIL__SYNC_MODE_ADD_OBJ__TRAITS_HPP_

#include "morai_msgs/msg/detail/sync_mode_add_obj__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'position'
#include "geometry_msgs/msg/detail/vector3__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const morai_msgs::msg::SyncModeAddObj & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "name: ";
    value_to_yaml(msg.name, out);
    out << "\n";
  }

  // member: position
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "position:\n";
    to_yaml(msg.position, out, indentation + 2);
  }

  // member: heading
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "heading: ";
    value_to_yaml(msg.heading, out);
    out << "\n";
  }

  // member: frame
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "frame: ";
    value_to_yaml(msg.frame, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const morai_msgs::msg::SyncModeAddObj & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<morai_msgs::msg::SyncModeAddObj>()
{
  return "morai_msgs::msg::SyncModeAddObj";
}

template<>
inline const char * name<morai_msgs::msg::SyncModeAddObj>()
{
  return "morai_msgs/msg/SyncModeAddObj";
}

template<>
struct has_fixed_size<morai_msgs::msg::SyncModeAddObj>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<morai_msgs::msg::SyncModeAddObj>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<morai_msgs::msg::SyncModeAddObj>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MORAI_MSGS__MSG__DETAIL__SYNC_MODE_ADD_OBJ__TRAITS_HPP_

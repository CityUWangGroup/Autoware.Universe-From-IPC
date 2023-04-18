// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from morai_msgs:msg/CollisionData.idl
// generated code does not contain a copyright notice

#ifndef MORAI_MSGS__MSG__DETAIL__COLLISION_DATA__TRAITS_HPP_
#define MORAI_MSGS__MSG__DETAIL__COLLISION_DATA__TRAITS_HPP_

#include "morai_msgs/msg/detail/collision_data__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'collision_object'
#include "morai_msgs/msg/detail/object_status__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const morai_msgs::msg::CollisionData & msg,
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

  // member: global_offset_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "global_offset_x: ";
    value_to_yaml(msg.global_offset_x, out);
    out << "\n";
  }

  // member: global_offset_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "global_offset_y: ";
    value_to_yaml(msg.global_offset_y, out);
    out << "\n";
  }

  // member: global_offset_z
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "global_offset_z: ";
    value_to_yaml(msg.global_offset_z, out);
    out << "\n";
  }

  // member: collision_object
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.collision_object.size() == 0) {
      out << "collision_object: []\n";
    } else {
      out << "collision_object:\n";
      for (auto item : msg.collision_object) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const morai_msgs::msg::CollisionData & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<morai_msgs::msg::CollisionData>()
{
  return "morai_msgs::msg::CollisionData";
}

template<>
inline const char * name<morai_msgs::msg::CollisionData>()
{
  return "morai_msgs/msg/CollisionData";
}

template<>
struct has_fixed_size<morai_msgs::msg::CollisionData>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<morai_msgs::msg::CollisionData>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<morai_msgs::msg::CollisionData>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MORAI_MSGS__MSG__DETAIL__COLLISION_DATA__TRAITS_HPP_

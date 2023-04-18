// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from morai_msgs:msg/NpcGhostInfo.idl
// generated code does not contain a copyright notice

#ifndef MORAI_MSGS__MSG__DETAIL__NPC_GHOST_INFO__TRAITS_HPP_
#define MORAI_MSGS__MSG__DETAIL__NPC_GHOST_INFO__TRAITS_HPP_

#include "morai_msgs/msg/detail/npc_ghost_info__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'position'
// Member 'rpy'
#include "geometry_msgs/msg/detail/vector3__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const morai_msgs::msg::NpcGhostInfo & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: unique_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "unique_id: ";
    value_to_yaml(msg.unique_id, out);
    out << "\n";
  }

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

  // member: rpy
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rpy:\n";
    to_yaml(msg.rpy, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const morai_msgs::msg::NpcGhostInfo & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<morai_msgs::msg::NpcGhostInfo>()
{
  return "morai_msgs::msg::NpcGhostInfo";
}

template<>
inline const char * name<morai_msgs::msg::NpcGhostInfo>()
{
  return "morai_msgs/msg/NpcGhostInfo";
}

template<>
struct has_fixed_size<morai_msgs::msg::NpcGhostInfo>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<morai_msgs::msg::NpcGhostInfo>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<morai_msgs::msg::NpcGhostInfo>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MORAI_MSGS__MSG__DETAIL__NPC_GHOST_INFO__TRAITS_HPP_

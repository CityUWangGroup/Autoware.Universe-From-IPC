// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from morai_msgs:msg/NpcGhostCmd.idl
// generated code does not contain a copyright notice

#ifndef MORAI_MSGS__MSG__DETAIL__NPC_GHOST_CMD__TRAITS_HPP_
#define MORAI_MSGS__MSG__DETAIL__NPC_GHOST_CMD__TRAITS_HPP_

#include "morai_msgs/msg/detail/npc_ghost_cmd__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'npc_list'
#include "morai_msgs/msg/detail/npc_ghost_info__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const morai_msgs::msg::NpcGhostCmd & msg,
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

  // member: npc_list
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.npc_list.size() == 0) {
      out << "npc_list: []\n";
    } else {
      out << "npc_list:\n";
      for (auto item : msg.npc_list) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const morai_msgs::msg::NpcGhostCmd & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<morai_msgs::msg::NpcGhostCmd>()
{
  return "morai_msgs::msg::NpcGhostCmd";
}

template<>
inline const char * name<morai_msgs::msg::NpcGhostCmd>()
{
  return "morai_msgs/msg/NpcGhostCmd";
}

template<>
struct has_fixed_size<morai_msgs::msg::NpcGhostCmd>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<morai_msgs::msg::NpcGhostCmd>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<morai_msgs::msg::NpcGhostCmd>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MORAI_MSGS__MSG__DETAIL__NPC_GHOST_CMD__TRAITS_HPP_

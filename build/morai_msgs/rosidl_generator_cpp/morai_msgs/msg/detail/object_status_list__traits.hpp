// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from morai_msgs:msg/ObjectStatusList.idl
// generated code does not contain a copyright notice

#ifndef MORAI_MSGS__MSG__DETAIL__OBJECT_STATUS_LIST__TRAITS_HPP_
#define MORAI_MSGS__MSG__DETAIL__OBJECT_STATUS_LIST__TRAITS_HPP_

#include "morai_msgs/msg/detail/object_status_list__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'npc_list'
// Member 'pedestrian_list'
// Member 'obstacle_list'
#include "morai_msgs/msg/detail/object_status__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const morai_msgs::msg::ObjectStatusList & msg,
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

  // member: num_of_npcs
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "num_of_npcs: ";
    value_to_yaml(msg.num_of_npcs, out);
    out << "\n";
  }

  // member: num_of_pedestrian
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "num_of_pedestrian: ";
    value_to_yaml(msg.num_of_pedestrian, out);
    out << "\n";
  }

  // member: num_of_obstacle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "num_of_obstacle: ";
    value_to_yaml(msg.num_of_obstacle, out);
    out << "\n";
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

  // member: pedestrian_list
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.pedestrian_list.size() == 0) {
      out << "pedestrian_list: []\n";
    } else {
      out << "pedestrian_list:\n";
      for (auto item : msg.pedestrian_list) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: obstacle_list
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.obstacle_list.size() == 0) {
      out << "obstacle_list: []\n";
    } else {
      out << "obstacle_list:\n";
      for (auto item : msg.obstacle_list) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const morai_msgs::msg::ObjectStatusList & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<morai_msgs::msg::ObjectStatusList>()
{
  return "morai_msgs::msg::ObjectStatusList";
}

template<>
inline const char * name<morai_msgs::msg::ObjectStatusList>()
{
  return "morai_msgs/msg/ObjectStatusList";
}

template<>
struct has_fixed_size<morai_msgs::msg::ObjectStatusList>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<morai_msgs::msg::ObjectStatusList>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<morai_msgs::msg::ObjectStatusList>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MORAI_MSGS__MSG__DETAIL__OBJECT_STATUS_LIST__TRAITS_HPP_

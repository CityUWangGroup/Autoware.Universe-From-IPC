// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from autoware_map_msgs:msg/LaneletMapBin.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_MAP_MSGS__MSG__DETAIL__LANELET_MAP_BIN__TRAITS_HPP_
#define AUTOWARE_MAP_MSGS__MSG__DETAIL__LANELET_MAP_BIN__TRAITS_HPP_

#include "autoware_map_msgs/msg/detail/lanelet_map_bin__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const autoware_map_msgs::msg::LaneletMapBin & msg,
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

  // member: version_map_format
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "version_map_format: ";
    value_to_yaml(msg.version_map_format, out);
    out << "\n";
  }

  // member: version_map
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "version_map: ";
    value_to_yaml(msg.version_map, out);
    out << "\n";
  }

  // member: name_map
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "name_map: ";
    value_to_yaml(msg.name_map, out);
    out << "\n";
  }

  // member: data
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.data.size() == 0) {
      out << "data: []\n";
    } else {
      out << "data:\n";
      for (auto item : msg.data) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const autoware_map_msgs::msg::LaneletMapBin & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<autoware_map_msgs::msg::LaneletMapBin>()
{
  return "autoware_map_msgs::msg::LaneletMapBin";
}

template<>
inline const char * name<autoware_map_msgs::msg::LaneletMapBin>()
{
  return "autoware_map_msgs/msg/LaneletMapBin";
}

template<>
struct has_fixed_size<autoware_map_msgs::msg::LaneletMapBin>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<autoware_map_msgs::msg::LaneletMapBin>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<autoware_map_msgs::msg::LaneletMapBin>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // AUTOWARE_MAP_MSGS__MSG__DETAIL__LANELET_MAP_BIN__TRAITS_HPP_

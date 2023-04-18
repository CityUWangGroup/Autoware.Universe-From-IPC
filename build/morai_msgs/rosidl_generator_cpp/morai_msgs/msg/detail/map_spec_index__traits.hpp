// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from morai_msgs:msg/MapSpecIndex.idl
// generated code does not contain a copyright notice

#ifndef MORAI_MSGS__MSG__DETAIL__MAP_SPEC_INDEX__TRAITS_HPP_
#define MORAI_MSGS__MSG__DETAIL__MAP_SPEC_INDEX__TRAITS_HPP_

#include "morai_msgs/msg/detail/map_spec_index__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const morai_msgs::msg::MapSpecIndex & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: load_map_data
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "load_map_data: ";
    value_to_yaml(msg.load_map_data, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const morai_msgs::msg::MapSpecIndex & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<morai_msgs::msg::MapSpecIndex>()
{
  return "morai_msgs::msg::MapSpecIndex";
}

template<>
inline const char * name<morai_msgs::msg::MapSpecIndex>()
{
  return "morai_msgs/msg/MapSpecIndex";
}

template<>
struct has_fixed_size<morai_msgs::msg::MapSpecIndex>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<morai_msgs::msg::MapSpecIndex>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<morai_msgs::msg::MapSpecIndex>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MORAI_MSGS__MSG__DETAIL__MAP_SPEC_INDEX__TRAITS_HPP_

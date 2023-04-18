// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from morai_msgs:msg/MoraiTLIndex.idl
// generated code does not contain a copyright notice

#ifndef MORAI_MSGS__MSG__DETAIL__MORAI_TL_INDEX__TRAITS_HPP_
#define MORAI_MSGS__MSG__DETAIL__MORAI_TL_INDEX__TRAITS_HPP_

#include "morai_msgs/msg/detail/morai_tl_index__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const morai_msgs::msg::MoraiTLIndex & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: idx
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "idx: ";
    value_to_yaml(msg.idx, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const morai_msgs::msg::MoraiTLIndex & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<morai_msgs::msg::MoraiTLIndex>()
{
  return "morai_msgs::msg::MoraiTLIndex";
}

template<>
inline const char * name<morai_msgs::msg::MoraiTLIndex>()
{
  return "morai_msgs/msg/MoraiTLIndex";
}

template<>
struct has_fixed_size<morai_msgs::msg::MoraiTLIndex>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<morai_msgs::msg::MoraiTLIndex>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<morai_msgs::msg::MoraiTLIndex>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MORAI_MSGS__MSG__DETAIL__MORAI_TL_INDEX__TRAITS_HPP_

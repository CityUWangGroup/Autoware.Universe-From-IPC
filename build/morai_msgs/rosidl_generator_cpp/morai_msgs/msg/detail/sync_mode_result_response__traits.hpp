// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from morai_msgs:msg/SyncModeResultResponse.idl
// generated code does not contain a copyright notice

#ifndef MORAI_MSGS__MSG__DETAIL__SYNC_MODE_RESULT_RESPONSE__TRAITS_HPP_
#define MORAI_MSGS__MSG__DETAIL__SYNC_MODE_RESULT_RESPONSE__TRAITS_HPP_

#include "morai_msgs/msg/detail/sync_mode_result_response__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const morai_msgs::msg::SyncModeResultResponse & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: result
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "result: ";
    value_to_yaml(msg.result, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const morai_msgs::msg::SyncModeResultResponse & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<morai_msgs::msg::SyncModeResultResponse>()
{
  return "morai_msgs::msg::SyncModeResultResponse";
}

template<>
inline const char * name<morai_msgs::msg::SyncModeResultResponse>()
{
  return "morai_msgs/msg/SyncModeResultResponse";
}

template<>
struct has_fixed_size<morai_msgs::msg::SyncModeResultResponse>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<morai_msgs::msg::SyncModeResultResponse>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<morai_msgs::msg::SyncModeResultResponse>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MORAI_MSGS__MSG__DETAIL__SYNC_MODE_RESULT_RESPONSE__TRAITS_HPP_

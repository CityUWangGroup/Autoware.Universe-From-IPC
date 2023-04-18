// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from morai_msgs:msg/SyncModeInfo.idl
// generated code does not contain a copyright notice

#ifndef MORAI_MSGS__MSG__DETAIL__SYNC_MODE_INFO__TRAITS_HPP_
#define MORAI_MSGS__MSG__DETAIL__SYNC_MODE_INFO__TRAITS_HPP_

#include "morai_msgs/msg/detail/sync_mode_info__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const morai_msgs::msg::SyncModeInfo & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: master_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "master_id: ";
    value_to_yaml(msg.master_id, out);
    out << "\n";
  }

  // member: status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status: ";
    value_to_yaml(msg.status, out);
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

  // member: can_send_tick
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "can_send_tick: ";
    value_to_yaml(msg.can_send_tick, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const morai_msgs::msg::SyncModeInfo & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<morai_msgs::msg::SyncModeInfo>()
{
  return "morai_msgs::msg::SyncModeInfo";
}

template<>
inline const char * name<morai_msgs::msg::SyncModeInfo>()
{
  return "morai_msgs/msg/SyncModeInfo";
}

template<>
struct has_fixed_size<morai_msgs::msg::SyncModeInfo>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<morai_msgs::msg::SyncModeInfo>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<morai_msgs::msg::SyncModeInfo>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MORAI_MSGS__MSG__DETAIL__SYNC_MODE_INFO__TRAITS_HPP_

// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from morai_msgs:msg/EventInfo.idl
// generated code does not contain a copyright notice

#ifndef MORAI_MSGS__MSG__DETAIL__EVENT_INFO__TRAITS_HPP_
#define MORAI_MSGS__MSG__DETAIL__EVENT_INFO__TRAITS_HPP_

#include "morai_msgs/msg/detail/event_info__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'lamps'
#include "morai_msgs/msg/detail/lamps__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const morai_msgs::msg::EventInfo & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: option
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "option: ";
    value_to_yaml(msg.option, out);
    out << "\n";
  }

  // member: ctrl_mode
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ctrl_mode: ";
    value_to_yaml(msg.ctrl_mode, out);
    out << "\n";
  }

  // member: gear
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gear: ";
    value_to_yaml(msg.gear, out);
    out << "\n";
  }

  // member: lamps
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lamps:\n";
    to_yaml(msg.lamps, out, indentation + 2);
  }

  // member: set_pause
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "set_pause: ";
    value_to_yaml(msg.set_pause, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const morai_msgs::msg::EventInfo & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<morai_msgs::msg::EventInfo>()
{
  return "morai_msgs::msg::EventInfo";
}

template<>
inline const char * name<morai_msgs::msg::EventInfo>()
{
  return "morai_msgs/msg/EventInfo";
}

template<>
struct has_fixed_size<morai_msgs::msg::EventInfo>
  : std::integral_constant<bool, has_fixed_size<morai_msgs::msg::Lamps>::value> {};

template<>
struct has_bounded_size<morai_msgs::msg::EventInfo>
  : std::integral_constant<bool, has_bounded_size<morai_msgs::msg::Lamps>::value> {};

template<>
struct is_message<morai_msgs::msg::EventInfo>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MORAI_MSGS__MSG__DETAIL__EVENT_INFO__TRAITS_HPP_

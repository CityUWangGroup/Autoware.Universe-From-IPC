// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from morai_msgs:msg/WaitForTickResponse.idl
// generated code does not contain a copyright notice

#ifndef MORAI_MSGS__MSG__DETAIL__WAIT_FOR_TICK_RESPONSE__TRAITS_HPP_
#define MORAI_MSGS__MSG__DETAIL__WAIT_FOR_TICK_RESPONSE__TRAITS_HPP_

#include "morai_msgs/msg/detail/wait_for_tick_response__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'vehicle_status'
#include "morai_msgs/msg/detail/ego_vehicle_status__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const morai_msgs::msg::WaitForTickResponse & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: tick_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "tick_status: ";
    value_to_yaml(msg.tick_status, out);
    out << "\n";
  }

  // member: pause_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pause_status: ";
    value_to_yaml(msg.pause_status, out);
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

  // member: vehicle_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vehicle_status:\n";
    to_yaml(msg.vehicle_status, out, indentation + 2);
  }

  // member: time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "time: ";
    value_to_yaml(msg.time, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const morai_msgs::msg::WaitForTickResponse & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<morai_msgs::msg::WaitForTickResponse>()
{
  return "morai_msgs::msg::WaitForTickResponse";
}

template<>
inline const char * name<morai_msgs::msg::WaitForTickResponse>()
{
  return "morai_msgs/msg/WaitForTickResponse";
}

template<>
struct has_fixed_size<morai_msgs::msg::WaitForTickResponse>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<morai_msgs::msg::WaitForTickResponse>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<morai_msgs::msg::WaitForTickResponse>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MORAI_MSGS__MSG__DETAIL__WAIT_FOR_TICK_RESPONSE__TRAITS_HPP_

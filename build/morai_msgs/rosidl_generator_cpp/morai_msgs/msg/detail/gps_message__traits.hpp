// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from morai_msgs:msg/GPSMessage.idl
// generated code does not contain a copyright notice

#ifndef MORAI_MSGS__MSG__DETAIL__GPS_MESSAGE__TRAITS_HPP_
#define MORAI_MSGS__MSG__DETAIL__GPS_MESSAGE__TRAITS_HPP_

#include "morai_msgs/msg/detail/gps_message__struct.hpp"
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
  const morai_msgs::msg::GPSMessage & msg,
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

  // member: latitude
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "latitude: ";
    value_to_yaml(msg.latitude, out);
    out << "\n";
  }

  // member: longitude
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "longitude: ";
    value_to_yaml(msg.longitude, out);
    out << "\n";
  }

  // member: altitude
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "altitude: ";
    value_to_yaml(msg.altitude, out);
    out << "\n";
  }

  // member: east_offset
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "east_offset: ";
    value_to_yaml(msg.east_offset, out);
    out << "\n";
  }

  // member: north_offset
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "north_offset: ";
    value_to_yaml(msg.north_offset, out);
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
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const morai_msgs::msg::GPSMessage & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<morai_msgs::msg::GPSMessage>()
{
  return "morai_msgs::msg::GPSMessage";
}

template<>
inline const char * name<morai_msgs::msg::GPSMessage>()
{
  return "morai_msgs/msg/GPSMessage";
}

template<>
struct has_fixed_size<morai_msgs::msg::GPSMessage>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<morai_msgs::msg::GPSMessage>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<morai_msgs::msg::GPSMessage>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MORAI_MSGS__MSG__DETAIL__GPS_MESSAGE__TRAITS_HPP_

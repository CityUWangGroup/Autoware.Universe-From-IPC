// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from morai_msgs:msg/GhostMessage.idl
// generated code does not contain a copyright notice

#ifndef MORAI_MSGS__MSG__DETAIL__GHOST_MESSAGE__TRAITS_HPP_
#define MORAI_MSGS__MSG__DETAIL__GHOST_MESSAGE__TRAITS_HPP_

#include "morai_msgs/msg/detail/ghost_message__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'position'
// Member 'rotation'
#include "geometry_msgs/msg/detail/vector3__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const morai_msgs::msg::GhostMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: position
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "position:\n";
    to_yaml(msg.position, out, indentation + 2);
  }

  // member: rotation
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rotation:\n";
    to_yaml(msg.rotation, out, indentation + 2);
  }

  // member: velocity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "velocity: ";
    value_to_yaml(msg.velocity, out);
    out << "\n";
  }

  // member: steering_angle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "steering_angle: ";
    value_to_yaml(msg.steering_angle, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const morai_msgs::msg::GhostMessage & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<morai_msgs::msg::GhostMessage>()
{
  return "morai_msgs::msg::GhostMessage";
}

template<>
inline const char * name<morai_msgs::msg::GhostMessage>()
{
  return "morai_msgs/msg/GhostMessage";
}

template<>
struct has_fixed_size<morai_msgs::msg::GhostMessage>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::Vector3>::value> {};

template<>
struct has_bounded_size<morai_msgs::msg::GhostMessage>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::Vector3>::value> {};

template<>
struct is_message<morai_msgs::msg::GhostMessage>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MORAI_MSGS__MSG__DETAIL__GHOST_MESSAGE__TRAITS_HPP_

// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from morai_msgs:msg/VehicleCollisionData.idl
// generated code does not contain a copyright notice

#ifndef MORAI_MSGS__MSG__DETAIL__VEHICLE_COLLISION_DATA__TRAITS_HPP_
#define MORAI_MSGS__MSG__DETAIL__VEHICLE_COLLISION_DATA__TRAITS_HPP_

#include "morai_msgs/msg/detail/vehicle_collision_data__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'collisions'
#include "morai_msgs/msg/detail/vehicle_collision__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const morai_msgs::msg::VehicleCollisionData & msg,
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

  // member: collisions
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.collisions.size() == 0) {
      out << "collisions: []\n";
    } else {
      out << "collisions:\n";
      for (auto item : msg.collisions) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const morai_msgs::msg::VehicleCollisionData & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<morai_msgs::msg::VehicleCollisionData>()
{
  return "morai_msgs::msg::VehicleCollisionData";
}

template<>
inline const char * name<morai_msgs::msg::VehicleCollisionData>()
{
  return "morai_msgs/msg/VehicleCollisionData";
}

template<>
struct has_fixed_size<morai_msgs::msg::VehicleCollisionData>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<morai_msgs::msg::VehicleCollisionData>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<morai_msgs::msg::VehicleCollisionData>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MORAI_MSGS__MSG__DETAIL__VEHICLE_COLLISION_DATA__TRAITS_HPP_

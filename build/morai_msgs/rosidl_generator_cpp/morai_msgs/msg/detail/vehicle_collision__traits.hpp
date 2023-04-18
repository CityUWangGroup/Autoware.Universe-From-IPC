// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from morai_msgs:msg/VehicleCollision.idl
// generated code does not contain a copyright notice

#ifndef MORAI_MSGS__MSG__DETAIL__VEHICLE_COLLISION__TRAITS_HPP_
#define MORAI_MSGS__MSG__DETAIL__VEHICLE_COLLISION__TRAITS_HPP_

#include "morai_msgs/msg/detail/vehicle_collision__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'crashed_vehicles'
#include "morai_msgs/msg/detail/object_status__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const morai_msgs::msg::VehicleCollision & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: crashed_vehicles
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.crashed_vehicles.size() == 0) {
      out << "crashed_vehicles: []\n";
    } else {
      out << "crashed_vehicles:\n";
      for (auto item : msg.crashed_vehicles) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const morai_msgs::msg::VehicleCollision & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<morai_msgs::msg::VehicleCollision>()
{
  return "morai_msgs::msg::VehicleCollision";
}

template<>
inline const char * name<morai_msgs::msg::VehicleCollision>()
{
  return "morai_msgs/msg/VehicleCollision";
}

template<>
struct has_fixed_size<morai_msgs::msg::VehicleCollision>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<morai_msgs::msg::VehicleCollision>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<morai_msgs::msg::VehicleCollision>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MORAI_MSGS__MSG__DETAIL__VEHICLE_COLLISION__TRAITS_HPP_

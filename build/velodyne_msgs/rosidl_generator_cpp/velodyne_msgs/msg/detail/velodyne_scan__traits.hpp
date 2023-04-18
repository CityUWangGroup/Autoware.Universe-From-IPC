// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from velodyne_msgs:msg/VelodyneScan.idl
// generated code does not contain a copyright notice

#ifndef VELODYNE_MSGS__MSG__DETAIL__VELODYNE_SCAN__TRAITS_HPP_
#define VELODYNE_MSGS__MSG__DETAIL__VELODYNE_SCAN__TRAITS_HPP_

#include "velodyne_msgs/msg/detail/velodyne_scan__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'packets'
#include "velodyne_msgs/msg/detail/velodyne_packet__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const velodyne_msgs::msg::VelodyneScan & msg,
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

  // member: packets
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.packets.size() == 0) {
      out << "packets: []\n";
    } else {
      out << "packets:\n";
      for (auto item : msg.packets) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const velodyne_msgs::msg::VelodyneScan & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<velodyne_msgs::msg::VelodyneScan>()
{
  return "velodyne_msgs::msg::VelodyneScan";
}

template<>
inline const char * name<velodyne_msgs::msg::VelodyneScan>()
{
  return "velodyne_msgs/msg/VelodyneScan";
}

template<>
struct has_fixed_size<velodyne_msgs::msg::VelodyneScan>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<velodyne_msgs::msg::VelodyneScan>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<velodyne_msgs::msg::VelodyneScan>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // VELODYNE_MSGS__MSG__DETAIL__VELODYNE_SCAN__TRAITS_HPP_

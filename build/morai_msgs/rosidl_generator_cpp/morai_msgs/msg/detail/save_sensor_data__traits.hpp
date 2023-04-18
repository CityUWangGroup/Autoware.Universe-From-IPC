// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from morai_msgs:msg/SaveSensorData.idl
// generated code does not contain a copyright notice

#ifndef MORAI_MSGS__MSG__DETAIL__SAVE_SENSOR_DATA__TRAITS_HPP_
#define MORAI_MSGS__MSG__DETAIL__SAVE_SENSOR_DATA__TRAITS_HPP_

#include "morai_msgs/msg/detail/save_sensor_data__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const morai_msgs::msg::SaveSensorData & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: is_custom_file_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_custom_file_name: ";
    value_to_yaml(msg.is_custom_file_name, out);
    out << "\n";
  }

  // member: custom_file_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "custom_file_name: ";
    value_to_yaml(msg.custom_file_name, out);
    out << "\n";
  }

  // member: file_dir
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "file_dir: ";
    value_to_yaml(msg.file_dir, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const morai_msgs::msg::SaveSensorData & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<morai_msgs::msg::SaveSensorData>()
{
  return "morai_msgs::msg::SaveSensorData";
}

template<>
inline const char * name<morai_msgs::msg::SaveSensorData>()
{
  return "morai_msgs/msg/SaveSensorData";
}

template<>
struct has_fixed_size<morai_msgs::msg::SaveSensorData>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<morai_msgs::msg::SaveSensorData>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<morai_msgs::msg::SaveSensorData>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MORAI_MSGS__MSG__DETAIL__SAVE_SENSOR_DATA__TRAITS_HPP_

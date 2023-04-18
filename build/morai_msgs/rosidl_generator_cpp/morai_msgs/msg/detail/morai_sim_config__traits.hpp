// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from morai_msgs:msg/MoraiSimConfig.idl
// generated code does not contain a copyright notice

#ifndef MORAI_MSGS__MSG__DETAIL__MORAI_SIM_CONFIG__TRAITS_HPP_
#define MORAI_MSGS__MSG__DETAIL__MORAI_SIM_CONFIG__TRAITS_HPP_

#include "morai_msgs/msg/detail/morai_sim_config__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const morai_msgs::msg::MoraiSimConfig & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: sensor_config_file_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sensor_config_file_name: ";
    value_to_yaml(msg.sensor_config_file_name, out);
    out << "\n";
  }

  // member: publisher_list
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "publisher_list: ";
    value_to_yaml(msg.publisher_list, out);
    out << "\n";
  }

  // member: subscriber_list
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "subscriber_list: ";
    value_to_yaml(msg.subscriber_list, out);
    out << "\n";
  }

  // member: service_list
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "service_list: ";
    value_to_yaml(msg.service_list, out);
    out << "\n";
  }

  // member: camera_list
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "camera_list: ";
    value_to_yaml(msg.camera_list, out);
    out << "\n";
  }

  // member: gps_list
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gps_list: ";
    value_to_yaml(msg.gps_list, out);
    out << "\n";
  }

  // member: imu_list
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "imu_list: ";
    value_to_yaml(msg.imu_list, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const morai_msgs::msg::MoraiSimConfig & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<morai_msgs::msg::MoraiSimConfig>()
{
  return "morai_msgs::msg::MoraiSimConfig";
}

template<>
inline const char * name<morai_msgs::msg::MoraiSimConfig>()
{
  return "morai_msgs/msg/MoraiSimConfig";
}

template<>
struct has_fixed_size<morai_msgs::msg::MoraiSimConfig>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<morai_msgs::msg::MoraiSimConfig>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<morai_msgs::msg::MoraiSimConfig>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MORAI_MSGS__MSG__DETAIL__MORAI_SIM_CONFIG__TRAITS_HPP_

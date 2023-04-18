// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from morai_msgs:msg/SyncModeScenarioLoad.idl
// generated code does not contain a copyright notice

#ifndef MORAI_MSGS__MSG__DETAIL__SYNC_MODE_SCENARIO_LOAD__TRAITS_HPP_
#define MORAI_MSGS__MSG__DETAIL__SYNC_MODE_SCENARIO_LOAD__TRAITS_HPP_

#include "morai_msgs/msg/detail/sync_mode_scenario_load__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const morai_msgs::msg::SyncModeScenarioLoad & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: frame
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "frame: ";
    value_to_yaml(msg.frame, out);
    out << "\n";
  }

  // member: file_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "file_name: ";
    value_to_yaml(msg.file_name, out);
    out << "\n";
  }

  // member: load_network_connection_data
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "load_network_connection_data: ";
    value_to_yaml(msg.load_network_connection_data, out);
    out << "\n";
  }

  // member: delete_all
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "delete_all: ";
    value_to_yaml(msg.delete_all, out);
    out << "\n";
  }

  // member: load_ego_vehicle_data
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "load_ego_vehicle_data: ";
    value_to_yaml(msg.load_ego_vehicle_data, out);
    out << "\n";
  }

  // member: load_surrounding_vehicle_data
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "load_surrounding_vehicle_data: ";
    value_to_yaml(msg.load_surrounding_vehicle_data, out);
    out << "\n";
  }

  // member: load_pedestrian_data
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "load_pedestrian_data: ";
    value_to_yaml(msg.load_pedestrian_data, out);
    out << "\n";
  }

  // member: load_obstacle_data
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "load_obstacle_data: ";
    value_to_yaml(msg.load_obstacle_data, out);
    out << "\n";
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

inline std::string to_yaml(const morai_msgs::msg::SyncModeScenarioLoad & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<morai_msgs::msg::SyncModeScenarioLoad>()
{
  return "morai_msgs::msg::SyncModeScenarioLoad";
}

template<>
inline const char * name<morai_msgs::msg::SyncModeScenarioLoad>()
{
  return "morai_msgs/msg/SyncModeScenarioLoad";
}

template<>
struct has_fixed_size<morai_msgs::msg::SyncModeScenarioLoad>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<morai_msgs::msg::SyncModeScenarioLoad>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<morai_msgs::msg::SyncModeScenarioLoad>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MORAI_MSGS__MSG__DETAIL__SYNC_MODE_SCENARIO_LOAD__TRAITS_HPP_

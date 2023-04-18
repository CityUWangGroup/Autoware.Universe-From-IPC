// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from morai_msgs:msg/MoraiSimProcHandle.idl
// generated code does not contain a copyright notice

#ifndef MORAI_MSGS__MSG__DETAIL__MORAI_SIM_PROC_HANDLE__TRAITS_HPP_
#define MORAI_MSGS__MSG__DETAIL__MORAI_SIM_PROC_HANDLE__TRAITS_HPP_

#include "morai_msgs/msg/detail/morai_sim_proc_handle__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const morai_msgs::msg::MoraiSimProcHandle & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: sim_process_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sim_process_status: ";
    value_to_yaml(msg.sim_process_status, out);
    out << "\n";
  }

  // member: replay_option
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "replay_option: ";
    value_to_yaml(msg.replay_option, out);
    out << "\n";
  }

  // member: rosbag_file_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rosbag_file_name: ";
    value_to_yaml(msg.rosbag_file_name, out);
    out << "\n";
  }

  // member: replay_target_option
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "replay_target_option: ";
    value_to_yaml(msg.replay_target_option, out);
    out << "\n";
  }

  // member: replay_speed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "replay_speed: ";
    value_to_yaml(msg.replay_speed, out);
    out << "\n";
  }

  // member: start_time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "start_time: ";
    value_to_yaml(msg.start_time, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const morai_msgs::msg::MoraiSimProcHandle & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<morai_msgs::msg::MoraiSimProcHandle>()
{
  return "morai_msgs::msg::MoraiSimProcHandle";
}

template<>
inline const char * name<morai_msgs::msg::MoraiSimProcHandle>()
{
  return "morai_msgs/msg/MoraiSimProcHandle";
}

template<>
struct has_fixed_size<morai_msgs::msg::MoraiSimProcHandle>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<morai_msgs::msg::MoraiSimProcHandle>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<morai_msgs::msg::MoraiSimProcHandle>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MORAI_MSGS__MSG__DETAIL__MORAI_SIM_PROC_HANDLE__TRAITS_HPP_

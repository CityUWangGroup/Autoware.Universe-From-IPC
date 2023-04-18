// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from tier4_external_api_msgs:msg/RosbagCopyStatus.idl
// generated code does not contain a copyright notice

#ifndef TIER4_EXTERNAL_API_MSGS__MSG__DETAIL__ROSBAG_COPY_STATUS__TRAITS_HPP_
#define TIER4_EXTERNAL_API_MSGS__MSG__DETAIL__ROSBAG_COPY_STATUS__TRAITS_HPP_

#include "tier4_external_api_msgs/msg/detail/rosbag_copy_status__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const tier4_external_api_msgs::msg::RosbagCopyStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status: ";
    value_to_yaml(msg.status, out);
    out << "\n";
  }

  // member: progress_percentage
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "progress_percentage: ";
    value_to_yaml(msg.progress_percentage, out);
    out << "\n";
  }

  // member: project_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "project_id: ";
    value_to_yaml(msg.project_id, out);
    out << "\n";
  }

  // member: vehicle_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vehicle_id: ";
    value_to_yaml(msg.vehicle_id, out);
    out << "\n";
  }

  // member: date
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "date: ";
    value_to_yaml(msg.date, out);
    out << "\n";
  }

  // member: message
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "message: ";
    value_to_yaml(msg.message, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const tier4_external_api_msgs::msg::RosbagCopyStatus & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<tier4_external_api_msgs::msg::RosbagCopyStatus>()
{
  return "tier4_external_api_msgs::msg::RosbagCopyStatus";
}

template<>
inline const char * name<tier4_external_api_msgs::msg::RosbagCopyStatus>()
{
  return "tier4_external_api_msgs/msg/RosbagCopyStatus";
}

template<>
struct has_fixed_size<tier4_external_api_msgs::msg::RosbagCopyStatus>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<tier4_external_api_msgs::msg::RosbagCopyStatus>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<tier4_external_api_msgs::msg::RosbagCopyStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // TIER4_EXTERNAL_API_MSGS__MSG__DETAIL__ROSBAG_COPY_STATUS__TRAITS_HPP_

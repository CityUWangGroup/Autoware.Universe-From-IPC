// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from autoware_auto_vehicle_msgs:srv/AutonomyModeChange.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_AUTO_VEHICLE_MSGS__SRV__DETAIL__AUTONOMY_MODE_CHANGE__TRAITS_HPP_
#define AUTOWARE_AUTO_VEHICLE_MSGS__SRV__DETAIL__AUTONOMY_MODE_CHANGE__TRAITS_HPP_

#include "autoware_auto_vehicle_msgs/srv/detail/autonomy_mode_change__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const autoware_auto_vehicle_msgs::srv::AutonomyModeChange_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: mode
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mode: ";
    value_to_yaml(msg.mode, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const autoware_auto_vehicle_msgs::srv::AutonomyModeChange_Request & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<autoware_auto_vehicle_msgs::srv::AutonomyModeChange_Request>()
{
  return "autoware_auto_vehicle_msgs::srv::AutonomyModeChange_Request";
}

template<>
inline const char * name<autoware_auto_vehicle_msgs::srv::AutonomyModeChange_Request>()
{
  return "autoware_auto_vehicle_msgs/srv/AutonomyModeChange_Request";
}

template<>
struct has_fixed_size<autoware_auto_vehicle_msgs::srv::AutonomyModeChange_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<autoware_auto_vehicle_msgs::srv::AutonomyModeChange_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<autoware_auto_vehicle_msgs::srv::AutonomyModeChange_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'empty'
#include "std_msgs/msg/detail/empty__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const autoware_auto_vehicle_msgs::srv::AutonomyModeChange_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: empty
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "empty:\n";
    to_yaml(msg.empty, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const autoware_auto_vehicle_msgs::srv::AutonomyModeChange_Response & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<autoware_auto_vehicle_msgs::srv::AutonomyModeChange_Response>()
{
  return "autoware_auto_vehicle_msgs::srv::AutonomyModeChange_Response";
}

template<>
inline const char * name<autoware_auto_vehicle_msgs::srv::AutonomyModeChange_Response>()
{
  return "autoware_auto_vehicle_msgs/srv/AutonomyModeChange_Response";
}

template<>
struct has_fixed_size<autoware_auto_vehicle_msgs::srv::AutonomyModeChange_Response>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Empty>::value> {};

template<>
struct has_bounded_size<autoware_auto_vehicle_msgs::srv::AutonomyModeChange_Response>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Empty>::value> {};

template<>
struct is_message<autoware_auto_vehicle_msgs::srv::AutonomyModeChange_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<autoware_auto_vehicle_msgs::srv::AutonomyModeChange>()
{
  return "autoware_auto_vehicle_msgs::srv::AutonomyModeChange";
}

template<>
inline const char * name<autoware_auto_vehicle_msgs::srv::AutonomyModeChange>()
{
  return "autoware_auto_vehicle_msgs/srv/AutonomyModeChange";
}

template<>
struct has_fixed_size<autoware_auto_vehicle_msgs::srv::AutonomyModeChange>
  : std::integral_constant<
    bool,
    has_fixed_size<autoware_auto_vehicle_msgs::srv::AutonomyModeChange_Request>::value &&
    has_fixed_size<autoware_auto_vehicle_msgs::srv::AutonomyModeChange_Response>::value
  >
{
};

template<>
struct has_bounded_size<autoware_auto_vehicle_msgs::srv::AutonomyModeChange>
  : std::integral_constant<
    bool,
    has_bounded_size<autoware_auto_vehicle_msgs::srv::AutonomyModeChange_Request>::value &&
    has_bounded_size<autoware_auto_vehicle_msgs::srv::AutonomyModeChange_Response>::value
  >
{
};

template<>
struct is_service<autoware_auto_vehicle_msgs::srv::AutonomyModeChange>
  : std::true_type
{
};

template<>
struct is_service_request<autoware_auto_vehicle_msgs::srv::AutonomyModeChange_Request>
  : std::true_type
{
};

template<>
struct is_service_response<autoware_auto_vehicle_msgs::srv::AutonomyModeChange_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // AUTOWARE_AUTO_VEHICLE_MSGS__SRV__DETAIL__AUTONOMY_MODE_CHANGE__TRAITS_HPP_

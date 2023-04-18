// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from autoware_auto_vehicle_msgs:srv/ControlModeCommand.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_AUTO_VEHICLE_MSGS__SRV__DETAIL__CONTROL_MODE_COMMAND__TRAITS_HPP_
#define AUTOWARE_AUTO_VEHICLE_MSGS__SRV__DETAIL__CONTROL_MODE_COMMAND__TRAITS_HPP_

#include "autoware_auto_vehicle_msgs/srv/detail/control_mode_command__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const autoware_auto_vehicle_msgs::srv::ControlModeCommand_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: stamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stamp:\n";
    to_yaml(msg.stamp, out, indentation + 2);
  }

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

inline std::string to_yaml(const autoware_auto_vehicle_msgs::srv::ControlModeCommand_Request & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<autoware_auto_vehicle_msgs::srv::ControlModeCommand_Request>()
{
  return "autoware_auto_vehicle_msgs::srv::ControlModeCommand_Request";
}

template<>
inline const char * name<autoware_auto_vehicle_msgs::srv::ControlModeCommand_Request>()
{
  return "autoware_auto_vehicle_msgs/srv/ControlModeCommand_Request";
}

template<>
struct has_fixed_size<autoware_auto_vehicle_msgs::srv::ControlModeCommand_Request>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<autoware_auto_vehicle_msgs::srv::ControlModeCommand_Request>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<autoware_auto_vehicle_msgs::srv::ControlModeCommand_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

inline void to_yaml(
  const autoware_auto_vehicle_msgs::srv::ControlModeCommand_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "success: ";
    value_to_yaml(msg.success, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const autoware_auto_vehicle_msgs::srv::ControlModeCommand_Response & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<autoware_auto_vehicle_msgs::srv::ControlModeCommand_Response>()
{
  return "autoware_auto_vehicle_msgs::srv::ControlModeCommand_Response";
}

template<>
inline const char * name<autoware_auto_vehicle_msgs::srv::ControlModeCommand_Response>()
{
  return "autoware_auto_vehicle_msgs/srv/ControlModeCommand_Response";
}

template<>
struct has_fixed_size<autoware_auto_vehicle_msgs::srv::ControlModeCommand_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<autoware_auto_vehicle_msgs::srv::ControlModeCommand_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<autoware_auto_vehicle_msgs::srv::ControlModeCommand_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<autoware_auto_vehicle_msgs::srv::ControlModeCommand>()
{
  return "autoware_auto_vehicle_msgs::srv::ControlModeCommand";
}

template<>
inline const char * name<autoware_auto_vehicle_msgs::srv::ControlModeCommand>()
{
  return "autoware_auto_vehicle_msgs/srv/ControlModeCommand";
}

template<>
struct has_fixed_size<autoware_auto_vehicle_msgs::srv::ControlModeCommand>
  : std::integral_constant<
    bool,
    has_fixed_size<autoware_auto_vehicle_msgs::srv::ControlModeCommand_Request>::value &&
    has_fixed_size<autoware_auto_vehicle_msgs::srv::ControlModeCommand_Response>::value
  >
{
};

template<>
struct has_bounded_size<autoware_auto_vehicle_msgs::srv::ControlModeCommand>
  : std::integral_constant<
    bool,
    has_bounded_size<autoware_auto_vehicle_msgs::srv::ControlModeCommand_Request>::value &&
    has_bounded_size<autoware_auto_vehicle_msgs::srv::ControlModeCommand_Response>::value
  >
{
};

template<>
struct is_service<autoware_auto_vehicle_msgs::srv::ControlModeCommand>
  : std::true_type
{
};

template<>
struct is_service_request<autoware_auto_vehicle_msgs::srv::ControlModeCommand_Request>
  : std::true_type
{
};

template<>
struct is_service_response<autoware_auto_vehicle_msgs::srv::ControlModeCommand_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // AUTOWARE_AUTO_VEHICLE_MSGS__SRV__DETAIL__CONTROL_MODE_COMMAND__TRAITS_HPP_

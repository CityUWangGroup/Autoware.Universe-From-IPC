// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from morai_msgs:srv/MoraiSyncModeCtrlCmdSrv.idl
// generated code does not contain a copyright notice

#ifndef MORAI_MSGS__SRV__DETAIL__MORAI_SYNC_MODE_CTRL_CMD_SRV__TRAITS_HPP_
#define MORAI_MSGS__SRV__DETAIL__MORAI_SYNC_MODE_CTRL_CMD_SRV__TRAITS_HPP_

#include "morai_msgs/srv/detail/morai_sync_mode_ctrl_cmd_srv__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'request'
#include "morai_msgs/msg/detail/sync_mode_ctrl_cmd__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const morai_msgs::srv::MoraiSyncModeCtrlCmdSrv_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: request
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "request:\n";
    to_yaml(msg.request, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const morai_msgs::srv::MoraiSyncModeCtrlCmdSrv_Request & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<morai_msgs::srv::MoraiSyncModeCtrlCmdSrv_Request>()
{
  return "morai_msgs::srv::MoraiSyncModeCtrlCmdSrv_Request";
}

template<>
inline const char * name<morai_msgs::srv::MoraiSyncModeCtrlCmdSrv_Request>()
{
  return "morai_msgs/srv/MoraiSyncModeCtrlCmdSrv_Request";
}

template<>
struct has_fixed_size<morai_msgs::srv::MoraiSyncModeCtrlCmdSrv_Request>
  : std::integral_constant<bool, has_fixed_size<morai_msgs::msg::SyncModeCtrlCmd>::value> {};

template<>
struct has_bounded_size<morai_msgs::srv::MoraiSyncModeCtrlCmdSrv_Request>
  : std::integral_constant<bool, has_bounded_size<morai_msgs::msg::SyncModeCtrlCmd>::value> {};

template<>
struct is_message<morai_msgs::srv::MoraiSyncModeCtrlCmdSrv_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'response'
#include "morai_msgs/msg/detail/sync_mode_result_response__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const morai_msgs::srv::MoraiSyncModeCtrlCmdSrv_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: response
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "response:\n";
    to_yaml(msg.response, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const morai_msgs::srv::MoraiSyncModeCtrlCmdSrv_Response & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<morai_msgs::srv::MoraiSyncModeCtrlCmdSrv_Response>()
{
  return "morai_msgs::srv::MoraiSyncModeCtrlCmdSrv_Response";
}

template<>
inline const char * name<morai_msgs::srv::MoraiSyncModeCtrlCmdSrv_Response>()
{
  return "morai_msgs/srv/MoraiSyncModeCtrlCmdSrv_Response";
}

template<>
struct has_fixed_size<morai_msgs::srv::MoraiSyncModeCtrlCmdSrv_Response>
  : std::integral_constant<bool, has_fixed_size<morai_msgs::msg::SyncModeResultResponse>::value> {};

template<>
struct has_bounded_size<morai_msgs::srv::MoraiSyncModeCtrlCmdSrv_Response>
  : std::integral_constant<bool, has_bounded_size<morai_msgs::msg::SyncModeResultResponse>::value> {};

template<>
struct is_message<morai_msgs::srv::MoraiSyncModeCtrlCmdSrv_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<morai_msgs::srv::MoraiSyncModeCtrlCmdSrv>()
{
  return "morai_msgs::srv::MoraiSyncModeCtrlCmdSrv";
}

template<>
inline const char * name<morai_msgs::srv::MoraiSyncModeCtrlCmdSrv>()
{
  return "morai_msgs/srv/MoraiSyncModeCtrlCmdSrv";
}

template<>
struct has_fixed_size<morai_msgs::srv::MoraiSyncModeCtrlCmdSrv>
  : std::integral_constant<
    bool,
    has_fixed_size<morai_msgs::srv::MoraiSyncModeCtrlCmdSrv_Request>::value &&
    has_fixed_size<morai_msgs::srv::MoraiSyncModeCtrlCmdSrv_Response>::value
  >
{
};

template<>
struct has_bounded_size<morai_msgs::srv::MoraiSyncModeCtrlCmdSrv>
  : std::integral_constant<
    bool,
    has_bounded_size<morai_msgs::srv::MoraiSyncModeCtrlCmdSrv_Request>::value &&
    has_bounded_size<morai_msgs::srv::MoraiSyncModeCtrlCmdSrv_Response>::value
  >
{
};

template<>
struct is_service<morai_msgs::srv::MoraiSyncModeCtrlCmdSrv>
  : std::true_type
{
};

template<>
struct is_service_request<morai_msgs::srv::MoraiSyncModeCtrlCmdSrv_Request>
  : std::true_type
{
};

template<>
struct is_service_response<morai_msgs::srv::MoraiSyncModeCtrlCmdSrv_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // MORAI_MSGS__SRV__DETAIL__MORAI_SYNC_MODE_CTRL_CMD_SRV__TRAITS_HPP_

// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from morai_msgs:srv/MoraiSyncModeCmdSrv.idl
// generated code does not contain a copyright notice

#ifndef MORAI_MSGS__SRV__DETAIL__MORAI_SYNC_MODE_CMD_SRV__TRAITS_HPP_
#define MORAI_MSGS__SRV__DETAIL__MORAI_SYNC_MODE_CMD_SRV__TRAITS_HPP_

#include "morai_msgs/srv/detail/morai_sync_mode_cmd_srv__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'request'
#include "morai_msgs/msg/detail/sync_mode_cmd__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const morai_msgs::srv::MoraiSyncModeCmdSrv_Request & msg,
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

inline std::string to_yaml(const morai_msgs::srv::MoraiSyncModeCmdSrv_Request & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<morai_msgs::srv::MoraiSyncModeCmdSrv_Request>()
{
  return "morai_msgs::srv::MoraiSyncModeCmdSrv_Request";
}

template<>
inline const char * name<morai_msgs::srv::MoraiSyncModeCmdSrv_Request>()
{
  return "morai_msgs/srv/MoraiSyncModeCmdSrv_Request";
}

template<>
struct has_fixed_size<morai_msgs::srv::MoraiSyncModeCmdSrv_Request>
  : std::integral_constant<bool, has_fixed_size<morai_msgs::msg::SyncModeCmd>::value> {};

template<>
struct has_bounded_size<morai_msgs::srv::MoraiSyncModeCmdSrv_Request>
  : std::integral_constant<bool, has_bounded_size<morai_msgs::msg::SyncModeCmd>::value> {};

template<>
struct is_message<morai_msgs::srv::MoraiSyncModeCmdSrv_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'response'
#include "morai_msgs/msg/detail/sync_mode_cmd_response__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const morai_msgs::srv::MoraiSyncModeCmdSrv_Response & msg,
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

inline std::string to_yaml(const morai_msgs::srv::MoraiSyncModeCmdSrv_Response & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<morai_msgs::srv::MoraiSyncModeCmdSrv_Response>()
{
  return "morai_msgs::srv::MoraiSyncModeCmdSrv_Response";
}

template<>
inline const char * name<morai_msgs::srv::MoraiSyncModeCmdSrv_Response>()
{
  return "morai_msgs/srv/MoraiSyncModeCmdSrv_Response";
}

template<>
struct has_fixed_size<morai_msgs::srv::MoraiSyncModeCmdSrv_Response>
  : std::integral_constant<bool, has_fixed_size<morai_msgs::msg::SyncModeCmdResponse>::value> {};

template<>
struct has_bounded_size<morai_msgs::srv::MoraiSyncModeCmdSrv_Response>
  : std::integral_constant<bool, has_bounded_size<morai_msgs::msg::SyncModeCmdResponse>::value> {};

template<>
struct is_message<morai_msgs::srv::MoraiSyncModeCmdSrv_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<morai_msgs::srv::MoraiSyncModeCmdSrv>()
{
  return "morai_msgs::srv::MoraiSyncModeCmdSrv";
}

template<>
inline const char * name<morai_msgs::srv::MoraiSyncModeCmdSrv>()
{
  return "morai_msgs/srv/MoraiSyncModeCmdSrv";
}

template<>
struct has_fixed_size<morai_msgs::srv::MoraiSyncModeCmdSrv>
  : std::integral_constant<
    bool,
    has_fixed_size<morai_msgs::srv::MoraiSyncModeCmdSrv_Request>::value &&
    has_fixed_size<morai_msgs::srv::MoraiSyncModeCmdSrv_Response>::value
  >
{
};

template<>
struct has_bounded_size<morai_msgs::srv::MoraiSyncModeCmdSrv>
  : std::integral_constant<
    bool,
    has_bounded_size<morai_msgs::srv::MoraiSyncModeCmdSrv_Request>::value &&
    has_bounded_size<morai_msgs::srv::MoraiSyncModeCmdSrv_Response>::value
  >
{
};

template<>
struct is_service<morai_msgs::srv::MoraiSyncModeCmdSrv>
  : std::true_type
{
};

template<>
struct is_service_request<morai_msgs::srv::MoraiSyncModeCmdSrv_Request>
  : std::true_type
{
};

template<>
struct is_service_response<morai_msgs::srv::MoraiSyncModeCmdSrv_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // MORAI_MSGS__SRV__DETAIL__MORAI_SYNC_MODE_CMD_SRV__TRAITS_HPP_

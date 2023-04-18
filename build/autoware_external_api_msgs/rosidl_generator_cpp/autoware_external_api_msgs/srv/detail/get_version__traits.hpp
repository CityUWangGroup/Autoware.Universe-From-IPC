// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from autoware_external_api_msgs:srv/GetVersion.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_EXTERNAL_API_MSGS__SRV__DETAIL__GET_VERSION__TRAITS_HPP_
#define AUTOWARE_EXTERNAL_API_MSGS__SRV__DETAIL__GET_VERSION__TRAITS_HPP_

#include "autoware_external_api_msgs/srv/detail/get_version__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const autoware_external_api_msgs::srv::GetVersion_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  (void)msg;
  (void)indentation;
  out << "null\n";
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const autoware_external_api_msgs::srv::GetVersion_Request & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<autoware_external_api_msgs::srv::GetVersion_Request>()
{
  return "autoware_external_api_msgs::srv::GetVersion_Request";
}

template<>
inline const char * name<autoware_external_api_msgs::srv::GetVersion_Request>()
{
  return "autoware_external_api_msgs/srv/GetVersion_Request";
}

template<>
struct has_fixed_size<autoware_external_api_msgs::srv::GetVersion_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<autoware_external_api_msgs::srv::GetVersion_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<autoware_external_api_msgs::srv::GetVersion_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'status'
#include "tier4_external_api_msgs/msg/detail/response_status__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const autoware_external_api_msgs::srv::GetVersion_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status:\n";
    to_yaml(msg.status, out, indentation + 2);
  }

  // member: version
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "version: ";
    value_to_yaml(msg.version, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const autoware_external_api_msgs::srv::GetVersion_Response & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<autoware_external_api_msgs::srv::GetVersion_Response>()
{
  return "autoware_external_api_msgs::srv::GetVersion_Response";
}

template<>
inline const char * name<autoware_external_api_msgs::srv::GetVersion_Response>()
{
  return "autoware_external_api_msgs/srv/GetVersion_Response";
}

template<>
struct has_fixed_size<autoware_external_api_msgs::srv::GetVersion_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<autoware_external_api_msgs::srv::GetVersion_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<autoware_external_api_msgs::srv::GetVersion_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<autoware_external_api_msgs::srv::GetVersion>()
{
  return "autoware_external_api_msgs::srv::GetVersion";
}

template<>
inline const char * name<autoware_external_api_msgs::srv::GetVersion>()
{
  return "autoware_external_api_msgs/srv/GetVersion";
}

template<>
struct has_fixed_size<autoware_external_api_msgs::srv::GetVersion>
  : std::integral_constant<
    bool,
    has_fixed_size<autoware_external_api_msgs::srv::GetVersion_Request>::value &&
    has_fixed_size<autoware_external_api_msgs::srv::GetVersion_Response>::value
  >
{
};

template<>
struct has_bounded_size<autoware_external_api_msgs::srv::GetVersion>
  : std::integral_constant<
    bool,
    has_bounded_size<autoware_external_api_msgs::srv::GetVersion_Request>::value &&
    has_bounded_size<autoware_external_api_msgs::srv::GetVersion_Response>::value
  >
{
};

template<>
struct is_service<autoware_external_api_msgs::srv::GetVersion>
  : std::true_type
{
};

template<>
struct is_service_request<autoware_external_api_msgs::srv::GetVersion_Request>
  : std::true_type
{
};

template<>
struct is_service_response<autoware_external_api_msgs::srv::GetVersion_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // AUTOWARE_EXTERNAL_API_MSGS__SRV__DETAIL__GET_VERSION__TRAITS_HPP_

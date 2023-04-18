// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from morai_msgs:srv/MoraiWaitForTickSrv.idl
// generated code does not contain a copyright notice

#ifndef MORAI_MSGS__SRV__DETAIL__MORAI_WAIT_FOR_TICK_SRV__TRAITS_HPP_
#define MORAI_MSGS__SRV__DETAIL__MORAI_WAIT_FOR_TICK_SRV__TRAITS_HPP_

#include "morai_msgs/srv/detail/morai_wait_for_tick_srv__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'request'
#include "morai_msgs/msg/detail/wait_for_tick__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const morai_msgs::srv::MoraiWaitForTickSrv_Request & msg,
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

inline std::string to_yaml(const morai_msgs::srv::MoraiWaitForTickSrv_Request & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<morai_msgs::srv::MoraiWaitForTickSrv_Request>()
{
  return "morai_msgs::srv::MoraiWaitForTickSrv_Request";
}

template<>
inline const char * name<morai_msgs::srv::MoraiWaitForTickSrv_Request>()
{
  return "morai_msgs/srv/MoraiWaitForTickSrv_Request";
}

template<>
struct has_fixed_size<morai_msgs::srv::MoraiWaitForTickSrv_Request>
  : std::integral_constant<bool, has_fixed_size<morai_msgs::msg::WaitForTick>::value> {};

template<>
struct has_bounded_size<morai_msgs::srv::MoraiWaitForTickSrv_Request>
  : std::integral_constant<bool, has_bounded_size<morai_msgs::msg::WaitForTick>::value> {};

template<>
struct is_message<morai_msgs::srv::MoraiWaitForTickSrv_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'response'
#include "morai_msgs/msg/detail/wait_for_tick_response__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const morai_msgs::srv::MoraiWaitForTickSrv_Response & msg,
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

inline std::string to_yaml(const morai_msgs::srv::MoraiWaitForTickSrv_Response & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<morai_msgs::srv::MoraiWaitForTickSrv_Response>()
{
  return "morai_msgs::srv::MoraiWaitForTickSrv_Response";
}

template<>
inline const char * name<morai_msgs::srv::MoraiWaitForTickSrv_Response>()
{
  return "morai_msgs/srv/MoraiWaitForTickSrv_Response";
}

template<>
struct has_fixed_size<morai_msgs::srv::MoraiWaitForTickSrv_Response>
  : std::integral_constant<bool, has_fixed_size<morai_msgs::msg::WaitForTickResponse>::value> {};

template<>
struct has_bounded_size<morai_msgs::srv::MoraiWaitForTickSrv_Response>
  : std::integral_constant<bool, has_bounded_size<morai_msgs::msg::WaitForTickResponse>::value> {};

template<>
struct is_message<morai_msgs::srv::MoraiWaitForTickSrv_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<morai_msgs::srv::MoraiWaitForTickSrv>()
{
  return "morai_msgs::srv::MoraiWaitForTickSrv";
}

template<>
inline const char * name<morai_msgs::srv::MoraiWaitForTickSrv>()
{
  return "morai_msgs/srv/MoraiWaitForTickSrv";
}

template<>
struct has_fixed_size<morai_msgs::srv::MoraiWaitForTickSrv>
  : std::integral_constant<
    bool,
    has_fixed_size<morai_msgs::srv::MoraiWaitForTickSrv_Request>::value &&
    has_fixed_size<morai_msgs::srv::MoraiWaitForTickSrv_Response>::value
  >
{
};

template<>
struct has_bounded_size<morai_msgs::srv::MoraiWaitForTickSrv>
  : std::integral_constant<
    bool,
    has_bounded_size<morai_msgs::srv::MoraiWaitForTickSrv_Request>::value &&
    has_bounded_size<morai_msgs::srv::MoraiWaitForTickSrv_Response>::value
  >
{
};

template<>
struct is_service<morai_msgs::srv::MoraiWaitForTickSrv>
  : std::true_type
{
};

template<>
struct is_service_request<morai_msgs::srv::MoraiWaitForTickSrv_Request>
  : std::true_type
{
};

template<>
struct is_service_response<morai_msgs::srv::MoraiWaitForTickSrv_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // MORAI_MSGS__SRV__DETAIL__MORAI_WAIT_FOR_TICK_SRV__TRAITS_HPP_

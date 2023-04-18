// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from tier4_control_msgs:srv/SetPause.idl
// generated code does not contain a copyright notice

#ifndef TIER4_CONTROL_MSGS__SRV__DETAIL__SET_PAUSE__TRAITS_HPP_
#define TIER4_CONTROL_MSGS__SRV__DETAIL__SET_PAUSE__TRAITS_HPP_

#include "tier4_control_msgs/srv/detail/set_pause__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const tier4_control_msgs::srv::SetPause_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: pause
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pause: ";
    value_to_yaml(msg.pause, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const tier4_control_msgs::srv::SetPause_Request & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<tier4_control_msgs::srv::SetPause_Request>()
{
  return "tier4_control_msgs::srv::SetPause_Request";
}

template<>
inline const char * name<tier4_control_msgs::srv::SetPause_Request>()
{
  return "tier4_control_msgs/srv/SetPause_Request";
}

template<>
struct has_fixed_size<tier4_control_msgs::srv::SetPause_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<tier4_control_msgs::srv::SetPause_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<tier4_control_msgs::srv::SetPause_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'status'
#include "autoware_common_msgs/msg/detail/response_status__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const tier4_control_msgs::srv::SetPause_Response & msg,
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
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const tier4_control_msgs::srv::SetPause_Response & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<tier4_control_msgs::srv::SetPause_Response>()
{
  return "tier4_control_msgs::srv::SetPause_Response";
}

template<>
inline const char * name<tier4_control_msgs::srv::SetPause_Response>()
{
  return "tier4_control_msgs/srv/SetPause_Response";
}

template<>
struct has_fixed_size<tier4_control_msgs::srv::SetPause_Response>
  : std::integral_constant<bool, has_fixed_size<autoware_common_msgs::msg::ResponseStatus>::value> {};

template<>
struct has_bounded_size<tier4_control_msgs::srv::SetPause_Response>
  : std::integral_constant<bool, has_bounded_size<autoware_common_msgs::msg::ResponseStatus>::value> {};

template<>
struct is_message<tier4_control_msgs::srv::SetPause_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<tier4_control_msgs::srv::SetPause>()
{
  return "tier4_control_msgs::srv::SetPause";
}

template<>
inline const char * name<tier4_control_msgs::srv::SetPause>()
{
  return "tier4_control_msgs/srv/SetPause";
}

template<>
struct has_fixed_size<tier4_control_msgs::srv::SetPause>
  : std::integral_constant<
    bool,
    has_fixed_size<tier4_control_msgs::srv::SetPause_Request>::value &&
    has_fixed_size<tier4_control_msgs::srv::SetPause_Response>::value
  >
{
};

template<>
struct has_bounded_size<tier4_control_msgs::srv::SetPause>
  : std::integral_constant<
    bool,
    has_bounded_size<tier4_control_msgs::srv::SetPause_Request>::value &&
    has_bounded_size<tier4_control_msgs::srv::SetPause_Response>::value
  >
{
};

template<>
struct is_service<tier4_control_msgs::srv::SetPause>
  : std::true_type
{
};

template<>
struct is_service_request<tier4_control_msgs::srv::SetPause_Request>
  : std::true_type
{
};

template<>
struct is_service_response<tier4_control_msgs::srv::SetPause_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // TIER4_CONTROL_MSGS__SRV__DETAIL__SET_PAUSE__TRAITS_HPP_

// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from tier4_rtc_msgs:srv/AutoMode.idl
// generated code does not contain a copyright notice

#ifndef TIER4_RTC_MSGS__SRV__DETAIL__AUTO_MODE__TRAITS_HPP_
#define TIER4_RTC_MSGS__SRV__DETAIL__AUTO_MODE__TRAITS_HPP_

#include "tier4_rtc_msgs/srv/detail/auto_mode__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const tier4_rtc_msgs::srv::AutoMode_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: enable
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "enable: ";
    value_to_yaml(msg.enable, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const tier4_rtc_msgs::srv::AutoMode_Request & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<tier4_rtc_msgs::srv::AutoMode_Request>()
{
  return "tier4_rtc_msgs::srv::AutoMode_Request";
}

template<>
inline const char * name<tier4_rtc_msgs::srv::AutoMode_Request>()
{
  return "tier4_rtc_msgs/srv/AutoMode_Request";
}

template<>
struct has_fixed_size<tier4_rtc_msgs::srv::AutoMode_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<tier4_rtc_msgs::srv::AutoMode_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<tier4_rtc_msgs::srv::AutoMode_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

inline void to_yaml(
  const tier4_rtc_msgs::srv::AutoMode_Response & msg,
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

inline std::string to_yaml(const tier4_rtc_msgs::srv::AutoMode_Response & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<tier4_rtc_msgs::srv::AutoMode_Response>()
{
  return "tier4_rtc_msgs::srv::AutoMode_Response";
}

template<>
inline const char * name<tier4_rtc_msgs::srv::AutoMode_Response>()
{
  return "tier4_rtc_msgs/srv/AutoMode_Response";
}

template<>
struct has_fixed_size<tier4_rtc_msgs::srv::AutoMode_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<tier4_rtc_msgs::srv::AutoMode_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<tier4_rtc_msgs::srv::AutoMode_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<tier4_rtc_msgs::srv::AutoMode>()
{
  return "tier4_rtc_msgs::srv::AutoMode";
}

template<>
inline const char * name<tier4_rtc_msgs::srv::AutoMode>()
{
  return "tier4_rtc_msgs/srv/AutoMode";
}

template<>
struct has_fixed_size<tier4_rtc_msgs::srv::AutoMode>
  : std::integral_constant<
    bool,
    has_fixed_size<tier4_rtc_msgs::srv::AutoMode_Request>::value &&
    has_fixed_size<tier4_rtc_msgs::srv::AutoMode_Response>::value
  >
{
};

template<>
struct has_bounded_size<tier4_rtc_msgs::srv::AutoMode>
  : std::integral_constant<
    bool,
    has_bounded_size<tier4_rtc_msgs::srv::AutoMode_Request>::value &&
    has_bounded_size<tier4_rtc_msgs::srv::AutoMode_Response>::value
  >
{
};

template<>
struct is_service<tier4_rtc_msgs::srv::AutoMode>
  : std::true_type
{
};

template<>
struct is_service_request<tier4_rtc_msgs::srv::AutoMode_Request>
  : std::true_type
{
};

template<>
struct is_service_response<tier4_rtc_msgs::srv::AutoMode_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // TIER4_RTC_MSGS__SRV__DETAIL__AUTO_MODE__TRAITS_HPP_

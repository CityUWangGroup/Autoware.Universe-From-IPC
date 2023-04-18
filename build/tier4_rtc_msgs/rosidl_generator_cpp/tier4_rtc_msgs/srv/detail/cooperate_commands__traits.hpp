// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from tier4_rtc_msgs:srv/CooperateCommands.idl
// generated code does not contain a copyright notice

#ifndef TIER4_RTC_MSGS__SRV__DETAIL__COOPERATE_COMMANDS__TRAITS_HPP_
#define TIER4_RTC_MSGS__SRV__DETAIL__COOPERATE_COMMANDS__TRAITS_HPP_

#include "tier4_rtc_msgs/srv/detail/cooperate_commands__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"
// Member 'commands'
#include "tier4_rtc_msgs/msg/detail/cooperate_command__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const tier4_rtc_msgs::srv::CooperateCommands_Request & msg,
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

  // member: commands
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.commands.size() == 0) {
      out << "commands: []\n";
    } else {
      out << "commands:\n";
      for (auto item : msg.commands) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const tier4_rtc_msgs::srv::CooperateCommands_Request & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<tier4_rtc_msgs::srv::CooperateCommands_Request>()
{
  return "tier4_rtc_msgs::srv::CooperateCommands_Request";
}

template<>
inline const char * name<tier4_rtc_msgs::srv::CooperateCommands_Request>()
{
  return "tier4_rtc_msgs/srv/CooperateCommands_Request";
}

template<>
struct has_fixed_size<tier4_rtc_msgs::srv::CooperateCommands_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<tier4_rtc_msgs::srv::CooperateCommands_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<tier4_rtc_msgs::srv::CooperateCommands_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'responses'
#include "tier4_rtc_msgs/msg/detail/cooperate_response__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const tier4_rtc_msgs::srv::CooperateCommands_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: responses
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.responses.size() == 0) {
      out << "responses: []\n";
    } else {
      out << "responses:\n";
      for (auto item : msg.responses) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const tier4_rtc_msgs::srv::CooperateCommands_Response & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<tier4_rtc_msgs::srv::CooperateCommands_Response>()
{
  return "tier4_rtc_msgs::srv::CooperateCommands_Response";
}

template<>
inline const char * name<tier4_rtc_msgs::srv::CooperateCommands_Response>()
{
  return "tier4_rtc_msgs/srv/CooperateCommands_Response";
}

template<>
struct has_fixed_size<tier4_rtc_msgs::srv::CooperateCommands_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<tier4_rtc_msgs::srv::CooperateCommands_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<tier4_rtc_msgs::srv::CooperateCommands_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<tier4_rtc_msgs::srv::CooperateCommands>()
{
  return "tier4_rtc_msgs::srv::CooperateCommands";
}

template<>
inline const char * name<tier4_rtc_msgs::srv::CooperateCommands>()
{
  return "tier4_rtc_msgs/srv/CooperateCommands";
}

template<>
struct has_fixed_size<tier4_rtc_msgs::srv::CooperateCommands>
  : std::integral_constant<
    bool,
    has_fixed_size<tier4_rtc_msgs::srv::CooperateCommands_Request>::value &&
    has_fixed_size<tier4_rtc_msgs::srv::CooperateCommands_Response>::value
  >
{
};

template<>
struct has_bounded_size<tier4_rtc_msgs::srv::CooperateCommands>
  : std::integral_constant<
    bool,
    has_bounded_size<tier4_rtc_msgs::srv::CooperateCommands_Request>::value &&
    has_bounded_size<tier4_rtc_msgs::srv::CooperateCommands_Response>::value
  >
{
};

template<>
struct is_service<tier4_rtc_msgs::srv::CooperateCommands>
  : std::true_type
{
};

template<>
struct is_service_request<tier4_rtc_msgs::srv::CooperateCommands_Request>
  : std::true_type
{
};

template<>
struct is_service_response<tier4_rtc_msgs::srv::CooperateCommands_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // TIER4_RTC_MSGS__SRV__DETAIL__COOPERATE_COMMANDS__TRAITS_HPP_

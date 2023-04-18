// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from autoware_planning_msgs:srv/SetRoute.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_PLANNING_MSGS__SRV__DETAIL__SET_ROUTE__TRAITS_HPP_
#define AUTOWARE_PLANNING_MSGS__SRV__DETAIL__SET_ROUTE__TRAITS_HPP_

#include "autoware_planning_msgs/srv/detail/set_route__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'goal'
#include "geometry_msgs/msg/detail/pose__traits.hpp"
// Member 'segments'
#include "autoware_planning_msgs/msg/detail/lanelet_segment__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const autoware_planning_msgs::srv::SetRoute_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_yaml(msg.header, out, indentation + 2);
  }

  // member: goal
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal:\n";
    to_yaml(msg.goal, out, indentation + 2);
  }

  // member: segments
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.segments.size() == 0) {
      out << "segments: []\n";
    } else {
      out << "segments:\n";
      for (auto item : msg.segments) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const autoware_planning_msgs::srv::SetRoute_Request & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<autoware_planning_msgs::srv::SetRoute_Request>()
{
  return "autoware_planning_msgs::srv::SetRoute_Request";
}

template<>
inline const char * name<autoware_planning_msgs::srv::SetRoute_Request>()
{
  return "autoware_planning_msgs/srv/SetRoute_Request";
}

template<>
struct has_fixed_size<autoware_planning_msgs::srv::SetRoute_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<autoware_planning_msgs::srv::SetRoute_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<autoware_planning_msgs::srv::SetRoute_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'status'
#include "autoware_common_msgs/msg/detail/response_status__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const autoware_planning_msgs::srv::SetRoute_Response & msg,
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

inline std::string to_yaml(const autoware_planning_msgs::srv::SetRoute_Response & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<autoware_planning_msgs::srv::SetRoute_Response>()
{
  return "autoware_planning_msgs::srv::SetRoute_Response";
}

template<>
inline const char * name<autoware_planning_msgs::srv::SetRoute_Response>()
{
  return "autoware_planning_msgs/srv/SetRoute_Response";
}

template<>
struct has_fixed_size<autoware_planning_msgs::srv::SetRoute_Response>
  : std::integral_constant<bool, has_fixed_size<autoware_common_msgs::msg::ResponseStatus>::value> {};

template<>
struct has_bounded_size<autoware_planning_msgs::srv::SetRoute_Response>
  : std::integral_constant<bool, has_bounded_size<autoware_common_msgs::msg::ResponseStatus>::value> {};

template<>
struct is_message<autoware_planning_msgs::srv::SetRoute_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<autoware_planning_msgs::srv::SetRoute>()
{
  return "autoware_planning_msgs::srv::SetRoute";
}

template<>
inline const char * name<autoware_planning_msgs::srv::SetRoute>()
{
  return "autoware_planning_msgs/srv/SetRoute";
}

template<>
struct has_fixed_size<autoware_planning_msgs::srv::SetRoute>
  : std::integral_constant<
    bool,
    has_fixed_size<autoware_planning_msgs::srv::SetRoute_Request>::value &&
    has_fixed_size<autoware_planning_msgs::srv::SetRoute_Response>::value
  >
{
};

template<>
struct has_bounded_size<autoware_planning_msgs::srv::SetRoute>
  : std::integral_constant<
    bool,
    has_bounded_size<autoware_planning_msgs::srv::SetRoute_Request>::value &&
    has_bounded_size<autoware_planning_msgs::srv::SetRoute_Response>::value
  >
{
};

template<>
struct is_service<autoware_planning_msgs::srv::SetRoute>
  : std::true_type
{
};

template<>
struct is_service_request<autoware_planning_msgs::srv::SetRoute_Request>
  : std::true_type
{
};

template<>
struct is_service_response<autoware_planning_msgs::srv::SetRoute_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // AUTOWARE_PLANNING_MSGS__SRV__DETAIL__SET_ROUTE__TRAITS_HPP_

// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from autoware_adapi_v1_msgs:srv/InitializeLocalization.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_ADAPI_V1_MSGS__SRV__DETAIL__INITIALIZE_LOCALIZATION__TRAITS_HPP_
#define AUTOWARE_ADAPI_V1_MSGS__SRV__DETAIL__INITIALIZE_LOCALIZATION__TRAITS_HPP_

#include "autoware_adapi_v1_msgs/srv/detail/initialize_localization__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'pose'
#include "geometry_msgs/msg/detail/pose_with_covariance_stamped__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const autoware_adapi_v1_msgs::srv::InitializeLocalization_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: pose
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.pose.size() == 0) {
      out << "pose: []\n";
    } else {
      out << "pose:\n";
      for (auto item : msg.pose) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const autoware_adapi_v1_msgs::srv::InitializeLocalization_Request & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<autoware_adapi_v1_msgs::srv::InitializeLocalization_Request>()
{
  return "autoware_adapi_v1_msgs::srv::InitializeLocalization_Request";
}

template<>
inline const char * name<autoware_adapi_v1_msgs::srv::InitializeLocalization_Request>()
{
  return "autoware_adapi_v1_msgs/srv/InitializeLocalization_Request";
}

template<>
struct has_fixed_size<autoware_adapi_v1_msgs::srv::InitializeLocalization_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<autoware_adapi_v1_msgs::srv::InitializeLocalization_Request>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::PoseWithCovarianceStamped>::value> {};

template<>
struct is_message<autoware_adapi_v1_msgs::srv::InitializeLocalization_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'status'
#include "autoware_adapi_v1_msgs/msg/detail/response_status__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const autoware_adapi_v1_msgs::srv::InitializeLocalization_Response & msg,
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

inline std::string to_yaml(const autoware_adapi_v1_msgs::srv::InitializeLocalization_Response & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<autoware_adapi_v1_msgs::srv::InitializeLocalization_Response>()
{
  return "autoware_adapi_v1_msgs::srv::InitializeLocalization_Response";
}

template<>
inline const char * name<autoware_adapi_v1_msgs::srv::InitializeLocalization_Response>()
{
  return "autoware_adapi_v1_msgs/srv/InitializeLocalization_Response";
}

template<>
struct has_fixed_size<autoware_adapi_v1_msgs::srv::InitializeLocalization_Response>
  : std::integral_constant<bool, has_fixed_size<autoware_adapi_v1_msgs::msg::ResponseStatus>::value> {};

template<>
struct has_bounded_size<autoware_adapi_v1_msgs::srv::InitializeLocalization_Response>
  : std::integral_constant<bool, has_bounded_size<autoware_adapi_v1_msgs::msg::ResponseStatus>::value> {};

template<>
struct is_message<autoware_adapi_v1_msgs::srv::InitializeLocalization_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<autoware_adapi_v1_msgs::srv::InitializeLocalization>()
{
  return "autoware_adapi_v1_msgs::srv::InitializeLocalization";
}

template<>
inline const char * name<autoware_adapi_v1_msgs::srv::InitializeLocalization>()
{
  return "autoware_adapi_v1_msgs/srv/InitializeLocalization";
}

template<>
struct has_fixed_size<autoware_adapi_v1_msgs::srv::InitializeLocalization>
  : std::integral_constant<
    bool,
    has_fixed_size<autoware_adapi_v1_msgs::srv::InitializeLocalization_Request>::value &&
    has_fixed_size<autoware_adapi_v1_msgs::srv::InitializeLocalization_Response>::value
  >
{
};

template<>
struct has_bounded_size<autoware_adapi_v1_msgs::srv::InitializeLocalization>
  : std::integral_constant<
    bool,
    has_bounded_size<autoware_adapi_v1_msgs::srv::InitializeLocalization_Request>::value &&
    has_bounded_size<autoware_adapi_v1_msgs::srv::InitializeLocalization_Response>::value
  >
{
};

template<>
struct is_service<autoware_adapi_v1_msgs::srv::InitializeLocalization>
  : std::true_type
{
};

template<>
struct is_service_request<autoware_adapi_v1_msgs::srv::InitializeLocalization_Request>
  : std::true_type
{
};

template<>
struct is_service_response<autoware_adapi_v1_msgs::srv::InitializeLocalization_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // AUTOWARE_ADAPI_V1_MSGS__SRV__DETAIL__INITIALIZE_LOCALIZATION__TRAITS_HPP_

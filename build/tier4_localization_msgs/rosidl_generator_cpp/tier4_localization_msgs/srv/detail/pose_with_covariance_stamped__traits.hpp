// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from tier4_localization_msgs:srv/PoseWithCovarianceStamped.idl
// generated code does not contain a copyright notice

#ifndef TIER4_LOCALIZATION_MSGS__SRV__DETAIL__POSE_WITH_COVARIANCE_STAMPED__TRAITS_HPP_
#define TIER4_LOCALIZATION_MSGS__SRV__DETAIL__POSE_WITH_COVARIANCE_STAMPED__TRAITS_HPP_

#include "tier4_localization_msgs/srv/detail/pose_with_covariance_stamped__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'pose_with_covariance'
#include "geometry_msgs/msg/detail/pose_with_covariance_stamped__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const tier4_localization_msgs::srv::PoseWithCovarianceStamped_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: pose_with_covariance
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pose_with_covariance:\n";
    to_yaml(msg.pose_with_covariance, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const tier4_localization_msgs::srv::PoseWithCovarianceStamped_Request & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<tier4_localization_msgs::srv::PoseWithCovarianceStamped_Request>()
{
  return "tier4_localization_msgs::srv::PoseWithCovarianceStamped_Request";
}

template<>
inline const char * name<tier4_localization_msgs::srv::PoseWithCovarianceStamped_Request>()
{
  return "tier4_localization_msgs/srv/PoseWithCovarianceStamped_Request";
}

template<>
struct has_fixed_size<tier4_localization_msgs::srv::PoseWithCovarianceStamped_Request>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::PoseWithCovarianceStamped>::value> {};

template<>
struct has_bounded_size<tier4_localization_msgs::srv::PoseWithCovarianceStamped_Request>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::PoseWithCovarianceStamped>::value> {};

template<>
struct is_message<tier4_localization_msgs::srv::PoseWithCovarianceStamped_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'pose_with_covariance'
// already included above
// #include "geometry_msgs/msg/detail/pose_with_covariance_stamped__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const tier4_localization_msgs::srv::PoseWithCovarianceStamped_Response & msg,
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

  // member: pose_with_covariance
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pose_with_covariance:\n";
    to_yaml(msg.pose_with_covariance, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const tier4_localization_msgs::srv::PoseWithCovarianceStamped_Response & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<tier4_localization_msgs::srv::PoseWithCovarianceStamped_Response>()
{
  return "tier4_localization_msgs::srv::PoseWithCovarianceStamped_Response";
}

template<>
inline const char * name<tier4_localization_msgs::srv::PoseWithCovarianceStamped_Response>()
{
  return "tier4_localization_msgs/srv/PoseWithCovarianceStamped_Response";
}

template<>
struct has_fixed_size<tier4_localization_msgs::srv::PoseWithCovarianceStamped_Response>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::PoseWithCovarianceStamped>::value> {};

template<>
struct has_bounded_size<tier4_localization_msgs::srv::PoseWithCovarianceStamped_Response>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::PoseWithCovarianceStamped>::value> {};

template<>
struct is_message<tier4_localization_msgs::srv::PoseWithCovarianceStamped_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<tier4_localization_msgs::srv::PoseWithCovarianceStamped>()
{
  return "tier4_localization_msgs::srv::PoseWithCovarianceStamped";
}

template<>
inline const char * name<tier4_localization_msgs::srv::PoseWithCovarianceStamped>()
{
  return "tier4_localization_msgs/srv/PoseWithCovarianceStamped";
}

template<>
struct has_fixed_size<tier4_localization_msgs::srv::PoseWithCovarianceStamped>
  : std::integral_constant<
    bool,
    has_fixed_size<tier4_localization_msgs::srv::PoseWithCovarianceStamped_Request>::value &&
    has_fixed_size<tier4_localization_msgs::srv::PoseWithCovarianceStamped_Response>::value
  >
{
};

template<>
struct has_bounded_size<tier4_localization_msgs::srv::PoseWithCovarianceStamped>
  : std::integral_constant<
    bool,
    has_bounded_size<tier4_localization_msgs::srv::PoseWithCovarianceStamped_Request>::value &&
    has_bounded_size<tier4_localization_msgs::srv::PoseWithCovarianceStamped_Response>::value
  >
{
};

template<>
struct is_service<tier4_localization_msgs::srv::PoseWithCovarianceStamped>
  : std::true_type
{
};

template<>
struct is_service_request<tier4_localization_msgs::srv::PoseWithCovarianceStamped_Request>
  : std::true_type
{
};

template<>
struct is_service_response<tier4_localization_msgs::srv::PoseWithCovarianceStamped_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // TIER4_LOCALIZATION_MSGS__SRV__DETAIL__POSE_WITH_COVARIANCE_STAMPED__TRAITS_HPP_

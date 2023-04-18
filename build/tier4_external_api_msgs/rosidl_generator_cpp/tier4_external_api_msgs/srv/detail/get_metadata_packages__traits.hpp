// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from tier4_external_api_msgs:srv/GetMetadataPackages.idl
// generated code does not contain a copyright notice

#ifndef TIER4_EXTERNAL_API_MSGS__SRV__DETAIL__GET_METADATA_PACKAGES__TRAITS_HPP_
#define TIER4_EXTERNAL_API_MSGS__SRV__DETAIL__GET_METADATA_PACKAGES__TRAITS_HPP_

#include "tier4_external_api_msgs/srv/detail/get_metadata_packages__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const tier4_external_api_msgs::srv::GetMetadataPackages_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  (void)msg;
  (void)indentation;
  out << "null\n";
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const tier4_external_api_msgs::srv::GetMetadataPackages_Request & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<tier4_external_api_msgs::srv::GetMetadataPackages_Request>()
{
  return "tier4_external_api_msgs::srv::GetMetadataPackages_Request";
}

template<>
inline const char * name<tier4_external_api_msgs::srv::GetMetadataPackages_Request>()
{
  return "tier4_external_api_msgs/srv/GetMetadataPackages_Request";
}

template<>
struct has_fixed_size<tier4_external_api_msgs::srv::GetMetadataPackages_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<tier4_external_api_msgs::srv::GetMetadataPackages_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<tier4_external_api_msgs::srv::GetMetadataPackages_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'status'
#include "tier4_external_api_msgs/msg/detail/response_status__traits.hpp"
// Member 'metadata'
#include "tier4_external_api_msgs/msg/detail/metadata_packages__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const tier4_external_api_msgs::srv::GetMetadataPackages_Response & msg,
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

  // member: metadata
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "metadata:\n";
    to_yaml(msg.metadata, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const tier4_external_api_msgs::srv::GetMetadataPackages_Response & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<tier4_external_api_msgs::srv::GetMetadataPackages_Response>()
{
  return "tier4_external_api_msgs::srv::GetMetadataPackages_Response";
}

template<>
inline const char * name<tier4_external_api_msgs::srv::GetMetadataPackages_Response>()
{
  return "tier4_external_api_msgs/srv/GetMetadataPackages_Response";
}

template<>
struct has_fixed_size<tier4_external_api_msgs::srv::GetMetadataPackages_Response>
  : std::integral_constant<bool, has_fixed_size<tier4_external_api_msgs::msg::MetadataPackages>::value && has_fixed_size<tier4_external_api_msgs::msg::ResponseStatus>::value> {};

template<>
struct has_bounded_size<tier4_external_api_msgs::srv::GetMetadataPackages_Response>
  : std::integral_constant<bool, has_bounded_size<tier4_external_api_msgs::msg::MetadataPackages>::value && has_bounded_size<tier4_external_api_msgs::msg::ResponseStatus>::value> {};

template<>
struct is_message<tier4_external_api_msgs::srv::GetMetadataPackages_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<tier4_external_api_msgs::srv::GetMetadataPackages>()
{
  return "tier4_external_api_msgs::srv::GetMetadataPackages";
}

template<>
inline const char * name<tier4_external_api_msgs::srv::GetMetadataPackages>()
{
  return "tier4_external_api_msgs/srv/GetMetadataPackages";
}

template<>
struct has_fixed_size<tier4_external_api_msgs::srv::GetMetadataPackages>
  : std::integral_constant<
    bool,
    has_fixed_size<tier4_external_api_msgs::srv::GetMetadataPackages_Request>::value &&
    has_fixed_size<tier4_external_api_msgs::srv::GetMetadataPackages_Response>::value
  >
{
};

template<>
struct has_bounded_size<tier4_external_api_msgs::srv::GetMetadataPackages>
  : std::integral_constant<
    bool,
    has_bounded_size<tier4_external_api_msgs::srv::GetMetadataPackages_Request>::value &&
    has_bounded_size<tier4_external_api_msgs::srv::GetMetadataPackages_Response>::value
  >
{
};

template<>
struct is_service<tier4_external_api_msgs::srv::GetMetadataPackages>
  : std::true_type
{
};

template<>
struct is_service_request<tier4_external_api_msgs::srv::GetMetadataPackages_Request>
  : std::true_type
{
};

template<>
struct is_service_response<tier4_external_api_msgs::srv::GetMetadataPackages_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // TIER4_EXTERNAL_API_MSGS__SRV__DETAIL__GET_METADATA_PACKAGES__TRAITS_HPP_

// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from tier4_external_api_msgs:srv/GetRosbagCopyList.idl
// generated code does not contain a copyright notice

#ifndef TIER4_EXTERNAL_API_MSGS__SRV__DETAIL__GET_ROSBAG_COPY_LIST__TRAITS_HPP_
#define TIER4_EXTERNAL_API_MSGS__SRV__DETAIL__GET_ROSBAG_COPY_LIST__TRAITS_HPP_

#include "tier4_external_api_msgs/srv/detail/get_rosbag_copy_list__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const tier4_external_api_msgs::srv::GetRosbagCopyList_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  (void)msg;
  (void)indentation;
  out << "null\n";
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const tier4_external_api_msgs::srv::GetRosbagCopyList_Request & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<tier4_external_api_msgs::srv::GetRosbagCopyList_Request>()
{
  return "tier4_external_api_msgs::srv::GetRosbagCopyList_Request";
}

template<>
inline const char * name<tier4_external_api_msgs::srv::GetRosbagCopyList_Request>()
{
  return "tier4_external_api_msgs/srv/GetRosbagCopyList_Request";
}

template<>
struct has_fixed_size<tier4_external_api_msgs::srv::GetRosbagCopyList_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<tier4_external_api_msgs::srv::GetRosbagCopyList_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<tier4_external_api_msgs::srv::GetRosbagCopyList_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'status'
#include "tier4_external_api_msgs/msg/detail/response_status__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const tier4_external_api_msgs::srv::GetRosbagCopyList_Response & msg,
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

  // member: copy_directory_list
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "copy_directory_list: ";
    value_to_yaml(msg.copy_directory_list, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const tier4_external_api_msgs::srv::GetRosbagCopyList_Response & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<tier4_external_api_msgs::srv::GetRosbagCopyList_Response>()
{
  return "tier4_external_api_msgs::srv::GetRosbagCopyList_Response";
}

template<>
inline const char * name<tier4_external_api_msgs::srv::GetRosbagCopyList_Response>()
{
  return "tier4_external_api_msgs/srv/GetRosbagCopyList_Response";
}

template<>
struct has_fixed_size<tier4_external_api_msgs::srv::GetRosbagCopyList_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<tier4_external_api_msgs::srv::GetRosbagCopyList_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<tier4_external_api_msgs::srv::GetRosbagCopyList_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<tier4_external_api_msgs::srv::GetRosbagCopyList>()
{
  return "tier4_external_api_msgs::srv::GetRosbagCopyList";
}

template<>
inline const char * name<tier4_external_api_msgs::srv::GetRosbagCopyList>()
{
  return "tier4_external_api_msgs/srv/GetRosbagCopyList";
}

template<>
struct has_fixed_size<tier4_external_api_msgs::srv::GetRosbagCopyList>
  : std::integral_constant<
    bool,
    has_fixed_size<tier4_external_api_msgs::srv::GetRosbagCopyList_Request>::value &&
    has_fixed_size<tier4_external_api_msgs::srv::GetRosbagCopyList_Response>::value
  >
{
};

template<>
struct has_bounded_size<tier4_external_api_msgs::srv::GetRosbagCopyList>
  : std::integral_constant<
    bool,
    has_bounded_size<tier4_external_api_msgs::srv::GetRosbagCopyList_Request>::value &&
    has_bounded_size<tier4_external_api_msgs::srv::GetRosbagCopyList_Response>::value
  >
{
};

template<>
struct is_service<tier4_external_api_msgs::srv::GetRosbagCopyList>
  : std::true_type
{
};

template<>
struct is_service_request<tier4_external_api_msgs::srv::GetRosbagCopyList_Request>
  : std::true_type
{
};

template<>
struct is_service_response<tier4_external_api_msgs::srv::GetRosbagCopyList_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // TIER4_EXTERNAL_API_MSGS__SRV__DETAIL__GET_ROSBAG_COPY_LIST__TRAITS_HPP_

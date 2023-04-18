// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from autoware_auto_mapping_msgs:srv/HADMapService.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_AUTO_MAPPING_MSGS__SRV__DETAIL__HAD_MAP_SERVICE__TRAITS_HPP_
#define AUTOWARE_AUTO_MAPPING_MSGS__SRV__DETAIL__HAD_MAP_SERVICE__TRAITS_HPP_

#include "autoware_auto_mapping_msgs/srv/detail/had_map_service__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const autoware_auto_mapping_msgs::srv::HADMapService_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: requested_primitives
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.requested_primitives.size() == 0) {
      out << "requested_primitives: []\n";
    } else {
      out << "requested_primitives:\n";
      for (auto item : msg.requested_primitives) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: geom_upper_bound
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.geom_upper_bound.size() == 0) {
      out << "geom_upper_bound: []\n";
    } else {
      out << "geom_upper_bound:\n";
      for (auto item : msg.geom_upper_bound) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: geom_lower_bound
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.geom_lower_bound.size() == 0) {
      out << "geom_lower_bound: []\n";
    } else {
      out << "geom_lower_bound:\n";
      for (auto item : msg.geom_lower_bound) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const autoware_auto_mapping_msgs::srv::HADMapService_Request & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<autoware_auto_mapping_msgs::srv::HADMapService_Request>()
{
  return "autoware_auto_mapping_msgs::srv::HADMapService_Request";
}

template<>
inline const char * name<autoware_auto_mapping_msgs::srv::HADMapService_Request>()
{
  return "autoware_auto_mapping_msgs/srv/HADMapService_Request";
}

template<>
struct has_fixed_size<autoware_auto_mapping_msgs::srv::HADMapService_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<autoware_auto_mapping_msgs::srv::HADMapService_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<autoware_auto_mapping_msgs::srv::HADMapService_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'map'
#include "autoware_auto_mapping_msgs/msg/detail/had_map_bin__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const autoware_auto_mapping_msgs::srv::HADMapService_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: map
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "map:\n";
    to_yaml(msg.map, out, indentation + 2);
  }

  // member: answer
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "answer: ";
    value_to_yaml(msg.answer, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const autoware_auto_mapping_msgs::srv::HADMapService_Response & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<autoware_auto_mapping_msgs::srv::HADMapService_Response>()
{
  return "autoware_auto_mapping_msgs::srv::HADMapService_Response";
}

template<>
inline const char * name<autoware_auto_mapping_msgs::srv::HADMapService_Response>()
{
  return "autoware_auto_mapping_msgs/srv/HADMapService_Response";
}

template<>
struct has_fixed_size<autoware_auto_mapping_msgs::srv::HADMapService_Response>
  : std::integral_constant<bool, has_fixed_size<autoware_auto_mapping_msgs::msg::HADMapBin>::value> {};

template<>
struct has_bounded_size<autoware_auto_mapping_msgs::srv::HADMapService_Response>
  : std::integral_constant<bool, has_bounded_size<autoware_auto_mapping_msgs::msg::HADMapBin>::value> {};

template<>
struct is_message<autoware_auto_mapping_msgs::srv::HADMapService_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<autoware_auto_mapping_msgs::srv::HADMapService>()
{
  return "autoware_auto_mapping_msgs::srv::HADMapService";
}

template<>
inline const char * name<autoware_auto_mapping_msgs::srv::HADMapService>()
{
  return "autoware_auto_mapping_msgs/srv/HADMapService";
}

template<>
struct has_fixed_size<autoware_auto_mapping_msgs::srv::HADMapService>
  : std::integral_constant<
    bool,
    has_fixed_size<autoware_auto_mapping_msgs::srv::HADMapService_Request>::value &&
    has_fixed_size<autoware_auto_mapping_msgs::srv::HADMapService_Response>::value
  >
{
};

template<>
struct has_bounded_size<autoware_auto_mapping_msgs::srv::HADMapService>
  : std::integral_constant<
    bool,
    has_bounded_size<autoware_auto_mapping_msgs::srv::HADMapService_Request>::value &&
    has_bounded_size<autoware_auto_mapping_msgs::srv::HADMapService_Response>::value
  >
{
};

template<>
struct is_service<autoware_auto_mapping_msgs::srv::HADMapService>
  : std::true_type
{
};

template<>
struct is_service_request<autoware_auto_mapping_msgs::srv::HADMapService_Request>
  : std::true_type
{
};

template<>
struct is_service_response<autoware_auto_mapping_msgs::srv::HADMapService_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // AUTOWARE_AUTO_MAPPING_MSGS__SRV__DETAIL__HAD_MAP_SERVICE__TRAITS_HPP_

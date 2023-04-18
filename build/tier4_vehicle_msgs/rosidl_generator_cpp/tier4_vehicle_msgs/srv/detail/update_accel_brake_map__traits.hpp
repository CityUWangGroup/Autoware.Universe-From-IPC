// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from tier4_vehicle_msgs:srv/UpdateAccelBrakeMap.idl
// generated code does not contain a copyright notice

#ifndef TIER4_VEHICLE_MSGS__SRV__DETAIL__UPDATE_ACCEL_BRAKE_MAP__TRAITS_HPP_
#define TIER4_VEHICLE_MSGS__SRV__DETAIL__UPDATE_ACCEL_BRAKE_MAP__TRAITS_HPP_

#include "tier4_vehicle_msgs/srv/detail/update_accel_brake_map__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const tier4_vehicle_msgs::srv::UpdateAccelBrakeMap_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: path
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "path: ";
    value_to_yaml(msg.path, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const tier4_vehicle_msgs::srv::UpdateAccelBrakeMap_Request & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<tier4_vehicle_msgs::srv::UpdateAccelBrakeMap_Request>()
{
  return "tier4_vehicle_msgs::srv::UpdateAccelBrakeMap_Request";
}

template<>
inline const char * name<tier4_vehicle_msgs::srv::UpdateAccelBrakeMap_Request>()
{
  return "tier4_vehicle_msgs/srv/UpdateAccelBrakeMap_Request";
}

template<>
struct has_fixed_size<tier4_vehicle_msgs::srv::UpdateAccelBrakeMap_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<tier4_vehicle_msgs::srv::UpdateAccelBrakeMap_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<tier4_vehicle_msgs::srv::UpdateAccelBrakeMap_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

inline void to_yaml(
  const tier4_vehicle_msgs::srv::UpdateAccelBrakeMap_Response & msg,
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

  // member: message
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "message: ";
    value_to_yaml(msg.message, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const tier4_vehicle_msgs::srv::UpdateAccelBrakeMap_Response & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<tier4_vehicle_msgs::srv::UpdateAccelBrakeMap_Response>()
{
  return "tier4_vehicle_msgs::srv::UpdateAccelBrakeMap_Response";
}

template<>
inline const char * name<tier4_vehicle_msgs::srv::UpdateAccelBrakeMap_Response>()
{
  return "tier4_vehicle_msgs/srv/UpdateAccelBrakeMap_Response";
}

template<>
struct has_fixed_size<tier4_vehicle_msgs::srv::UpdateAccelBrakeMap_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<tier4_vehicle_msgs::srv::UpdateAccelBrakeMap_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<tier4_vehicle_msgs::srv::UpdateAccelBrakeMap_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<tier4_vehicle_msgs::srv::UpdateAccelBrakeMap>()
{
  return "tier4_vehicle_msgs::srv::UpdateAccelBrakeMap";
}

template<>
inline const char * name<tier4_vehicle_msgs::srv::UpdateAccelBrakeMap>()
{
  return "tier4_vehicle_msgs/srv/UpdateAccelBrakeMap";
}

template<>
struct has_fixed_size<tier4_vehicle_msgs::srv::UpdateAccelBrakeMap>
  : std::integral_constant<
    bool,
    has_fixed_size<tier4_vehicle_msgs::srv::UpdateAccelBrakeMap_Request>::value &&
    has_fixed_size<tier4_vehicle_msgs::srv::UpdateAccelBrakeMap_Response>::value
  >
{
};

template<>
struct has_bounded_size<tier4_vehicle_msgs::srv::UpdateAccelBrakeMap>
  : std::integral_constant<
    bool,
    has_bounded_size<tier4_vehicle_msgs::srv::UpdateAccelBrakeMap_Request>::value &&
    has_bounded_size<tier4_vehicle_msgs::srv::UpdateAccelBrakeMap_Response>::value
  >
{
};

template<>
struct is_service<tier4_vehicle_msgs::srv::UpdateAccelBrakeMap>
  : std::true_type
{
};

template<>
struct is_service_request<tier4_vehicle_msgs::srv::UpdateAccelBrakeMap_Request>
  : std::true_type
{
};

template<>
struct is_service_response<tier4_vehicle_msgs::srv::UpdateAccelBrakeMap_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // TIER4_VEHICLE_MSGS__SRV__DETAIL__UPDATE_ACCEL_BRAKE_MAP__TRAITS_HPP_

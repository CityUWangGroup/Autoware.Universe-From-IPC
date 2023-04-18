// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from static_centerline_optimizer:srv/PlanPath.idl
// generated code does not contain a copyright notice

#ifndef STATIC_CENTERLINE_OPTIMIZER__SRV__DETAIL__PLAN_PATH__TRAITS_HPP_
#define STATIC_CENTERLINE_OPTIMIZER__SRV__DETAIL__PLAN_PATH__TRAITS_HPP_

#include "static_centerline_optimizer/srv/detail/plan_path__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const static_centerline_optimizer::srv::PlanPath_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: map_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "map_id: ";
    value_to_yaml(msg.map_id, out);
    out << "\n";
  }

  // member: route
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.route.size() == 0) {
      out << "route: []\n";
    } else {
      out << "route:\n";
      for (auto item : msg.route) {
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

inline std::string to_yaml(const static_centerline_optimizer::srv::PlanPath_Request & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<static_centerline_optimizer::srv::PlanPath_Request>()
{
  return "static_centerline_optimizer::srv::PlanPath_Request";
}

template<>
inline const char * name<static_centerline_optimizer::srv::PlanPath_Request>()
{
  return "static_centerline_optimizer/srv/PlanPath_Request";
}

template<>
struct has_fixed_size<static_centerline_optimizer::srv::PlanPath_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<static_centerline_optimizer::srv::PlanPath_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<static_centerline_optimizer::srv::PlanPath_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'points_with_lane_ids'
#include "static_centerline_optimizer/msg/detail/points_with_lane_id__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const static_centerline_optimizer::srv::PlanPath_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: points_with_lane_ids
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.points_with_lane_ids.size() == 0) {
      out << "points_with_lane_ids: []\n";
    } else {
      out << "points_with_lane_ids:\n";
      for (auto item : msg.points_with_lane_ids) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_yaml(item, out, indentation + 2);
      }
    }
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

  // member: unconnected_lane_ids
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.unconnected_lane_ids.size() == 0) {
      out << "unconnected_lane_ids: []\n";
    } else {
      out << "unconnected_lane_ids:\n";
      for (auto item : msg.unconnected_lane_ids) {
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

inline std::string to_yaml(const static_centerline_optimizer::srv::PlanPath_Response & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<static_centerline_optimizer::srv::PlanPath_Response>()
{
  return "static_centerline_optimizer::srv::PlanPath_Response";
}

template<>
inline const char * name<static_centerline_optimizer::srv::PlanPath_Response>()
{
  return "static_centerline_optimizer/srv/PlanPath_Response";
}

template<>
struct has_fixed_size<static_centerline_optimizer::srv::PlanPath_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<static_centerline_optimizer::srv::PlanPath_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<static_centerline_optimizer::srv::PlanPath_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<static_centerline_optimizer::srv::PlanPath>()
{
  return "static_centerline_optimizer::srv::PlanPath";
}

template<>
inline const char * name<static_centerline_optimizer::srv::PlanPath>()
{
  return "static_centerline_optimizer/srv/PlanPath";
}

template<>
struct has_fixed_size<static_centerline_optimizer::srv::PlanPath>
  : std::integral_constant<
    bool,
    has_fixed_size<static_centerline_optimizer::srv::PlanPath_Request>::value &&
    has_fixed_size<static_centerline_optimizer::srv::PlanPath_Response>::value
  >
{
};

template<>
struct has_bounded_size<static_centerline_optimizer::srv::PlanPath>
  : std::integral_constant<
    bool,
    has_bounded_size<static_centerline_optimizer::srv::PlanPath_Request>::value &&
    has_bounded_size<static_centerline_optimizer::srv::PlanPath_Response>::value
  >
{
};

template<>
struct is_service<static_centerline_optimizer::srv::PlanPath>
  : std::true_type
{
};

template<>
struct is_service_request<static_centerline_optimizer::srv::PlanPath_Request>
  : std::true_type
{
};

template<>
struct is_service_response<static_centerline_optimizer::srv::PlanPath_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // STATIC_CENTERLINE_OPTIMIZER__SRV__DETAIL__PLAN_PATH__TRAITS_HPP_

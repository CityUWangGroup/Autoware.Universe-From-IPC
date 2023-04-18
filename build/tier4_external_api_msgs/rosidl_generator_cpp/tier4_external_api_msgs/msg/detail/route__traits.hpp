// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from tier4_external_api_msgs:msg/Route.idl
// generated code does not contain a copyright notice

#ifndef TIER4_EXTERNAL_API_MSGS__MSG__DETAIL__ROUTE__TRAITS_HPP_
#define TIER4_EXTERNAL_API_MSGS__MSG__DETAIL__ROUTE__TRAITS_HPP_

#include "tier4_external_api_msgs/msg/detail/route__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'goal_pose'
#include "geometry_msgs/msg/detail/pose_stamped__traits.hpp"
// Member 'route_sections'
#include "tier4_external_api_msgs/msg/detail/route_section__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const tier4_external_api_msgs::msg::Route & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_pose
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_pose:\n";
    to_yaml(msg.goal_pose, out, indentation + 2);
  }

  // member: route_sections
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.route_sections.size() == 0) {
      out << "route_sections: []\n";
    } else {
      out << "route_sections:\n";
      for (auto item : msg.route_sections) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const tier4_external_api_msgs::msg::Route & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<tier4_external_api_msgs::msg::Route>()
{
  return "tier4_external_api_msgs::msg::Route";
}

template<>
inline const char * name<tier4_external_api_msgs::msg::Route>()
{
  return "tier4_external_api_msgs/msg/Route";
}

template<>
struct has_fixed_size<tier4_external_api_msgs::msg::Route>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<tier4_external_api_msgs::msg::Route>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<tier4_external_api_msgs::msg::Route>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // TIER4_EXTERNAL_API_MSGS__MSG__DETAIL__ROUTE__TRAITS_HPP_

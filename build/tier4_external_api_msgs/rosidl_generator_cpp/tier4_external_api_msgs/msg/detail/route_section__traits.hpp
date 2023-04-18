// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from tier4_external_api_msgs:msg/RouteSection.idl
// generated code does not contain a copyright notice

#ifndef TIER4_EXTERNAL_API_MSGS__MSG__DETAIL__ROUTE_SECTION__TRAITS_HPP_
#define TIER4_EXTERNAL_API_MSGS__MSG__DETAIL__ROUTE_SECTION__TRAITS_HPP_

#include "tier4_external_api_msgs/msg/detail/route_section__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const tier4_external_api_msgs::msg::RouteSection & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: preferred_lane_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "preferred_lane_id: ";
    value_to_yaml(msg.preferred_lane_id, out);
    out << "\n";
  }

  // member: lane_ids
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.lane_ids.size() == 0) {
      out << "lane_ids: []\n";
    } else {
      out << "lane_ids:\n";
      for (auto item : msg.lane_ids) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: continued_lane_ids
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.continued_lane_ids.size() == 0) {
      out << "continued_lane_ids: []\n";
    } else {
      out << "continued_lane_ids:\n";
      for (auto item : msg.continued_lane_ids) {
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

inline std::string to_yaml(const tier4_external_api_msgs::msg::RouteSection & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<tier4_external_api_msgs::msg::RouteSection>()
{
  return "tier4_external_api_msgs::msg::RouteSection";
}

template<>
inline const char * name<tier4_external_api_msgs::msg::RouteSection>()
{
  return "tier4_external_api_msgs/msg/RouteSection";
}

template<>
struct has_fixed_size<tier4_external_api_msgs::msg::RouteSection>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<tier4_external_api_msgs::msg::RouteSection>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<tier4_external_api_msgs::msg::RouteSection>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // TIER4_EXTERNAL_API_MSGS__MSG__DETAIL__ROUTE_SECTION__TRAITS_HPP_

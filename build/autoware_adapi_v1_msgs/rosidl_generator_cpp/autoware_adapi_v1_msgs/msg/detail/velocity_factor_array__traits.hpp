// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from autoware_adapi_v1_msgs:msg/VelocityFactorArray.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_ADAPI_V1_MSGS__MSG__DETAIL__VELOCITY_FACTOR_ARRAY__TRAITS_HPP_
#define AUTOWARE_ADAPI_V1_MSGS__MSG__DETAIL__VELOCITY_FACTOR_ARRAY__TRAITS_HPP_

#include "autoware_adapi_v1_msgs/msg/detail/velocity_factor_array__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'factors'
#include "autoware_adapi_v1_msgs/msg/detail/velocity_factor__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const autoware_adapi_v1_msgs::msg::VelocityFactorArray & msg,
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

  // member: factors
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.factors.size() == 0) {
      out << "factors: []\n";
    } else {
      out << "factors:\n";
      for (auto item : msg.factors) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const autoware_adapi_v1_msgs::msg::VelocityFactorArray & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<autoware_adapi_v1_msgs::msg::VelocityFactorArray>()
{
  return "autoware_adapi_v1_msgs::msg::VelocityFactorArray";
}

template<>
inline const char * name<autoware_adapi_v1_msgs::msg::VelocityFactorArray>()
{
  return "autoware_adapi_v1_msgs/msg/VelocityFactorArray";
}

template<>
struct has_fixed_size<autoware_adapi_v1_msgs::msg::VelocityFactorArray>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<autoware_adapi_v1_msgs::msg::VelocityFactorArray>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<autoware_adapi_v1_msgs::msg::VelocityFactorArray>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // AUTOWARE_ADAPI_V1_MSGS__MSG__DETAIL__VELOCITY_FACTOR_ARRAY__TRAITS_HPP_

// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from tier4_perception_msgs:msg/PredictedPath.idl
// generated code does not contain a copyright notice

#ifndef TIER4_PERCEPTION_MSGS__MSG__DETAIL__PREDICTED_PATH__TRAITS_HPP_
#define TIER4_PERCEPTION_MSGS__MSG__DETAIL__PREDICTED_PATH__TRAITS_HPP_

#include "tier4_perception_msgs/msg/detail/predicted_path__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'path'
#include "geometry_msgs/msg/detail/pose_with_covariance_stamped__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const tier4_perception_msgs::msg::PredictedPath & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: path
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.path.size() == 0) {
      out << "path: []\n";
    } else {
      out << "path:\n";
      for (auto item : msg.path) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: confidence
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "confidence: ";
    value_to_yaml(msg.confidence, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const tier4_perception_msgs::msg::PredictedPath & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<tier4_perception_msgs::msg::PredictedPath>()
{
  return "tier4_perception_msgs::msg::PredictedPath";
}

template<>
inline const char * name<tier4_perception_msgs::msg::PredictedPath>()
{
  return "tier4_perception_msgs/msg/PredictedPath";
}

template<>
struct has_fixed_size<tier4_perception_msgs::msg::PredictedPath>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<tier4_perception_msgs::msg::PredictedPath>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<tier4_perception_msgs::msg::PredictedPath>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // TIER4_PERCEPTION_MSGS__MSG__DETAIL__PREDICTED_PATH__TRAITS_HPP_

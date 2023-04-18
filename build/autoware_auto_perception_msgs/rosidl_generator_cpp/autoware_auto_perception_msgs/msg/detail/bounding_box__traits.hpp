// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from autoware_auto_perception_msgs:msg/BoundingBox.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_AUTO_PERCEPTION_MSGS__MSG__DETAIL__BOUNDING_BOX__TRAITS_HPP_
#define AUTOWARE_AUTO_PERCEPTION_MSGS__MSG__DETAIL__BOUNDING_BOX__TRAITS_HPP_

#include "autoware_auto_perception_msgs/msg/detail/bounding_box__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'centroid'
// Member 'size'
// Member 'corners'
#include "geometry_msgs/msg/detail/point32__traits.hpp"
// Member 'orientation'
#include "autoware_auto_geometry_msgs/msg/detail/quaternion32__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const autoware_auto_perception_msgs::msg::BoundingBox & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: centroid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "centroid:\n";
    to_yaml(msg.centroid, out, indentation + 2);
  }

  // member: size
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "size:\n";
    to_yaml(msg.size, out, indentation + 2);
  }

  // member: orientation
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "orientation:\n";
    to_yaml(msg.orientation, out, indentation + 2);
  }

  // member: velocity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "velocity: ";
    value_to_yaml(msg.velocity, out);
    out << "\n";
  }

  // member: heading
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "heading: ";
    value_to_yaml(msg.heading, out);
    out << "\n";
  }

  // member: heading_rate
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "heading_rate: ";
    value_to_yaml(msg.heading_rate, out);
    out << "\n";
  }

  // member: corners
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.corners.size() == 0) {
      out << "corners: []\n";
    } else {
      out << "corners:\n";
      for (auto item : msg.corners) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: variance
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.variance.size() == 0) {
      out << "variance: []\n";
    } else {
      out << "variance:\n";
      for (auto item : msg.variance) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: value
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "value: ";
    value_to_yaml(msg.value, out);
    out << "\n";
  }

  // member: vehicle_label
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vehicle_label: ";
    value_to_yaml(msg.vehicle_label, out);
    out << "\n";
  }

  // member: signal_label
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "signal_label: ";
    value_to_yaml(msg.signal_label, out);
    out << "\n";
  }

  // member: class_likelihood
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "class_likelihood: ";
    value_to_yaml(msg.class_likelihood, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const autoware_auto_perception_msgs::msg::BoundingBox & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<autoware_auto_perception_msgs::msg::BoundingBox>()
{
  return "autoware_auto_perception_msgs::msg::BoundingBox";
}

template<>
inline const char * name<autoware_auto_perception_msgs::msg::BoundingBox>()
{
  return "autoware_auto_perception_msgs/msg/BoundingBox";
}

template<>
struct has_fixed_size<autoware_auto_perception_msgs::msg::BoundingBox>
  : std::integral_constant<bool, has_fixed_size<autoware_auto_geometry_msgs::msg::Quaternion32>::value && has_fixed_size<geometry_msgs::msg::Point32>::value> {};

template<>
struct has_bounded_size<autoware_auto_perception_msgs::msg::BoundingBox>
  : std::integral_constant<bool, has_bounded_size<autoware_auto_geometry_msgs::msg::Quaternion32>::value && has_bounded_size<geometry_msgs::msg::Point32>::value> {};

template<>
struct is_message<autoware_auto_perception_msgs::msg::BoundingBox>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // AUTOWARE_AUTO_PERCEPTION_MSGS__MSG__DETAIL__BOUNDING_BOX__TRAITS_HPP_

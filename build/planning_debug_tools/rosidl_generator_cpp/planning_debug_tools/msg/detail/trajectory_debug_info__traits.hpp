// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from planning_debug_tools:msg/TrajectoryDebugInfo.idl
// generated code does not contain a copyright notice

#ifndef PLANNING_DEBUG_TOOLS__MSG__DETAIL__TRAJECTORY_DEBUG_INFO__TRAITS_HPP_
#define PLANNING_DEBUG_TOOLS__MSG__DETAIL__TRAJECTORY_DEBUG_INFO__TRAITS_HPP_

#include "planning_debug_tools/msg/detail/trajectory_debug_info__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const planning_debug_tools::msg::TrajectoryDebugInfo & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: stamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stamp:\n";
    to_yaml(msg.stamp, out, indentation + 2);
  }

  // member: size
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "size: ";
    value_to_yaml(msg.size, out);
    out << "\n";
  }

  // member: arclength
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.arclength.size() == 0) {
      out << "arclength: []\n";
    } else {
      out << "arclength:\n";
      for (auto item : msg.arclength) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: curvature
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.curvature.size() == 0) {
      out << "curvature: []\n";
    } else {
      out << "curvature:\n";
      for (auto item : msg.curvature) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: velocity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.velocity.size() == 0) {
      out << "velocity: []\n";
    } else {
      out << "velocity:\n";
      for (auto item : msg.velocity) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: acceleration
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.acceleration.size() == 0) {
      out << "acceleration: []\n";
    } else {
      out << "acceleration:\n";
      for (auto item : msg.acceleration) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: yaw
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.yaw.size() == 0) {
      out << "yaw: []\n";
    } else {
      out << "yaw:\n";
      for (auto item : msg.yaw) {
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

inline std::string to_yaml(const planning_debug_tools::msg::TrajectoryDebugInfo & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<planning_debug_tools::msg::TrajectoryDebugInfo>()
{
  return "planning_debug_tools::msg::TrajectoryDebugInfo";
}

template<>
inline const char * name<planning_debug_tools::msg::TrajectoryDebugInfo>()
{
  return "planning_debug_tools/msg/TrajectoryDebugInfo";
}

template<>
struct has_fixed_size<planning_debug_tools::msg::TrajectoryDebugInfo>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<planning_debug_tools::msg::TrajectoryDebugInfo>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<planning_debug_tools::msg::TrajectoryDebugInfo>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PLANNING_DEBUG_TOOLS__MSG__DETAIL__TRAJECTORY_DEBUG_INFO__TRAITS_HPP_

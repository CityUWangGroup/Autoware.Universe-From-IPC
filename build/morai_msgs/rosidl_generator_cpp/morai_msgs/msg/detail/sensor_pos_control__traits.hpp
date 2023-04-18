// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from morai_msgs:msg/SensorPosControl.idl
// generated code does not contain a copyright notice

#ifndef MORAI_MSGS__MSG__DETAIL__SENSOR_POS_CONTROL__TRAITS_HPP_
#define MORAI_MSGS__MSG__DETAIL__SENSOR_POS_CONTROL__TRAITS_HPP_

#include "morai_msgs/msg/detail/sensor_pos_control__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const morai_msgs::msg::SensorPosControl & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: sensor_index
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.sensor_index.size() == 0) {
      out << "sensor_index: []\n";
    } else {
      out << "sensor_index:\n";
      for (auto item : msg.sensor_index) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: pose_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.pose_x.size() == 0) {
      out << "pose_x: []\n";
    } else {
      out << "pose_x:\n";
      for (auto item : msg.pose_x) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: pose_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.pose_y.size() == 0) {
      out << "pose_y: []\n";
    } else {
      out << "pose_y:\n";
      for (auto item : msg.pose_y) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: pose_z
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.pose_z.size() == 0) {
      out << "pose_z: []\n";
    } else {
      out << "pose_z:\n";
      for (auto item : msg.pose_z) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: roll
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.roll.size() == 0) {
      out << "roll: []\n";
    } else {
      out << "roll:\n";
      for (auto item : msg.roll) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: pitch
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.pitch.size() == 0) {
      out << "pitch: []\n";
    } else {
      out << "pitch:\n";
      for (auto item : msg.pitch) {
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

inline std::string to_yaml(const morai_msgs::msg::SensorPosControl & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<morai_msgs::msg::SensorPosControl>()
{
  return "morai_msgs::msg::SensorPosControl";
}

template<>
inline const char * name<morai_msgs::msg::SensorPosControl>()
{
  return "morai_msgs/msg/SensorPosControl";
}

template<>
struct has_fixed_size<morai_msgs::msg::SensorPosControl>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<morai_msgs::msg::SensorPosControl>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<morai_msgs::msg::SensorPosControl>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MORAI_MSGS__MSG__DETAIL__SENSOR_POS_CONTROL__TRAITS_HPP_

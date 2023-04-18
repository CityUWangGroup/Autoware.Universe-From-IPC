// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from morai_msgs:msg/MultiEgoSetting.idl
// generated code does not contain a copyright notice

#ifndef MORAI_MSGS__MSG__DETAIL__MULTI_EGO_SETTING__TRAITS_HPP_
#define MORAI_MSGS__MSG__DETAIL__MULTI_EGO_SETTING__TRAITS_HPP_

#include "morai_msgs/msg/detail/multi_ego_setting__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const morai_msgs::msg::MultiEgoSetting & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: number_of_ego_vehicle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "number_of_ego_vehicle: ";
    value_to_yaml(msg.number_of_ego_vehicle, out);
    out << "\n";
  }

  // member: camera_index
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "camera_index: ";
    value_to_yaml(msg.camera_index, out);
    out << "\n";
  }

  // member: ego_index
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.ego_index.size() == 0) {
      out << "ego_index: []\n";
    } else {
      out << "ego_index:\n";
      for (auto item : msg.ego_index) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: global_position_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.global_position_x.size() == 0) {
      out << "global_position_x: []\n";
    } else {
      out << "global_position_x:\n";
      for (auto item : msg.global_position_x) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: global_position_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.global_position_y.size() == 0) {
      out << "global_position_y: []\n";
    } else {
      out << "global_position_y:\n";
      for (auto item : msg.global_position_y) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: global_position_z
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.global_position_z.size() == 0) {
      out << "global_position_z: []\n";
    } else {
      out << "global_position_z:\n";
      for (auto item : msg.global_position_z) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: global_roll
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.global_roll.size() == 0) {
      out << "global_roll: []\n";
    } else {
      out << "global_roll:\n";
      for (auto item : msg.global_roll) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: global_pitch
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.global_pitch.size() == 0) {
      out << "global_pitch: []\n";
    } else {
      out << "global_pitch:\n";
      for (auto item : msg.global_pitch) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: global_yaw
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.global_yaw.size() == 0) {
      out << "global_yaw: []\n";
    } else {
      out << "global_yaw:\n";
      for (auto item : msg.global_yaw) {
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

  // member: gear
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.gear.size() == 0) {
      out << "gear: []\n";
    } else {
      out << "gear:\n";
      for (auto item : msg.gear) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: ctrl_mode
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.ctrl_mode.size() == 0) {
      out << "ctrl_mode: []\n";
    } else {
      out << "ctrl_mode:\n";
      for (auto item : msg.ctrl_mode) {
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

inline std::string to_yaml(const morai_msgs::msg::MultiEgoSetting & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<morai_msgs::msg::MultiEgoSetting>()
{
  return "morai_msgs::msg::MultiEgoSetting";
}

template<>
inline const char * name<morai_msgs::msg::MultiEgoSetting>()
{
  return "morai_msgs/msg/MultiEgoSetting";
}

template<>
struct has_fixed_size<morai_msgs::msg::MultiEgoSetting>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<morai_msgs::msg::MultiEgoSetting>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<morai_msgs::msg::MultiEgoSetting>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MORAI_MSGS__MSG__DETAIL__MULTI_EGO_SETTING__TRAITS_HPP_

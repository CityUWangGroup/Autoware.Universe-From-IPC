// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from morai_msgs:msg/IntscnTL.idl
// generated code does not contain a copyright notice

#ifndef MORAI_MSGS__MSG__DETAIL__INTSCN_TL__TRAITS_HPP_
#define MORAI_MSGS__MSG__DETAIL__INTSCN_TL__TRAITS_HPP_

#include "morai_msgs/msg/detail/intscn_tl__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const morai_msgs::msg::IntscnTL & msg,
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

  // member: idx
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.idx.size() == 0) {
      out << "idx: []\n";
    } else {
      out << "idx:\n";
      for (auto item : msg.idx) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.state.size() == 0) {
      out << "state: []\n";
    } else {
      out << "state:\n";
      for (auto item : msg.state) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: delta_time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.delta_time.size() == 0) {
      out << "delta_time: []\n";
    } else {
      out << "delta_time:\n";
      for (auto item : msg.delta_time) {
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

inline std::string to_yaml(const morai_msgs::msg::IntscnTL & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<morai_msgs::msg::IntscnTL>()
{
  return "morai_msgs::msg::IntscnTL";
}

template<>
inline const char * name<morai_msgs::msg::IntscnTL>()
{
  return "morai_msgs/msg/IntscnTL";
}

template<>
struct has_fixed_size<morai_msgs::msg::IntscnTL>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<morai_msgs::msg::IntscnTL>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<morai_msgs::msg::IntscnTL>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MORAI_MSGS__MSG__DETAIL__INTSCN_TL__TRAITS_HPP_

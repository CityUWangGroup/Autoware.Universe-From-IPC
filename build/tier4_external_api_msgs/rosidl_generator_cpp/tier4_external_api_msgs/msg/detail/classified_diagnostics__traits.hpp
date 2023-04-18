// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from tier4_external_api_msgs:msg/ClassifiedDiagnostics.idl
// generated code does not contain a copyright notice

#ifndef TIER4_EXTERNAL_API_MSGS__MSG__DETAIL__CLASSIFIED_DIAGNOSTICS__TRAITS_HPP_
#define TIER4_EXTERNAL_API_MSGS__MSG__DETAIL__CLASSIFIED_DIAGNOSTICS__TRAITS_HPP_

#include "tier4_external_api_msgs/msg/detail/classified_diagnostics__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"
// Member 'diagnostics_notice'
#include "diagnostic_msgs/msg/detail/diagnostic_status__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const tier4_external_api_msgs::msg::ClassifiedDiagnostics & msg,
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

  // member: diagnostics_notice
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.diagnostics_notice.size() == 0) {
      out << "diagnostics_notice: []\n";
    } else {
      out << "diagnostics_notice:\n";
      for (auto item : msg.diagnostics_notice) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const tier4_external_api_msgs::msg::ClassifiedDiagnostics & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<tier4_external_api_msgs::msg::ClassifiedDiagnostics>()
{
  return "tier4_external_api_msgs::msg::ClassifiedDiagnostics";
}

template<>
inline const char * name<tier4_external_api_msgs::msg::ClassifiedDiagnostics>()
{
  return "tier4_external_api_msgs/msg/ClassifiedDiagnostics";
}

template<>
struct has_fixed_size<tier4_external_api_msgs::msg::ClassifiedDiagnostics>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<tier4_external_api_msgs::msg::ClassifiedDiagnostics>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<tier4_external_api_msgs::msg::ClassifiedDiagnostics>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // TIER4_EXTERNAL_API_MSGS__MSG__DETAIL__CLASSIFIED_DIAGNOSTICS__TRAITS_HPP_

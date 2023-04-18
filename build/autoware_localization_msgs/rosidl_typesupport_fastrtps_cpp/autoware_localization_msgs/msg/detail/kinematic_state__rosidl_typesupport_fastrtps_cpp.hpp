// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from autoware_localization_msgs:msg/KinematicState.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_LOCALIZATION_MSGS__MSG__DETAIL__KINEMATIC_STATE__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define AUTOWARE_LOCALIZATION_MSGS__MSG__DETAIL__KINEMATIC_STATE__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "autoware_localization_msgs/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "autoware_localization_msgs/msg/detail/kinematic_state__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

#include "fastcdr/Cdr.h"

namespace autoware_localization_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_autoware_localization_msgs
cdr_serialize(
  const autoware_localization_msgs::msg::KinematicState & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_autoware_localization_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  autoware_localization_msgs::msg::KinematicState & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_autoware_localization_msgs
get_serialized_size(
  const autoware_localization_msgs::msg::KinematicState & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_autoware_localization_msgs
max_serialized_size_KinematicState(
  bool & full_bounded,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace autoware_localization_msgs

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_autoware_localization_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, autoware_localization_msgs, msg, KinematicState)();

#ifdef __cplusplus
}
#endif

#endif  // AUTOWARE_LOCALIZATION_MSGS__MSG__DETAIL__KINEMATIC_STATE__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

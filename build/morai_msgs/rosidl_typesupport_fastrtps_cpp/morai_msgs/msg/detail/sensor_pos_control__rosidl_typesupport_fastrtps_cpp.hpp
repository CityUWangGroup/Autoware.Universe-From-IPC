// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from morai_msgs:msg/SensorPosControl.idl
// generated code does not contain a copyright notice

#ifndef MORAI_MSGS__MSG__DETAIL__SENSOR_POS_CONTROL__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define MORAI_MSGS__MSG__DETAIL__SENSOR_POS_CONTROL__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "morai_msgs/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "morai_msgs/msg/detail/sensor_pos_control__struct.hpp"

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

namespace morai_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_morai_msgs
cdr_serialize(
  const morai_msgs::msg::SensorPosControl & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_morai_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  morai_msgs::msg::SensorPosControl & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_morai_msgs
get_serialized_size(
  const morai_msgs::msg::SensorPosControl & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_morai_msgs
max_serialized_size_SensorPosControl(
  bool & full_bounded,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace morai_msgs

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_morai_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, morai_msgs, msg, SensorPosControl)();

#ifdef __cplusplus
}
#endif

#endif  // MORAI_MSGS__MSG__DETAIL__SENSOR_POS_CONTROL__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from morai_msgs:msg/WheelRpm.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "morai_msgs/msg/detail/wheel_rpm__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace morai_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void WheelRpm_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) morai_msgs::msg::WheelRpm(_init);
}

void WheelRpm_fini_function(void * message_memory)
{
  auto typed_message = static_cast<morai_msgs::msg::WheelRpm *>(message_memory);
  typed_message->~WheelRpm();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember WheelRpm_message_member_array[4] = {
  {
    "left_front_wheel_rpm",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(morai_msgs::msg::WheelRpm, left_front_wheel_rpm),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "left_rear_wheel_rpm",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(morai_msgs::msg::WheelRpm, left_rear_wheel_rpm),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "right_front_wheel_rpm",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(morai_msgs::msg::WheelRpm, right_front_wheel_rpm),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "right_rear_wheel_rpm",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(morai_msgs::msg::WheelRpm, right_rear_wheel_rpm),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers WheelRpm_message_members = {
  "morai_msgs::msg",  // message namespace
  "WheelRpm",  // message name
  4,  // number of fields
  sizeof(morai_msgs::msg::WheelRpm),
  WheelRpm_message_member_array,  // message members
  WheelRpm_init_function,  // function to initialize message memory (memory has to be allocated)
  WheelRpm_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t WheelRpm_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &WheelRpm_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace morai_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<morai_msgs::msg::WheelRpm>()
{
  return &::morai_msgs::msg::rosidl_typesupport_introspection_cpp::WheelRpm_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, morai_msgs, msg, WheelRpm)() {
  return &::morai_msgs::msg::rosidl_typesupport_introspection_cpp::WheelRpm_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

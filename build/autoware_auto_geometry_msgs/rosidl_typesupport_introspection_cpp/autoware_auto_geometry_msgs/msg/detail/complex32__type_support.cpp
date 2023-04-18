// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from autoware_auto_geometry_msgs:msg/Complex32.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "autoware_auto_geometry_msgs/msg/detail/complex32__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace autoware_auto_geometry_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void Complex32_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) autoware_auto_geometry_msgs::msg::Complex32(_init);
}

void Complex32_fini_function(void * message_memory)
{
  auto typed_message = static_cast<autoware_auto_geometry_msgs::msg::Complex32 *>(message_memory);
  typed_message->~Complex32();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember Complex32_message_member_array[2] = {
  {
    "real",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autoware_auto_geometry_msgs::msg::Complex32, real),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "imag",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autoware_auto_geometry_msgs::msg::Complex32, imag),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers Complex32_message_members = {
  "autoware_auto_geometry_msgs::msg",  // message namespace
  "Complex32",  // message name
  2,  // number of fields
  sizeof(autoware_auto_geometry_msgs::msg::Complex32),
  Complex32_message_member_array,  // message members
  Complex32_init_function,  // function to initialize message memory (memory has to be allocated)
  Complex32_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t Complex32_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &Complex32_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace autoware_auto_geometry_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<autoware_auto_geometry_msgs::msg::Complex32>()
{
  return &::autoware_auto_geometry_msgs::msg::rosidl_typesupport_introspection_cpp::Complex32_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, autoware_auto_geometry_msgs, msg, Complex32)() {
  return &::autoware_auto_geometry_msgs::msg::rosidl_typesupport_introspection_cpp::Complex32_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

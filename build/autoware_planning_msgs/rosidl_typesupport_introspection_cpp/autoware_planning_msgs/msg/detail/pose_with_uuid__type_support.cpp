// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from autoware_planning_msgs:msg/PoseWithUuid.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "autoware_planning_msgs/msg/detail/pose_with_uuid__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace autoware_planning_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void PoseWithUuid_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) autoware_planning_msgs::msg::PoseWithUuid(_init);
}

void PoseWithUuid_fini_function(void * message_memory)
{
  auto typed_message = static_cast<autoware_planning_msgs::msg::PoseWithUuid *>(message_memory);
  typed_message->~PoseWithUuid();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember PoseWithUuid_message_member_array[2] = {
  {
    "pose",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<geometry_msgs::msg::Pose>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autoware_planning_msgs::msg::PoseWithUuid, pose),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "uuid",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<unique_identifier_msgs::msg::UUID>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autoware_planning_msgs::msg::PoseWithUuid, uuid),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers PoseWithUuid_message_members = {
  "autoware_planning_msgs::msg",  // message namespace
  "PoseWithUuid",  // message name
  2,  // number of fields
  sizeof(autoware_planning_msgs::msg::PoseWithUuid),
  PoseWithUuid_message_member_array,  // message members
  PoseWithUuid_init_function,  // function to initialize message memory (memory has to be allocated)
  PoseWithUuid_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t PoseWithUuid_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &PoseWithUuid_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace autoware_planning_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<autoware_planning_msgs::msg::PoseWithUuid>()
{
  return &::autoware_planning_msgs::msg::rosidl_typesupport_introspection_cpp::PoseWithUuid_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, autoware_planning_msgs, msg, PoseWithUuid)() {
  return &::autoware_planning_msgs::msg::rosidl_typesupport_introspection_cpp::PoseWithUuid_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

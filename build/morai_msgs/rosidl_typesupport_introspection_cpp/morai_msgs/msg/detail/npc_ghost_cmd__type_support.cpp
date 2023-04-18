// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from morai_msgs:msg/NpcGhostCmd.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "morai_msgs/msg/detail/npc_ghost_cmd__struct.hpp"
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

void NpcGhostCmd_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) morai_msgs::msg::NpcGhostCmd(_init);
}

void NpcGhostCmd_fini_function(void * message_memory)
{
  auto typed_message = static_cast<morai_msgs::msg::NpcGhostCmd *>(message_memory);
  typed_message->~NpcGhostCmd();
}

size_t size_function__NpcGhostCmd__npc_list(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<morai_msgs::msg::NpcGhostInfo> *>(untyped_member);
  return member->size();
}

const void * get_const_function__NpcGhostCmd__npc_list(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<morai_msgs::msg::NpcGhostInfo> *>(untyped_member);
  return &member[index];
}

void * get_function__NpcGhostCmd__npc_list(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<morai_msgs::msg::NpcGhostInfo> *>(untyped_member);
  return &member[index];
}

void resize_function__NpcGhostCmd__npc_list(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<morai_msgs::msg::NpcGhostInfo> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember NpcGhostCmd_message_member_array[2] = {
  {
    "header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<std_msgs::msg::Header>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(morai_msgs::msg::NpcGhostCmd, header),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "npc_list",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<morai_msgs::msg::NpcGhostInfo>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(morai_msgs::msg::NpcGhostCmd, npc_list),  // bytes offset in struct
    nullptr,  // default value
    size_function__NpcGhostCmd__npc_list,  // size() function pointer
    get_const_function__NpcGhostCmd__npc_list,  // get_const(index) function pointer
    get_function__NpcGhostCmd__npc_list,  // get(index) function pointer
    resize_function__NpcGhostCmd__npc_list  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers NpcGhostCmd_message_members = {
  "morai_msgs::msg",  // message namespace
  "NpcGhostCmd",  // message name
  2,  // number of fields
  sizeof(morai_msgs::msg::NpcGhostCmd),
  NpcGhostCmd_message_member_array,  // message members
  NpcGhostCmd_init_function,  // function to initialize message memory (memory has to be allocated)
  NpcGhostCmd_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t NpcGhostCmd_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &NpcGhostCmd_message_members,
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
get_message_type_support_handle<morai_msgs::msg::NpcGhostCmd>()
{
  return &::morai_msgs::msg::rosidl_typesupport_introspection_cpp::NpcGhostCmd_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, morai_msgs, msg, NpcGhostCmd)() {
  return &::morai_msgs::msg::rosidl_typesupport_introspection_cpp::NpcGhostCmd_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

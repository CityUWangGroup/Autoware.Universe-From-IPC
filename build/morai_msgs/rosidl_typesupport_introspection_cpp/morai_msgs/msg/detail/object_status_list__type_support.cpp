// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from morai_msgs:msg/ObjectStatusList.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "morai_msgs/msg/detail/object_status_list__struct.hpp"
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

void ObjectStatusList_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) morai_msgs::msg::ObjectStatusList(_init);
}

void ObjectStatusList_fini_function(void * message_memory)
{
  auto typed_message = static_cast<morai_msgs::msg::ObjectStatusList *>(message_memory);
  typed_message->~ObjectStatusList();
}

size_t size_function__ObjectStatusList__npc_list(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<morai_msgs::msg::ObjectStatus> *>(untyped_member);
  return member->size();
}

const void * get_const_function__ObjectStatusList__npc_list(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<morai_msgs::msg::ObjectStatus> *>(untyped_member);
  return &member[index];
}

void * get_function__ObjectStatusList__npc_list(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<morai_msgs::msg::ObjectStatus> *>(untyped_member);
  return &member[index];
}

void resize_function__ObjectStatusList__npc_list(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<morai_msgs::msg::ObjectStatus> *>(untyped_member);
  member->resize(size);
}

size_t size_function__ObjectStatusList__pedestrian_list(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<morai_msgs::msg::ObjectStatus> *>(untyped_member);
  return member->size();
}

const void * get_const_function__ObjectStatusList__pedestrian_list(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<morai_msgs::msg::ObjectStatus> *>(untyped_member);
  return &member[index];
}

void * get_function__ObjectStatusList__pedestrian_list(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<morai_msgs::msg::ObjectStatus> *>(untyped_member);
  return &member[index];
}

void resize_function__ObjectStatusList__pedestrian_list(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<morai_msgs::msg::ObjectStatus> *>(untyped_member);
  member->resize(size);
}

size_t size_function__ObjectStatusList__obstacle_list(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<morai_msgs::msg::ObjectStatus> *>(untyped_member);
  return member->size();
}

const void * get_const_function__ObjectStatusList__obstacle_list(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<morai_msgs::msg::ObjectStatus> *>(untyped_member);
  return &member[index];
}

void * get_function__ObjectStatusList__obstacle_list(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<morai_msgs::msg::ObjectStatus> *>(untyped_member);
  return &member[index];
}

void resize_function__ObjectStatusList__obstacle_list(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<morai_msgs::msg::ObjectStatus> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember ObjectStatusList_message_member_array[7] = {
  {
    "header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<std_msgs::msg::Header>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(morai_msgs::msg::ObjectStatusList, header),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "num_of_npcs",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(morai_msgs::msg::ObjectStatusList, num_of_npcs),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "num_of_pedestrian",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(morai_msgs::msg::ObjectStatusList, num_of_pedestrian),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "num_of_obstacle",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(morai_msgs::msg::ObjectStatusList, num_of_obstacle),  // bytes offset in struct
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
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<morai_msgs::msg::ObjectStatus>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(morai_msgs::msg::ObjectStatusList, npc_list),  // bytes offset in struct
    nullptr,  // default value
    size_function__ObjectStatusList__npc_list,  // size() function pointer
    get_const_function__ObjectStatusList__npc_list,  // get_const(index) function pointer
    get_function__ObjectStatusList__npc_list,  // get(index) function pointer
    resize_function__ObjectStatusList__npc_list  // resize(index) function pointer
  },
  {
    "pedestrian_list",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<morai_msgs::msg::ObjectStatus>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(morai_msgs::msg::ObjectStatusList, pedestrian_list),  // bytes offset in struct
    nullptr,  // default value
    size_function__ObjectStatusList__pedestrian_list,  // size() function pointer
    get_const_function__ObjectStatusList__pedestrian_list,  // get_const(index) function pointer
    get_function__ObjectStatusList__pedestrian_list,  // get(index) function pointer
    resize_function__ObjectStatusList__pedestrian_list  // resize(index) function pointer
  },
  {
    "obstacle_list",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<morai_msgs::msg::ObjectStatus>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(morai_msgs::msg::ObjectStatusList, obstacle_list),  // bytes offset in struct
    nullptr,  // default value
    size_function__ObjectStatusList__obstacle_list,  // size() function pointer
    get_const_function__ObjectStatusList__obstacle_list,  // get_const(index) function pointer
    get_function__ObjectStatusList__obstacle_list,  // get(index) function pointer
    resize_function__ObjectStatusList__obstacle_list  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers ObjectStatusList_message_members = {
  "morai_msgs::msg",  // message namespace
  "ObjectStatusList",  // message name
  7,  // number of fields
  sizeof(morai_msgs::msg::ObjectStatusList),
  ObjectStatusList_message_member_array,  // message members
  ObjectStatusList_init_function,  // function to initialize message memory (memory has to be allocated)
  ObjectStatusList_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t ObjectStatusList_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &ObjectStatusList_message_members,
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
get_message_type_support_handle<morai_msgs::msg::ObjectStatusList>()
{
  return &::morai_msgs::msg::rosidl_typesupport_introspection_cpp::ObjectStatusList_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, morai_msgs, msg, ObjectStatusList)() {
  return &::morai_msgs::msg::rosidl_typesupport_introspection_cpp::ObjectStatusList_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

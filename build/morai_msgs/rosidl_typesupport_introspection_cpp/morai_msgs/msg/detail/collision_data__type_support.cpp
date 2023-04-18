// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from morai_msgs:msg/CollisionData.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "morai_msgs/msg/detail/collision_data__struct.hpp"
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

void CollisionData_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) morai_msgs::msg::CollisionData(_init);
}

void CollisionData_fini_function(void * message_memory)
{
  auto typed_message = static_cast<morai_msgs::msg::CollisionData *>(message_memory);
  typed_message->~CollisionData();
}

size_t size_function__CollisionData__collision_object(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<morai_msgs::msg::ObjectStatus> *>(untyped_member);
  return member->size();
}

const void * get_const_function__CollisionData__collision_object(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<morai_msgs::msg::ObjectStatus> *>(untyped_member);
  return &member[index];
}

void * get_function__CollisionData__collision_object(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<morai_msgs::msg::ObjectStatus> *>(untyped_member);
  return &member[index];
}

void resize_function__CollisionData__collision_object(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<morai_msgs::msg::ObjectStatus> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember CollisionData_message_member_array[5] = {
  {
    "header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<std_msgs::msg::Header>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(morai_msgs::msg::CollisionData, header),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "global_offset_x",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(morai_msgs::msg::CollisionData, global_offset_x),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "global_offset_y",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(morai_msgs::msg::CollisionData, global_offset_y),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "global_offset_z",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(morai_msgs::msg::CollisionData, global_offset_z),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "collision_object",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<morai_msgs::msg::ObjectStatus>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(morai_msgs::msg::CollisionData, collision_object),  // bytes offset in struct
    nullptr,  // default value
    size_function__CollisionData__collision_object,  // size() function pointer
    get_const_function__CollisionData__collision_object,  // get_const(index) function pointer
    get_function__CollisionData__collision_object,  // get(index) function pointer
    resize_function__CollisionData__collision_object  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers CollisionData_message_members = {
  "morai_msgs::msg",  // message namespace
  "CollisionData",  // message name
  5,  // number of fields
  sizeof(morai_msgs::msg::CollisionData),
  CollisionData_message_member_array,  // message members
  CollisionData_init_function,  // function to initialize message memory (memory has to be allocated)
  CollisionData_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t CollisionData_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &CollisionData_message_members,
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
get_message_type_support_handle<morai_msgs::msg::CollisionData>()
{
  return &::morai_msgs::msg::rosidl_typesupport_introspection_cpp::CollisionData_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, morai_msgs, msg, CollisionData)() {
  return &::morai_msgs::msg::rosidl_typesupport_introspection_cpp::CollisionData_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

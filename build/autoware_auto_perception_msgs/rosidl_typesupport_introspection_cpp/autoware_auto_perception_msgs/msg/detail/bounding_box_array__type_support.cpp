// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from autoware_auto_perception_msgs:msg/BoundingBoxArray.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "autoware_auto_perception_msgs/msg/detail/bounding_box_array__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace autoware_auto_perception_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void BoundingBoxArray_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) autoware_auto_perception_msgs::msg::BoundingBoxArray(_init);
}

void BoundingBoxArray_fini_function(void * message_memory)
{
  auto typed_message = static_cast<autoware_auto_perception_msgs::msg::BoundingBoxArray *>(message_memory);
  typed_message->~BoundingBoxArray();
}

size_t size_function__BoundingBoxArray__boxes(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<autoware_auto_perception_msgs::msg::BoundingBox> *>(untyped_member);
  return member->size();
}

const void * get_const_function__BoundingBoxArray__boxes(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<autoware_auto_perception_msgs::msg::BoundingBox> *>(untyped_member);
  return &member[index];
}

void * get_function__BoundingBoxArray__boxes(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<autoware_auto_perception_msgs::msg::BoundingBox> *>(untyped_member);
  return &member[index];
}

void resize_function__BoundingBoxArray__boxes(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<autoware_auto_perception_msgs::msg::BoundingBox> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember BoundingBoxArray_message_member_array[2] = {
  {
    "header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<std_msgs::msg::Header>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autoware_auto_perception_msgs::msg::BoundingBoxArray, header),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "boxes",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<autoware_auto_perception_msgs::msg::BoundingBox>(),  // members of sub message
    true,  // is array
    256,  // array size
    true,  // is upper bound
    offsetof(autoware_auto_perception_msgs::msg::BoundingBoxArray, boxes),  // bytes offset in struct
    nullptr,  // default value
    size_function__BoundingBoxArray__boxes,  // size() function pointer
    get_const_function__BoundingBoxArray__boxes,  // get_const(index) function pointer
    get_function__BoundingBoxArray__boxes,  // get(index) function pointer
    resize_function__BoundingBoxArray__boxes  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers BoundingBoxArray_message_members = {
  "autoware_auto_perception_msgs::msg",  // message namespace
  "BoundingBoxArray",  // message name
  2,  // number of fields
  sizeof(autoware_auto_perception_msgs::msg::BoundingBoxArray),
  BoundingBoxArray_message_member_array,  // message members
  BoundingBoxArray_init_function,  // function to initialize message memory (memory has to be allocated)
  BoundingBoxArray_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t BoundingBoxArray_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &BoundingBoxArray_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace autoware_auto_perception_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<autoware_auto_perception_msgs::msg::BoundingBoxArray>()
{
  return &::autoware_auto_perception_msgs::msg::rosidl_typesupport_introspection_cpp::BoundingBoxArray_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, autoware_auto_perception_msgs, msg, BoundingBoxArray)() {
  return &::autoware_auto_perception_msgs::msg::rosidl_typesupport_introspection_cpp::BoundingBoxArray_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from tier4_perception_msgs:msg/Semantic.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "tier4_perception_msgs/msg/detail/semantic__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace tier4_perception_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void Semantic_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) tier4_perception_msgs::msg::Semantic(_init);
}

void Semantic_fini_function(void * message_memory)
{
  auto typed_message = static_cast<tier4_perception_msgs::msg::Semantic *>(message_memory);
  typed_message->~Semantic();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember Semantic_message_member_array[2] = {
  {
    "type",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tier4_perception_msgs::msg::Semantic, type),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "confidence",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tier4_perception_msgs::msg::Semantic, confidence),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers Semantic_message_members = {
  "tier4_perception_msgs::msg",  // message namespace
  "Semantic",  // message name
  2,  // number of fields
  sizeof(tier4_perception_msgs::msg::Semantic),
  Semantic_message_member_array,  // message members
  Semantic_init_function,  // function to initialize message memory (memory has to be allocated)
  Semantic_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t Semantic_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &Semantic_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace tier4_perception_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<tier4_perception_msgs::msg::Semantic>()
{
  return &::tier4_perception_msgs::msg::rosidl_typesupport_introspection_cpp::Semantic_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, tier4_perception_msgs, msg, Semantic)() {
  return &::tier4_perception_msgs::msg::rosidl_typesupport_introspection_cpp::Semantic_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

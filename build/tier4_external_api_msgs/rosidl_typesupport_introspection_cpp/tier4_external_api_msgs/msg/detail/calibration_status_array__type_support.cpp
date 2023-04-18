// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from tier4_external_api_msgs:msg/CalibrationStatusArray.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "tier4_external_api_msgs/msg/detail/calibration_status_array__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace tier4_external_api_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void CalibrationStatusArray_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) tier4_external_api_msgs::msg::CalibrationStatusArray(_init);
}

void CalibrationStatusArray_fini_function(void * message_memory)
{
  auto typed_message = static_cast<tier4_external_api_msgs::msg::CalibrationStatusArray *>(message_memory);
  typed_message->~CalibrationStatusArray();
}

size_t size_function__CalibrationStatusArray__status_array(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<tier4_external_api_msgs::msg::CalibrationStatus> *>(untyped_member);
  return member->size();
}

const void * get_const_function__CalibrationStatusArray__status_array(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<tier4_external_api_msgs::msg::CalibrationStatus> *>(untyped_member);
  return &member[index];
}

void * get_function__CalibrationStatusArray__status_array(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<tier4_external_api_msgs::msg::CalibrationStatus> *>(untyped_member);
  return &member[index];
}

void resize_function__CalibrationStatusArray__status_array(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<tier4_external_api_msgs::msg::CalibrationStatus> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember CalibrationStatusArray_message_member_array[2] = {
  {
    "stamp",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<builtin_interfaces::msg::Time>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tier4_external_api_msgs::msg::CalibrationStatusArray, stamp),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "status_array",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<tier4_external_api_msgs::msg::CalibrationStatus>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tier4_external_api_msgs::msg::CalibrationStatusArray, status_array),  // bytes offset in struct
    nullptr,  // default value
    size_function__CalibrationStatusArray__status_array,  // size() function pointer
    get_const_function__CalibrationStatusArray__status_array,  // get_const(index) function pointer
    get_function__CalibrationStatusArray__status_array,  // get(index) function pointer
    resize_function__CalibrationStatusArray__status_array  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers CalibrationStatusArray_message_members = {
  "tier4_external_api_msgs::msg",  // message namespace
  "CalibrationStatusArray",  // message name
  2,  // number of fields
  sizeof(tier4_external_api_msgs::msg::CalibrationStatusArray),
  CalibrationStatusArray_message_member_array,  // message members
  CalibrationStatusArray_init_function,  // function to initialize message memory (memory has to be allocated)
  CalibrationStatusArray_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t CalibrationStatusArray_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &CalibrationStatusArray_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace tier4_external_api_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<tier4_external_api_msgs::msg::CalibrationStatusArray>()
{
  return &::tier4_external_api_msgs::msg::rosidl_typesupport_introspection_cpp::CalibrationStatusArray_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, tier4_external_api_msgs, msg, CalibrationStatusArray)() {
  return &::tier4_external_api_msgs::msg::rosidl_typesupport_introspection_cpp::CalibrationStatusArray_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

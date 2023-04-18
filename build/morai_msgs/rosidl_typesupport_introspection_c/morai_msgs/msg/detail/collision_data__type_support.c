// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from morai_msgs:msg/CollisionData.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "morai_msgs/msg/detail/collision_data__rosidl_typesupport_introspection_c.h"
#include "morai_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "morai_msgs/msg/detail/collision_data__functions.h"
#include "morai_msgs/msg/detail/collision_data__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `collision_object`
#include "morai_msgs/msg/object_status.h"
// Member `collision_object`
#include "morai_msgs/msg/detail/object_status__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void CollisionData__rosidl_typesupport_introspection_c__CollisionData_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  morai_msgs__msg__CollisionData__init(message_memory);
}

void CollisionData__rosidl_typesupport_introspection_c__CollisionData_fini_function(void * message_memory)
{
  morai_msgs__msg__CollisionData__fini(message_memory);
}

size_t CollisionData__rosidl_typesupport_introspection_c__size_function__ObjectStatus__collision_object(
  const void * untyped_member)
{
  const morai_msgs__msg__ObjectStatus__Sequence * member =
    (const morai_msgs__msg__ObjectStatus__Sequence *)(untyped_member);
  return member->size;
}

const void * CollisionData__rosidl_typesupport_introspection_c__get_const_function__ObjectStatus__collision_object(
  const void * untyped_member, size_t index)
{
  const morai_msgs__msg__ObjectStatus__Sequence * member =
    (const morai_msgs__msg__ObjectStatus__Sequence *)(untyped_member);
  return &member->data[index];
}

void * CollisionData__rosidl_typesupport_introspection_c__get_function__ObjectStatus__collision_object(
  void * untyped_member, size_t index)
{
  morai_msgs__msg__ObjectStatus__Sequence * member =
    (morai_msgs__msg__ObjectStatus__Sequence *)(untyped_member);
  return &member->data[index];
}

bool CollisionData__rosidl_typesupport_introspection_c__resize_function__ObjectStatus__collision_object(
  void * untyped_member, size_t size)
{
  morai_msgs__msg__ObjectStatus__Sequence * member =
    (morai_msgs__msg__ObjectStatus__Sequence *)(untyped_member);
  morai_msgs__msg__ObjectStatus__Sequence__fini(member);
  return morai_msgs__msg__ObjectStatus__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember CollisionData__rosidl_typesupport_introspection_c__CollisionData_message_member_array[5] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(morai_msgs__msg__CollisionData, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "global_offset_x",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(morai_msgs__msg__CollisionData, global_offset_x),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "global_offset_y",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(morai_msgs__msg__CollisionData, global_offset_y),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "global_offset_z",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(morai_msgs__msg__CollisionData, global_offset_z),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "collision_object",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(morai_msgs__msg__CollisionData, collision_object),  // bytes offset in struct
    NULL,  // default value
    CollisionData__rosidl_typesupport_introspection_c__size_function__ObjectStatus__collision_object,  // size() function pointer
    CollisionData__rosidl_typesupport_introspection_c__get_const_function__ObjectStatus__collision_object,  // get_const(index) function pointer
    CollisionData__rosidl_typesupport_introspection_c__get_function__ObjectStatus__collision_object,  // get(index) function pointer
    CollisionData__rosidl_typesupport_introspection_c__resize_function__ObjectStatus__collision_object  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers CollisionData__rosidl_typesupport_introspection_c__CollisionData_message_members = {
  "morai_msgs__msg",  // message namespace
  "CollisionData",  // message name
  5,  // number of fields
  sizeof(morai_msgs__msg__CollisionData),
  CollisionData__rosidl_typesupport_introspection_c__CollisionData_message_member_array,  // message members
  CollisionData__rosidl_typesupport_introspection_c__CollisionData_init_function,  // function to initialize message memory (memory has to be allocated)
  CollisionData__rosidl_typesupport_introspection_c__CollisionData_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t CollisionData__rosidl_typesupport_introspection_c__CollisionData_message_type_support_handle = {
  0,
  &CollisionData__rosidl_typesupport_introspection_c__CollisionData_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_morai_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, morai_msgs, msg, CollisionData)() {
  CollisionData__rosidl_typesupport_introspection_c__CollisionData_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  CollisionData__rosidl_typesupport_introspection_c__CollisionData_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, morai_msgs, msg, ObjectStatus)();
  if (!CollisionData__rosidl_typesupport_introspection_c__CollisionData_message_type_support_handle.typesupport_identifier) {
    CollisionData__rosidl_typesupport_introspection_c__CollisionData_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &CollisionData__rosidl_typesupport_introspection_c__CollisionData_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

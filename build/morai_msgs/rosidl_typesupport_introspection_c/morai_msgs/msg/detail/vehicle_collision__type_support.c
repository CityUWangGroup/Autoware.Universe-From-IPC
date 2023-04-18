// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from morai_msgs:msg/VehicleCollision.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "morai_msgs/msg/detail/vehicle_collision__rosidl_typesupport_introspection_c.h"
#include "morai_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "morai_msgs/msg/detail/vehicle_collision__functions.h"
#include "morai_msgs/msg/detail/vehicle_collision__struct.h"


// Include directives for member types
// Member `crashed_vehicles`
#include "morai_msgs/msg/object_status.h"
// Member `crashed_vehicles`
#include "morai_msgs/msg/detail/object_status__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void VehicleCollision__rosidl_typesupport_introspection_c__VehicleCollision_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  morai_msgs__msg__VehicleCollision__init(message_memory);
}

void VehicleCollision__rosidl_typesupport_introspection_c__VehicleCollision_fini_function(void * message_memory)
{
  morai_msgs__msg__VehicleCollision__fini(message_memory);
}

size_t VehicleCollision__rosidl_typesupport_introspection_c__size_function__ObjectStatus__crashed_vehicles(
  const void * untyped_member)
{
  const morai_msgs__msg__ObjectStatus__Sequence * member =
    (const morai_msgs__msg__ObjectStatus__Sequence *)(untyped_member);
  return member->size;
}

const void * VehicleCollision__rosidl_typesupport_introspection_c__get_const_function__ObjectStatus__crashed_vehicles(
  const void * untyped_member, size_t index)
{
  const morai_msgs__msg__ObjectStatus__Sequence * member =
    (const morai_msgs__msg__ObjectStatus__Sequence *)(untyped_member);
  return &member->data[index];
}

void * VehicleCollision__rosidl_typesupport_introspection_c__get_function__ObjectStatus__crashed_vehicles(
  void * untyped_member, size_t index)
{
  morai_msgs__msg__ObjectStatus__Sequence * member =
    (morai_msgs__msg__ObjectStatus__Sequence *)(untyped_member);
  return &member->data[index];
}

bool VehicleCollision__rosidl_typesupport_introspection_c__resize_function__ObjectStatus__crashed_vehicles(
  void * untyped_member, size_t size)
{
  morai_msgs__msg__ObjectStatus__Sequence * member =
    (morai_msgs__msg__ObjectStatus__Sequence *)(untyped_member);
  morai_msgs__msg__ObjectStatus__Sequence__fini(member);
  return morai_msgs__msg__ObjectStatus__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember VehicleCollision__rosidl_typesupport_introspection_c__VehicleCollision_message_member_array[1] = {
  {
    "crashed_vehicles",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(morai_msgs__msg__VehicleCollision, crashed_vehicles),  // bytes offset in struct
    NULL,  // default value
    VehicleCollision__rosidl_typesupport_introspection_c__size_function__ObjectStatus__crashed_vehicles,  // size() function pointer
    VehicleCollision__rosidl_typesupport_introspection_c__get_const_function__ObjectStatus__crashed_vehicles,  // get_const(index) function pointer
    VehicleCollision__rosidl_typesupport_introspection_c__get_function__ObjectStatus__crashed_vehicles,  // get(index) function pointer
    VehicleCollision__rosidl_typesupport_introspection_c__resize_function__ObjectStatus__crashed_vehicles  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers VehicleCollision__rosidl_typesupport_introspection_c__VehicleCollision_message_members = {
  "morai_msgs__msg",  // message namespace
  "VehicleCollision",  // message name
  1,  // number of fields
  sizeof(morai_msgs__msg__VehicleCollision),
  VehicleCollision__rosidl_typesupport_introspection_c__VehicleCollision_message_member_array,  // message members
  VehicleCollision__rosidl_typesupport_introspection_c__VehicleCollision_init_function,  // function to initialize message memory (memory has to be allocated)
  VehicleCollision__rosidl_typesupport_introspection_c__VehicleCollision_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t VehicleCollision__rosidl_typesupport_introspection_c__VehicleCollision_message_type_support_handle = {
  0,
  &VehicleCollision__rosidl_typesupport_introspection_c__VehicleCollision_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_morai_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, morai_msgs, msg, VehicleCollision)() {
  VehicleCollision__rosidl_typesupport_introspection_c__VehicleCollision_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, morai_msgs, msg, ObjectStatus)();
  if (!VehicleCollision__rosidl_typesupport_introspection_c__VehicleCollision_message_type_support_handle.typesupport_identifier) {
    VehicleCollision__rosidl_typesupport_introspection_c__VehicleCollision_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &VehicleCollision__rosidl_typesupport_introspection_c__VehicleCollision_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

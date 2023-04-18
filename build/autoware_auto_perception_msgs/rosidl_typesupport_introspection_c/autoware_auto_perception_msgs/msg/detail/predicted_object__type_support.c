// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from autoware_auto_perception_msgs:msg/PredictedObject.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "autoware_auto_perception_msgs/msg/detail/predicted_object__rosidl_typesupport_introspection_c.h"
#include "autoware_auto_perception_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "autoware_auto_perception_msgs/msg/detail/predicted_object__functions.h"
#include "autoware_auto_perception_msgs/msg/detail/predicted_object__struct.h"


// Include directives for member types
// Member `object_id`
#include "unique_identifier_msgs/msg/uuid.h"
// Member `object_id`
#include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"
// Member `classification`
#include "autoware_auto_perception_msgs/msg/object_classification.h"
// Member `classification`
#include "autoware_auto_perception_msgs/msg/detail/object_classification__rosidl_typesupport_introspection_c.h"
// Member `kinematics`
#include "autoware_auto_perception_msgs/msg/predicted_object_kinematics.h"
// Member `kinematics`
#include "autoware_auto_perception_msgs/msg/detail/predicted_object_kinematics__rosidl_typesupport_introspection_c.h"
// Member `shape`
#include "autoware_auto_perception_msgs/msg/shape.h"
// Member `shape`
#include "autoware_auto_perception_msgs/msg/detail/shape__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void PredictedObject__rosidl_typesupport_introspection_c__PredictedObject_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  autoware_auto_perception_msgs__msg__PredictedObject__init(message_memory);
}

void PredictedObject__rosidl_typesupport_introspection_c__PredictedObject_fini_function(void * message_memory)
{
  autoware_auto_perception_msgs__msg__PredictedObject__fini(message_memory);
}

size_t PredictedObject__rosidl_typesupport_introspection_c__size_function__ObjectClassification__classification(
  const void * untyped_member)
{
  const autoware_auto_perception_msgs__msg__ObjectClassification__Sequence * member =
    (const autoware_auto_perception_msgs__msg__ObjectClassification__Sequence *)(untyped_member);
  return member->size;
}

const void * PredictedObject__rosidl_typesupport_introspection_c__get_const_function__ObjectClassification__classification(
  const void * untyped_member, size_t index)
{
  const autoware_auto_perception_msgs__msg__ObjectClassification__Sequence * member =
    (const autoware_auto_perception_msgs__msg__ObjectClassification__Sequence *)(untyped_member);
  return &member->data[index];
}

void * PredictedObject__rosidl_typesupport_introspection_c__get_function__ObjectClassification__classification(
  void * untyped_member, size_t index)
{
  autoware_auto_perception_msgs__msg__ObjectClassification__Sequence * member =
    (autoware_auto_perception_msgs__msg__ObjectClassification__Sequence *)(untyped_member);
  return &member->data[index];
}

bool PredictedObject__rosidl_typesupport_introspection_c__resize_function__ObjectClassification__classification(
  void * untyped_member, size_t size)
{
  autoware_auto_perception_msgs__msg__ObjectClassification__Sequence * member =
    (autoware_auto_perception_msgs__msg__ObjectClassification__Sequence *)(untyped_member);
  autoware_auto_perception_msgs__msg__ObjectClassification__Sequence__fini(member);
  return autoware_auto_perception_msgs__msg__ObjectClassification__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember PredictedObject__rosidl_typesupport_introspection_c__PredictedObject_message_member_array[5] = {
  {
    "object_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autoware_auto_perception_msgs__msg__PredictedObject, object_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "existence_probability",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autoware_auto_perception_msgs__msg__PredictedObject, existence_probability),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "classification",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autoware_auto_perception_msgs__msg__PredictedObject, classification),  // bytes offset in struct
    NULL,  // default value
    PredictedObject__rosidl_typesupport_introspection_c__size_function__ObjectClassification__classification,  // size() function pointer
    PredictedObject__rosidl_typesupport_introspection_c__get_const_function__ObjectClassification__classification,  // get_const(index) function pointer
    PredictedObject__rosidl_typesupport_introspection_c__get_function__ObjectClassification__classification,  // get(index) function pointer
    PredictedObject__rosidl_typesupport_introspection_c__resize_function__ObjectClassification__classification  // resize(index) function pointer
  },
  {
    "kinematics",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autoware_auto_perception_msgs__msg__PredictedObject, kinematics),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "shape",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autoware_auto_perception_msgs__msg__PredictedObject, shape),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers PredictedObject__rosidl_typesupport_introspection_c__PredictedObject_message_members = {
  "autoware_auto_perception_msgs__msg",  // message namespace
  "PredictedObject",  // message name
  5,  // number of fields
  sizeof(autoware_auto_perception_msgs__msg__PredictedObject),
  PredictedObject__rosidl_typesupport_introspection_c__PredictedObject_message_member_array,  // message members
  PredictedObject__rosidl_typesupport_introspection_c__PredictedObject_init_function,  // function to initialize message memory (memory has to be allocated)
  PredictedObject__rosidl_typesupport_introspection_c__PredictedObject_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t PredictedObject__rosidl_typesupport_introspection_c__PredictedObject_message_type_support_handle = {
  0,
  &PredictedObject__rosidl_typesupport_introspection_c__PredictedObject_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_autoware_auto_perception_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, autoware_auto_perception_msgs, msg, PredictedObject)() {
  PredictedObject__rosidl_typesupport_introspection_c__PredictedObject_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  PredictedObject__rosidl_typesupport_introspection_c__PredictedObject_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, autoware_auto_perception_msgs, msg, ObjectClassification)();
  PredictedObject__rosidl_typesupport_introspection_c__PredictedObject_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, autoware_auto_perception_msgs, msg, PredictedObjectKinematics)();
  PredictedObject__rosidl_typesupport_introspection_c__PredictedObject_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, autoware_auto_perception_msgs, msg, Shape)();
  if (!PredictedObject__rosidl_typesupport_introspection_c__PredictedObject_message_type_support_handle.typesupport_identifier) {
    PredictedObject__rosidl_typesupport_introspection_c__PredictedObject_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &PredictedObject__rosidl_typesupport_introspection_c__PredictedObject_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

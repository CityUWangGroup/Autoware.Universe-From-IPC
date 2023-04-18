// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from tier4_v2x_msgs:msg/VirtualTrafficLightStateArray.idl
// generated code does not contain a copyright notice
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <Python.h>
#include <stdbool.h>
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include "numpy/ndarrayobject.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif
#include "rosidl_runtime_c/visibility_control.h"
#include "tier4_v2x_msgs/msg/detail/virtual_traffic_light_state_array__struct.h"
#include "tier4_v2x_msgs/msg/detail/virtual_traffic_light_state_array__functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"

// Nested array functions includes
#include "tier4_v2x_msgs/msg/detail/virtual_traffic_light_state__functions.h"
// end nested array functions include
ROSIDL_GENERATOR_C_IMPORT
bool builtin_interfaces__msg__time__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * builtin_interfaces__msg__time__convert_to_py(void * raw_ros_message);
bool tier4_v2x_msgs__msg__virtual_traffic_light_state__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * tier4_v2x_msgs__msg__virtual_traffic_light_state__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool tier4_v2x_msgs__msg__virtual_traffic_light_state_array__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[84];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("tier4_v2x_msgs.msg._virtual_traffic_light_state_array.VirtualTrafficLightStateArray", full_classname_dest, 83) == 0);
  }
  tier4_v2x_msgs__msg__VirtualTrafficLightStateArray * ros_message = _ros_message;
  {  // stamp
    PyObject * field = PyObject_GetAttrString(_pymsg, "stamp");
    if (!field) {
      return false;
    }
    if (!builtin_interfaces__msg__time__convert_from_py(field, &ros_message->stamp)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // states
    PyObject * field = PyObject_GetAttrString(_pymsg, "states");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'states'");
    if (!seq_field) {
      Py_DECREF(field);
      return false;
    }
    Py_ssize_t size = PySequence_Size(field);
    if (-1 == size) {
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    if (!tier4_v2x_msgs__msg__VirtualTrafficLightState__Sequence__init(&(ros_message->states), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create tier4_v2x_msgs__msg__VirtualTrafficLightState__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    tier4_v2x_msgs__msg__VirtualTrafficLightState * dest = ros_message->states.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!tier4_v2x_msgs__msg__virtual_traffic_light_state__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * tier4_v2x_msgs__msg__virtual_traffic_light_state_array__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of VirtualTrafficLightStateArray */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("tier4_v2x_msgs.msg._virtual_traffic_light_state_array");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "VirtualTrafficLightStateArray");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  tier4_v2x_msgs__msg__VirtualTrafficLightStateArray * ros_message = (tier4_v2x_msgs__msg__VirtualTrafficLightStateArray *)raw_ros_message;
  {  // stamp
    PyObject * field = NULL;
    field = builtin_interfaces__msg__time__convert_to_py(&ros_message->stamp);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "stamp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // states
    PyObject * field = NULL;
    size_t size = ros_message->states.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    tier4_v2x_msgs__msg__VirtualTrafficLightState * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->states.data[i]);
      PyObject * pyitem = tier4_v2x_msgs__msg__virtual_traffic_light_state__convert_to_py(item);
      if (!pyitem) {
        Py_DECREF(field);
        return NULL;
      }
      int rc = PyList_SetItem(field, i, pyitem);
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "states", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}

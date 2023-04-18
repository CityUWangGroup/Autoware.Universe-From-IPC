// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from tier4_system_msgs:srv/ChangeAutowareControl.idl
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
#include "tier4_system_msgs/srv/detail/change_autoware_control__struct.h"
#include "tier4_system_msgs/srv/detail/change_autoware_control__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool tier4_system_msgs__srv__change_autoware_control__request__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[77];
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
    assert(strncmp("tier4_system_msgs.srv._change_autoware_control.ChangeAutowareControl_Request", full_classname_dest, 76) == 0);
  }
  tier4_system_msgs__srv__ChangeAutowareControl_Request * ros_message = _ros_message;
  {  // autoware_control
    PyObject * field = PyObject_GetAttrString(_pymsg, "autoware_control");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->autoware_control = (Py_True == field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * tier4_system_msgs__srv__change_autoware_control__request__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of ChangeAutowareControl_Request */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("tier4_system_msgs.srv._change_autoware_control");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "ChangeAutowareControl_Request");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  tier4_system_msgs__srv__ChangeAutowareControl_Request * ros_message = (tier4_system_msgs__srv__ChangeAutowareControl_Request *)raw_ros_message;
  {  // autoware_control
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->autoware_control ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "autoware_control", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}

#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
// already included above
// #include <Python.h>
// already included above
// #include <stdbool.h>
// already included above
// #include "numpy/ndarrayobject.h"
// already included above
// #include "rosidl_runtime_c/visibility_control.h"
// already included above
// #include "tier4_system_msgs/srv/detail/change_autoware_control__struct.h"
// already included above
// #include "tier4_system_msgs/srv/detail/change_autoware_control__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool autoware_common_msgs__msg__response_status__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * autoware_common_msgs__msg__response_status__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool tier4_system_msgs__srv__change_autoware_control__response__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[78];
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
    assert(strncmp("tier4_system_msgs.srv._change_autoware_control.ChangeAutowareControl_Response", full_classname_dest, 77) == 0);
  }
  tier4_system_msgs__srv__ChangeAutowareControl_Response * ros_message = _ros_message;
  {  // status
    PyObject * field = PyObject_GetAttrString(_pymsg, "status");
    if (!field) {
      return false;
    }
    if (!autoware_common_msgs__msg__response_status__convert_from_py(field, &ros_message->status)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * tier4_system_msgs__srv__change_autoware_control__response__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of ChangeAutowareControl_Response */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("tier4_system_msgs.srv._change_autoware_control");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "ChangeAutowareControl_Response");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  tier4_system_msgs__srv__ChangeAutowareControl_Response * ros_message = (tier4_system_msgs__srv__ChangeAutowareControl_Response *)raw_ros_message;
  {  // status
    PyObject * field = NULL;
    field = autoware_common_msgs__msg__response_status__convert_to_py(&ros_message->status);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "status", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}

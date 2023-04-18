// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from control_performance_analysis:msg/DrivingMonitorStamped.idl
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
#include "control_performance_analysis/msg/detail/driving_monitor_stamped__struct.h"
#include "control_performance_analysis/msg/detail/driving_monitor_stamped__functions.h"

bool control_performance_analysis__msg__float_stamped__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * control_performance_analysis__msg__float_stamped__convert_to_py(void * raw_ros_message);
bool control_performance_analysis__msg__float_stamped__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * control_performance_analysis__msg__float_stamped__convert_to_py(void * raw_ros_message);
bool control_performance_analysis__msg__float_stamped__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * control_performance_analysis__msg__float_stamped__convert_to_py(void * raw_ros_message);
bool control_performance_analysis__msg__float_stamped__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * control_performance_analysis__msg__float_stamped__convert_to_py(void * raw_ros_message);
bool control_performance_analysis__msg__float_stamped__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * control_performance_analysis__msg__float_stamped__convert_to_py(void * raw_ros_message);
bool control_performance_analysis__msg__float_stamped__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * control_performance_analysis__msg__float_stamped__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool control_performance_analysis__msg__driving_monitor_stamped__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[80];
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
    assert(strncmp("control_performance_analysis.msg._driving_monitor_stamped.DrivingMonitorStamped", full_classname_dest, 79) == 0);
  }
  control_performance_analysis__msg__DrivingMonitorStamped * ros_message = _ros_message;
  {  // longitudinal_acceleration
    PyObject * field = PyObject_GetAttrString(_pymsg, "longitudinal_acceleration");
    if (!field) {
      return false;
    }
    if (!control_performance_analysis__msg__float_stamped__convert_from_py(field, &ros_message->longitudinal_acceleration)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // longitudinal_jerk
    PyObject * field = PyObject_GetAttrString(_pymsg, "longitudinal_jerk");
    if (!field) {
      return false;
    }
    if (!control_performance_analysis__msg__float_stamped__convert_from_py(field, &ros_message->longitudinal_jerk)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // lateral_acceleration
    PyObject * field = PyObject_GetAttrString(_pymsg, "lateral_acceleration");
    if (!field) {
      return false;
    }
    if (!control_performance_analysis__msg__float_stamped__convert_from_py(field, &ros_message->lateral_acceleration)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // lateral_jerk
    PyObject * field = PyObject_GetAttrString(_pymsg, "lateral_jerk");
    if (!field) {
      return false;
    }
    if (!control_performance_analysis__msg__float_stamped__convert_from_py(field, &ros_message->lateral_jerk)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // desired_steering_angle
    PyObject * field = PyObject_GetAttrString(_pymsg, "desired_steering_angle");
    if (!field) {
      return false;
    }
    if (!control_performance_analysis__msg__float_stamped__convert_from_py(field, &ros_message->desired_steering_angle)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // controller_processing_time
    PyObject * field = PyObject_GetAttrString(_pymsg, "controller_processing_time");
    if (!field) {
      return false;
    }
    if (!control_performance_analysis__msg__float_stamped__convert_from_py(field, &ros_message->controller_processing_time)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * control_performance_analysis__msg__driving_monitor_stamped__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of DrivingMonitorStamped */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("control_performance_analysis.msg._driving_monitor_stamped");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "DrivingMonitorStamped");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  control_performance_analysis__msg__DrivingMonitorStamped * ros_message = (control_performance_analysis__msg__DrivingMonitorStamped *)raw_ros_message;
  {  // longitudinal_acceleration
    PyObject * field = NULL;
    field = control_performance_analysis__msg__float_stamped__convert_to_py(&ros_message->longitudinal_acceleration);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "longitudinal_acceleration", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // longitudinal_jerk
    PyObject * field = NULL;
    field = control_performance_analysis__msg__float_stamped__convert_to_py(&ros_message->longitudinal_jerk);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "longitudinal_jerk", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // lateral_acceleration
    PyObject * field = NULL;
    field = control_performance_analysis__msg__float_stamped__convert_to_py(&ros_message->lateral_acceleration);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "lateral_acceleration", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // lateral_jerk
    PyObject * field = NULL;
    field = control_performance_analysis__msg__float_stamped__convert_to_py(&ros_message->lateral_jerk);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "lateral_jerk", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // desired_steering_angle
    PyObject * field = NULL;
    field = control_performance_analysis__msg__float_stamped__convert_to_py(&ros_message->desired_steering_angle);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "desired_steering_angle", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // controller_processing_time
    PyObject * field = NULL;
    field = control_performance_analysis__msg__float_stamped__convert_to_py(&ros_message->controller_processing_time);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "controller_processing_time", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}

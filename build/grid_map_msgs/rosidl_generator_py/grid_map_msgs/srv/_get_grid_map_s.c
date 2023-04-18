// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from grid_map_msgs:srv/GetGridMap.idl
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
#include "grid_map_msgs/srv/detail/get_grid_map__struct.h"
#include "grid_map_msgs/srv/detail/get_grid_map__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool grid_map_msgs__srv__get_grid_map__request__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[51];
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
    assert(strncmp("grid_map_msgs.srv._get_grid_map.GetGridMap_Request", full_classname_dest, 50) == 0);
  }
  grid_map_msgs__srv__GetGridMap_Request * ros_message = _ros_message;
  {  // frame_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "frame_id");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->frame_id, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // position_x
    PyObject * field = PyObject_GetAttrString(_pymsg, "position_x");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->position_x = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // position_y
    PyObject * field = PyObject_GetAttrString(_pymsg, "position_y");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->position_y = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // length_x
    PyObject * field = PyObject_GetAttrString(_pymsg, "length_x");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->length_x = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // length_y
    PyObject * field = PyObject_GetAttrString(_pymsg, "length_y");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->length_y = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // layers
    PyObject * field = PyObject_GetAttrString(_pymsg, "layers");
    if (!field) {
      return false;
    }
    {
      PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'layers'");
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
      if (!rosidl_runtime_c__String__Sequence__init(&(ros_message->layers), size)) {
        PyErr_SetString(PyExc_RuntimeError, "unable to create String__Sequence ros_message");
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
      rosidl_runtime_c__String * dest = ros_message->layers.data;
      for (Py_ssize_t i = 0; i < size; ++i) {
        PyObject * item = PySequence_Fast_GET_ITEM(seq_field, i);
        if (!item) {
          Py_DECREF(seq_field);
          Py_DECREF(field);
          return false;
        }
        assert(PyUnicode_Check(item));
        PyObject * encoded_item = PyUnicode_AsUTF8String(item);
        if (!encoded_item) {
          Py_DECREF(seq_field);
          Py_DECREF(field);
          return false;
        }
        rosidl_runtime_c__String__assign(&dest[i], PyBytes_AS_STRING(encoded_item));
        Py_DECREF(encoded_item);
      }
      Py_DECREF(seq_field);
    }
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * grid_map_msgs__srv__get_grid_map__request__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of GetGridMap_Request */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("grid_map_msgs.srv._get_grid_map");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "GetGridMap_Request");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  grid_map_msgs__srv__GetGridMap_Request * ros_message = (grid_map_msgs__srv__GetGridMap_Request *)raw_ros_message;
  {  // frame_id
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->frame_id.data,
      strlen(ros_message->frame_id.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "frame_id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // position_x
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->position_x);
    {
      int rc = PyObject_SetAttrString(_pymessage, "position_x", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // position_y
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->position_y);
    {
      int rc = PyObject_SetAttrString(_pymessage, "position_y", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // length_x
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->length_x);
    {
      int rc = PyObject_SetAttrString(_pymessage, "length_x", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // length_y
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->length_y);
    {
      int rc = PyObject_SetAttrString(_pymessage, "length_y", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // layers
    PyObject * field = NULL;
    size_t size = ros_message->layers.size;
    rosidl_runtime_c__String * src = ros_message->layers.data;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    for (size_t i = 0; i < size; ++i) {
      PyObject * decoded_item = PyUnicode_DecodeUTF8(src[i].data, strlen(src[i].data), "replace");
      if (!decoded_item) {
        return NULL;
      }
      int rc = PyList_SetItem(field, i, decoded_item);
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "layers", field);
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
// #include "grid_map_msgs/srv/detail/get_grid_map__struct.h"
// already included above
// #include "grid_map_msgs/srv/detail/get_grid_map__functions.h"

bool grid_map_msgs__msg__grid_map__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * grid_map_msgs__msg__grid_map__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool grid_map_msgs__srv__get_grid_map__response__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[52];
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
    assert(strncmp("grid_map_msgs.srv._get_grid_map.GetGridMap_Response", full_classname_dest, 51) == 0);
  }
  grid_map_msgs__srv__GetGridMap_Response * ros_message = _ros_message;
  {  // map
    PyObject * field = PyObject_GetAttrString(_pymsg, "map");
    if (!field) {
      return false;
    }
    if (!grid_map_msgs__msg__grid_map__convert_from_py(field, &ros_message->map)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * grid_map_msgs__srv__get_grid_map__response__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of GetGridMap_Response */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("grid_map_msgs.srv._get_grid_map");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "GetGridMap_Response");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  grid_map_msgs__srv__GetGridMap_Response * ros_message = (grid_map_msgs__srv__GetGridMap_Response *)raw_ros_message;
  {  // map
    PyObject * field = NULL;
    field = grid_map_msgs__msg__grid_map__convert_to_py(&ros_message->map);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "map", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}

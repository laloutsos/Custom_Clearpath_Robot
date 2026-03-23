// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from clearpath_motor_msgs:msg/LynxStatus.idl
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
#include "clearpath_motor_msgs/msg/detail/lynx_status__struct.h"
#include "clearpath_motor_msgs/msg/detail/lynx_status__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool clearpath_motor_msgs__msg__lynx_status__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[49];
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
    assert(strncmp("clearpath_motor_msgs.msg._lynx_status.LynxStatus", full_classname_dest, 48) == 0);
  }
  clearpath_motor_msgs__msg__LynxStatus * ros_message = _ros_message;
  {  // can_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "can_id");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->can_id = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // joint_name
    PyObject * field = PyObject_GetAttrString(_pymsg, "joint_name");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->joint_name, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // firmware_version
    PyObject * field = PyObject_GetAttrString(_pymsg, "firmware_version");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->firmware_version, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // motor_temperature
    PyObject * field = PyObject_GetAttrString(_pymsg, "motor_temperature");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->motor_temperature = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // mcu_temperature
    PyObject * field = PyObject_GetAttrString(_pymsg, "mcu_temperature");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->mcu_temperature = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // pcb_temperature
    PyObject * field = PyObject_GetAttrString(_pymsg, "pcb_temperature");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->pcb_temperature = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // stopped
    PyObject * field = PyObject_GetAttrString(_pymsg, "stopped");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->stopped = (Py_True == field);
    Py_DECREF(field);
  }
  {  // status_flags
    PyObject * field = PyObject_GetAttrString(_pymsg, "status_flags");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->status_flags = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // warning_flags
    PyObject * field = PyObject_GetAttrString(_pymsg, "warning_flags");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->warning_flags = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // error_flags
    PyObject * field = PyObject_GetAttrString(_pymsg, "error_flags");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->error_flags = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * clearpath_motor_msgs__msg__lynx_status__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of LynxStatus */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("clearpath_motor_msgs.msg._lynx_status");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "LynxStatus");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  clearpath_motor_msgs__msg__LynxStatus * ros_message = (clearpath_motor_msgs__msg__LynxStatus *)raw_ros_message;
  {  // can_id
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->can_id);
    {
      int rc = PyObject_SetAttrString(_pymessage, "can_id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // joint_name
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->joint_name.data,
      strlen(ros_message->joint_name.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "joint_name", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // firmware_version
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->firmware_version.data,
      strlen(ros_message->firmware_version.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "firmware_version", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // motor_temperature
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->motor_temperature);
    {
      int rc = PyObject_SetAttrString(_pymessage, "motor_temperature", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // mcu_temperature
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->mcu_temperature);
    {
      int rc = PyObject_SetAttrString(_pymessage, "mcu_temperature", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // pcb_temperature
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->pcb_temperature);
    {
      int rc = PyObject_SetAttrString(_pymessage, "pcb_temperature", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // stopped
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->stopped ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "stopped", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // status_flags
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->status_flags);
    {
      int rc = PyObject_SetAttrString(_pymessage, "status_flags", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // warning_flags
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->warning_flags);
    {
      int rc = PyObject_SetAttrString(_pymessage, "warning_flags", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // error_flags
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->error_flags);
    {
      int rc = PyObject_SetAttrString(_pymessage, "error_flags", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}

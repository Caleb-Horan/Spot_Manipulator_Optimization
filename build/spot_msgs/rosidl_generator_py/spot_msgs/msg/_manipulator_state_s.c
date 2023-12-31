// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from spot_msgs:msg/ManipulatorState.idl
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
#include "spot_msgs/msg/detail/manipulator_state__struct.h"
#include "spot_msgs/msg/detail/manipulator_state__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool geometry_msgs__msg__point__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * geometry_msgs__msg__point__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool spot_msgs__msg__manipulator_state__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[50];
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
    assert(strncmp("spot_msgs.msg._manipulator_state.ManipulatorState", full_classname_dest, 49) == 0);
  }
  spot_msgs__msg__ManipulatorState * ros_message = _ros_message;
  {  // gripper_open_percentage
    PyObject * field = PyObject_GetAttrString(_pymsg, "gripper_open_percentage");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->gripper_open_percentage = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // is_gripper_holding_item
    PyObject * field = PyObject_GetAttrString(_pymsg, "is_gripper_holding_item");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->is_gripper_holding_item = (Py_True == field);
    Py_DECREF(field);
  }
  {  // estimated_end_effector_force_in_hand
    PyObject * field = PyObject_GetAttrString(_pymsg, "estimated_end_effector_force_in_hand");
    if (!field) {
      return false;
    }
    if (!geometry_msgs__msg__point__convert_from_py(field, &ros_message->estimated_end_effector_force_in_hand)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // stow_state
    PyObject * field = PyObject_GetAttrString(_pymsg, "stow_state");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->stow_state = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // carry_state
    PyObject * field = PyObject_GetAttrString(_pymsg, "carry_state");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->carry_state = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * spot_msgs__msg__manipulator_state__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of ManipulatorState */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("spot_msgs.msg._manipulator_state");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "ManipulatorState");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  spot_msgs__msg__ManipulatorState * ros_message = (spot_msgs__msg__ManipulatorState *)raw_ros_message;
  {  // gripper_open_percentage
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->gripper_open_percentage);
    {
      int rc = PyObject_SetAttrString(_pymessage, "gripper_open_percentage", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // is_gripper_holding_item
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->is_gripper_holding_item ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "is_gripper_holding_item", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // estimated_end_effector_force_in_hand
    PyObject * field = NULL;
    field = geometry_msgs__msg__point__convert_to_py(&ros_message->estimated_end_effector_force_in_hand);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "estimated_end_effector_force_in_hand", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // stow_state
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->stow_state);
    {
      int rc = PyObject_SetAttrString(_pymessage, "stow_state", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // carry_state
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->carry_state);
    {
      int rc = PyObject_SetAttrString(_pymessage, "carry_state", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}

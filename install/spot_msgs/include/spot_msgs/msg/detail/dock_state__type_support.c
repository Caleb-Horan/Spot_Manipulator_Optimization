// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from spot_msgs:msg/DockState.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "spot_msgs/msg/detail/dock_state__rosidl_typesupport_introspection_c.h"
#include "spot_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "spot_msgs/msg/detail/dock_state__functions.h"
#include "spot_msgs/msg/detail/dock_state__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void DockState__rosidl_typesupport_introspection_c__DockState_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  spot_msgs__msg__DockState__init(message_memory);
}

void DockState__rosidl_typesupport_introspection_c__DockState_fini_function(void * message_memory)
{
  spot_msgs__msg__DockState__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember DockState__rosidl_typesupport_introspection_c__DockState_message_member_array[4] = {
  {
    "status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(spot_msgs__msg__DockState, status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "dock_type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(spot_msgs__msg__DockState, dock_type),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "dock_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(spot_msgs__msg__DockState, dock_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "power_status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(spot_msgs__msg__DockState, power_status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers DockState__rosidl_typesupport_introspection_c__DockState_message_members = {
  "spot_msgs__msg",  // message namespace
  "DockState",  // message name
  4,  // number of fields
  sizeof(spot_msgs__msg__DockState),
  DockState__rosidl_typesupport_introspection_c__DockState_message_member_array,  // message members
  DockState__rosidl_typesupport_introspection_c__DockState_init_function,  // function to initialize message memory (memory has to be allocated)
  DockState__rosidl_typesupport_introspection_c__DockState_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t DockState__rosidl_typesupport_introspection_c__DockState_message_type_support_handle = {
  0,
  &DockState__rosidl_typesupport_introspection_c__DockState_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_spot_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, spot_msgs, msg, DockState)() {
  if (!DockState__rosidl_typesupport_introspection_c__DockState_message_type_support_handle.typesupport_identifier) {
    DockState__rosidl_typesupport_introspection_c__DockState_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &DockState__rosidl_typesupport_introspection_c__DockState_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

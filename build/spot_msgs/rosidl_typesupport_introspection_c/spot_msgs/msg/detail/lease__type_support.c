// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from spot_msgs:msg/Lease.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "spot_msgs/msg/detail/lease__rosidl_typesupport_introspection_c.h"
#include "spot_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "spot_msgs/msg/detail/lease__functions.h"
#include "spot_msgs/msg/detail/lease__struct.h"


// Include directives for member types
// Member `resource`
// Member `epoch`
#include "rosidl_runtime_c/string_functions.h"
// Member `sequence`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void Lease__rosidl_typesupport_introspection_c__Lease_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  spot_msgs__msg__Lease__init(message_memory);
}

void Lease__rosidl_typesupport_introspection_c__Lease_fini_function(void * message_memory)
{
  spot_msgs__msg__Lease__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Lease__rosidl_typesupport_introspection_c__Lease_message_member_array[3] = {
  {
    "resource",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(spot_msgs__msg__Lease, resource),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "epoch",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(spot_msgs__msg__Lease, epoch),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "sequence",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(spot_msgs__msg__Lease, sequence),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Lease__rosidl_typesupport_introspection_c__Lease_message_members = {
  "spot_msgs__msg",  // message namespace
  "Lease",  // message name
  3,  // number of fields
  sizeof(spot_msgs__msg__Lease),
  Lease__rosidl_typesupport_introspection_c__Lease_message_member_array,  // message members
  Lease__rosidl_typesupport_introspection_c__Lease_init_function,  // function to initialize message memory (memory has to be allocated)
  Lease__rosidl_typesupport_introspection_c__Lease_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Lease__rosidl_typesupport_introspection_c__Lease_message_type_support_handle = {
  0,
  &Lease__rosidl_typesupport_introspection_c__Lease_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_spot_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, spot_msgs, msg, Lease)() {
  if (!Lease__rosidl_typesupport_introspection_c__Lease_message_type_support_handle.typesupport_identifier) {
    Lease__rosidl_typesupport_introspection_c__Lease_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Lease__rosidl_typesupport_introspection_c__Lease_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

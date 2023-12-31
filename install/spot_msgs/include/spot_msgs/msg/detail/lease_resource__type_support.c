// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from spot_msgs:msg/LeaseResource.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "spot_msgs/msg/detail/lease_resource__rosidl_typesupport_introspection_c.h"
#include "spot_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "spot_msgs/msg/detail/lease_resource__functions.h"
#include "spot_msgs/msg/detail/lease_resource__struct.h"


// Include directives for member types
// Member `resource`
#include "rosidl_runtime_c/string_functions.h"
// Member `lease`
#include "spot_msgs/msg/lease.h"
// Member `lease`
#include "spot_msgs/msg/detail/lease__rosidl_typesupport_introspection_c.h"
// Member `lease_owner`
#include "spot_msgs/msg/lease_owner.h"
// Member `lease_owner`
#include "spot_msgs/msg/detail/lease_owner__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void LeaseResource__rosidl_typesupport_introspection_c__LeaseResource_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  spot_msgs__msg__LeaseResource__init(message_memory);
}

void LeaseResource__rosidl_typesupport_introspection_c__LeaseResource_fini_function(void * message_memory)
{
  spot_msgs__msg__LeaseResource__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember LeaseResource__rosidl_typesupport_introspection_c__LeaseResource_message_member_array[3] = {
  {
    "resource",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(spot_msgs__msg__LeaseResource, resource),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "lease",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(spot_msgs__msg__LeaseResource, lease),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "lease_owner",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(spot_msgs__msg__LeaseResource, lease_owner),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers LeaseResource__rosidl_typesupport_introspection_c__LeaseResource_message_members = {
  "spot_msgs__msg",  // message namespace
  "LeaseResource",  // message name
  3,  // number of fields
  sizeof(spot_msgs__msg__LeaseResource),
  LeaseResource__rosidl_typesupport_introspection_c__LeaseResource_message_member_array,  // message members
  LeaseResource__rosidl_typesupport_introspection_c__LeaseResource_init_function,  // function to initialize message memory (memory has to be allocated)
  LeaseResource__rosidl_typesupport_introspection_c__LeaseResource_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t LeaseResource__rosidl_typesupport_introspection_c__LeaseResource_message_type_support_handle = {
  0,
  &LeaseResource__rosidl_typesupport_introspection_c__LeaseResource_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_spot_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, spot_msgs, msg, LeaseResource)() {
  LeaseResource__rosidl_typesupport_introspection_c__LeaseResource_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, spot_msgs, msg, Lease)();
  LeaseResource__rosidl_typesupport_introspection_c__LeaseResource_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, spot_msgs, msg, LeaseOwner)();
  if (!LeaseResource__rosidl_typesupport_introspection_c__LeaseResource_message_type_support_handle.typesupport_identifier) {
    LeaseResource__rosidl_typesupport_introspection_c__LeaseResource_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &LeaseResource__rosidl_typesupport_introspection_c__LeaseResource_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from spot_msgs:msg/LeaseArray.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "spot_msgs/msg/detail/lease_array__rosidl_typesupport_introspection_c.h"
#include "spot_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "spot_msgs/msg/detail/lease_array__functions.h"
#include "spot_msgs/msg/detail/lease_array__struct.h"


// Include directives for member types
// Member `resources`
#include "spot_msgs/msg/lease_resource.h"
// Member `resources`
#include "spot_msgs/msg/detail/lease_resource__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void LeaseArray__rosidl_typesupport_introspection_c__LeaseArray_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  spot_msgs__msg__LeaseArray__init(message_memory);
}

void LeaseArray__rosidl_typesupport_introspection_c__LeaseArray_fini_function(void * message_memory)
{
  spot_msgs__msg__LeaseArray__fini(message_memory);
}

size_t LeaseArray__rosidl_typesupport_introspection_c__size_function__LeaseResource__resources(
  const void * untyped_member)
{
  const spot_msgs__msg__LeaseResource__Sequence * member =
    (const spot_msgs__msg__LeaseResource__Sequence *)(untyped_member);
  return member->size;
}

const void * LeaseArray__rosidl_typesupport_introspection_c__get_const_function__LeaseResource__resources(
  const void * untyped_member, size_t index)
{
  const spot_msgs__msg__LeaseResource__Sequence * member =
    (const spot_msgs__msg__LeaseResource__Sequence *)(untyped_member);
  return &member->data[index];
}

void * LeaseArray__rosidl_typesupport_introspection_c__get_function__LeaseResource__resources(
  void * untyped_member, size_t index)
{
  spot_msgs__msg__LeaseResource__Sequence * member =
    (spot_msgs__msg__LeaseResource__Sequence *)(untyped_member);
  return &member->data[index];
}

bool LeaseArray__rosidl_typesupport_introspection_c__resize_function__LeaseResource__resources(
  void * untyped_member, size_t size)
{
  spot_msgs__msg__LeaseResource__Sequence * member =
    (spot_msgs__msg__LeaseResource__Sequence *)(untyped_member);
  spot_msgs__msg__LeaseResource__Sequence__fini(member);
  return spot_msgs__msg__LeaseResource__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember LeaseArray__rosidl_typesupport_introspection_c__LeaseArray_message_member_array[1] = {
  {
    "resources",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(spot_msgs__msg__LeaseArray, resources),  // bytes offset in struct
    NULL,  // default value
    LeaseArray__rosidl_typesupport_introspection_c__size_function__LeaseResource__resources,  // size() function pointer
    LeaseArray__rosidl_typesupport_introspection_c__get_const_function__LeaseResource__resources,  // get_const(index) function pointer
    LeaseArray__rosidl_typesupport_introspection_c__get_function__LeaseResource__resources,  // get(index) function pointer
    LeaseArray__rosidl_typesupport_introspection_c__resize_function__LeaseResource__resources  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers LeaseArray__rosidl_typesupport_introspection_c__LeaseArray_message_members = {
  "spot_msgs__msg",  // message namespace
  "LeaseArray",  // message name
  1,  // number of fields
  sizeof(spot_msgs__msg__LeaseArray),
  LeaseArray__rosidl_typesupport_introspection_c__LeaseArray_message_member_array,  // message members
  LeaseArray__rosidl_typesupport_introspection_c__LeaseArray_init_function,  // function to initialize message memory (memory has to be allocated)
  LeaseArray__rosidl_typesupport_introspection_c__LeaseArray_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t LeaseArray__rosidl_typesupport_introspection_c__LeaseArray_message_type_support_handle = {
  0,
  &LeaseArray__rosidl_typesupport_introspection_c__LeaseArray_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_spot_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, spot_msgs, msg, LeaseArray)() {
  LeaseArray__rosidl_typesupport_introspection_c__LeaseArray_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, spot_msgs, msg, LeaseResource)();
  if (!LeaseArray__rosidl_typesupport_introspection_c__LeaseArray_message_type_support_handle.typesupport_identifier) {
    LeaseArray__rosidl_typesupport_introspection_c__LeaseArray_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &LeaseArray__rosidl_typesupport_introspection_c__LeaseArray_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

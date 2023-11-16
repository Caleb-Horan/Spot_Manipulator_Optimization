// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from spot_msgs:msg/FootStateArray.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "spot_msgs/msg/detail/foot_state_array__rosidl_typesupport_introspection_c.h"
#include "spot_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "spot_msgs/msg/detail/foot_state_array__functions.h"
#include "spot_msgs/msg/detail/foot_state_array__struct.h"


// Include directives for member types
// Member `states`
#include "spot_msgs/msg/foot_state.h"
// Member `states`
#include "spot_msgs/msg/detail/foot_state__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void FootStateArray__rosidl_typesupport_introspection_c__FootStateArray_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  spot_msgs__msg__FootStateArray__init(message_memory);
}

void FootStateArray__rosidl_typesupport_introspection_c__FootStateArray_fini_function(void * message_memory)
{
  spot_msgs__msg__FootStateArray__fini(message_memory);
}

size_t FootStateArray__rosidl_typesupport_introspection_c__size_function__FootState__states(
  const void * untyped_member)
{
  const spot_msgs__msg__FootState__Sequence * member =
    (const spot_msgs__msg__FootState__Sequence *)(untyped_member);
  return member->size;
}

const void * FootStateArray__rosidl_typesupport_introspection_c__get_const_function__FootState__states(
  const void * untyped_member, size_t index)
{
  const spot_msgs__msg__FootState__Sequence * member =
    (const spot_msgs__msg__FootState__Sequence *)(untyped_member);
  return &member->data[index];
}

void * FootStateArray__rosidl_typesupport_introspection_c__get_function__FootState__states(
  void * untyped_member, size_t index)
{
  spot_msgs__msg__FootState__Sequence * member =
    (spot_msgs__msg__FootState__Sequence *)(untyped_member);
  return &member->data[index];
}

bool FootStateArray__rosidl_typesupport_introspection_c__resize_function__FootState__states(
  void * untyped_member, size_t size)
{
  spot_msgs__msg__FootState__Sequence * member =
    (spot_msgs__msg__FootState__Sequence *)(untyped_member);
  spot_msgs__msg__FootState__Sequence__fini(member);
  return spot_msgs__msg__FootState__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember FootStateArray__rosidl_typesupport_introspection_c__FootStateArray_message_member_array[1] = {
  {
    "states",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(spot_msgs__msg__FootStateArray, states),  // bytes offset in struct
    NULL,  // default value
    FootStateArray__rosidl_typesupport_introspection_c__size_function__FootState__states,  // size() function pointer
    FootStateArray__rosidl_typesupport_introspection_c__get_const_function__FootState__states,  // get_const(index) function pointer
    FootStateArray__rosidl_typesupport_introspection_c__get_function__FootState__states,  // get(index) function pointer
    FootStateArray__rosidl_typesupport_introspection_c__resize_function__FootState__states  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers FootStateArray__rosidl_typesupport_introspection_c__FootStateArray_message_members = {
  "spot_msgs__msg",  // message namespace
  "FootStateArray",  // message name
  1,  // number of fields
  sizeof(spot_msgs__msg__FootStateArray),
  FootStateArray__rosidl_typesupport_introspection_c__FootStateArray_message_member_array,  // message members
  FootStateArray__rosidl_typesupport_introspection_c__FootStateArray_init_function,  // function to initialize message memory (memory has to be allocated)
  FootStateArray__rosidl_typesupport_introspection_c__FootStateArray_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t FootStateArray__rosidl_typesupport_introspection_c__FootStateArray_message_type_support_handle = {
  0,
  &FootStateArray__rosidl_typesupport_introspection_c__FootStateArray_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_spot_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, spot_msgs, msg, FootStateArray)() {
  FootStateArray__rosidl_typesupport_introspection_c__FootStateArray_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, spot_msgs, msg, FootState)();
  if (!FootStateArray__rosidl_typesupport_introspection_c__FootStateArray_message_type_support_handle.typesupport_identifier) {
    FootStateArray__rosidl_typesupport_introspection_c__FootStateArray_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &FootStateArray__rosidl_typesupport_introspection_c__FootStateArray_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

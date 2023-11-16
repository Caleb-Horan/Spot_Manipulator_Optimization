// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from spot_msgs:msg/SystemFaultState.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "spot_msgs/msg/detail/system_fault_state__rosidl_typesupport_introspection_c.h"
#include "spot_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "spot_msgs/msg/detail/system_fault_state__functions.h"
#include "spot_msgs/msg/detail/system_fault_state__struct.h"


// Include directives for member types
// Member `faults`
// Member `historical_faults`
#include "spot_msgs/msg/system_fault.h"
// Member `faults`
// Member `historical_faults`
#include "spot_msgs/msg/detail/system_fault__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void SystemFaultState__rosidl_typesupport_introspection_c__SystemFaultState_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  spot_msgs__msg__SystemFaultState__init(message_memory);
}

void SystemFaultState__rosidl_typesupport_introspection_c__SystemFaultState_fini_function(void * message_memory)
{
  spot_msgs__msg__SystemFaultState__fini(message_memory);
}

size_t SystemFaultState__rosidl_typesupport_introspection_c__size_function__SystemFault__faults(
  const void * untyped_member)
{
  const spot_msgs__msg__SystemFault__Sequence * member =
    (const spot_msgs__msg__SystemFault__Sequence *)(untyped_member);
  return member->size;
}

const void * SystemFaultState__rosidl_typesupport_introspection_c__get_const_function__SystemFault__faults(
  const void * untyped_member, size_t index)
{
  const spot_msgs__msg__SystemFault__Sequence * member =
    (const spot_msgs__msg__SystemFault__Sequence *)(untyped_member);
  return &member->data[index];
}

void * SystemFaultState__rosidl_typesupport_introspection_c__get_function__SystemFault__faults(
  void * untyped_member, size_t index)
{
  spot_msgs__msg__SystemFault__Sequence * member =
    (spot_msgs__msg__SystemFault__Sequence *)(untyped_member);
  return &member->data[index];
}

bool SystemFaultState__rosidl_typesupport_introspection_c__resize_function__SystemFault__faults(
  void * untyped_member, size_t size)
{
  spot_msgs__msg__SystemFault__Sequence * member =
    (spot_msgs__msg__SystemFault__Sequence *)(untyped_member);
  spot_msgs__msg__SystemFault__Sequence__fini(member);
  return spot_msgs__msg__SystemFault__Sequence__init(member, size);
}

size_t SystemFaultState__rosidl_typesupport_introspection_c__size_function__SystemFault__historical_faults(
  const void * untyped_member)
{
  const spot_msgs__msg__SystemFault__Sequence * member =
    (const spot_msgs__msg__SystemFault__Sequence *)(untyped_member);
  return member->size;
}

const void * SystemFaultState__rosidl_typesupport_introspection_c__get_const_function__SystemFault__historical_faults(
  const void * untyped_member, size_t index)
{
  const spot_msgs__msg__SystemFault__Sequence * member =
    (const spot_msgs__msg__SystemFault__Sequence *)(untyped_member);
  return &member->data[index];
}

void * SystemFaultState__rosidl_typesupport_introspection_c__get_function__SystemFault__historical_faults(
  void * untyped_member, size_t index)
{
  spot_msgs__msg__SystemFault__Sequence * member =
    (spot_msgs__msg__SystemFault__Sequence *)(untyped_member);
  return &member->data[index];
}

bool SystemFaultState__rosidl_typesupport_introspection_c__resize_function__SystemFault__historical_faults(
  void * untyped_member, size_t size)
{
  spot_msgs__msg__SystemFault__Sequence * member =
    (spot_msgs__msg__SystemFault__Sequence *)(untyped_member);
  spot_msgs__msg__SystemFault__Sequence__fini(member);
  return spot_msgs__msg__SystemFault__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember SystemFaultState__rosidl_typesupport_introspection_c__SystemFaultState_message_member_array[2] = {
  {
    "faults",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(spot_msgs__msg__SystemFaultState, faults),  // bytes offset in struct
    NULL,  // default value
    SystemFaultState__rosidl_typesupport_introspection_c__size_function__SystemFault__faults,  // size() function pointer
    SystemFaultState__rosidl_typesupport_introspection_c__get_const_function__SystemFault__faults,  // get_const(index) function pointer
    SystemFaultState__rosidl_typesupport_introspection_c__get_function__SystemFault__faults,  // get(index) function pointer
    SystemFaultState__rosidl_typesupport_introspection_c__resize_function__SystemFault__faults  // resize(index) function pointer
  },
  {
    "historical_faults",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(spot_msgs__msg__SystemFaultState, historical_faults),  // bytes offset in struct
    NULL,  // default value
    SystemFaultState__rosidl_typesupport_introspection_c__size_function__SystemFault__historical_faults,  // size() function pointer
    SystemFaultState__rosidl_typesupport_introspection_c__get_const_function__SystemFault__historical_faults,  // get_const(index) function pointer
    SystemFaultState__rosidl_typesupport_introspection_c__get_function__SystemFault__historical_faults,  // get(index) function pointer
    SystemFaultState__rosidl_typesupport_introspection_c__resize_function__SystemFault__historical_faults  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers SystemFaultState__rosidl_typesupport_introspection_c__SystemFaultState_message_members = {
  "spot_msgs__msg",  // message namespace
  "SystemFaultState",  // message name
  2,  // number of fields
  sizeof(spot_msgs__msg__SystemFaultState),
  SystemFaultState__rosidl_typesupport_introspection_c__SystemFaultState_message_member_array,  // message members
  SystemFaultState__rosidl_typesupport_introspection_c__SystemFaultState_init_function,  // function to initialize message memory (memory has to be allocated)
  SystemFaultState__rosidl_typesupport_introspection_c__SystemFaultState_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t SystemFaultState__rosidl_typesupport_introspection_c__SystemFaultState_message_type_support_handle = {
  0,
  &SystemFaultState__rosidl_typesupport_introspection_c__SystemFaultState_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_spot_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, spot_msgs, msg, SystemFaultState)() {
  SystemFaultState__rosidl_typesupport_introspection_c__SystemFaultState_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, spot_msgs, msg, SystemFault)();
  SystemFaultState__rosidl_typesupport_introspection_c__SystemFaultState_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, spot_msgs, msg, SystemFault)();
  if (!SystemFaultState__rosidl_typesupport_introspection_c__SystemFaultState_message_type_support_handle.typesupport_identifier) {
    SystemFaultState__rosidl_typesupport_introspection_c__SystemFaultState_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &SystemFaultState__rosidl_typesupport_introspection_c__SystemFaultState_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

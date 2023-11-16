// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from spot_msgs:msg/DockState.idl
// generated code does not contain a copyright notice
#include "spot_msgs/msg/detail/dock_state__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "spot_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "spot_msgs/msg/detail/dock_state__struct.h"
#include "spot_msgs/msg/detail/dock_state__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _DockState__ros_msg_type = spot_msgs__msg__DockState;

static bool _DockState__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _DockState__ros_msg_type * ros_message = static_cast<const _DockState__ros_msg_type *>(untyped_ros_message);
  // Field name: status
  {
    cdr << ros_message->status;
  }

  // Field name: dock_type
  {
    cdr << ros_message->dock_type;
  }

  // Field name: dock_id
  {
    cdr << ros_message->dock_id;
  }

  // Field name: power_status
  {
    cdr << ros_message->power_status;
  }

  return true;
}

static bool _DockState__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _DockState__ros_msg_type * ros_message = static_cast<_DockState__ros_msg_type *>(untyped_ros_message);
  // Field name: status
  {
    cdr >> ros_message->status;
  }

  // Field name: dock_type
  {
    cdr >> ros_message->dock_type;
  }

  // Field name: dock_id
  {
    cdr >> ros_message->dock_id;
  }

  // Field name: power_status
  {
    cdr >> ros_message->power_status;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_spot_msgs
size_t get_serialized_size_spot_msgs__msg__DockState(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _DockState__ros_msg_type * ros_message = static_cast<const _DockState__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name status
  {
    size_t item_size = sizeof(ros_message->status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name dock_type
  {
    size_t item_size = sizeof(ros_message->dock_type);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name dock_id
  {
    size_t item_size = sizeof(ros_message->dock_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name power_status
  {
    size_t item_size = sizeof(ros_message->power_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _DockState__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_spot_msgs__msg__DockState(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_spot_msgs
size_t max_serialized_size_spot_msgs__msg__DockState(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: status
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: dock_type
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: dock_id
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: power_status
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _DockState__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_spot_msgs__msg__DockState(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_DockState = {
  "spot_msgs::msg",
  "DockState",
  _DockState__cdr_serialize,
  _DockState__cdr_deserialize,
  _DockState__get_serialized_size,
  _DockState__max_serialized_size
};

static rosidl_message_type_support_t _DockState__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_DockState,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, spot_msgs, msg, DockState)() {
  return &_DockState__type_support;
}

#if defined(__cplusplus)
}
#endif

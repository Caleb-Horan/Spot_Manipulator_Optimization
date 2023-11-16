// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from spot_msgs:msg/ManipulatorState.idl
// generated code does not contain a copyright notice
#include "spot_msgs/msg/detail/manipulator_state__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "spot_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "spot_msgs/msg/detail/manipulator_state__struct.h"
#include "spot_msgs/msg/detail/manipulator_state__functions.h"
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

#include "geometry_msgs/msg/detail/point__functions.h"  // estimated_end_effector_force_in_hand

// forward declare type support functions
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_spot_msgs
size_t get_serialized_size_geometry_msgs__msg__Point(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_spot_msgs
size_t max_serialized_size_geometry_msgs__msg__Point(
  bool & full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_spot_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, geometry_msgs, msg, Point)();


using _ManipulatorState__ros_msg_type = spot_msgs__msg__ManipulatorState;

static bool _ManipulatorState__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _ManipulatorState__ros_msg_type * ros_message = static_cast<const _ManipulatorState__ros_msg_type *>(untyped_ros_message);
  // Field name: gripper_open_percentage
  {
    cdr << ros_message->gripper_open_percentage;
  }

  // Field name: is_gripper_holding_item
  {
    cdr << (ros_message->is_gripper_holding_item ? true : false);
  }

  // Field name: estimated_end_effector_force_in_hand
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, geometry_msgs, msg, Point
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->estimated_end_effector_force_in_hand, cdr))
    {
      return false;
    }
  }

  // Field name: stow_state
  {
    cdr << ros_message->stow_state;
  }

  // Field name: carry_state
  {
    cdr << ros_message->carry_state;
  }

  return true;
}

static bool _ManipulatorState__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _ManipulatorState__ros_msg_type * ros_message = static_cast<_ManipulatorState__ros_msg_type *>(untyped_ros_message);
  // Field name: gripper_open_percentage
  {
    cdr >> ros_message->gripper_open_percentage;
  }

  // Field name: is_gripper_holding_item
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->is_gripper_holding_item = tmp ? true : false;
  }

  // Field name: estimated_end_effector_force_in_hand
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, geometry_msgs, msg, Point
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->estimated_end_effector_force_in_hand))
    {
      return false;
    }
  }

  // Field name: stow_state
  {
    cdr >> ros_message->stow_state;
  }

  // Field name: carry_state
  {
    cdr >> ros_message->carry_state;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_spot_msgs
size_t get_serialized_size_spot_msgs__msg__ManipulatorState(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _ManipulatorState__ros_msg_type * ros_message = static_cast<const _ManipulatorState__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name gripper_open_percentage
  {
    size_t item_size = sizeof(ros_message->gripper_open_percentage);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name is_gripper_holding_item
  {
    size_t item_size = sizeof(ros_message->is_gripper_holding_item);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name estimated_end_effector_force_in_hand

  current_alignment += get_serialized_size_geometry_msgs__msg__Point(
    &(ros_message->estimated_end_effector_force_in_hand), current_alignment);
  // field.name stow_state
  {
    size_t item_size = sizeof(ros_message->stow_state);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name carry_state
  {
    size_t item_size = sizeof(ros_message->carry_state);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _ManipulatorState__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_spot_msgs__msg__ManipulatorState(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_spot_msgs
size_t max_serialized_size_spot_msgs__msg__ManipulatorState(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: gripper_open_percentage
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: is_gripper_holding_item
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: estimated_end_effector_force_in_hand
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_geometry_msgs__msg__Point(
        full_bounded, current_alignment);
    }
  }
  // member: stow_state
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: carry_state
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _ManipulatorState__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_spot_msgs__msg__ManipulatorState(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_ManipulatorState = {
  "spot_msgs::msg",
  "ManipulatorState",
  _ManipulatorState__cdr_serialize,
  _ManipulatorState__cdr_deserialize,
  _ManipulatorState__get_serialized_size,
  _ManipulatorState__max_serialized_size
};

static rosidl_message_type_support_t _ManipulatorState__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_ManipulatorState,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, spot_msgs, msg, ManipulatorState)() {
  return &_ManipulatorState__type_support;
}

#if defined(__cplusplus)
}
#endif

// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from spot_msgs:msg/ManipulatorState.idl
// generated code does not contain a copyright notice

#ifndef SPOT_MSGS__MSG__DETAIL__MANIPULATOR_STATE__STRUCT_H_
#define SPOT_MSGS__MSG__DETAIL__MANIPULATOR_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'STOWSTATE_UNKNOWN'.
enum
{
  spot_msgs__msg__ManipulatorState__STOWSTATE_UNKNOWN = 0
};

/// Constant 'STOWSTATE_STOWED'.
enum
{
  spot_msgs__msg__ManipulatorState__STOWSTATE_STOWED = 1
};

/// Constant 'STOWSTATE_DEPLOYED'.
enum
{
  spot_msgs__msg__ManipulatorState__STOWSTATE_DEPLOYED = 2
};

/// Constant 'CARRY_STATE_UNKNOWN'.
enum
{
  spot_msgs__msg__ManipulatorState__CARRY_STATE_UNKNOWN = 0
};

/// Constant 'CARRY_STATE_NOT_CARRIABLE'.
enum
{
  spot_msgs__msg__ManipulatorState__CARRY_STATE_NOT_CARRIABLE = 1
};

/// Constant 'CARRY_STATE_CARRIABLE'.
enum
{
  spot_msgs__msg__ManipulatorState__CARRY_STATE_CARRIABLE = 3
};

/// Constant 'CARRY_STATE_CARRIABLE_AND_STOWABLE'.
enum
{
  spot_msgs__msg__ManipulatorState__CARRY_STATE_CARRIABLE_AND_STOWABLE = 3
};

// Include directives for member types
// Member 'estimated_end_effector_force_in_hand'
#include "geometry_msgs/msg/detail/point__struct.h"

// Struct defined in msg/ManipulatorState in the package spot_msgs.
typedef struct spot_msgs__msg__ManipulatorState
{
  double gripper_open_percentage;
  bool is_gripper_holding_item;
  geometry_msgs__msg__Point estimated_end_effector_force_in_hand;
  uint8_t stow_state;
  uint8_t carry_state;
} spot_msgs__msg__ManipulatorState;

// Struct for a sequence of spot_msgs__msg__ManipulatorState.
typedef struct spot_msgs__msg__ManipulatorState__Sequence
{
  spot_msgs__msg__ManipulatorState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} spot_msgs__msg__ManipulatorState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SPOT_MSGS__MSG__DETAIL__MANIPULATOR_STATE__STRUCT_H_

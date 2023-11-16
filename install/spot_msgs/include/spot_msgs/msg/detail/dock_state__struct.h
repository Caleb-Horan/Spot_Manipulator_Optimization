// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from spot_msgs:msg/DockState.idl
// generated code does not contain a copyright notice

#ifndef SPOT_MSGS__MSG__DETAIL__DOCK_STATE__STRUCT_H_
#define SPOT_MSGS__MSG__DETAIL__DOCK_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'DOCK_STATUS_UNKNOWN'.
enum
{
  spot_msgs__msg__DockState__DOCK_STATUS_UNKNOWN = 0
};

/// Constant 'DOCK_STATUS_DOCKED'.
enum
{
  spot_msgs__msg__DockState__DOCK_STATUS_DOCKED = 1
};

/// Constant 'DOCK_STATUS_DOCKING'.
enum
{
  spot_msgs__msg__DockState__DOCK_STATUS_DOCKING = 2
};

/// Constant 'DOCK_STATUS_UNDOCKED'.
enum
{
  spot_msgs__msg__DockState__DOCK_STATUS_UNDOCKED = 3
};

/// Constant 'DOCK_STATUS_UNDOCKING'.
enum
{
  spot_msgs__msg__DockState__DOCK_STATUS_UNDOCKING = 4
};

/// Constant 'DOCK_TYPE_UNKNOWN'.
enum
{
  spot_msgs__msg__DockState__DOCK_TYPE_UNKNOWN = 0
};

/// Constant 'DOCK_TYPE_CONTACT_PROTOTYPE'.
enum
{
  spot_msgs__msg__DockState__DOCK_TYPE_CONTACT_PROTOTYPE = 2
};

/// Constant 'DOCK_TYPE_SPOT_DOCK'.
enum
{
  spot_msgs__msg__DockState__DOCK_TYPE_SPOT_DOCK = 3
};

/// Constant 'LINK_STATUS_UNKNOWN'.
enum
{
  spot_msgs__msg__DockState__LINK_STATUS_UNKNOWN = 0
};

/// Constant 'LINK_STATUS_CONNECTED'.
enum
{
  spot_msgs__msg__DockState__LINK_STATUS_CONNECTED = 1
};

/// Constant 'LINK_STATUS_ERROR'.
enum
{
  spot_msgs__msg__DockState__LINK_STATUS_ERROR = 2
};

/// Constant 'LINK_STATUS_DETECTING'.
enum
{
  spot_msgs__msg__DockState__LINK_STATUS_DETECTING = 3
};

// Struct defined in msg/DockState in the package spot_msgs.
typedef struct spot_msgs__msg__DockState
{
  uint8_t status;
  uint8_t dock_type;
  uint32_t dock_id;
  uint8_t power_status;
} spot_msgs__msg__DockState;

// Struct for a sequence of spot_msgs__msg__DockState.
typedef struct spot_msgs__msg__DockState__Sequence
{
  spot_msgs__msg__DockState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} spot_msgs__msg__DockState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SPOT_MSGS__MSG__DETAIL__DOCK_STATE__STRUCT_H_

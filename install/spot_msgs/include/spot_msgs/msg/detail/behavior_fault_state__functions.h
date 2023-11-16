// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from spot_msgs:msg/BehaviorFaultState.idl
// generated code does not contain a copyright notice

#ifndef SPOT_MSGS__MSG__DETAIL__BEHAVIOR_FAULT_STATE__FUNCTIONS_H_
#define SPOT_MSGS__MSG__DETAIL__BEHAVIOR_FAULT_STATE__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "spot_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "spot_msgs/msg/detail/behavior_fault_state__struct.h"

/// Initialize msg/BehaviorFaultState message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * spot_msgs__msg__BehaviorFaultState
 * )) before or use
 * spot_msgs__msg__BehaviorFaultState__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_spot_msgs
bool
spot_msgs__msg__BehaviorFaultState__init(spot_msgs__msg__BehaviorFaultState * msg);

/// Finalize msg/BehaviorFaultState message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_spot_msgs
void
spot_msgs__msg__BehaviorFaultState__fini(spot_msgs__msg__BehaviorFaultState * msg);

/// Create msg/BehaviorFaultState message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * spot_msgs__msg__BehaviorFaultState__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_spot_msgs
spot_msgs__msg__BehaviorFaultState *
spot_msgs__msg__BehaviorFaultState__create();

/// Destroy msg/BehaviorFaultState message.
/**
 * It calls
 * spot_msgs__msg__BehaviorFaultState__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_spot_msgs
void
spot_msgs__msg__BehaviorFaultState__destroy(spot_msgs__msg__BehaviorFaultState * msg);

/// Check for msg/BehaviorFaultState message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_spot_msgs
bool
spot_msgs__msg__BehaviorFaultState__are_equal(const spot_msgs__msg__BehaviorFaultState * lhs, const spot_msgs__msg__BehaviorFaultState * rhs);

/// Copy a msg/BehaviorFaultState message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_spot_msgs
bool
spot_msgs__msg__BehaviorFaultState__copy(
  const spot_msgs__msg__BehaviorFaultState * input,
  spot_msgs__msg__BehaviorFaultState * output);

/// Initialize array of msg/BehaviorFaultState messages.
/**
 * It allocates the memory for the number of elements and calls
 * spot_msgs__msg__BehaviorFaultState__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_spot_msgs
bool
spot_msgs__msg__BehaviorFaultState__Sequence__init(spot_msgs__msg__BehaviorFaultState__Sequence * array, size_t size);

/// Finalize array of msg/BehaviorFaultState messages.
/**
 * It calls
 * spot_msgs__msg__BehaviorFaultState__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_spot_msgs
void
spot_msgs__msg__BehaviorFaultState__Sequence__fini(spot_msgs__msg__BehaviorFaultState__Sequence * array);

/// Create array of msg/BehaviorFaultState messages.
/**
 * It allocates the memory for the array and calls
 * spot_msgs__msg__BehaviorFaultState__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_spot_msgs
spot_msgs__msg__BehaviorFaultState__Sequence *
spot_msgs__msg__BehaviorFaultState__Sequence__create(size_t size);

/// Destroy array of msg/BehaviorFaultState messages.
/**
 * It calls
 * spot_msgs__msg__BehaviorFaultState__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_spot_msgs
void
spot_msgs__msg__BehaviorFaultState__Sequence__destroy(spot_msgs__msg__BehaviorFaultState__Sequence * array);

/// Check for msg/BehaviorFaultState message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_spot_msgs
bool
spot_msgs__msg__BehaviorFaultState__Sequence__are_equal(const spot_msgs__msg__BehaviorFaultState__Sequence * lhs, const spot_msgs__msg__BehaviorFaultState__Sequence * rhs);

/// Copy an array of msg/BehaviorFaultState messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_spot_msgs
bool
spot_msgs__msg__BehaviorFaultState__Sequence__copy(
  const spot_msgs__msg__BehaviorFaultState__Sequence * input,
  spot_msgs__msg__BehaviorFaultState__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // SPOT_MSGS__MSG__DETAIL__BEHAVIOR_FAULT_STATE__FUNCTIONS_H_

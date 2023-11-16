// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from spot_msgs:msg/ManipulatorState.idl
// generated code does not contain a copyright notice
#include "spot_msgs/msg/detail/manipulator_state__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `estimated_end_effector_force_in_hand`
#include "geometry_msgs/msg/detail/point__functions.h"

bool
spot_msgs__msg__ManipulatorState__init(spot_msgs__msg__ManipulatorState * msg)
{
  if (!msg) {
    return false;
  }
  // gripper_open_percentage
  // is_gripper_holding_item
  // estimated_end_effector_force_in_hand
  if (!geometry_msgs__msg__Point__init(&msg->estimated_end_effector_force_in_hand)) {
    spot_msgs__msg__ManipulatorState__fini(msg);
    return false;
  }
  // stow_state
  // carry_state
  return true;
}

void
spot_msgs__msg__ManipulatorState__fini(spot_msgs__msg__ManipulatorState * msg)
{
  if (!msg) {
    return;
  }
  // gripper_open_percentage
  // is_gripper_holding_item
  // estimated_end_effector_force_in_hand
  geometry_msgs__msg__Point__fini(&msg->estimated_end_effector_force_in_hand);
  // stow_state
  // carry_state
}

bool
spot_msgs__msg__ManipulatorState__are_equal(const spot_msgs__msg__ManipulatorState * lhs, const spot_msgs__msg__ManipulatorState * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // gripper_open_percentage
  if (lhs->gripper_open_percentage != rhs->gripper_open_percentage) {
    return false;
  }
  // is_gripper_holding_item
  if (lhs->is_gripper_holding_item != rhs->is_gripper_holding_item) {
    return false;
  }
  // estimated_end_effector_force_in_hand
  if (!geometry_msgs__msg__Point__are_equal(
      &(lhs->estimated_end_effector_force_in_hand), &(rhs->estimated_end_effector_force_in_hand)))
  {
    return false;
  }
  // stow_state
  if (lhs->stow_state != rhs->stow_state) {
    return false;
  }
  // carry_state
  if (lhs->carry_state != rhs->carry_state) {
    return false;
  }
  return true;
}

bool
spot_msgs__msg__ManipulatorState__copy(
  const spot_msgs__msg__ManipulatorState * input,
  spot_msgs__msg__ManipulatorState * output)
{
  if (!input || !output) {
    return false;
  }
  // gripper_open_percentage
  output->gripper_open_percentage = input->gripper_open_percentage;
  // is_gripper_holding_item
  output->is_gripper_holding_item = input->is_gripper_holding_item;
  // estimated_end_effector_force_in_hand
  if (!geometry_msgs__msg__Point__copy(
      &(input->estimated_end_effector_force_in_hand), &(output->estimated_end_effector_force_in_hand)))
  {
    return false;
  }
  // stow_state
  output->stow_state = input->stow_state;
  // carry_state
  output->carry_state = input->carry_state;
  return true;
}

spot_msgs__msg__ManipulatorState *
spot_msgs__msg__ManipulatorState__create()
{
  spot_msgs__msg__ManipulatorState * msg = (spot_msgs__msg__ManipulatorState *)malloc(sizeof(spot_msgs__msg__ManipulatorState));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(spot_msgs__msg__ManipulatorState));
  bool success = spot_msgs__msg__ManipulatorState__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
spot_msgs__msg__ManipulatorState__destroy(spot_msgs__msg__ManipulatorState * msg)
{
  if (msg) {
    spot_msgs__msg__ManipulatorState__fini(msg);
  }
  free(msg);
}


bool
spot_msgs__msg__ManipulatorState__Sequence__init(spot_msgs__msg__ManipulatorState__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  spot_msgs__msg__ManipulatorState * data = NULL;
  if (size) {
    data = (spot_msgs__msg__ManipulatorState *)calloc(size, sizeof(spot_msgs__msg__ManipulatorState));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = spot_msgs__msg__ManipulatorState__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        spot_msgs__msg__ManipulatorState__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
spot_msgs__msg__ManipulatorState__Sequence__fini(spot_msgs__msg__ManipulatorState__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      spot_msgs__msg__ManipulatorState__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

spot_msgs__msg__ManipulatorState__Sequence *
spot_msgs__msg__ManipulatorState__Sequence__create(size_t size)
{
  spot_msgs__msg__ManipulatorState__Sequence * array = (spot_msgs__msg__ManipulatorState__Sequence *)malloc(sizeof(spot_msgs__msg__ManipulatorState__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = spot_msgs__msg__ManipulatorState__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
spot_msgs__msg__ManipulatorState__Sequence__destroy(spot_msgs__msg__ManipulatorState__Sequence * array)
{
  if (array) {
    spot_msgs__msg__ManipulatorState__Sequence__fini(array);
  }
  free(array);
}

bool
spot_msgs__msg__ManipulatorState__Sequence__are_equal(const spot_msgs__msg__ManipulatorState__Sequence * lhs, const spot_msgs__msg__ManipulatorState__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!spot_msgs__msg__ManipulatorState__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
spot_msgs__msg__ManipulatorState__Sequence__copy(
  const spot_msgs__msg__ManipulatorState__Sequence * input,
  spot_msgs__msg__ManipulatorState__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(spot_msgs__msg__ManipulatorState);
    spot_msgs__msg__ManipulatorState * data =
      (spot_msgs__msg__ManipulatorState *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!spot_msgs__msg__ManipulatorState__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          spot_msgs__msg__ManipulatorState__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!spot_msgs__msg__ManipulatorState__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}

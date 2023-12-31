// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from spot_msgs:msg/PowerState.idl
// generated code does not contain a copyright notice
#include "spot_msgs/msg/detail/power_state__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__functions.h"
// Member `locomotion_estimated_runtime`
#include "builtin_interfaces/msg/detail/duration__functions.h"

bool
spot_msgs__msg__PowerState__init(spot_msgs__msg__PowerState * msg)
{
  if (!msg) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    spot_msgs__msg__PowerState__fini(msg);
    return false;
  }
  // motor_power_state
  // shore_power_state
  // locomotion_charge_percentage
  // locomotion_estimated_runtime
  if (!builtin_interfaces__msg__Duration__init(&msg->locomotion_estimated_runtime)) {
    spot_msgs__msg__PowerState__fini(msg);
    return false;
  }
  return true;
}

void
spot_msgs__msg__PowerState__fini(spot_msgs__msg__PowerState * msg)
{
  if (!msg) {
    return;
  }
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
  // motor_power_state
  // shore_power_state
  // locomotion_charge_percentage
  // locomotion_estimated_runtime
  builtin_interfaces__msg__Duration__fini(&msg->locomotion_estimated_runtime);
}

bool
spot_msgs__msg__PowerState__are_equal(const spot_msgs__msg__PowerState * lhs, const spot_msgs__msg__PowerState * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->stamp), &(rhs->stamp)))
  {
    return false;
  }
  // motor_power_state
  if (lhs->motor_power_state != rhs->motor_power_state) {
    return false;
  }
  // shore_power_state
  if (lhs->shore_power_state != rhs->shore_power_state) {
    return false;
  }
  // locomotion_charge_percentage
  if (lhs->locomotion_charge_percentage != rhs->locomotion_charge_percentage) {
    return false;
  }
  // locomotion_estimated_runtime
  if (!builtin_interfaces__msg__Duration__are_equal(
      &(lhs->locomotion_estimated_runtime), &(rhs->locomotion_estimated_runtime)))
  {
    return false;
  }
  return true;
}

bool
spot_msgs__msg__PowerState__copy(
  const spot_msgs__msg__PowerState * input,
  spot_msgs__msg__PowerState * output)
{
  if (!input || !output) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__copy(
      &(input->stamp), &(output->stamp)))
  {
    return false;
  }
  // motor_power_state
  output->motor_power_state = input->motor_power_state;
  // shore_power_state
  output->shore_power_state = input->shore_power_state;
  // locomotion_charge_percentage
  output->locomotion_charge_percentage = input->locomotion_charge_percentage;
  // locomotion_estimated_runtime
  if (!builtin_interfaces__msg__Duration__copy(
      &(input->locomotion_estimated_runtime), &(output->locomotion_estimated_runtime)))
  {
    return false;
  }
  return true;
}

spot_msgs__msg__PowerState *
spot_msgs__msg__PowerState__create()
{
  spot_msgs__msg__PowerState * msg = (spot_msgs__msg__PowerState *)malloc(sizeof(spot_msgs__msg__PowerState));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(spot_msgs__msg__PowerState));
  bool success = spot_msgs__msg__PowerState__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
spot_msgs__msg__PowerState__destroy(spot_msgs__msg__PowerState * msg)
{
  if (msg) {
    spot_msgs__msg__PowerState__fini(msg);
  }
  free(msg);
}


bool
spot_msgs__msg__PowerState__Sequence__init(spot_msgs__msg__PowerState__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  spot_msgs__msg__PowerState * data = NULL;
  if (size) {
    data = (spot_msgs__msg__PowerState *)calloc(size, sizeof(spot_msgs__msg__PowerState));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = spot_msgs__msg__PowerState__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        spot_msgs__msg__PowerState__fini(&data[i - 1]);
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
spot_msgs__msg__PowerState__Sequence__fini(spot_msgs__msg__PowerState__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      spot_msgs__msg__PowerState__fini(&array->data[i]);
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

spot_msgs__msg__PowerState__Sequence *
spot_msgs__msg__PowerState__Sequence__create(size_t size)
{
  spot_msgs__msg__PowerState__Sequence * array = (spot_msgs__msg__PowerState__Sequence *)malloc(sizeof(spot_msgs__msg__PowerState__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = spot_msgs__msg__PowerState__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
spot_msgs__msg__PowerState__Sequence__destroy(spot_msgs__msg__PowerState__Sequence * array)
{
  if (array) {
    spot_msgs__msg__PowerState__Sequence__fini(array);
  }
  free(array);
}

bool
spot_msgs__msg__PowerState__Sequence__are_equal(const spot_msgs__msg__PowerState__Sequence * lhs, const spot_msgs__msg__PowerState__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!spot_msgs__msg__PowerState__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
spot_msgs__msg__PowerState__Sequence__copy(
  const spot_msgs__msg__PowerState__Sequence * input,
  spot_msgs__msg__PowerState__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(spot_msgs__msg__PowerState);
    spot_msgs__msg__PowerState * data =
      (spot_msgs__msg__PowerState *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!spot_msgs__msg__PowerState__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          spot_msgs__msg__PowerState__fini(&data[i]);
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
    if (!spot_msgs__msg__PowerState__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}

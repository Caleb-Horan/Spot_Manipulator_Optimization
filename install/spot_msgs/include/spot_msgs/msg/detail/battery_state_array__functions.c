// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from spot_msgs:msg/BatteryStateArray.idl
// generated code does not contain a copyright notice
#include "spot_msgs/msg/detail/battery_state_array__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `battery_states`
#include "spot_msgs/msg/detail/battery_state__functions.h"

bool
spot_msgs__msg__BatteryStateArray__init(spot_msgs__msg__BatteryStateArray * msg)
{
  if (!msg) {
    return false;
  }
  // battery_states
  if (!spot_msgs__msg__BatteryState__Sequence__init(&msg->battery_states, 0)) {
    spot_msgs__msg__BatteryStateArray__fini(msg);
    return false;
  }
  return true;
}

void
spot_msgs__msg__BatteryStateArray__fini(spot_msgs__msg__BatteryStateArray * msg)
{
  if (!msg) {
    return;
  }
  // battery_states
  spot_msgs__msg__BatteryState__Sequence__fini(&msg->battery_states);
}

bool
spot_msgs__msg__BatteryStateArray__are_equal(const spot_msgs__msg__BatteryStateArray * lhs, const spot_msgs__msg__BatteryStateArray * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // battery_states
  if (!spot_msgs__msg__BatteryState__Sequence__are_equal(
      &(lhs->battery_states), &(rhs->battery_states)))
  {
    return false;
  }
  return true;
}

bool
spot_msgs__msg__BatteryStateArray__copy(
  const spot_msgs__msg__BatteryStateArray * input,
  spot_msgs__msg__BatteryStateArray * output)
{
  if (!input || !output) {
    return false;
  }
  // battery_states
  if (!spot_msgs__msg__BatteryState__Sequence__copy(
      &(input->battery_states), &(output->battery_states)))
  {
    return false;
  }
  return true;
}

spot_msgs__msg__BatteryStateArray *
spot_msgs__msg__BatteryStateArray__create()
{
  spot_msgs__msg__BatteryStateArray * msg = (spot_msgs__msg__BatteryStateArray *)malloc(sizeof(spot_msgs__msg__BatteryStateArray));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(spot_msgs__msg__BatteryStateArray));
  bool success = spot_msgs__msg__BatteryStateArray__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
spot_msgs__msg__BatteryStateArray__destroy(spot_msgs__msg__BatteryStateArray * msg)
{
  if (msg) {
    spot_msgs__msg__BatteryStateArray__fini(msg);
  }
  free(msg);
}


bool
spot_msgs__msg__BatteryStateArray__Sequence__init(spot_msgs__msg__BatteryStateArray__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  spot_msgs__msg__BatteryStateArray * data = NULL;
  if (size) {
    data = (spot_msgs__msg__BatteryStateArray *)calloc(size, sizeof(spot_msgs__msg__BatteryStateArray));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = spot_msgs__msg__BatteryStateArray__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        spot_msgs__msg__BatteryStateArray__fini(&data[i - 1]);
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
spot_msgs__msg__BatteryStateArray__Sequence__fini(spot_msgs__msg__BatteryStateArray__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      spot_msgs__msg__BatteryStateArray__fini(&array->data[i]);
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

spot_msgs__msg__BatteryStateArray__Sequence *
spot_msgs__msg__BatteryStateArray__Sequence__create(size_t size)
{
  spot_msgs__msg__BatteryStateArray__Sequence * array = (spot_msgs__msg__BatteryStateArray__Sequence *)malloc(sizeof(spot_msgs__msg__BatteryStateArray__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = spot_msgs__msg__BatteryStateArray__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
spot_msgs__msg__BatteryStateArray__Sequence__destroy(spot_msgs__msg__BatteryStateArray__Sequence * array)
{
  if (array) {
    spot_msgs__msg__BatteryStateArray__Sequence__fini(array);
  }
  free(array);
}

bool
spot_msgs__msg__BatteryStateArray__Sequence__are_equal(const spot_msgs__msg__BatteryStateArray__Sequence * lhs, const spot_msgs__msg__BatteryStateArray__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!spot_msgs__msg__BatteryStateArray__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
spot_msgs__msg__BatteryStateArray__Sequence__copy(
  const spot_msgs__msg__BatteryStateArray__Sequence * input,
  spot_msgs__msg__BatteryStateArray__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(spot_msgs__msg__BatteryStateArray);
    spot_msgs__msg__BatteryStateArray * data =
      (spot_msgs__msg__BatteryStateArray *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!spot_msgs__msg__BatteryStateArray__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          spot_msgs__msg__BatteryStateArray__fini(&data[i]);
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
    if (!spot_msgs__msg__BatteryStateArray__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}

// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from spot_msgs:msg/EStopStateArray.idl
// generated code does not contain a copyright notice
#include "spot_msgs/msg/detail/e_stop_state_array__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `estop_states`
#include "spot_msgs/msg/detail/e_stop_state__functions.h"

bool
spot_msgs__msg__EStopStateArray__init(spot_msgs__msg__EStopStateArray * msg)
{
  if (!msg) {
    return false;
  }
  // estop_states
  if (!spot_msgs__msg__EStopState__Sequence__init(&msg->estop_states, 0)) {
    spot_msgs__msg__EStopStateArray__fini(msg);
    return false;
  }
  return true;
}

void
spot_msgs__msg__EStopStateArray__fini(spot_msgs__msg__EStopStateArray * msg)
{
  if (!msg) {
    return;
  }
  // estop_states
  spot_msgs__msg__EStopState__Sequence__fini(&msg->estop_states);
}

bool
spot_msgs__msg__EStopStateArray__are_equal(const spot_msgs__msg__EStopStateArray * lhs, const spot_msgs__msg__EStopStateArray * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // estop_states
  if (!spot_msgs__msg__EStopState__Sequence__are_equal(
      &(lhs->estop_states), &(rhs->estop_states)))
  {
    return false;
  }
  return true;
}

bool
spot_msgs__msg__EStopStateArray__copy(
  const spot_msgs__msg__EStopStateArray * input,
  spot_msgs__msg__EStopStateArray * output)
{
  if (!input || !output) {
    return false;
  }
  // estop_states
  if (!spot_msgs__msg__EStopState__Sequence__copy(
      &(input->estop_states), &(output->estop_states)))
  {
    return false;
  }
  return true;
}

spot_msgs__msg__EStopStateArray *
spot_msgs__msg__EStopStateArray__create()
{
  spot_msgs__msg__EStopStateArray * msg = (spot_msgs__msg__EStopStateArray *)malloc(sizeof(spot_msgs__msg__EStopStateArray));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(spot_msgs__msg__EStopStateArray));
  bool success = spot_msgs__msg__EStopStateArray__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
spot_msgs__msg__EStopStateArray__destroy(spot_msgs__msg__EStopStateArray * msg)
{
  if (msg) {
    spot_msgs__msg__EStopStateArray__fini(msg);
  }
  free(msg);
}


bool
spot_msgs__msg__EStopStateArray__Sequence__init(spot_msgs__msg__EStopStateArray__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  spot_msgs__msg__EStopStateArray * data = NULL;
  if (size) {
    data = (spot_msgs__msg__EStopStateArray *)calloc(size, sizeof(spot_msgs__msg__EStopStateArray));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = spot_msgs__msg__EStopStateArray__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        spot_msgs__msg__EStopStateArray__fini(&data[i - 1]);
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
spot_msgs__msg__EStopStateArray__Sequence__fini(spot_msgs__msg__EStopStateArray__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      spot_msgs__msg__EStopStateArray__fini(&array->data[i]);
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

spot_msgs__msg__EStopStateArray__Sequence *
spot_msgs__msg__EStopStateArray__Sequence__create(size_t size)
{
  spot_msgs__msg__EStopStateArray__Sequence * array = (spot_msgs__msg__EStopStateArray__Sequence *)malloc(sizeof(spot_msgs__msg__EStopStateArray__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = spot_msgs__msg__EStopStateArray__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
spot_msgs__msg__EStopStateArray__Sequence__destroy(spot_msgs__msg__EStopStateArray__Sequence * array)
{
  if (array) {
    spot_msgs__msg__EStopStateArray__Sequence__fini(array);
  }
  free(array);
}

bool
spot_msgs__msg__EStopStateArray__Sequence__are_equal(const spot_msgs__msg__EStopStateArray__Sequence * lhs, const spot_msgs__msg__EStopStateArray__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!spot_msgs__msg__EStopStateArray__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
spot_msgs__msg__EStopStateArray__Sequence__copy(
  const spot_msgs__msg__EStopStateArray__Sequence * input,
  spot_msgs__msg__EStopStateArray__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(spot_msgs__msg__EStopStateArray);
    spot_msgs__msg__EStopStateArray * data =
      (spot_msgs__msg__EStopStateArray *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!spot_msgs__msg__EStopStateArray__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          spot_msgs__msg__EStopStateArray__fini(&data[i]);
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
    if (!spot_msgs__msg__EStopStateArray__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}

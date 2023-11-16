// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from spot_msgs:msg/FootState.idl
// generated code does not contain a copyright notice
#include "spot_msgs/msg/detail/foot_state__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `foot_position_rt_body`
#include "geometry_msgs/msg/detail/point__functions.h"

bool
spot_msgs__msg__FootState__init(spot_msgs__msg__FootState * msg)
{
  if (!msg) {
    return false;
  }
  // foot_position_rt_body
  if (!geometry_msgs__msg__Point__init(&msg->foot_position_rt_body)) {
    spot_msgs__msg__FootState__fini(msg);
    return false;
  }
  // contact
  return true;
}

void
spot_msgs__msg__FootState__fini(spot_msgs__msg__FootState * msg)
{
  if (!msg) {
    return;
  }
  // foot_position_rt_body
  geometry_msgs__msg__Point__fini(&msg->foot_position_rt_body);
  // contact
}

bool
spot_msgs__msg__FootState__are_equal(const spot_msgs__msg__FootState * lhs, const spot_msgs__msg__FootState * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // foot_position_rt_body
  if (!geometry_msgs__msg__Point__are_equal(
      &(lhs->foot_position_rt_body), &(rhs->foot_position_rt_body)))
  {
    return false;
  }
  // contact
  if (lhs->contact != rhs->contact) {
    return false;
  }
  return true;
}

bool
spot_msgs__msg__FootState__copy(
  const spot_msgs__msg__FootState * input,
  spot_msgs__msg__FootState * output)
{
  if (!input || !output) {
    return false;
  }
  // foot_position_rt_body
  if (!geometry_msgs__msg__Point__copy(
      &(input->foot_position_rt_body), &(output->foot_position_rt_body)))
  {
    return false;
  }
  // contact
  output->contact = input->contact;
  return true;
}

spot_msgs__msg__FootState *
spot_msgs__msg__FootState__create()
{
  spot_msgs__msg__FootState * msg = (spot_msgs__msg__FootState *)malloc(sizeof(spot_msgs__msg__FootState));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(spot_msgs__msg__FootState));
  bool success = spot_msgs__msg__FootState__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
spot_msgs__msg__FootState__destroy(spot_msgs__msg__FootState * msg)
{
  if (msg) {
    spot_msgs__msg__FootState__fini(msg);
  }
  free(msg);
}


bool
spot_msgs__msg__FootState__Sequence__init(spot_msgs__msg__FootState__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  spot_msgs__msg__FootState * data = NULL;
  if (size) {
    data = (spot_msgs__msg__FootState *)calloc(size, sizeof(spot_msgs__msg__FootState));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = spot_msgs__msg__FootState__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        spot_msgs__msg__FootState__fini(&data[i - 1]);
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
spot_msgs__msg__FootState__Sequence__fini(spot_msgs__msg__FootState__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      spot_msgs__msg__FootState__fini(&array->data[i]);
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

spot_msgs__msg__FootState__Sequence *
spot_msgs__msg__FootState__Sequence__create(size_t size)
{
  spot_msgs__msg__FootState__Sequence * array = (spot_msgs__msg__FootState__Sequence *)malloc(sizeof(spot_msgs__msg__FootState__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = spot_msgs__msg__FootState__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
spot_msgs__msg__FootState__Sequence__destroy(spot_msgs__msg__FootState__Sequence * array)
{
  if (array) {
    spot_msgs__msg__FootState__Sequence__fini(array);
  }
  free(array);
}

bool
spot_msgs__msg__FootState__Sequence__are_equal(const spot_msgs__msg__FootState__Sequence * lhs, const spot_msgs__msg__FootState__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!spot_msgs__msg__FootState__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
spot_msgs__msg__FootState__Sequence__copy(
  const spot_msgs__msg__FootState__Sequence * input,
  spot_msgs__msg__FootState__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(spot_msgs__msg__FootState);
    spot_msgs__msg__FootState * data =
      (spot_msgs__msg__FootState *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!spot_msgs__msg__FootState__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          spot_msgs__msg__FootState__fini(&data[i]);
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
    if (!spot_msgs__msg__FootState__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}

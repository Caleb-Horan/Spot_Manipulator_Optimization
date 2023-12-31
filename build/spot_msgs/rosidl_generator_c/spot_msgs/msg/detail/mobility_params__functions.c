// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from spot_msgs:msg/MobilityParams.idl
// generated code does not contain a copyright notice
#include "spot_msgs/msg/detail/mobility_params__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `body_control`
#include "geometry_msgs/msg/detail/pose__functions.h"

bool
spot_msgs__msg__MobilityParams__init(spot_msgs__msg__MobilityParams * msg)
{
  if (!msg) {
    return false;
  }
  // body_control
  if (!geometry_msgs__msg__Pose__init(&msg->body_control)) {
    spot_msgs__msg__MobilityParams__fini(msg);
    return false;
  }
  // locomotion_hint
  // stair_hint
  return true;
}

void
spot_msgs__msg__MobilityParams__fini(spot_msgs__msg__MobilityParams * msg)
{
  if (!msg) {
    return;
  }
  // body_control
  geometry_msgs__msg__Pose__fini(&msg->body_control);
  // locomotion_hint
  // stair_hint
}

bool
spot_msgs__msg__MobilityParams__are_equal(const spot_msgs__msg__MobilityParams * lhs, const spot_msgs__msg__MobilityParams * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // body_control
  if (!geometry_msgs__msg__Pose__are_equal(
      &(lhs->body_control), &(rhs->body_control)))
  {
    return false;
  }
  // locomotion_hint
  if (lhs->locomotion_hint != rhs->locomotion_hint) {
    return false;
  }
  // stair_hint
  if (lhs->stair_hint != rhs->stair_hint) {
    return false;
  }
  return true;
}

bool
spot_msgs__msg__MobilityParams__copy(
  const spot_msgs__msg__MobilityParams * input,
  spot_msgs__msg__MobilityParams * output)
{
  if (!input || !output) {
    return false;
  }
  // body_control
  if (!geometry_msgs__msg__Pose__copy(
      &(input->body_control), &(output->body_control)))
  {
    return false;
  }
  // locomotion_hint
  output->locomotion_hint = input->locomotion_hint;
  // stair_hint
  output->stair_hint = input->stair_hint;
  return true;
}

spot_msgs__msg__MobilityParams *
spot_msgs__msg__MobilityParams__create()
{
  spot_msgs__msg__MobilityParams * msg = (spot_msgs__msg__MobilityParams *)malloc(sizeof(spot_msgs__msg__MobilityParams));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(spot_msgs__msg__MobilityParams));
  bool success = spot_msgs__msg__MobilityParams__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
spot_msgs__msg__MobilityParams__destroy(spot_msgs__msg__MobilityParams * msg)
{
  if (msg) {
    spot_msgs__msg__MobilityParams__fini(msg);
  }
  free(msg);
}


bool
spot_msgs__msg__MobilityParams__Sequence__init(spot_msgs__msg__MobilityParams__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  spot_msgs__msg__MobilityParams * data = NULL;
  if (size) {
    data = (spot_msgs__msg__MobilityParams *)calloc(size, sizeof(spot_msgs__msg__MobilityParams));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = spot_msgs__msg__MobilityParams__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        spot_msgs__msg__MobilityParams__fini(&data[i - 1]);
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
spot_msgs__msg__MobilityParams__Sequence__fini(spot_msgs__msg__MobilityParams__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      spot_msgs__msg__MobilityParams__fini(&array->data[i]);
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

spot_msgs__msg__MobilityParams__Sequence *
spot_msgs__msg__MobilityParams__Sequence__create(size_t size)
{
  spot_msgs__msg__MobilityParams__Sequence * array = (spot_msgs__msg__MobilityParams__Sequence *)malloc(sizeof(spot_msgs__msg__MobilityParams__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = spot_msgs__msg__MobilityParams__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
spot_msgs__msg__MobilityParams__Sequence__destroy(spot_msgs__msg__MobilityParams__Sequence * array)
{
  if (array) {
    spot_msgs__msg__MobilityParams__Sequence__fini(array);
  }
  free(array);
}

bool
spot_msgs__msg__MobilityParams__Sequence__are_equal(const spot_msgs__msg__MobilityParams__Sequence * lhs, const spot_msgs__msg__MobilityParams__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!spot_msgs__msg__MobilityParams__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
spot_msgs__msg__MobilityParams__Sequence__copy(
  const spot_msgs__msg__MobilityParams__Sequence * input,
  spot_msgs__msg__MobilityParams__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(spot_msgs__msg__MobilityParams);
    spot_msgs__msg__MobilityParams * data =
      (spot_msgs__msg__MobilityParams *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!spot_msgs__msg__MobilityParams__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          spot_msgs__msg__MobilityParams__fini(&data[i]);
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
    if (!spot_msgs__msg__MobilityParams__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}

// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from spot_msgs:msg/Lease.idl
// generated code does not contain a copyright notice
#include "spot_msgs/msg/detail/lease__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `resource`
// Member `epoch`
#include "rosidl_runtime_c/string_functions.h"
// Member `sequence`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
spot_msgs__msg__Lease__init(spot_msgs__msg__Lease * msg)
{
  if (!msg) {
    return false;
  }
  // resource
  if (!rosidl_runtime_c__String__init(&msg->resource)) {
    spot_msgs__msg__Lease__fini(msg);
    return false;
  }
  // epoch
  if (!rosidl_runtime_c__String__init(&msg->epoch)) {
    spot_msgs__msg__Lease__fini(msg);
    return false;
  }
  // sequence
  if (!rosidl_runtime_c__uint32__Sequence__init(&msg->sequence, 0)) {
    spot_msgs__msg__Lease__fini(msg);
    return false;
  }
  return true;
}

void
spot_msgs__msg__Lease__fini(spot_msgs__msg__Lease * msg)
{
  if (!msg) {
    return;
  }
  // resource
  rosidl_runtime_c__String__fini(&msg->resource);
  // epoch
  rosidl_runtime_c__String__fini(&msg->epoch);
  // sequence
  rosidl_runtime_c__uint32__Sequence__fini(&msg->sequence);
}

bool
spot_msgs__msg__Lease__are_equal(const spot_msgs__msg__Lease * lhs, const spot_msgs__msg__Lease * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // resource
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->resource), &(rhs->resource)))
  {
    return false;
  }
  // epoch
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->epoch), &(rhs->epoch)))
  {
    return false;
  }
  // sequence
  if (!rosidl_runtime_c__uint32__Sequence__are_equal(
      &(lhs->sequence), &(rhs->sequence)))
  {
    return false;
  }
  return true;
}

bool
spot_msgs__msg__Lease__copy(
  const spot_msgs__msg__Lease * input,
  spot_msgs__msg__Lease * output)
{
  if (!input || !output) {
    return false;
  }
  // resource
  if (!rosidl_runtime_c__String__copy(
      &(input->resource), &(output->resource)))
  {
    return false;
  }
  // epoch
  if (!rosidl_runtime_c__String__copy(
      &(input->epoch), &(output->epoch)))
  {
    return false;
  }
  // sequence
  if (!rosidl_runtime_c__uint32__Sequence__copy(
      &(input->sequence), &(output->sequence)))
  {
    return false;
  }
  return true;
}

spot_msgs__msg__Lease *
spot_msgs__msg__Lease__create()
{
  spot_msgs__msg__Lease * msg = (spot_msgs__msg__Lease *)malloc(sizeof(spot_msgs__msg__Lease));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(spot_msgs__msg__Lease));
  bool success = spot_msgs__msg__Lease__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
spot_msgs__msg__Lease__destroy(spot_msgs__msg__Lease * msg)
{
  if (msg) {
    spot_msgs__msg__Lease__fini(msg);
  }
  free(msg);
}


bool
spot_msgs__msg__Lease__Sequence__init(spot_msgs__msg__Lease__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  spot_msgs__msg__Lease * data = NULL;
  if (size) {
    data = (spot_msgs__msg__Lease *)calloc(size, sizeof(spot_msgs__msg__Lease));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = spot_msgs__msg__Lease__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        spot_msgs__msg__Lease__fini(&data[i - 1]);
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
spot_msgs__msg__Lease__Sequence__fini(spot_msgs__msg__Lease__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      spot_msgs__msg__Lease__fini(&array->data[i]);
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

spot_msgs__msg__Lease__Sequence *
spot_msgs__msg__Lease__Sequence__create(size_t size)
{
  spot_msgs__msg__Lease__Sequence * array = (spot_msgs__msg__Lease__Sequence *)malloc(sizeof(spot_msgs__msg__Lease__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = spot_msgs__msg__Lease__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
spot_msgs__msg__Lease__Sequence__destroy(spot_msgs__msg__Lease__Sequence * array)
{
  if (array) {
    spot_msgs__msg__Lease__Sequence__fini(array);
  }
  free(array);
}

bool
spot_msgs__msg__Lease__Sequence__are_equal(const spot_msgs__msg__Lease__Sequence * lhs, const spot_msgs__msg__Lease__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!spot_msgs__msg__Lease__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
spot_msgs__msg__Lease__Sequence__copy(
  const spot_msgs__msg__Lease__Sequence * input,
  spot_msgs__msg__Lease__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(spot_msgs__msg__Lease);
    spot_msgs__msg__Lease * data =
      (spot_msgs__msg__Lease *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!spot_msgs__msg__Lease__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          spot_msgs__msg__Lease__fini(&data[i]);
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
    if (!spot_msgs__msg__Lease__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}

// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from spot_msgs:msg/LeaseArray.idl
// generated code does not contain a copyright notice
#include "spot_msgs/msg/detail/lease_array__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `resources`
#include "spot_msgs/msg/detail/lease_resource__functions.h"

bool
spot_msgs__msg__LeaseArray__init(spot_msgs__msg__LeaseArray * msg)
{
  if (!msg) {
    return false;
  }
  // resources
  if (!spot_msgs__msg__LeaseResource__Sequence__init(&msg->resources, 0)) {
    spot_msgs__msg__LeaseArray__fini(msg);
    return false;
  }
  return true;
}

void
spot_msgs__msg__LeaseArray__fini(spot_msgs__msg__LeaseArray * msg)
{
  if (!msg) {
    return;
  }
  // resources
  spot_msgs__msg__LeaseResource__Sequence__fini(&msg->resources);
}

bool
spot_msgs__msg__LeaseArray__are_equal(const spot_msgs__msg__LeaseArray * lhs, const spot_msgs__msg__LeaseArray * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // resources
  if (!spot_msgs__msg__LeaseResource__Sequence__are_equal(
      &(lhs->resources), &(rhs->resources)))
  {
    return false;
  }
  return true;
}

bool
spot_msgs__msg__LeaseArray__copy(
  const spot_msgs__msg__LeaseArray * input,
  spot_msgs__msg__LeaseArray * output)
{
  if (!input || !output) {
    return false;
  }
  // resources
  if (!spot_msgs__msg__LeaseResource__Sequence__copy(
      &(input->resources), &(output->resources)))
  {
    return false;
  }
  return true;
}

spot_msgs__msg__LeaseArray *
spot_msgs__msg__LeaseArray__create()
{
  spot_msgs__msg__LeaseArray * msg = (spot_msgs__msg__LeaseArray *)malloc(sizeof(spot_msgs__msg__LeaseArray));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(spot_msgs__msg__LeaseArray));
  bool success = spot_msgs__msg__LeaseArray__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
spot_msgs__msg__LeaseArray__destroy(spot_msgs__msg__LeaseArray * msg)
{
  if (msg) {
    spot_msgs__msg__LeaseArray__fini(msg);
  }
  free(msg);
}


bool
spot_msgs__msg__LeaseArray__Sequence__init(spot_msgs__msg__LeaseArray__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  spot_msgs__msg__LeaseArray * data = NULL;
  if (size) {
    data = (spot_msgs__msg__LeaseArray *)calloc(size, sizeof(spot_msgs__msg__LeaseArray));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = spot_msgs__msg__LeaseArray__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        spot_msgs__msg__LeaseArray__fini(&data[i - 1]);
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
spot_msgs__msg__LeaseArray__Sequence__fini(spot_msgs__msg__LeaseArray__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      spot_msgs__msg__LeaseArray__fini(&array->data[i]);
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

spot_msgs__msg__LeaseArray__Sequence *
spot_msgs__msg__LeaseArray__Sequence__create(size_t size)
{
  spot_msgs__msg__LeaseArray__Sequence * array = (spot_msgs__msg__LeaseArray__Sequence *)malloc(sizeof(spot_msgs__msg__LeaseArray__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = spot_msgs__msg__LeaseArray__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
spot_msgs__msg__LeaseArray__Sequence__destroy(spot_msgs__msg__LeaseArray__Sequence * array)
{
  if (array) {
    spot_msgs__msg__LeaseArray__Sequence__fini(array);
  }
  free(array);
}

bool
spot_msgs__msg__LeaseArray__Sequence__are_equal(const spot_msgs__msg__LeaseArray__Sequence * lhs, const spot_msgs__msg__LeaseArray__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!spot_msgs__msg__LeaseArray__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
spot_msgs__msg__LeaseArray__Sequence__copy(
  const spot_msgs__msg__LeaseArray__Sequence * input,
  spot_msgs__msg__LeaseArray__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(spot_msgs__msg__LeaseArray);
    spot_msgs__msg__LeaseArray * data =
      (spot_msgs__msg__LeaseArray *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!spot_msgs__msg__LeaseArray__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          spot_msgs__msg__LeaseArray__fini(&data[i]);
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
    if (!spot_msgs__msg__LeaseArray__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}

// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from spot_msgs:msg/DockState.idl
// generated code does not contain a copyright notice
#include "spot_msgs/msg/detail/dock_state__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


bool
spot_msgs__msg__DockState__init(spot_msgs__msg__DockState * msg)
{
  if (!msg) {
    return false;
  }
  // status
  // dock_type
  // dock_id
  // power_status
  return true;
}

void
spot_msgs__msg__DockState__fini(spot_msgs__msg__DockState * msg)
{
  if (!msg) {
    return;
  }
  // status
  // dock_type
  // dock_id
  // power_status
}

bool
spot_msgs__msg__DockState__are_equal(const spot_msgs__msg__DockState * lhs, const spot_msgs__msg__DockState * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // status
  if (lhs->status != rhs->status) {
    return false;
  }
  // dock_type
  if (lhs->dock_type != rhs->dock_type) {
    return false;
  }
  // dock_id
  if (lhs->dock_id != rhs->dock_id) {
    return false;
  }
  // power_status
  if (lhs->power_status != rhs->power_status) {
    return false;
  }
  return true;
}

bool
spot_msgs__msg__DockState__copy(
  const spot_msgs__msg__DockState * input,
  spot_msgs__msg__DockState * output)
{
  if (!input || !output) {
    return false;
  }
  // status
  output->status = input->status;
  // dock_type
  output->dock_type = input->dock_type;
  // dock_id
  output->dock_id = input->dock_id;
  // power_status
  output->power_status = input->power_status;
  return true;
}

spot_msgs__msg__DockState *
spot_msgs__msg__DockState__create()
{
  spot_msgs__msg__DockState * msg = (spot_msgs__msg__DockState *)malloc(sizeof(spot_msgs__msg__DockState));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(spot_msgs__msg__DockState));
  bool success = spot_msgs__msg__DockState__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
spot_msgs__msg__DockState__destroy(spot_msgs__msg__DockState * msg)
{
  if (msg) {
    spot_msgs__msg__DockState__fini(msg);
  }
  free(msg);
}


bool
spot_msgs__msg__DockState__Sequence__init(spot_msgs__msg__DockState__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  spot_msgs__msg__DockState * data = NULL;
  if (size) {
    data = (spot_msgs__msg__DockState *)calloc(size, sizeof(spot_msgs__msg__DockState));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = spot_msgs__msg__DockState__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        spot_msgs__msg__DockState__fini(&data[i - 1]);
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
spot_msgs__msg__DockState__Sequence__fini(spot_msgs__msg__DockState__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      spot_msgs__msg__DockState__fini(&array->data[i]);
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

spot_msgs__msg__DockState__Sequence *
spot_msgs__msg__DockState__Sequence__create(size_t size)
{
  spot_msgs__msg__DockState__Sequence * array = (spot_msgs__msg__DockState__Sequence *)malloc(sizeof(spot_msgs__msg__DockState__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = spot_msgs__msg__DockState__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
spot_msgs__msg__DockState__Sequence__destroy(spot_msgs__msg__DockState__Sequence * array)
{
  if (array) {
    spot_msgs__msg__DockState__Sequence__fini(array);
  }
  free(array);
}

bool
spot_msgs__msg__DockState__Sequence__are_equal(const spot_msgs__msg__DockState__Sequence * lhs, const spot_msgs__msg__DockState__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!spot_msgs__msg__DockState__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
spot_msgs__msg__DockState__Sequence__copy(
  const spot_msgs__msg__DockState__Sequence * input,
  spot_msgs__msg__DockState__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(spot_msgs__msg__DockState);
    spot_msgs__msg__DockState * data =
      (spot_msgs__msg__DockState *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!spot_msgs__msg__DockState__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          spot_msgs__msg__DockState__fini(&data[i]);
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
    if (!spot_msgs__msg__DockState__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}

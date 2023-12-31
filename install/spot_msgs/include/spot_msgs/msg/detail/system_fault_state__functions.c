// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from spot_msgs:msg/SystemFaultState.idl
// generated code does not contain a copyright notice
#include "spot_msgs/msg/detail/system_fault_state__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `faults`
// Member `historical_faults`
#include "spot_msgs/msg/detail/system_fault__functions.h"

bool
spot_msgs__msg__SystemFaultState__init(spot_msgs__msg__SystemFaultState * msg)
{
  if (!msg) {
    return false;
  }
  // faults
  if (!spot_msgs__msg__SystemFault__Sequence__init(&msg->faults, 0)) {
    spot_msgs__msg__SystemFaultState__fini(msg);
    return false;
  }
  // historical_faults
  if (!spot_msgs__msg__SystemFault__Sequence__init(&msg->historical_faults, 0)) {
    spot_msgs__msg__SystemFaultState__fini(msg);
    return false;
  }
  return true;
}

void
spot_msgs__msg__SystemFaultState__fini(spot_msgs__msg__SystemFaultState * msg)
{
  if (!msg) {
    return;
  }
  // faults
  spot_msgs__msg__SystemFault__Sequence__fini(&msg->faults);
  // historical_faults
  spot_msgs__msg__SystemFault__Sequence__fini(&msg->historical_faults);
}

bool
spot_msgs__msg__SystemFaultState__are_equal(const spot_msgs__msg__SystemFaultState * lhs, const spot_msgs__msg__SystemFaultState * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // faults
  if (!spot_msgs__msg__SystemFault__Sequence__are_equal(
      &(lhs->faults), &(rhs->faults)))
  {
    return false;
  }
  // historical_faults
  if (!spot_msgs__msg__SystemFault__Sequence__are_equal(
      &(lhs->historical_faults), &(rhs->historical_faults)))
  {
    return false;
  }
  return true;
}

bool
spot_msgs__msg__SystemFaultState__copy(
  const spot_msgs__msg__SystemFaultState * input,
  spot_msgs__msg__SystemFaultState * output)
{
  if (!input || !output) {
    return false;
  }
  // faults
  if (!spot_msgs__msg__SystemFault__Sequence__copy(
      &(input->faults), &(output->faults)))
  {
    return false;
  }
  // historical_faults
  if (!spot_msgs__msg__SystemFault__Sequence__copy(
      &(input->historical_faults), &(output->historical_faults)))
  {
    return false;
  }
  return true;
}

spot_msgs__msg__SystemFaultState *
spot_msgs__msg__SystemFaultState__create()
{
  spot_msgs__msg__SystemFaultState * msg = (spot_msgs__msg__SystemFaultState *)malloc(sizeof(spot_msgs__msg__SystemFaultState));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(spot_msgs__msg__SystemFaultState));
  bool success = spot_msgs__msg__SystemFaultState__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
spot_msgs__msg__SystemFaultState__destroy(spot_msgs__msg__SystemFaultState * msg)
{
  if (msg) {
    spot_msgs__msg__SystemFaultState__fini(msg);
  }
  free(msg);
}


bool
spot_msgs__msg__SystemFaultState__Sequence__init(spot_msgs__msg__SystemFaultState__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  spot_msgs__msg__SystemFaultState * data = NULL;
  if (size) {
    data = (spot_msgs__msg__SystemFaultState *)calloc(size, sizeof(spot_msgs__msg__SystemFaultState));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = spot_msgs__msg__SystemFaultState__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        spot_msgs__msg__SystemFaultState__fini(&data[i - 1]);
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
spot_msgs__msg__SystemFaultState__Sequence__fini(spot_msgs__msg__SystemFaultState__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      spot_msgs__msg__SystemFaultState__fini(&array->data[i]);
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

spot_msgs__msg__SystemFaultState__Sequence *
spot_msgs__msg__SystemFaultState__Sequence__create(size_t size)
{
  spot_msgs__msg__SystemFaultState__Sequence * array = (spot_msgs__msg__SystemFaultState__Sequence *)malloc(sizeof(spot_msgs__msg__SystemFaultState__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = spot_msgs__msg__SystemFaultState__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
spot_msgs__msg__SystemFaultState__Sequence__destroy(spot_msgs__msg__SystemFaultState__Sequence * array)
{
  if (array) {
    spot_msgs__msg__SystemFaultState__Sequence__fini(array);
  }
  free(array);
}

bool
spot_msgs__msg__SystemFaultState__Sequence__are_equal(const spot_msgs__msg__SystemFaultState__Sequence * lhs, const spot_msgs__msg__SystemFaultState__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!spot_msgs__msg__SystemFaultState__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
spot_msgs__msg__SystemFaultState__Sequence__copy(
  const spot_msgs__msg__SystemFaultState__Sequence * input,
  spot_msgs__msg__SystemFaultState__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(spot_msgs__msg__SystemFaultState);
    spot_msgs__msg__SystemFaultState * data =
      (spot_msgs__msg__SystemFaultState *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!spot_msgs__msg__SystemFaultState__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          spot_msgs__msg__SystemFaultState__fini(&data[i]);
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
    if (!spot_msgs__msg__SystemFaultState__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}

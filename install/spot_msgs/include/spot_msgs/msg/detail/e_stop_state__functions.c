// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from spot_msgs:msg/EStopState.idl
// generated code does not contain a copyright notice
#include "spot_msgs/msg/detail/e_stop_state__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `name`
// Member `state_description`
#include "rosidl_runtime_c/string_functions.h"

bool
spot_msgs__msg__EStopState__init(spot_msgs__msg__EStopState * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    spot_msgs__msg__EStopState__fini(msg);
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__init(&msg->name)) {
    spot_msgs__msg__EStopState__fini(msg);
    return false;
  }
  // type
  // state
  // state_description
  if (!rosidl_runtime_c__String__init(&msg->state_description)) {
    spot_msgs__msg__EStopState__fini(msg);
    return false;
  }
  return true;
}

void
spot_msgs__msg__EStopState__fini(spot_msgs__msg__EStopState * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // name
  rosidl_runtime_c__String__fini(&msg->name);
  // type
  // state
  // state_description
  rosidl_runtime_c__String__fini(&msg->state_description);
}

bool
spot_msgs__msg__EStopState__are_equal(const spot_msgs__msg__EStopState * lhs, const spot_msgs__msg__EStopState * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__are_equal(
      &(lhs->header), &(rhs->header)))
  {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->name), &(rhs->name)))
  {
    return false;
  }
  // type
  if (lhs->type != rhs->type) {
    return false;
  }
  // state
  if (lhs->state != rhs->state) {
    return false;
  }
  // state_description
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->state_description), &(rhs->state_description)))
  {
    return false;
  }
  return true;
}

bool
spot_msgs__msg__EStopState__copy(
  const spot_msgs__msg__EStopState * input,
  spot_msgs__msg__EStopState * output)
{
  if (!input || !output) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__copy(
      &(input->header), &(output->header)))
  {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__copy(
      &(input->name), &(output->name)))
  {
    return false;
  }
  // type
  output->type = input->type;
  // state
  output->state = input->state;
  // state_description
  if (!rosidl_runtime_c__String__copy(
      &(input->state_description), &(output->state_description)))
  {
    return false;
  }
  return true;
}

spot_msgs__msg__EStopState *
spot_msgs__msg__EStopState__create()
{
  spot_msgs__msg__EStopState * msg = (spot_msgs__msg__EStopState *)malloc(sizeof(spot_msgs__msg__EStopState));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(spot_msgs__msg__EStopState));
  bool success = spot_msgs__msg__EStopState__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
spot_msgs__msg__EStopState__destroy(spot_msgs__msg__EStopState * msg)
{
  if (msg) {
    spot_msgs__msg__EStopState__fini(msg);
  }
  free(msg);
}


bool
spot_msgs__msg__EStopState__Sequence__init(spot_msgs__msg__EStopState__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  spot_msgs__msg__EStopState * data = NULL;
  if (size) {
    data = (spot_msgs__msg__EStopState *)calloc(size, sizeof(spot_msgs__msg__EStopState));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = spot_msgs__msg__EStopState__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        spot_msgs__msg__EStopState__fini(&data[i - 1]);
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
spot_msgs__msg__EStopState__Sequence__fini(spot_msgs__msg__EStopState__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      spot_msgs__msg__EStopState__fini(&array->data[i]);
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

spot_msgs__msg__EStopState__Sequence *
spot_msgs__msg__EStopState__Sequence__create(size_t size)
{
  spot_msgs__msg__EStopState__Sequence * array = (spot_msgs__msg__EStopState__Sequence *)malloc(sizeof(spot_msgs__msg__EStopState__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = spot_msgs__msg__EStopState__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
spot_msgs__msg__EStopState__Sequence__destroy(spot_msgs__msg__EStopState__Sequence * array)
{
  if (array) {
    spot_msgs__msg__EStopState__Sequence__fini(array);
  }
  free(array);
}

bool
spot_msgs__msg__EStopState__Sequence__are_equal(const spot_msgs__msg__EStopState__Sequence * lhs, const spot_msgs__msg__EStopState__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!spot_msgs__msg__EStopState__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
spot_msgs__msg__EStopState__Sequence__copy(
  const spot_msgs__msg__EStopState__Sequence * input,
  spot_msgs__msg__EStopState__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(spot_msgs__msg__EStopState);
    spot_msgs__msg__EStopState * data =
      (spot_msgs__msg__EStopState *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!spot_msgs__msg__EStopState__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          spot_msgs__msg__EStopState__fini(&data[i]);
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
    if (!spot_msgs__msg__EStopState__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}

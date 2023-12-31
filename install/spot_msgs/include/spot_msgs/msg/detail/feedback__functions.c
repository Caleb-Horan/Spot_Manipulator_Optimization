// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from spot_msgs:msg/Feedback.idl
// generated code does not contain a copyright notice
#include "spot_msgs/msg/detail/feedback__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `serial_number`
// Member `species`
// Member `version`
// Member `nickname`
// Member `computer_serial_number`
#include "rosidl_runtime_c/string_functions.h"

bool
spot_msgs__msg__Feedback__init(spot_msgs__msg__Feedback * msg)
{
  if (!msg) {
    return false;
  }
  // standing
  // sitting
  // moving
  // serial_number
  if (!rosidl_runtime_c__String__init(&msg->serial_number)) {
    spot_msgs__msg__Feedback__fini(msg);
    return false;
  }
  // species
  if (!rosidl_runtime_c__String__init(&msg->species)) {
    spot_msgs__msg__Feedback__fini(msg);
    return false;
  }
  // version
  if (!rosidl_runtime_c__String__init(&msg->version)) {
    spot_msgs__msg__Feedback__fini(msg);
    return false;
  }
  // nickname
  if (!rosidl_runtime_c__String__init(&msg->nickname)) {
    spot_msgs__msg__Feedback__fini(msg);
    return false;
  }
  // computer_serial_number
  if (!rosidl_runtime_c__String__init(&msg->computer_serial_number)) {
    spot_msgs__msg__Feedback__fini(msg);
    return false;
  }
  return true;
}

void
spot_msgs__msg__Feedback__fini(spot_msgs__msg__Feedback * msg)
{
  if (!msg) {
    return;
  }
  // standing
  // sitting
  // moving
  // serial_number
  rosidl_runtime_c__String__fini(&msg->serial_number);
  // species
  rosidl_runtime_c__String__fini(&msg->species);
  // version
  rosidl_runtime_c__String__fini(&msg->version);
  // nickname
  rosidl_runtime_c__String__fini(&msg->nickname);
  // computer_serial_number
  rosidl_runtime_c__String__fini(&msg->computer_serial_number);
}

bool
spot_msgs__msg__Feedback__are_equal(const spot_msgs__msg__Feedback * lhs, const spot_msgs__msg__Feedback * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // standing
  if (lhs->standing != rhs->standing) {
    return false;
  }
  // sitting
  if (lhs->sitting != rhs->sitting) {
    return false;
  }
  // moving
  if (lhs->moving != rhs->moving) {
    return false;
  }
  // serial_number
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->serial_number), &(rhs->serial_number)))
  {
    return false;
  }
  // species
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->species), &(rhs->species)))
  {
    return false;
  }
  // version
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->version), &(rhs->version)))
  {
    return false;
  }
  // nickname
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->nickname), &(rhs->nickname)))
  {
    return false;
  }
  // computer_serial_number
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->computer_serial_number), &(rhs->computer_serial_number)))
  {
    return false;
  }
  return true;
}

bool
spot_msgs__msg__Feedback__copy(
  const spot_msgs__msg__Feedback * input,
  spot_msgs__msg__Feedback * output)
{
  if (!input || !output) {
    return false;
  }
  // standing
  output->standing = input->standing;
  // sitting
  output->sitting = input->sitting;
  // moving
  output->moving = input->moving;
  // serial_number
  if (!rosidl_runtime_c__String__copy(
      &(input->serial_number), &(output->serial_number)))
  {
    return false;
  }
  // species
  if (!rosidl_runtime_c__String__copy(
      &(input->species), &(output->species)))
  {
    return false;
  }
  // version
  if (!rosidl_runtime_c__String__copy(
      &(input->version), &(output->version)))
  {
    return false;
  }
  // nickname
  if (!rosidl_runtime_c__String__copy(
      &(input->nickname), &(output->nickname)))
  {
    return false;
  }
  // computer_serial_number
  if (!rosidl_runtime_c__String__copy(
      &(input->computer_serial_number), &(output->computer_serial_number)))
  {
    return false;
  }
  return true;
}

spot_msgs__msg__Feedback *
spot_msgs__msg__Feedback__create()
{
  spot_msgs__msg__Feedback * msg = (spot_msgs__msg__Feedback *)malloc(sizeof(spot_msgs__msg__Feedback));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(spot_msgs__msg__Feedback));
  bool success = spot_msgs__msg__Feedback__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
spot_msgs__msg__Feedback__destroy(spot_msgs__msg__Feedback * msg)
{
  if (msg) {
    spot_msgs__msg__Feedback__fini(msg);
  }
  free(msg);
}


bool
spot_msgs__msg__Feedback__Sequence__init(spot_msgs__msg__Feedback__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  spot_msgs__msg__Feedback * data = NULL;
  if (size) {
    data = (spot_msgs__msg__Feedback *)calloc(size, sizeof(spot_msgs__msg__Feedback));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = spot_msgs__msg__Feedback__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        spot_msgs__msg__Feedback__fini(&data[i - 1]);
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
spot_msgs__msg__Feedback__Sequence__fini(spot_msgs__msg__Feedback__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      spot_msgs__msg__Feedback__fini(&array->data[i]);
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

spot_msgs__msg__Feedback__Sequence *
spot_msgs__msg__Feedback__Sequence__create(size_t size)
{
  spot_msgs__msg__Feedback__Sequence * array = (spot_msgs__msg__Feedback__Sequence *)malloc(sizeof(spot_msgs__msg__Feedback__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = spot_msgs__msg__Feedback__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
spot_msgs__msg__Feedback__Sequence__destroy(spot_msgs__msg__Feedback__Sequence * array)
{
  if (array) {
    spot_msgs__msg__Feedback__Sequence__fini(array);
  }
  free(array);
}

bool
spot_msgs__msg__Feedback__Sequence__are_equal(const spot_msgs__msg__Feedback__Sequence * lhs, const spot_msgs__msg__Feedback__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!spot_msgs__msg__Feedback__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
spot_msgs__msg__Feedback__Sequence__copy(
  const spot_msgs__msg__Feedback__Sequence * input,
  spot_msgs__msg__Feedback__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(spot_msgs__msg__Feedback);
    spot_msgs__msg__Feedback * data =
      (spot_msgs__msg__Feedback *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!spot_msgs__msg__Feedback__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          spot_msgs__msg__Feedback__fini(&data[i]);
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
    if (!spot_msgs__msg__Feedback__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}

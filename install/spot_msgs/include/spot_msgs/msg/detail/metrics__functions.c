// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from spot_msgs:msg/Metrics.idl
// generated code does not contain a copyright notice
#include "spot_msgs/msg/detail/metrics__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `time_moving`
// Member `electric_power`
#include "builtin_interfaces/msg/detail/duration__functions.h"

bool
spot_msgs__msg__Metrics__init(spot_msgs__msg__Metrics * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    spot_msgs__msg__Metrics__fini(msg);
    return false;
  }
  // distance
  // gait_cycles
  // time_moving
  if (!builtin_interfaces__msg__Duration__init(&msg->time_moving)) {
    spot_msgs__msg__Metrics__fini(msg);
    return false;
  }
  // electric_power
  if (!builtin_interfaces__msg__Duration__init(&msg->electric_power)) {
    spot_msgs__msg__Metrics__fini(msg);
    return false;
  }
  return true;
}

void
spot_msgs__msg__Metrics__fini(spot_msgs__msg__Metrics * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // distance
  // gait_cycles
  // time_moving
  builtin_interfaces__msg__Duration__fini(&msg->time_moving);
  // electric_power
  builtin_interfaces__msg__Duration__fini(&msg->electric_power);
}

bool
spot_msgs__msg__Metrics__are_equal(const spot_msgs__msg__Metrics * lhs, const spot_msgs__msg__Metrics * rhs)
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
  // distance
  if (lhs->distance != rhs->distance) {
    return false;
  }
  // gait_cycles
  if (lhs->gait_cycles != rhs->gait_cycles) {
    return false;
  }
  // time_moving
  if (!builtin_interfaces__msg__Duration__are_equal(
      &(lhs->time_moving), &(rhs->time_moving)))
  {
    return false;
  }
  // electric_power
  if (!builtin_interfaces__msg__Duration__are_equal(
      &(lhs->electric_power), &(rhs->electric_power)))
  {
    return false;
  }
  return true;
}

bool
spot_msgs__msg__Metrics__copy(
  const spot_msgs__msg__Metrics * input,
  spot_msgs__msg__Metrics * output)
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
  // distance
  output->distance = input->distance;
  // gait_cycles
  output->gait_cycles = input->gait_cycles;
  // time_moving
  if (!builtin_interfaces__msg__Duration__copy(
      &(input->time_moving), &(output->time_moving)))
  {
    return false;
  }
  // electric_power
  if (!builtin_interfaces__msg__Duration__copy(
      &(input->electric_power), &(output->electric_power)))
  {
    return false;
  }
  return true;
}

spot_msgs__msg__Metrics *
spot_msgs__msg__Metrics__create()
{
  spot_msgs__msg__Metrics * msg = (spot_msgs__msg__Metrics *)malloc(sizeof(spot_msgs__msg__Metrics));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(spot_msgs__msg__Metrics));
  bool success = spot_msgs__msg__Metrics__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
spot_msgs__msg__Metrics__destroy(spot_msgs__msg__Metrics * msg)
{
  if (msg) {
    spot_msgs__msg__Metrics__fini(msg);
  }
  free(msg);
}


bool
spot_msgs__msg__Metrics__Sequence__init(spot_msgs__msg__Metrics__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  spot_msgs__msg__Metrics * data = NULL;
  if (size) {
    data = (spot_msgs__msg__Metrics *)calloc(size, sizeof(spot_msgs__msg__Metrics));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = spot_msgs__msg__Metrics__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        spot_msgs__msg__Metrics__fini(&data[i - 1]);
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
spot_msgs__msg__Metrics__Sequence__fini(spot_msgs__msg__Metrics__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      spot_msgs__msg__Metrics__fini(&array->data[i]);
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

spot_msgs__msg__Metrics__Sequence *
spot_msgs__msg__Metrics__Sequence__create(size_t size)
{
  spot_msgs__msg__Metrics__Sequence * array = (spot_msgs__msg__Metrics__Sequence *)malloc(sizeof(spot_msgs__msg__Metrics__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = spot_msgs__msg__Metrics__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
spot_msgs__msg__Metrics__Sequence__destroy(spot_msgs__msg__Metrics__Sequence * array)
{
  if (array) {
    spot_msgs__msg__Metrics__Sequence__fini(array);
  }
  free(array);
}

bool
spot_msgs__msg__Metrics__Sequence__are_equal(const spot_msgs__msg__Metrics__Sequence * lhs, const spot_msgs__msg__Metrics__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!spot_msgs__msg__Metrics__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
spot_msgs__msg__Metrics__Sequence__copy(
  const spot_msgs__msg__Metrics__Sequence * input,
  spot_msgs__msg__Metrics__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(spot_msgs__msg__Metrics);
    spot_msgs__msg__Metrics * data =
      (spot_msgs__msg__Metrics *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!spot_msgs__msg__Metrics__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          spot_msgs__msg__Metrics__fini(&data[i]);
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
    if (!spot_msgs__msg__Metrics__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}

// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from spot_msgs:msg/BatteryState.idl
// generated code does not contain a copyright notice
#include "spot_msgs/msg/detail/battery_state__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__functions.h"
// Member `identifier`
#include "rosidl_runtime_c/string_functions.h"
// Member `estimated_runtime`
#include "builtin_interfaces/msg/detail/duration__functions.h"
// Member `temperatures`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
spot_msgs__msg__BatteryState__init(spot_msgs__msg__BatteryState * msg)
{
  if (!msg) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    spot_msgs__msg__BatteryState__fini(msg);
    return false;
  }
  // identifier
  if (!rosidl_runtime_c__String__init(&msg->identifier)) {
    spot_msgs__msg__BatteryState__fini(msg);
    return false;
  }
  // charge_percentage
  // estimated_runtime
  if (!builtin_interfaces__msg__Duration__init(&msg->estimated_runtime)) {
    spot_msgs__msg__BatteryState__fini(msg);
    return false;
  }
  // current
  // voltage
  // temperatures
  if (!rosidl_runtime_c__double__Sequence__init(&msg->temperatures, 0)) {
    spot_msgs__msg__BatteryState__fini(msg);
    return false;
  }
  // status
  return true;
}

void
spot_msgs__msg__BatteryState__fini(spot_msgs__msg__BatteryState * msg)
{
  if (!msg) {
    return;
  }
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
  // identifier
  rosidl_runtime_c__String__fini(&msg->identifier);
  // charge_percentage
  // estimated_runtime
  builtin_interfaces__msg__Duration__fini(&msg->estimated_runtime);
  // current
  // voltage
  // temperatures
  rosidl_runtime_c__double__Sequence__fini(&msg->temperatures);
  // status
}

bool
spot_msgs__msg__BatteryState__are_equal(const spot_msgs__msg__BatteryState * lhs, const spot_msgs__msg__BatteryState * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->stamp), &(rhs->stamp)))
  {
    return false;
  }
  // identifier
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->identifier), &(rhs->identifier)))
  {
    return false;
  }
  // charge_percentage
  if (lhs->charge_percentage != rhs->charge_percentage) {
    return false;
  }
  // estimated_runtime
  if (!builtin_interfaces__msg__Duration__are_equal(
      &(lhs->estimated_runtime), &(rhs->estimated_runtime)))
  {
    return false;
  }
  // current
  if (lhs->current != rhs->current) {
    return false;
  }
  // voltage
  if (lhs->voltage != rhs->voltage) {
    return false;
  }
  // temperatures
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->temperatures), &(rhs->temperatures)))
  {
    return false;
  }
  // status
  if (lhs->status != rhs->status) {
    return false;
  }
  return true;
}

bool
spot_msgs__msg__BatteryState__copy(
  const spot_msgs__msg__BatteryState * input,
  spot_msgs__msg__BatteryState * output)
{
  if (!input || !output) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__copy(
      &(input->stamp), &(output->stamp)))
  {
    return false;
  }
  // identifier
  if (!rosidl_runtime_c__String__copy(
      &(input->identifier), &(output->identifier)))
  {
    return false;
  }
  // charge_percentage
  output->charge_percentage = input->charge_percentage;
  // estimated_runtime
  if (!builtin_interfaces__msg__Duration__copy(
      &(input->estimated_runtime), &(output->estimated_runtime)))
  {
    return false;
  }
  // current
  output->current = input->current;
  // voltage
  output->voltage = input->voltage;
  // temperatures
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->temperatures), &(output->temperatures)))
  {
    return false;
  }
  // status
  output->status = input->status;
  return true;
}

spot_msgs__msg__BatteryState *
spot_msgs__msg__BatteryState__create()
{
  spot_msgs__msg__BatteryState * msg = (spot_msgs__msg__BatteryState *)malloc(sizeof(spot_msgs__msg__BatteryState));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(spot_msgs__msg__BatteryState));
  bool success = spot_msgs__msg__BatteryState__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
spot_msgs__msg__BatteryState__destroy(spot_msgs__msg__BatteryState * msg)
{
  if (msg) {
    spot_msgs__msg__BatteryState__fini(msg);
  }
  free(msg);
}


bool
spot_msgs__msg__BatteryState__Sequence__init(spot_msgs__msg__BatteryState__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  spot_msgs__msg__BatteryState * data = NULL;
  if (size) {
    data = (spot_msgs__msg__BatteryState *)calloc(size, sizeof(spot_msgs__msg__BatteryState));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = spot_msgs__msg__BatteryState__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        spot_msgs__msg__BatteryState__fini(&data[i - 1]);
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
spot_msgs__msg__BatteryState__Sequence__fini(spot_msgs__msg__BatteryState__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      spot_msgs__msg__BatteryState__fini(&array->data[i]);
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

spot_msgs__msg__BatteryState__Sequence *
spot_msgs__msg__BatteryState__Sequence__create(size_t size)
{
  spot_msgs__msg__BatteryState__Sequence * array = (spot_msgs__msg__BatteryState__Sequence *)malloc(sizeof(spot_msgs__msg__BatteryState__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = spot_msgs__msg__BatteryState__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
spot_msgs__msg__BatteryState__Sequence__destroy(spot_msgs__msg__BatteryState__Sequence * array)
{
  if (array) {
    spot_msgs__msg__BatteryState__Sequence__fini(array);
  }
  free(array);
}

bool
spot_msgs__msg__BatteryState__Sequence__are_equal(const spot_msgs__msg__BatteryState__Sequence * lhs, const spot_msgs__msg__BatteryState__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!spot_msgs__msg__BatteryState__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
spot_msgs__msg__BatteryState__Sequence__copy(
  const spot_msgs__msg__BatteryState__Sequence * input,
  spot_msgs__msg__BatteryState__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(spot_msgs__msg__BatteryState);
    spot_msgs__msg__BatteryState * data =
      (spot_msgs__msg__BatteryState *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!spot_msgs__msg__BatteryState__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          spot_msgs__msg__BatteryState__fini(&data[i]);
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
    if (!spot_msgs__msg__BatteryState__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}

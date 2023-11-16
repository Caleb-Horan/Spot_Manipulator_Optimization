// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from spot_msgs:srv/ListGraph.idl
// generated code does not contain a copyright notice
#include "spot_msgs/srv/detail/list_graph__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// Include directives for member types
// Member `upload_filepath`
#include "rosidl_runtime_c/string_functions.h"

bool
spot_msgs__srv__ListGraph_Request__init(spot_msgs__srv__ListGraph_Request * msg)
{
  if (!msg) {
    return false;
  }
  // upload_filepath
  if (!rosidl_runtime_c__String__init(&msg->upload_filepath)) {
    spot_msgs__srv__ListGraph_Request__fini(msg);
    return false;
  }
  return true;
}

void
spot_msgs__srv__ListGraph_Request__fini(spot_msgs__srv__ListGraph_Request * msg)
{
  if (!msg) {
    return;
  }
  // upload_filepath
  rosidl_runtime_c__String__fini(&msg->upload_filepath);
}

bool
spot_msgs__srv__ListGraph_Request__are_equal(const spot_msgs__srv__ListGraph_Request * lhs, const spot_msgs__srv__ListGraph_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // upload_filepath
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->upload_filepath), &(rhs->upload_filepath)))
  {
    return false;
  }
  return true;
}

bool
spot_msgs__srv__ListGraph_Request__copy(
  const spot_msgs__srv__ListGraph_Request * input,
  spot_msgs__srv__ListGraph_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // upload_filepath
  if (!rosidl_runtime_c__String__copy(
      &(input->upload_filepath), &(output->upload_filepath)))
  {
    return false;
  }
  return true;
}

spot_msgs__srv__ListGraph_Request *
spot_msgs__srv__ListGraph_Request__create()
{
  spot_msgs__srv__ListGraph_Request * msg = (spot_msgs__srv__ListGraph_Request *)malloc(sizeof(spot_msgs__srv__ListGraph_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(spot_msgs__srv__ListGraph_Request));
  bool success = spot_msgs__srv__ListGraph_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
spot_msgs__srv__ListGraph_Request__destroy(spot_msgs__srv__ListGraph_Request * msg)
{
  if (msg) {
    spot_msgs__srv__ListGraph_Request__fini(msg);
  }
  free(msg);
}


bool
spot_msgs__srv__ListGraph_Request__Sequence__init(spot_msgs__srv__ListGraph_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  spot_msgs__srv__ListGraph_Request * data = NULL;
  if (size) {
    data = (spot_msgs__srv__ListGraph_Request *)calloc(size, sizeof(spot_msgs__srv__ListGraph_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = spot_msgs__srv__ListGraph_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        spot_msgs__srv__ListGraph_Request__fini(&data[i - 1]);
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
spot_msgs__srv__ListGraph_Request__Sequence__fini(spot_msgs__srv__ListGraph_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      spot_msgs__srv__ListGraph_Request__fini(&array->data[i]);
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

spot_msgs__srv__ListGraph_Request__Sequence *
spot_msgs__srv__ListGraph_Request__Sequence__create(size_t size)
{
  spot_msgs__srv__ListGraph_Request__Sequence * array = (spot_msgs__srv__ListGraph_Request__Sequence *)malloc(sizeof(spot_msgs__srv__ListGraph_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = spot_msgs__srv__ListGraph_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
spot_msgs__srv__ListGraph_Request__Sequence__destroy(spot_msgs__srv__ListGraph_Request__Sequence * array)
{
  if (array) {
    spot_msgs__srv__ListGraph_Request__Sequence__fini(array);
  }
  free(array);
}

bool
spot_msgs__srv__ListGraph_Request__Sequence__are_equal(const spot_msgs__srv__ListGraph_Request__Sequence * lhs, const spot_msgs__srv__ListGraph_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!spot_msgs__srv__ListGraph_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
spot_msgs__srv__ListGraph_Request__Sequence__copy(
  const spot_msgs__srv__ListGraph_Request__Sequence * input,
  spot_msgs__srv__ListGraph_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(spot_msgs__srv__ListGraph_Request);
    spot_msgs__srv__ListGraph_Request * data =
      (spot_msgs__srv__ListGraph_Request *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!spot_msgs__srv__ListGraph_Request__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          spot_msgs__srv__ListGraph_Request__fini(&data[i]);
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
    if (!spot_msgs__srv__ListGraph_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `waypoint_ids`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

bool
spot_msgs__srv__ListGraph_Response__init(spot_msgs__srv__ListGraph_Response * msg)
{
  if (!msg) {
    return false;
  }
  // waypoint_ids
  if (!rosidl_runtime_c__String__Sequence__init(&msg->waypoint_ids, 0)) {
    spot_msgs__srv__ListGraph_Response__fini(msg);
    return false;
  }
  return true;
}

void
spot_msgs__srv__ListGraph_Response__fini(spot_msgs__srv__ListGraph_Response * msg)
{
  if (!msg) {
    return;
  }
  // waypoint_ids
  rosidl_runtime_c__String__Sequence__fini(&msg->waypoint_ids);
}

bool
spot_msgs__srv__ListGraph_Response__are_equal(const spot_msgs__srv__ListGraph_Response * lhs, const spot_msgs__srv__ListGraph_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // waypoint_ids
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->waypoint_ids), &(rhs->waypoint_ids)))
  {
    return false;
  }
  return true;
}

bool
spot_msgs__srv__ListGraph_Response__copy(
  const spot_msgs__srv__ListGraph_Response * input,
  spot_msgs__srv__ListGraph_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // waypoint_ids
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->waypoint_ids), &(output->waypoint_ids)))
  {
    return false;
  }
  return true;
}

spot_msgs__srv__ListGraph_Response *
spot_msgs__srv__ListGraph_Response__create()
{
  spot_msgs__srv__ListGraph_Response * msg = (spot_msgs__srv__ListGraph_Response *)malloc(sizeof(spot_msgs__srv__ListGraph_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(spot_msgs__srv__ListGraph_Response));
  bool success = spot_msgs__srv__ListGraph_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
spot_msgs__srv__ListGraph_Response__destroy(spot_msgs__srv__ListGraph_Response * msg)
{
  if (msg) {
    spot_msgs__srv__ListGraph_Response__fini(msg);
  }
  free(msg);
}


bool
spot_msgs__srv__ListGraph_Response__Sequence__init(spot_msgs__srv__ListGraph_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  spot_msgs__srv__ListGraph_Response * data = NULL;
  if (size) {
    data = (spot_msgs__srv__ListGraph_Response *)calloc(size, sizeof(spot_msgs__srv__ListGraph_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = spot_msgs__srv__ListGraph_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        spot_msgs__srv__ListGraph_Response__fini(&data[i - 1]);
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
spot_msgs__srv__ListGraph_Response__Sequence__fini(spot_msgs__srv__ListGraph_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      spot_msgs__srv__ListGraph_Response__fini(&array->data[i]);
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

spot_msgs__srv__ListGraph_Response__Sequence *
spot_msgs__srv__ListGraph_Response__Sequence__create(size_t size)
{
  spot_msgs__srv__ListGraph_Response__Sequence * array = (spot_msgs__srv__ListGraph_Response__Sequence *)malloc(sizeof(spot_msgs__srv__ListGraph_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = spot_msgs__srv__ListGraph_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
spot_msgs__srv__ListGraph_Response__Sequence__destroy(spot_msgs__srv__ListGraph_Response__Sequence * array)
{
  if (array) {
    spot_msgs__srv__ListGraph_Response__Sequence__fini(array);
  }
  free(array);
}

bool
spot_msgs__srv__ListGraph_Response__Sequence__are_equal(const spot_msgs__srv__ListGraph_Response__Sequence * lhs, const spot_msgs__srv__ListGraph_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!spot_msgs__srv__ListGraph_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
spot_msgs__srv__ListGraph_Response__Sequence__copy(
  const spot_msgs__srv__ListGraph_Response__Sequence * input,
  spot_msgs__srv__ListGraph_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(spot_msgs__srv__ListGraph_Response);
    spot_msgs__srv__ListGraph_Response * data =
      (spot_msgs__srv__ListGraph_Response *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!spot_msgs__srv__ListGraph_Response__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          spot_msgs__srv__ListGraph_Response__fini(&data[i]);
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
    if (!spot_msgs__srv__ListGraph_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}

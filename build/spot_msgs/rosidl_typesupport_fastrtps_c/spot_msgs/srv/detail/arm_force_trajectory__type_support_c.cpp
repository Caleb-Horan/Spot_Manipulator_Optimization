// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from spot_msgs:srv/ArmForceTrajectory.idl
// generated code does not contain a copyright notice
#include "spot_msgs/srv/detail/arm_force_trajectory__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "spot_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "spot_msgs/srv/detail/arm_force_trajectory__struct.h"
#include "spot_msgs/srv/detail/arm_force_trajectory__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _ArmForceTrajectory_Request__ros_msg_type = spot_msgs__srv__ArmForceTrajectory_Request;

static bool _ArmForceTrajectory_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _ArmForceTrajectory_Request__ros_msg_type * ros_message = static_cast<const _ArmForceTrajectory_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: forces_pt0
  {
    size_t size = 3;
    auto array_ptr = ros_message->forces_pt0;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: torques_pt0
  {
    size_t size = 3;
    auto array_ptr = ros_message->torques_pt0;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: forces_pt1
  {
    size_t size = 3;
    auto array_ptr = ros_message->forces_pt1;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: torques_pt1
  {
    size_t size = 3;
    auto array_ptr = ros_message->torques_pt1;
    cdr.serializeArray(array_ptr, size);
  }

  return true;
}

static bool _ArmForceTrajectory_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _ArmForceTrajectory_Request__ros_msg_type * ros_message = static_cast<_ArmForceTrajectory_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: forces_pt0
  {
    size_t size = 3;
    auto array_ptr = ros_message->forces_pt0;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: torques_pt0
  {
    size_t size = 3;
    auto array_ptr = ros_message->torques_pt0;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: forces_pt1
  {
    size_t size = 3;
    auto array_ptr = ros_message->forces_pt1;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: torques_pt1
  {
    size_t size = 3;
    auto array_ptr = ros_message->torques_pt1;
    cdr.deserializeArray(array_ptr, size);
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_spot_msgs
size_t get_serialized_size_spot_msgs__srv__ArmForceTrajectory_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _ArmForceTrajectory_Request__ros_msg_type * ros_message = static_cast<const _ArmForceTrajectory_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name forces_pt0
  {
    size_t array_size = 3;
    auto array_ptr = ros_message->forces_pt0;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name torques_pt0
  {
    size_t array_size = 3;
    auto array_ptr = ros_message->torques_pt0;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name forces_pt1
  {
    size_t array_size = 3;
    auto array_ptr = ros_message->forces_pt1;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name torques_pt1
  {
    size_t array_size = 3;
    auto array_ptr = ros_message->torques_pt1;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _ArmForceTrajectory_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_spot_msgs__srv__ArmForceTrajectory_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_spot_msgs
size_t max_serialized_size_spot_msgs__srv__ArmForceTrajectory_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: forces_pt0
  {
    size_t array_size = 3;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: torques_pt0
  {
    size_t array_size = 3;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: forces_pt1
  {
    size_t array_size = 3;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: torques_pt1
  {
    size_t array_size = 3;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _ArmForceTrajectory_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_spot_msgs__srv__ArmForceTrajectory_Request(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_ArmForceTrajectory_Request = {
  "spot_msgs::srv",
  "ArmForceTrajectory_Request",
  _ArmForceTrajectory_Request__cdr_serialize,
  _ArmForceTrajectory_Request__cdr_deserialize,
  _ArmForceTrajectory_Request__get_serialized_size,
  _ArmForceTrajectory_Request__max_serialized_size
};

static rosidl_message_type_support_t _ArmForceTrajectory_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_ArmForceTrajectory_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, spot_msgs, srv, ArmForceTrajectory_Request)() {
  return &_ArmForceTrajectory_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "spot_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "spot_msgs/srv/detail/arm_force_trajectory__struct.h"
// already included above
// #include "spot_msgs/srv/detail/arm_force_trajectory__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "rosidl_runtime_c/string.h"  // message
#include "rosidl_runtime_c/string_functions.h"  // message

// forward declare type support functions


using _ArmForceTrajectory_Response__ros_msg_type = spot_msgs__srv__ArmForceTrajectory_Response;

static bool _ArmForceTrajectory_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _ArmForceTrajectory_Response__ros_msg_type * ros_message = static_cast<const _ArmForceTrajectory_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: success
  {
    cdr << (ros_message->success ? true : false);
  }

  // Field name: message
  {
    const rosidl_runtime_c__String * str = &ros_message->message;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  return true;
}

static bool _ArmForceTrajectory_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _ArmForceTrajectory_Response__ros_msg_type * ros_message = static_cast<_ArmForceTrajectory_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: success
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->success = tmp ? true : false;
  }

  // Field name: message
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->message.data) {
      rosidl_runtime_c__String__init(&ros_message->message);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->message,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'message'\n");
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_spot_msgs
size_t get_serialized_size_spot_msgs__srv__ArmForceTrajectory_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _ArmForceTrajectory_Response__ros_msg_type * ros_message = static_cast<const _ArmForceTrajectory_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name success
  {
    size_t item_size = sizeof(ros_message->success);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name message
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->message.size + 1);

  return current_alignment - initial_alignment;
}

static uint32_t _ArmForceTrajectory_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_spot_msgs__srv__ArmForceTrajectory_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_spot_msgs
size_t max_serialized_size_spot_msgs__srv__ArmForceTrajectory_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: success
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: message
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _ArmForceTrajectory_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_spot_msgs__srv__ArmForceTrajectory_Response(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_ArmForceTrajectory_Response = {
  "spot_msgs::srv",
  "ArmForceTrajectory_Response",
  _ArmForceTrajectory_Response__cdr_serialize,
  _ArmForceTrajectory_Response__cdr_deserialize,
  _ArmForceTrajectory_Response__get_serialized_size,
  _ArmForceTrajectory_Response__max_serialized_size
};

static rosidl_message_type_support_t _ArmForceTrajectory_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_ArmForceTrajectory_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, spot_msgs, srv, ArmForceTrajectory_Response)() {
  return &_ArmForceTrajectory_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "spot_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "spot_msgs/srv/arm_force_trajectory.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t ArmForceTrajectory__callbacks = {
  "spot_msgs::srv",
  "ArmForceTrajectory",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, spot_msgs, srv, ArmForceTrajectory_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, spot_msgs, srv, ArmForceTrajectory_Response)(),
};

static rosidl_service_type_support_t ArmForceTrajectory__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &ArmForceTrajectory__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, spot_msgs, srv, ArmForceTrajectory)() {
  return &ArmForceTrajectory__handle;
}

#if defined(__cplusplus)
}
#endif
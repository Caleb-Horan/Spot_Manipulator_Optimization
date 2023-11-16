// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from spot_msgs:srv/ConstrainedArmJointMovement.idl
// generated code does not contain a copyright notice
#include "spot_msgs/srv/detail/constrained_arm_joint_movement__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "spot_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "spot_msgs/srv/detail/constrained_arm_joint_movement__struct.h"
#include "spot_msgs/srv/detail/constrained_arm_joint_movement__functions.h"
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

#include "rosidl_runtime_c/primitives_sequence.h"  // joint_target
#include "rosidl_runtime_c/primitives_sequence_functions.h"  // joint_target

// forward declare type support functions


using _ConstrainedArmJointMovement_Request__ros_msg_type = spot_msgs__srv__ConstrainedArmJointMovement_Request;

static bool _ConstrainedArmJointMovement_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _ConstrainedArmJointMovement_Request__ros_msg_type * ros_message = static_cast<const _ConstrainedArmJointMovement_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: joint_target
  {
    size_t size = ros_message->joint_target.size;
    auto array_ptr = ros_message->joint_target.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: max_execution_time
  {
    cdr << ros_message->max_execution_time;
  }

  // Field name: max_velocity
  {
    cdr << ros_message->max_velocity;
  }

  // Field name: max_acceleration
  {
    cdr << ros_message->max_acceleration;
  }

  return true;
}

static bool _ConstrainedArmJointMovement_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _ConstrainedArmJointMovement_Request__ros_msg_type * ros_message = static_cast<_ConstrainedArmJointMovement_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: joint_target
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->joint_target.data) {
      rosidl_runtime_c__double__Sequence__fini(&ros_message->joint_target);
    }
    if (!rosidl_runtime_c__double__Sequence__init(&ros_message->joint_target, size)) {
      fprintf(stderr, "failed to create array for field 'joint_target'");
      return false;
    }
    auto array_ptr = ros_message->joint_target.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: max_execution_time
  {
    cdr >> ros_message->max_execution_time;
  }

  // Field name: max_velocity
  {
    cdr >> ros_message->max_velocity;
  }

  // Field name: max_acceleration
  {
    cdr >> ros_message->max_acceleration;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_spot_msgs
size_t get_serialized_size_spot_msgs__srv__ConstrainedArmJointMovement_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _ConstrainedArmJointMovement_Request__ros_msg_type * ros_message = static_cast<const _ConstrainedArmJointMovement_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name joint_target
  {
    size_t array_size = ros_message->joint_target.size;
    auto array_ptr = ros_message->joint_target.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name max_execution_time
  {
    size_t item_size = sizeof(ros_message->max_execution_time);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name max_velocity
  {
    size_t item_size = sizeof(ros_message->max_velocity);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name max_acceleration
  {
    size_t item_size = sizeof(ros_message->max_acceleration);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _ConstrainedArmJointMovement_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_spot_msgs__srv__ConstrainedArmJointMovement_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_spot_msgs
size_t max_serialized_size_spot_msgs__srv__ConstrainedArmJointMovement_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: joint_target
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: max_execution_time
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: max_velocity
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: max_acceleration
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _ConstrainedArmJointMovement_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_spot_msgs__srv__ConstrainedArmJointMovement_Request(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_ConstrainedArmJointMovement_Request = {
  "spot_msgs::srv",
  "ConstrainedArmJointMovement_Request",
  _ConstrainedArmJointMovement_Request__cdr_serialize,
  _ConstrainedArmJointMovement_Request__cdr_deserialize,
  _ConstrainedArmJointMovement_Request__get_serialized_size,
  _ConstrainedArmJointMovement_Request__max_serialized_size
};

static rosidl_message_type_support_t _ConstrainedArmJointMovement_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_ConstrainedArmJointMovement_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, spot_msgs, srv, ConstrainedArmJointMovement_Request)() {
  return &_ConstrainedArmJointMovement_Request__type_support;
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
// #include "spot_msgs/srv/detail/constrained_arm_joint_movement__struct.h"
// already included above
// #include "spot_msgs/srv/detail/constrained_arm_joint_movement__functions.h"
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


using _ConstrainedArmJointMovement_Response__ros_msg_type = spot_msgs__srv__ConstrainedArmJointMovement_Response;

static bool _ConstrainedArmJointMovement_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _ConstrainedArmJointMovement_Response__ros_msg_type * ros_message = static_cast<const _ConstrainedArmJointMovement_Response__ros_msg_type *>(untyped_ros_message);
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

static bool _ConstrainedArmJointMovement_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _ConstrainedArmJointMovement_Response__ros_msg_type * ros_message = static_cast<_ConstrainedArmJointMovement_Response__ros_msg_type *>(untyped_ros_message);
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
size_t get_serialized_size_spot_msgs__srv__ConstrainedArmJointMovement_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _ConstrainedArmJointMovement_Response__ros_msg_type * ros_message = static_cast<const _ConstrainedArmJointMovement_Response__ros_msg_type *>(untyped_ros_message);
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

static uint32_t _ConstrainedArmJointMovement_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_spot_msgs__srv__ConstrainedArmJointMovement_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_spot_msgs
size_t max_serialized_size_spot_msgs__srv__ConstrainedArmJointMovement_Response(
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

static size_t _ConstrainedArmJointMovement_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_spot_msgs__srv__ConstrainedArmJointMovement_Response(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_ConstrainedArmJointMovement_Response = {
  "spot_msgs::srv",
  "ConstrainedArmJointMovement_Response",
  _ConstrainedArmJointMovement_Response__cdr_serialize,
  _ConstrainedArmJointMovement_Response__cdr_deserialize,
  _ConstrainedArmJointMovement_Response__get_serialized_size,
  _ConstrainedArmJointMovement_Response__max_serialized_size
};

static rosidl_message_type_support_t _ConstrainedArmJointMovement_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_ConstrainedArmJointMovement_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, spot_msgs, srv, ConstrainedArmJointMovement_Response)() {
  return &_ConstrainedArmJointMovement_Response__type_support;
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
#include "spot_msgs/srv/constrained_arm_joint_movement.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t ConstrainedArmJointMovement__callbacks = {
  "spot_msgs::srv",
  "ConstrainedArmJointMovement",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, spot_msgs, srv, ConstrainedArmJointMovement_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, spot_msgs, srv, ConstrainedArmJointMovement_Response)(),
};

static rosidl_service_type_support_t ConstrainedArmJointMovement__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &ConstrainedArmJointMovement__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, spot_msgs, srv, ConstrainedArmJointMovement)() {
  return &ConstrainedArmJointMovement__handle;
}

#if defined(__cplusplus)
}
#endif

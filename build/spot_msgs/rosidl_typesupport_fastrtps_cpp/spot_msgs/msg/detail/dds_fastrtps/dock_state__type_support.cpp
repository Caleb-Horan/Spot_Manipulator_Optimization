// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from spot_msgs:msg/DockState.idl
// generated code does not contain a copyright notice
#include "spot_msgs/msg/detail/dock_state__rosidl_typesupport_fastrtps_cpp.hpp"
#include "spot_msgs/msg/detail/dock_state__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace spot_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_spot_msgs
cdr_serialize(
  const spot_msgs::msg::DockState & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: status
  cdr << ros_message.status;
  // Member: dock_type
  cdr << ros_message.dock_type;
  // Member: dock_id
  cdr << ros_message.dock_id;
  // Member: power_status
  cdr << ros_message.power_status;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_spot_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  spot_msgs::msg::DockState & ros_message)
{
  // Member: status
  cdr >> ros_message.status;

  // Member: dock_type
  cdr >> ros_message.dock_type;

  // Member: dock_id
  cdr >> ros_message.dock_id;

  // Member: power_status
  cdr >> ros_message.power_status;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_spot_msgs
get_serialized_size(
  const spot_msgs::msg::DockState & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: status
  {
    size_t item_size = sizeof(ros_message.status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: dock_type
  {
    size_t item_size = sizeof(ros_message.dock_type);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: dock_id
  {
    size_t item_size = sizeof(ros_message.dock_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: power_status
  {
    size_t item_size = sizeof(ros_message.power_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_spot_msgs
max_serialized_size_DockState(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: status
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: dock_type
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: dock_id
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: power_status
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static bool _DockState__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const spot_msgs::msg::DockState *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _DockState__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<spot_msgs::msg::DockState *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _DockState__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const spot_msgs::msg::DockState *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _DockState__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_DockState(full_bounded, 0);
}

static message_type_support_callbacks_t _DockState__callbacks = {
  "spot_msgs::msg",
  "DockState",
  _DockState__cdr_serialize,
  _DockState__cdr_deserialize,
  _DockState__get_serialized_size,
  _DockState__max_serialized_size
};

static rosidl_message_type_support_t _DockState__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_DockState__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace spot_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_spot_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<spot_msgs::msg::DockState>()
{
  return &spot_msgs::msg::typesupport_fastrtps_cpp::_DockState__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, spot_msgs, msg, DockState)() {
  return &spot_msgs::msg::typesupport_fastrtps_cpp::_DockState__handle;
}

#ifdef __cplusplus
}
#endif

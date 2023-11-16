// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from spot_msgs:msg/ManipulatorState.idl
// generated code does not contain a copyright notice
#include "spot_msgs/msg/detail/manipulator_state__rosidl_typesupport_fastrtps_cpp.hpp"
#include "spot_msgs/msg/detail/manipulator_state__struct.hpp"

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
namespace geometry_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const geometry_msgs::msg::Point &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  geometry_msgs::msg::Point &);
size_t get_serialized_size(
  const geometry_msgs::msg::Point &,
  size_t current_alignment);
size_t
max_serialized_size_Point(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace geometry_msgs


namespace spot_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_spot_msgs
cdr_serialize(
  const spot_msgs::msg::ManipulatorState & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: gripper_open_percentage
  cdr << ros_message.gripper_open_percentage;
  // Member: is_gripper_holding_item
  cdr << (ros_message.is_gripper_holding_item ? true : false);
  // Member: estimated_end_effector_force_in_hand
  geometry_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.estimated_end_effector_force_in_hand,
    cdr);
  // Member: stow_state
  cdr << ros_message.stow_state;
  // Member: carry_state
  cdr << ros_message.carry_state;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_spot_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  spot_msgs::msg::ManipulatorState & ros_message)
{
  // Member: gripper_open_percentage
  cdr >> ros_message.gripper_open_percentage;

  // Member: is_gripper_holding_item
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.is_gripper_holding_item = tmp ? true : false;
  }

  // Member: estimated_end_effector_force_in_hand
  geometry_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.estimated_end_effector_force_in_hand);

  // Member: stow_state
  cdr >> ros_message.stow_state;

  // Member: carry_state
  cdr >> ros_message.carry_state;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_spot_msgs
get_serialized_size(
  const spot_msgs::msg::ManipulatorState & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: gripper_open_percentage
  {
    size_t item_size = sizeof(ros_message.gripper_open_percentage);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: is_gripper_holding_item
  {
    size_t item_size = sizeof(ros_message.is_gripper_holding_item);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: estimated_end_effector_force_in_hand

  current_alignment +=
    geometry_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.estimated_end_effector_force_in_hand, current_alignment);
  // Member: stow_state
  {
    size_t item_size = sizeof(ros_message.stow_state);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: carry_state
  {
    size_t item_size = sizeof(ros_message.carry_state);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_spot_msgs
max_serialized_size_ManipulatorState(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: gripper_open_percentage
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: is_gripper_holding_item
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: estimated_end_effector_force_in_hand
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        geometry_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Point(
        full_bounded, current_alignment);
    }
  }

  // Member: stow_state
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: carry_state
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static bool _ManipulatorState__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const spot_msgs::msg::ManipulatorState *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _ManipulatorState__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<spot_msgs::msg::ManipulatorState *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _ManipulatorState__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const spot_msgs::msg::ManipulatorState *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _ManipulatorState__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_ManipulatorState(full_bounded, 0);
}

static message_type_support_callbacks_t _ManipulatorState__callbacks = {
  "spot_msgs::msg",
  "ManipulatorState",
  _ManipulatorState__cdr_serialize,
  _ManipulatorState__cdr_deserialize,
  _ManipulatorState__get_serialized_size,
  _ManipulatorState__max_serialized_size
};

static rosidl_message_type_support_t _ManipulatorState__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_ManipulatorState__callbacks,
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
get_message_type_support_handle<spot_msgs::msg::ManipulatorState>()
{
  return &spot_msgs::msg::typesupport_fastrtps_cpp::_ManipulatorState__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, spot_msgs, msg, ManipulatorState)() {
  return &spot_msgs::msg::typesupport_fastrtps_cpp::_ManipulatorState__handle;
}

#ifdef __cplusplus
}
#endif

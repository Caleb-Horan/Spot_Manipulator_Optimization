// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from spot_msgs:msg/PowerState.idl
// generated code does not contain a copyright notice
#include "spot_msgs/msg/detail/power_state__rosidl_typesupport_fastrtps_cpp.hpp"
#include "spot_msgs/msg/detail/power_state__struct.hpp"

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
namespace builtin_interfaces
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const builtin_interfaces::msg::Time &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  builtin_interfaces::msg::Time &);
size_t get_serialized_size(
  const builtin_interfaces::msg::Time &,
  size_t current_alignment);
size_t
max_serialized_size_Time(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace builtin_interfaces

namespace builtin_interfaces
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const builtin_interfaces::msg::Duration &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  builtin_interfaces::msg::Duration &);
size_t get_serialized_size(
  const builtin_interfaces::msg::Duration &,
  size_t current_alignment);
size_t
max_serialized_size_Duration(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace builtin_interfaces


namespace spot_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_spot_msgs
cdr_serialize(
  const spot_msgs::msg::PowerState & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: stamp
  builtin_interfaces::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.stamp,
    cdr);
  // Member: motor_power_state
  cdr << ros_message.motor_power_state;
  // Member: shore_power_state
  cdr << ros_message.shore_power_state;
  // Member: locomotion_charge_percentage
  cdr << ros_message.locomotion_charge_percentage;
  // Member: locomotion_estimated_runtime
  builtin_interfaces::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.locomotion_estimated_runtime,
    cdr);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_spot_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  spot_msgs::msg::PowerState & ros_message)
{
  // Member: stamp
  builtin_interfaces::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.stamp);

  // Member: motor_power_state
  cdr >> ros_message.motor_power_state;

  // Member: shore_power_state
  cdr >> ros_message.shore_power_state;

  // Member: locomotion_charge_percentage
  cdr >> ros_message.locomotion_charge_percentage;

  // Member: locomotion_estimated_runtime
  builtin_interfaces::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.locomotion_estimated_runtime);

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_spot_msgs
get_serialized_size(
  const spot_msgs::msg::PowerState & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: stamp

  current_alignment +=
    builtin_interfaces::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.stamp, current_alignment);
  // Member: motor_power_state
  {
    size_t item_size = sizeof(ros_message.motor_power_state);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: shore_power_state
  {
    size_t item_size = sizeof(ros_message.shore_power_state);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: locomotion_charge_percentage
  {
    size_t item_size = sizeof(ros_message.locomotion_charge_percentage);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: locomotion_estimated_runtime

  current_alignment +=
    builtin_interfaces::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.locomotion_estimated_runtime, current_alignment);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_spot_msgs
max_serialized_size_PowerState(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: stamp
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        builtin_interfaces::msg::typesupport_fastrtps_cpp::max_serialized_size_Time(
        full_bounded, current_alignment);
    }
  }

  // Member: motor_power_state
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: shore_power_state
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: locomotion_charge_percentage
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: locomotion_estimated_runtime
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        builtin_interfaces::msg::typesupport_fastrtps_cpp::max_serialized_size_Duration(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static bool _PowerState__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const spot_msgs::msg::PowerState *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _PowerState__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<spot_msgs::msg::PowerState *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _PowerState__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const spot_msgs::msg::PowerState *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _PowerState__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_PowerState(full_bounded, 0);
}

static message_type_support_callbacks_t _PowerState__callbacks = {
  "spot_msgs::msg",
  "PowerState",
  _PowerState__cdr_serialize,
  _PowerState__cdr_deserialize,
  _PowerState__get_serialized_size,
  _PowerState__max_serialized_size
};

static rosidl_message_type_support_t _PowerState__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_PowerState__callbacks,
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
get_message_type_support_handle<spot_msgs::msg::PowerState>()
{
  return &spot_msgs::msg::typesupport_fastrtps_cpp::_PowerState__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, spot_msgs, msg, PowerState)() {
  return &spot_msgs::msg::typesupport_fastrtps_cpp::_PowerState__handle;
}

#ifdef __cplusplus
}
#endif

// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from spot_msgs:msg/LeaseArray.idl
// generated code does not contain a copyright notice
#include "spot_msgs/msg/detail/lease_array__rosidl_typesupport_fastrtps_cpp.hpp"
#include "spot_msgs/msg/detail/lease_array__struct.hpp"

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
bool cdr_serialize(
  const spot_msgs::msg::LeaseResource &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  spot_msgs::msg::LeaseResource &);
size_t get_serialized_size(
  const spot_msgs::msg::LeaseResource &,
  size_t current_alignment);
size_t
max_serialized_size_LeaseResource(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace spot_msgs


namespace spot_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_spot_msgs
cdr_serialize(
  const spot_msgs::msg::LeaseArray & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: resources
  {
    size_t size = ros_message.resources.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      spot_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.resources[i],
        cdr);
    }
  }
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_spot_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  spot_msgs::msg::LeaseArray & ros_message)
{
  // Member: resources
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    ros_message.resources.resize(size);
    for (size_t i = 0; i < size; i++) {
      spot_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.resources[i]);
    }
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_spot_msgs
get_serialized_size(
  const spot_msgs::msg::LeaseArray & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: resources
  {
    size_t array_size = ros_message.resources.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        spot_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.resources[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_spot_msgs
max_serialized_size_LeaseArray(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: resources
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        spot_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_LeaseResource(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static bool _LeaseArray__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const spot_msgs::msg::LeaseArray *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _LeaseArray__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<spot_msgs::msg::LeaseArray *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _LeaseArray__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const spot_msgs::msg::LeaseArray *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _LeaseArray__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_LeaseArray(full_bounded, 0);
}

static message_type_support_callbacks_t _LeaseArray__callbacks = {
  "spot_msgs::msg",
  "LeaseArray",
  _LeaseArray__cdr_serialize,
  _LeaseArray__cdr_deserialize,
  _LeaseArray__get_serialized_size,
  _LeaseArray__max_serialized_size
};

static rosidl_message_type_support_t _LeaseArray__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_LeaseArray__callbacks,
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
get_message_type_support_handle<spot_msgs::msg::LeaseArray>()
{
  return &spot_msgs::msg::typesupport_fastrtps_cpp::_LeaseArray__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, spot_msgs, msg, LeaseArray)() {
  return &spot_msgs::msg::typesupport_fastrtps_cpp::_LeaseArray__handle;
}

#ifdef __cplusplus
}
#endif

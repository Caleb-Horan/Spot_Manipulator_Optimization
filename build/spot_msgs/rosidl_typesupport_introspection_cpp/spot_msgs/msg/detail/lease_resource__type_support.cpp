// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from spot_msgs:msg/LeaseResource.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "spot_msgs/msg/detail/lease_resource__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace spot_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void LeaseResource_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) spot_msgs::msg::LeaseResource(_init);
}

void LeaseResource_fini_function(void * message_memory)
{
  auto typed_message = static_cast<spot_msgs::msg::LeaseResource *>(message_memory);
  typed_message->~LeaseResource();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember LeaseResource_message_member_array[3] = {
  {
    "resource",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(spot_msgs::msg::LeaseResource, resource),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "lease",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<spot_msgs::msg::Lease>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(spot_msgs::msg::LeaseResource, lease),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "lease_owner",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<spot_msgs::msg::LeaseOwner>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(spot_msgs::msg::LeaseResource, lease_owner),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers LeaseResource_message_members = {
  "spot_msgs::msg",  // message namespace
  "LeaseResource",  // message name
  3,  // number of fields
  sizeof(spot_msgs::msg::LeaseResource),
  LeaseResource_message_member_array,  // message members
  LeaseResource_init_function,  // function to initialize message memory (memory has to be allocated)
  LeaseResource_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t LeaseResource_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &LeaseResource_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace spot_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<spot_msgs::msg::LeaseResource>()
{
  return &::spot_msgs::msg::rosidl_typesupport_introspection_cpp::LeaseResource_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, spot_msgs, msg, LeaseResource)() {
  return &::spot_msgs::msg::rosidl_typesupport_introspection_cpp::LeaseResource_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

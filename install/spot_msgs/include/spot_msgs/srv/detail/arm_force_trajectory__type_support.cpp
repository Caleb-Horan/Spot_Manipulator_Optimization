// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from spot_msgs:srv/ArmForceTrajectory.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "spot_msgs/srv/detail/arm_force_trajectory__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace spot_msgs
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

void ArmForceTrajectory_Request_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) spot_msgs::srv::ArmForceTrajectory_Request(_init);
}

void ArmForceTrajectory_Request_fini_function(void * message_memory)
{
  auto typed_message = static_cast<spot_msgs::srv::ArmForceTrajectory_Request *>(message_memory);
  typed_message->~ArmForceTrajectory_Request();
}

size_t size_function__ArmForceTrajectory_Request__forces_pt0(const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * get_const_function__ArmForceTrajectory_Request__forces_pt0(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<double, 3> *>(untyped_member);
  return &member[index];
}

void * get_function__ArmForceTrajectory_Request__forces_pt0(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<double, 3> *>(untyped_member);
  return &member[index];
}

size_t size_function__ArmForceTrajectory_Request__torques_pt0(const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * get_const_function__ArmForceTrajectory_Request__torques_pt0(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<double, 3> *>(untyped_member);
  return &member[index];
}

void * get_function__ArmForceTrajectory_Request__torques_pt0(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<double, 3> *>(untyped_member);
  return &member[index];
}

size_t size_function__ArmForceTrajectory_Request__forces_pt1(const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * get_const_function__ArmForceTrajectory_Request__forces_pt1(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<double, 3> *>(untyped_member);
  return &member[index];
}

void * get_function__ArmForceTrajectory_Request__forces_pt1(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<double, 3> *>(untyped_member);
  return &member[index];
}

size_t size_function__ArmForceTrajectory_Request__torques_pt1(const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * get_const_function__ArmForceTrajectory_Request__torques_pt1(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<double, 3> *>(untyped_member);
  return &member[index];
}

void * get_function__ArmForceTrajectory_Request__torques_pt1(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<double, 3> *>(untyped_member);
  return &member[index];
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember ArmForceTrajectory_Request_message_member_array[4] = {
  {
    "forces_pt0",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(spot_msgs::srv::ArmForceTrajectory_Request, forces_pt0),  // bytes offset in struct
    nullptr,  // default value
    size_function__ArmForceTrajectory_Request__forces_pt0,  // size() function pointer
    get_const_function__ArmForceTrajectory_Request__forces_pt0,  // get_const(index) function pointer
    get_function__ArmForceTrajectory_Request__forces_pt0,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "torques_pt0",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(spot_msgs::srv::ArmForceTrajectory_Request, torques_pt0),  // bytes offset in struct
    nullptr,  // default value
    size_function__ArmForceTrajectory_Request__torques_pt0,  // size() function pointer
    get_const_function__ArmForceTrajectory_Request__torques_pt0,  // get_const(index) function pointer
    get_function__ArmForceTrajectory_Request__torques_pt0,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "forces_pt1",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(spot_msgs::srv::ArmForceTrajectory_Request, forces_pt1),  // bytes offset in struct
    nullptr,  // default value
    size_function__ArmForceTrajectory_Request__forces_pt1,  // size() function pointer
    get_const_function__ArmForceTrajectory_Request__forces_pt1,  // get_const(index) function pointer
    get_function__ArmForceTrajectory_Request__forces_pt1,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "torques_pt1",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(spot_msgs::srv::ArmForceTrajectory_Request, torques_pt1),  // bytes offset in struct
    nullptr,  // default value
    size_function__ArmForceTrajectory_Request__torques_pt1,  // size() function pointer
    get_const_function__ArmForceTrajectory_Request__torques_pt1,  // get_const(index) function pointer
    get_function__ArmForceTrajectory_Request__torques_pt1,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers ArmForceTrajectory_Request_message_members = {
  "spot_msgs::srv",  // message namespace
  "ArmForceTrajectory_Request",  // message name
  4,  // number of fields
  sizeof(spot_msgs::srv::ArmForceTrajectory_Request),
  ArmForceTrajectory_Request_message_member_array,  // message members
  ArmForceTrajectory_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  ArmForceTrajectory_Request_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t ArmForceTrajectory_Request_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &ArmForceTrajectory_Request_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace spot_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<spot_msgs::srv::ArmForceTrajectory_Request>()
{
  return &::spot_msgs::srv::rosidl_typesupport_introspection_cpp::ArmForceTrajectory_Request_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, spot_msgs, srv, ArmForceTrajectory_Request)() {
  return &::spot_msgs::srv::rosidl_typesupport_introspection_cpp::ArmForceTrajectory_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "spot_msgs/srv/detail/arm_force_trajectory__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace spot_msgs
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

void ArmForceTrajectory_Response_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) spot_msgs::srv::ArmForceTrajectory_Response(_init);
}

void ArmForceTrajectory_Response_fini_function(void * message_memory)
{
  auto typed_message = static_cast<spot_msgs::srv::ArmForceTrajectory_Response *>(message_memory);
  typed_message->~ArmForceTrajectory_Response();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember ArmForceTrajectory_Response_message_member_array[2] = {
  {
    "success",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(spot_msgs::srv::ArmForceTrajectory_Response, success),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "message",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(spot_msgs::srv::ArmForceTrajectory_Response, message),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers ArmForceTrajectory_Response_message_members = {
  "spot_msgs::srv",  // message namespace
  "ArmForceTrajectory_Response",  // message name
  2,  // number of fields
  sizeof(spot_msgs::srv::ArmForceTrajectory_Response),
  ArmForceTrajectory_Response_message_member_array,  // message members
  ArmForceTrajectory_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  ArmForceTrajectory_Response_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t ArmForceTrajectory_Response_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &ArmForceTrajectory_Response_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace spot_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<spot_msgs::srv::ArmForceTrajectory_Response>()
{
  return &::spot_msgs::srv::rosidl_typesupport_introspection_cpp::ArmForceTrajectory_Response_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, spot_msgs, srv, ArmForceTrajectory_Response)() {
  return &::spot_msgs::srv::rosidl_typesupport_introspection_cpp::ArmForceTrajectory_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"
// already included above
// #include "spot_msgs/srv/detail/arm_force_trajectory__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/service_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/service_type_support_decl.hpp"

namespace spot_msgs
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

// this is intentionally not const to allow initialization later to prevent an initialization race
static ::rosidl_typesupport_introspection_cpp::ServiceMembers ArmForceTrajectory_service_members = {
  "spot_msgs::srv",  // service namespace
  "ArmForceTrajectory",  // service name
  // these two fields are initialized below on the first access
  // see get_service_type_support_handle<spot_msgs::srv::ArmForceTrajectory>()
  nullptr,  // request message
  nullptr  // response message
};

static const rosidl_service_type_support_t ArmForceTrajectory_service_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &ArmForceTrajectory_service_members,
  get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace spot_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<spot_msgs::srv::ArmForceTrajectory>()
{
  // get a handle to the value to be returned
  auto service_type_support =
    &::spot_msgs::srv::rosidl_typesupport_introspection_cpp::ArmForceTrajectory_service_type_support_handle;
  // get a non-const and properly typed version of the data void *
  auto service_members = const_cast<::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
    static_cast<const ::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
      service_type_support->data));
  // make sure that both the request_members_ and the response_members_ are initialized
  // if they are not, initialize them
  if (
    service_members->request_members_ == nullptr ||
    service_members->response_members_ == nullptr)
  {
    // initialize the request_members_ with the static function from the external library
    service_members->request_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::spot_msgs::srv::ArmForceTrajectory_Request
      >()->data
      );
    // initialize the response_members_ with the static function from the external library
    service_members->response_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::spot_msgs::srv::ArmForceTrajectory_Response
      >()->data
      );
  }
  // finally return the properly initialized service_type_support handle
  return service_type_support;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, spot_msgs, srv, ArmForceTrajectory)() {
  return ::rosidl_typesupport_introspection_cpp::get_service_type_support_handle<spot_msgs::srv::ArmForceTrajectory>();
}

#ifdef __cplusplus
}
#endif

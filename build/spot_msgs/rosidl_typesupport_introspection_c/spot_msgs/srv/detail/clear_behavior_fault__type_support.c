// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from spot_msgs:srv/ClearBehaviorFault.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "spot_msgs/srv/detail/clear_behavior_fault__rosidl_typesupport_introspection_c.h"
#include "spot_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "spot_msgs/srv/detail/clear_behavior_fault__functions.h"
#include "spot_msgs/srv/detail/clear_behavior_fault__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void ClearBehaviorFault_Request__rosidl_typesupport_introspection_c__ClearBehaviorFault_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  spot_msgs__srv__ClearBehaviorFault_Request__init(message_memory);
}

void ClearBehaviorFault_Request__rosidl_typesupport_introspection_c__ClearBehaviorFault_Request_fini_function(void * message_memory)
{
  spot_msgs__srv__ClearBehaviorFault_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember ClearBehaviorFault_Request__rosidl_typesupport_introspection_c__ClearBehaviorFault_Request_message_member_array[1] = {
  {
    "id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(spot_msgs__srv__ClearBehaviorFault_Request, id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ClearBehaviorFault_Request__rosidl_typesupport_introspection_c__ClearBehaviorFault_Request_message_members = {
  "spot_msgs__srv",  // message namespace
  "ClearBehaviorFault_Request",  // message name
  1,  // number of fields
  sizeof(spot_msgs__srv__ClearBehaviorFault_Request),
  ClearBehaviorFault_Request__rosidl_typesupport_introspection_c__ClearBehaviorFault_Request_message_member_array,  // message members
  ClearBehaviorFault_Request__rosidl_typesupport_introspection_c__ClearBehaviorFault_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  ClearBehaviorFault_Request__rosidl_typesupport_introspection_c__ClearBehaviorFault_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ClearBehaviorFault_Request__rosidl_typesupport_introspection_c__ClearBehaviorFault_Request_message_type_support_handle = {
  0,
  &ClearBehaviorFault_Request__rosidl_typesupport_introspection_c__ClearBehaviorFault_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_spot_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, spot_msgs, srv, ClearBehaviorFault_Request)() {
  if (!ClearBehaviorFault_Request__rosidl_typesupport_introspection_c__ClearBehaviorFault_Request_message_type_support_handle.typesupport_identifier) {
    ClearBehaviorFault_Request__rosidl_typesupport_introspection_c__ClearBehaviorFault_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ClearBehaviorFault_Request__rosidl_typesupport_introspection_c__ClearBehaviorFault_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "spot_msgs/srv/detail/clear_behavior_fault__rosidl_typesupport_introspection_c.h"
// already included above
// #include "spot_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "spot_msgs/srv/detail/clear_behavior_fault__functions.h"
// already included above
// #include "spot_msgs/srv/detail/clear_behavior_fault__struct.h"


// Include directives for member types
// Member `message`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void ClearBehaviorFault_Response__rosidl_typesupport_introspection_c__ClearBehaviorFault_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  spot_msgs__srv__ClearBehaviorFault_Response__init(message_memory);
}

void ClearBehaviorFault_Response__rosidl_typesupport_introspection_c__ClearBehaviorFault_Response_fini_function(void * message_memory)
{
  spot_msgs__srv__ClearBehaviorFault_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember ClearBehaviorFault_Response__rosidl_typesupport_introspection_c__ClearBehaviorFault_Response_message_member_array[2] = {
  {
    "success",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(spot_msgs__srv__ClearBehaviorFault_Response, success),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "message",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(spot_msgs__srv__ClearBehaviorFault_Response, message),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ClearBehaviorFault_Response__rosidl_typesupport_introspection_c__ClearBehaviorFault_Response_message_members = {
  "spot_msgs__srv",  // message namespace
  "ClearBehaviorFault_Response",  // message name
  2,  // number of fields
  sizeof(spot_msgs__srv__ClearBehaviorFault_Response),
  ClearBehaviorFault_Response__rosidl_typesupport_introspection_c__ClearBehaviorFault_Response_message_member_array,  // message members
  ClearBehaviorFault_Response__rosidl_typesupport_introspection_c__ClearBehaviorFault_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  ClearBehaviorFault_Response__rosidl_typesupport_introspection_c__ClearBehaviorFault_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ClearBehaviorFault_Response__rosidl_typesupport_introspection_c__ClearBehaviorFault_Response_message_type_support_handle = {
  0,
  &ClearBehaviorFault_Response__rosidl_typesupport_introspection_c__ClearBehaviorFault_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_spot_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, spot_msgs, srv, ClearBehaviorFault_Response)() {
  if (!ClearBehaviorFault_Response__rosidl_typesupport_introspection_c__ClearBehaviorFault_Response_message_type_support_handle.typesupport_identifier) {
    ClearBehaviorFault_Response__rosidl_typesupport_introspection_c__ClearBehaviorFault_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ClearBehaviorFault_Response__rosidl_typesupport_introspection_c__ClearBehaviorFault_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "spot_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "spot_msgs/srv/detail/clear_behavior_fault__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers spot_msgs__srv__detail__clear_behavior_fault__rosidl_typesupport_introspection_c__ClearBehaviorFault_service_members = {
  "spot_msgs__srv",  // service namespace
  "ClearBehaviorFault",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // spot_msgs__srv__detail__clear_behavior_fault__rosidl_typesupport_introspection_c__ClearBehaviorFault_Request_message_type_support_handle,
  NULL  // response message
  // spot_msgs__srv__detail__clear_behavior_fault__rosidl_typesupport_introspection_c__ClearBehaviorFault_Response_message_type_support_handle
};

static rosidl_service_type_support_t spot_msgs__srv__detail__clear_behavior_fault__rosidl_typesupport_introspection_c__ClearBehaviorFault_service_type_support_handle = {
  0,
  &spot_msgs__srv__detail__clear_behavior_fault__rosidl_typesupport_introspection_c__ClearBehaviorFault_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, spot_msgs, srv, ClearBehaviorFault_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, spot_msgs, srv, ClearBehaviorFault_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_spot_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, spot_msgs, srv, ClearBehaviorFault)() {
  if (!spot_msgs__srv__detail__clear_behavior_fault__rosidl_typesupport_introspection_c__ClearBehaviorFault_service_type_support_handle.typesupport_identifier) {
    spot_msgs__srv__detail__clear_behavior_fault__rosidl_typesupport_introspection_c__ClearBehaviorFault_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)spot_msgs__srv__detail__clear_behavior_fault__rosidl_typesupport_introspection_c__ClearBehaviorFault_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, spot_msgs, srv, ClearBehaviorFault_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, spot_msgs, srv, ClearBehaviorFault_Response)()->data;
  }

  return &spot_msgs__srv__detail__clear_behavior_fault__rosidl_typesupport_introspection_c__ClearBehaviorFault_service_type_support_handle;
}

// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from spot_msgs:action/NavigateTo.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "spot_msgs/action/detail/navigate_to__rosidl_typesupport_introspection_c.h"
#include "spot_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "spot_msgs/action/detail/navigate_to__functions.h"
#include "spot_msgs/action/detail/navigate_to__struct.h"


// Include directives for member types
// Member `upload_path`
// Member `navigate_to`
// Member `initial_localization_waypoint`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void NavigateTo_Goal__rosidl_typesupport_introspection_c__NavigateTo_Goal_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  spot_msgs__action__NavigateTo_Goal__init(message_memory);
}

void NavigateTo_Goal__rosidl_typesupport_introspection_c__NavigateTo_Goal_fini_function(void * message_memory)
{
  spot_msgs__action__NavigateTo_Goal__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember NavigateTo_Goal__rosidl_typesupport_introspection_c__NavigateTo_Goal_message_member_array[4] = {
  {
    "upload_path",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(spot_msgs__action__NavigateTo_Goal, upload_path),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "navigate_to",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(spot_msgs__action__NavigateTo_Goal, navigate_to),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "initial_localization_fiducial",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(spot_msgs__action__NavigateTo_Goal, initial_localization_fiducial),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "initial_localization_waypoint",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(spot_msgs__action__NavigateTo_Goal, initial_localization_waypoint),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers NavigateTo_Goal__rosidl_typesupport_introspection_c__NavigateTo_Goal_message_members = {
  "spot_msgs__action",  // message namespace
  "NavigateTo_Goal",  // message name
  4,  // number of fields
  sizeof(spot_msgs__action__NavigateTo_Goal),
  NavigateTo_Goal__rosidl_typesupport_introspection_c__NavigateTo_Goal_message_member_array,  // message members
  NavigateTo_Goal__rosidl_typesupport_introspection_c__NavigateTo_Goal_init_function,  // function to initialize message memory (memory has to be allocated)
  NavigateTo_Goal__rosidl_typesupport_introspection_c__NavigateTo_Goal_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t NavigateTo_Goal__rosidl_typesupport_introspection_c__NavigateTo_Goal_message_type_support_handle = {
  0,
  &NavigateTo_Goal__rosidl_typesupport_introspection_c__NavigateTo_Goal_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_spot_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, spot_msgs, action, NavigateTo_Goal)() {
  if (!NavigateTo_Goal__rosidl_typesupport_introspection_c__NavigateTo_Goal_message_type_support_handle.typesupport_identifier) {
    NavigateTo_Goal__rosidl_typesupport_introspection_c__NavigateTo_Goal_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &NavigateTo_Goal__rosidl_typesupport_introspection_c__NavigateTo_Goal_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "spot_msgs/action/detail/navigate_to__rosidl_typesupport_introspection_c.h"
// already included above
// #include "spot_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "spot_msgs/action/detail/navigate_to__functions.h"
// already included above
// #include "spot_msgs/action/detail/navigate_to__struct.h"


// Include directives for member types
// Member `message`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void NavigateTo_Result__rosidl_typesupport_introspection_c__NavigateTo_Result_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  spot_msgs__action__NavigateTo_Result__init(message_memory);
}

void NavigateTo_Result__rosidl_typesupport_introspection_c__NavigateTo_Result_fini_function(void * message_memory)
{
  spot_msgs__action__NavigateTo_Result__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember NavigateTo_Result__rosidl_typesupport_introspection_c__NavigateTo_Result_message_member_array[2] = {
  {
    "success",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(spot_msgs__action__NavigateTo_Result, success),  // bytes offset in struct
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
    offsetof(spot_msgs__action__NavigateTo_Result, message),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers NavigateTo_Result__rosidl_typesupport_introspection_c__NavigateTo_Result_message_members = {
  "spot_msgs__action",  // message namespace
  "NavigateTo_Result",  // message name
  2,  // number of fields
  sizeof(spot_msgs__action__NavigateTo_Result),
  NavigateTo_Result__rosidl_typesupport_introspection_c__NavigateTo_Result_message_member_array,  // message members
  NavigateTo_Result__rosidl_typesupport_introspection_c__NavigateTo_Result_init_function,  // function to initialize message memory (memory has to be allocated)
  NavigateTo_Result__rosidl_typesupport_introspection_c__NavigateTo_Result_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t NavigateTo_Result__rosidl_typesupport_introspection_c__NavigateTo_Result_message_type_support_handle = {
  0,
  &NavigateTo_Result__rosidl_typesupport_introspection_c__NavigateTo_Result_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_spot_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, spot_msgs, action, NavigateTo_Result)() {
  if (!NavigateTo_Result__rosidl_typesupport_introspection_c__NavigateTo_Result_message_type_support_handle.typesupport_identifier) {
    NavigateTo_Result__rosidl_typesupport_introspection_c__NavigateTo_Result_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &NavigateTo_Result__rosidl_typesupport_introspection_c__NavigateTo_Result_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "spot_msgs/action/detail/navigate_to__rosidl_typesupport_introspection_c.h"
// already included above
// #include "spot_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "spot_msgs/action/detail/navigate_to__functions.h"
// already included above
// #include "spot_msgs/action/detail/navigate_to__struct.h"


// Include directives for member types
// Member `waypoint_id`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void NavigateTo_Feedback__rosidl_typesupport_introspection_c__NavigateTo_Feedback_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  spot_msgs__action__NavigateTo_Feedback__init(message_memory);
}

void NavigateTo_Feedback__rosidl_typesupport_introspection_c__NavigateTo_Feedback_fini_function(void * message_memory)
{
  spot_msgs__action__NavigateTo_Feedback__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember NavigateTo_Feedback__rosidl_typesupport_introspection_c__NavigateTo_Feedback_message_member_array[1] = {
  {
    "waypoint_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(spot_msgs__action__NavigateTo_Feedback, waypoint_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers NavigateTo_Feedback__rosidl_typesupport_introspection_c__NavigateTo_Feedback_message_members = {
  "spot_msgs__action",  // message namespace
  "NavigateTo_Feedback",  // message name
  1,  // number of fields
  sizeof(spot_msgs__action__NavigateTo_Feedback),
  NavigateTo_Feedback__rosidl_typesupport_introspection_c__NavigateTo_Feedback_message_member_array,  // message members
  NavigateTo_Feedback__rosidl_typesupport_introspection_c__NavigateTo_Feedback_init_function,  // function to initialize message memory (memory has to be allocated)
  NavigateTo_Feedback__rosidl_typesupport_introspection_c__NavigateTo_Feedback_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t NavigateTo_Feedback__rosidl_typesupport_introspection_c__NavigateTo_Feedback_message_type_support_handle = {
  0,
  &NavigateTo_Feedback__rosidl_typesupport_introspection_c__NavigateTo_Feedback_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_spot_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, spot_msgs, action, NavigateTo_Feedback)() {
  if (!NavigateTo_Feedback__rosidl_typesupport_introspection_c__NavigateTo_Feedback_message_type_support_handle.typesupport_identifier) {
    NavigateTo_Feedback__rosidl_typesupport_introspection_c__NavigateTo_Feedback_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &NavigateTo_Feedback__rosidl_typesupport_introspection_c__NavigateTo_Feedback_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "spot_msgs/action/detail/navigate_to__rosidl_typesupport_introspection_c.h"
// already included above
// #include "spot_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "spot_msgs/action/detail/navigate_to__functions.h"
// already included above
// #include "spot_msgs/action/detail/navigate_to__struct.h"


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
#include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"
// Member `goal`
#include "spot_msgs/action/navigate_to.h"
// Member `goal`
// already included above
// #include "spot_msgs/action/detail/navigate_to__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void NavigateTo_SendGoal_Request__rosidl_typesupport_introspection_c__NavigateTo_SendGoal_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  spot_msgs__action__NavigateTo_SendGoal_Request__init(message_memory);
}

void NavigateTo_SendGoal_Request__rosidl_typesupport_introspection_c__NavigateTo_SendGoal_Request_fini_function(void * message_memory)
{
  spot_msgs__action__NavigateTo_SendGoal_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember NavigateTo_SendGoal_Request__rosidl_typesupport_introspection_c__NavigateTo_SendGoal_Request_message_member_array[2] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(spot_msgs__action__NavigateTo_SendGoal_Request, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "goal",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(spot_msgs__action__NavigateTo_SendGoal_Request, goal),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers NavigateTo_SendGoal_Request__rosidl_typesupport_introspection_c__NavigateTo_SendGoal_Request_message_members = {
  "spot_msgs__action",  // message namespace
  "NavigateTo_SendGoal_Request",  // message name
  2,  // number of fields
  sizeof(spot_msgs__action__NavigateTo_SendGoal_Request),
  NavigateTo_SendGoal_Request__rosidl_typesupport_introspection_c__NavigateTo_SendGoal_Request_message_member_array,  // message members
  NavigateTo_SendGoal_Request__rosidl_typesupport_introspection_c__NavigateTo_SendGoal_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  NavigateTo_SendGoal_Request__rosidl_typesupport_introspection_c__NavigateTo_SendGoal_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t NavigateTo_SendGoal_Request__rosidl_typesupport_introspection_c__NavigateTo_SendGoal_Request_message_type_support_handle = {
  0,
  &NavigateTo_SendGoal_Request__rosidl_typesupport_introspection_c__NavigateTo_SendGoal_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_spot_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, spot_msgs, action, NavigateTo_SendGoal_Request)() {
  NavigateTo_SendGoal_Request__rosidl_typesupport_introspection_c__NavigateTo_SendGoal_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  NavigateTo_SendGoal_Request__rosidl_typesupport_introspection_c__NavigateTo_SendGoal_Request_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, spot_msgs, action, NavigateTo_Goal)();
  if (!NavigateTo_SendGoal_Request__rosidl_typesupport_introspection_c__NavigateTo_SendGoal_Request_message_type_support_handle.typesupport_identifier) {
    NavigateTo_SendGoal_Request__rosidl_typesupport_introspection_c__NavigateTo_SendGoal_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &NavigateTo_SendGoal_Request__rosidl_typesupport_introspection_c__NavigateTo_SendGoal_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "spot_msgs/action/detail/navigate_to__rosidl_typesupport_introspection_c.h"
// already included above
// #include "spot_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "spot_msgs/action/detail/navigate_to__functions.h"
// already included above
// #include "spot_msgs/action/detail/navigate_to__struct.h"


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/time.h"
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void NavigateTo_SendGoal_Response__rosidl_typesupport_introspection_c__NavigateTo_SendGoal_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  spot_msgs__action__NavigateTo_SendGoal_Response__init(message_memory);
}

void NavigateTo_SendGoal_Response__rosidl_typesupport_introspection_c__NavigateTo_SendGoal_Response_fini_function(void * message_memory)
{
  spot_msgs__action__NavigateTo_SendGoal_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember NavigateTo_SendGoal_Response__rosidl_typesupport_introspection_c__NavigateTo_SendGoal_Response_message_member_array[2] = {
  {
    "accepted",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(spot_msgs__action__NavigateTo_SendGoal_Response, accepted),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "stamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(spot_msgs__action__NavigateTo_SendGoal_Response, stamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers NavigateTo_SendGoal_Response__rosidl_typesupport_introspection_c__NavigateTo_SendGoal_Response_message_members = {
  "spot_msgs__action",  // message namespace
  "NavigateTo_SendGoal_Response",  // message name
  2,  // number of fields
  sizeof(spot_msgs__action__NavigateTo_SendGoal_Response),
  NavigateTo_SendGoal_Response__rosidl_typesupport_introspection_c__NavigateTo_SendGoal_Response_message_member_array,  // message members
  NavigateTo_SendGoal_Response__rosidl_typesupport_introspection_c__NavigateTo_SendGoal_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  NavigateTo_SendGoal_Response__rosidl_typesupport_introspection_c__NavigateTo_SendGoal_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t NavigateTo_SendGoal_Response__rosidl_typesupport_introspection_c__NavigateTo_SendGoal_Response_message_type_support_handle = {
  0,
  &NavigateTo_SendGoal_Response__rosidl_typesupport_introspection_c__NavigateTo_SendGoal_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_spot_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, spot_msgs, action, NavigateTo_SendGoal_Response)() {
  NavigateTo_SendGoal_Response__rosidl_typesupport_introspection_c__NavigateTo_SendGoal_Response_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  if (!NavigateTo_SendGoal_Response__rosidl_typesupport_introspection_c__NavigateTo_SendGoal_Response_message_type_support_handle.typesupport_identifier) {
    NavigateTo_SendGoal_Response__rosidl_typesupport_introspection_c__NavigateTo_SendGoal_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &NavigateTo_SendGoal_Response__rosidl_typesupport_introspection_c__NavigateTo_SendGoal_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "spot_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "spot_msgs/action/detail/navigate_to__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers spot_msgs__action__detail__navigate_to__rosidl_typesupport_introspection_c__NavigateTo_SendGoal_service_members = {
  "spot_msgs__action",  // service namespace
  "NavigateTo_SendGoal",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // spot_msgs__action__detail__navigate_to__rosidl_typesupport_introspection_c__NavigateTo_SendGoal_Request_message_type_support_handle,
  NULL  // response message
  // spot_msgs__action__detail__navigate_to__rosidl_typesupport_introspection_c__NavigateTo_SendGoal_Response_message_type_support_handle
};

static rosidl_service_type_support_t spot_msgs__action__detail__navigate_to__rosidl_typesupport_introspection_c__NavigateTo_SendGoal_service_type_support_handle = {
  0,
  &spot_msgs__action__detail__navigate_to__rosidl_typesupport_introspection_c__NavigateTo_SendGoal_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, spot_msgs, action, NavigateTo_SendGoal_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, spot_msgs, action, NavigateTo_SendGoal_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_spot_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, spot_msgs, action, NavigateTo_SendGoal)() {
  if (!spot_msgs__action__detail__navigate_to__rosidl_typesupport_introspection_c__NavigateTo_SendGoal_service_type_support_handle.typesupport_identifier) {
    spot_msgs__action__detail__navigate_to__rosidl_typesupport_introspection_c__NavigateTo_SendGoal_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)spot_msgs__action__detail__navigate_to__rosidl_typesupport_introspection_c__NavigateTo_SendGoal_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, spot_msgs, action, NavigateTo_SendGoal_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, spot_msgs, action, NavigateTo_SendGoal_Response)()->data;
  }

  return &spot_msgs__action__detail__navigate_to__rosidl_typesupport_introspection_c__NavigateTo_SendGoal_service_type_support_handle;
}

// already included above
// #include <stddef.h>
// already included above
// #include "spot_msgs/action/detail/navigate_to__rosidl_typesupport_introspection_c.h"
// already included above
// #include "spot_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "spot_msgs/action/detail/navigate_to__functions.h"
// already included above
// #include "spot_msgs/action/detail/navigate_to__struct.h"


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void NavigateTo_GetResult_Request__rosidl_typesupport_introspection_c__NavigateTo_GetResult_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  spot_msgs__action__NavigateTo_GetResult_Request__init(message_memory);
}

void NavigateTo_GetResult_Request__rosidl_typesupport_introspection_c__NavigateTo_GetResult_Request_fini_function(void * message_memory)
{
  spot_msgs__action__NavigateTo_GetResult_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember NavigateTo_GetResult_Request__rosidl_typesupport_introspection_c__NavigateTo_GetResult_Request_message_member_array[1] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(spot_msgs__action__NavigateTo_GetResult_Request, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers NavigateTo_GetResult_Request__rosidl_typesupport_introspection_c__NavigateTo_GetResult_Request_message_members = {
  "spot_msgs__action",  // message namespace
  "NavigateTo_GetResult_Request",  // message name
  1,  // number of fields
  sizeof(spot_msgs__action__NavigateTo_GetResult_Request),
  NavigateTo_GetResult_Request__rosidl_typesupport_introspection_c__NavigateTo_GetResult_Request_message_member_array,  // message members
  NavigateTo_GetResult_Request__rosidl_typesupport_introspection_c__NavigateTo_GetResult_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  NavigateTo_GetResult_Request__rosidl_typesupport_introspection_c__NavigateTo_GetResult_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t NavigateTo_GetResult_Request__rosidl_typesupport_introspection_c__NavigateTo_GetResult_Request_message_type_support_handle = {
  0,
  &NavigateTo_GetResult_Request__rosidl_typesupport_introspection_c__NavigateTo_GetResult_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_spot_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, spot_msgs, action, NavigateTo_GetResult_Request)() {
  NavigateTo_GetResult_Request__rosidl_typesupport_introspection_c__NavigateTo_GetResult_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  if (!NavigateTo_GetResult_Request__rosidl_typesupport_introspection_c__NavigateTo_GetResult_Request_message_type_support_handle.typesupport_identifier) {
    NavigateTo_GetResult_Request__rosidl_typesupport_introspection_c__NavigateTo_GetResult_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &NavigateTo_GetResult_Request__rosidl_typesupport_introspection_c__NavigateTo_GetResult_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "spot_msgs/action/detail/navigate_to__rosidl_typesupport_introspection_c.h"
// already included above
// #include "spot_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "spot_msgs/action/detail/navigate_to__functions.h"
// already included above
// #include "spot_msgs/action/detail/navigate_to__struct.h"


// Include directives for member types
// Member `result`
// already included above
// #include "spot_msgs/action/navigate_to.h"
// Member `result`
// already included above
// #include "spot_msgs/action/detail/navigate_to__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void NavigateTo_GetResult_Response__rosidl_typesupport_introspection_c__NavigateTo_GetResult_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  spot_msgs__action__NavigateTo_GetResult_Response__init(message_memory);
}

void NavigateTo_GetResult_Response__rosidl_typesupport_introspection_c__NavigateTo_GetResult_Response_fini_function(void * message_memory)
{
  spot_msgs__action__NavigateTo_GetResult_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember NavigateTo_GetResult_Response__rosidl_typesupport_introspection_c__NavigateTo_GetResult_Response_message_member_array[2] = {
  {
    "status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(spot_msgs__action__NavigateTo_GetResult_Response, status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "result",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(spot_msgs__action__NavigateTo_GetResult_Response, result),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers NavigateTo_GetResult_Response__rosidl_typesupport_introspection_c__NavigateTo_GetResult_Response_message_members = {
  "spot_msgs__action",  // message namespace
  "NavigateTo_GetResult_Response",  // message name
  2,  // number of fields
  sizeof(spot_msgs__action__NavigateTo_GetResult_Response),
  NavigateTo_GetResult_Response__rosidl_typesupport_introspection_c__NavigateTo_GetResult_Response_message_member_array,  // message members
  NavigateTo_GetResult_Response__rosidl_typesupport_introspection_c__NavigateTo_GetResult_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  NavigateTo_GetResult_Response__rosidl_typesupport_introspection_c__NavigateTo_GetResult_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t NavigateTo_GetResult_Response__rosidl_typesupport_introspection_c__NavigateTo_GetResult_Response_message_type_support_handle = {
  0,
  &NavigateTo_GetResult_Response__rosidl_typesupport_introspection_c__NavigateTo_GetResult_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_spot_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, spot_msgs, action, NavigateTo_GetResult_Response)() {
  NavigateTo_GetResult_Response__rosidl_typesupport_introspection_c__NavigateTo_GetResult_Response_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, spot_msgs, action, NavigateTo_Result)();
  if (!NavigateTo_GetResult_Response__rosidl_typesupport_introspection_c__NavigateTo_GetResult_Response_message_type_support_handle.typesupport_identifier) {
    NavigateTo_GetResult_Response__rosidl_typesupport_introspection_c__NavigateTo_GetResult_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &NavigateTo_GetResult_Response__rosidl_typesupport_introspection_c__NavigateTo_GetResult_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "spot_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "spot_msgs/action/detail/navigate_to__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers spot_msgs__action__detail__navigate_to__rosidl_typesupport_introspection_c__NavigateTo_GetResult_service_members = {
  "spot_msgs__action",  // service namespace
  "NavigateTo_GetResult",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // spot_msgs__action__detail__navigate_to__rosidl_typesupport_introspection_c__NavigateTo_GetResult_Request_message_type_support_handle,
  NULL  // response message
  // spot_msgs__action__detail__navigate_to__rosidl_typesupport_introspection_c__NavigateTo_GetResult_Response_message_type_support_handle
};

static rosidl_service_type_support_t spot_msgs__action__detail__navigate_to__rosidl_typesupport_introspection_c__NavigateTo_GetResult_service_type_support_handle = {
  0,
  &spot_msgs__action__detail__navigate_to__rosidl_typesupport_introspection_c__NavigateTo_GetResult_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, spot_msgs, action, NavigateTo_GetResult_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, spot_msgs, action, NavigateTo_GetResult_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_spot_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, spot_msgs, action, NavigateTo_GetResult)() {
  if (!spot_msgs__action__detail__navigate_to__rosidl_typesupport_introspection_c__NavigateTo_GetResult_service_type_support_handle.typesupport_identifier) {
    spot_msgs__action__detail__navigate_to__rosidl_typesupport_introspection_c__NavigateTo_GetResult_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)spot_msgs__action__detail__navigate_to__rosidl_typesupport_introspection_c__NavigateTo_GetResult_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, spot_msgs, action, NavigateTo_GetResult_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, spot_msgs, action, NavigateTo_GetResult_Response)()->data;
  }

  return &spot_msgs__action__detail__navigate_to__rosidl_typesupport_introspection_c__NavigateTo_GetResult_service_type_support_handle;
}

// already included above
// #include <stddef.h>
// already included above
// #include "spot_msgs/action/detail/navigate_to__rosidl_typesupport_introspection_c.h"
// already included above
// #include "spot_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "spot_msgs/action/detail/navigate_to__functions.h"
// already included above
// #include "spot_msgs/action/detail/navigate_to__struct.h"


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"
// Member `feedback`
// already included above
// #include "spot_msgs/action/navigate_to.h"
// Member `feedback`
// already included above
// #include "spot_msgs/action/detail/navigate_to__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void NavigateTo_FeedbackMessage__rosidl_typesupport_introspection_c__NavigateTo_FeedbackMessage_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  spot_msgs__action__NavigateTo_FeedbackMessage__init(message_memory);
}

void NavigateTo_FeedbackMessage__rosidl_typesupport_introspection_c__NavigateTo_FeedbackMessage_fini_function(void * message_memory)
{
  spot_msgs__action__NavigateTo_FeedbackMessage__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember NavigateTo_FeedbackMessage__rosidl_typesupport_introspection_c__NavigateTo_FeedbackMessage_message_member_array[2] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(spot_msgs__action__NavigateTo_FeedbackMessage, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "feedback",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(spot_msgs__action__NavigateTo_FeedbackMessage, feedback),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers NavigateTo_FeedbackMessage__rosidl_typesupport_introspection_c__NavigateTo_FeedbackMessage_message_members = {
  "spot_msgs__action",  // message namespace
  "NavigateTo_FeedbackMessage",  // message name
  2,  // number of fields
  sizeof(spot_msgs__action__NavigateTo_FeedbackMessage),
  NavigateTo_FeedbackMessage__rosidl_typesupport_introspection_c__NavigateTo_FeedbackMessage_message_member_array,  // message members
  NavigateTo_FeedbackMessage__rosidl_typesupport_introspection_c__NavigateTo_FeedbackMessage_init_function,  // function to initialize message memory (memory has to be allocated)
  NavigateTo_FeedbackMessage__rosidl_typesupport_introspection_c__NavigateTo_FeedbackMessage_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t NavigateTo_FeedbackMessage__rosidl_typesupport_introspection_c__NavigateTo_FeedbackMessage_message_type_support_handle = {
  0,
  &NavigateTo_FeedbackMessage__rosidl_typesupport_introspection_c__NavigateTo_FeedbackMessage_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_spot_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, spot_msgs, action, NavigateTo_FeedbackMessage)() {
  NavigateTo_FeedbackMessage__rosidl_typesupport_introspection_c__NavigateTo_FeedbackMessage_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  NavigateTo_FeedbackMessage__rosidl_typesupport_introspection_c__NavigateTo_FeedbackMessage_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, spot_msgs, action, NavigateTo_Feedback)();
  if (!NavigateTo_FeedbackMessage__rosidl_typesupport_introspection_c__NavigateTo_FeedbackMessage_message_type_support_handle.typesupport_identifier) {
    NavigateTo_FeedbackMessage__rosidl_typesupport_introspection_c__NavigateTo_FeedbackMessage_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &NavigateTo_FeedbackMessage__rosidl_typesupport_introspection_c__NavigateTo_FeedbackMessage_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from spot_msgs:srv/ArmForceTrajectory.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "spot_msgs/msg/rosidl_typesupport_c__visibility_control.h"
#include "spot_msgs/srv/detail/arm_force_trajectory__struct.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace spot_msgs
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _ArmForceTrajectory_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ArmForceTrajectory_Request_type_support_ids_t;

static const _ArmForceTrajectory_Request_type_support_ids_t _ArmForceTrajectory_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _ArmForceTrajectory_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ArmForceTrajectory_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ArmForceTrajectory_Request_type_support_symbol_names_t _ArmForceTrajectory_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, spot_msgs, srv, ArmForceTrajectory_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, spot_msgs, srv, ArmForceTrajectory_Request)),
  }
};

typedef struct _ArmForceTrajectory_Request_type_support_data_t
{
  void * data[2];
} _ArmForceTrajectory_Request_type_support_data_t;

static _ArmForceTrajectory_Request_type_support_data_t _ArmForceTrajectory_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ArmForceTrajectory_Request_message_typesupport_map = {
  2,
  "spot_msgs",
  &_ArmForceTrajectory_Request_message_typesupport_ids.typesupport_identifier[0],
  &_ArmForceTrajectory_Request_message_typesupport_symbol_names.symbol_name[0],
  &_ArmForceTrajectory_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t ArmForceTrajectory_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ArmForceTrajectory_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace spot_msgs

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_C_EXPORT_spot_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, spot_msgs, srv, ArmForceTrajectory_Request)() {
  return &::spot_msgs::srv::rosidl_typesupport_c::ArmForceTrajectory_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "spot_msgs/msg/rosidl_typesupport_c__visibility_control.h"
// already included above
// #include "spot_msgs/srv/detail/arm_force_trajectory__struct.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace spot_msgs
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _ArmForceTrajectory_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ArmForceTrajectory_Response_type_support_ids_t;

static const _ArmForceTrajectory_Response_type_support_ids_t _ArmForceTrajectory_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _ArmForceTrajectory_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ArmForceTrajectory_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ArmForceTrajectory_Response_type_support_symbol_names_t _ArmForceTrajectory_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, spot_msgs, srv, ArmForceTrajectory_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, spot_msgs, srv, ArmForceTrajectory_Response)),
  }
};

typedef struct _ArmForceTrajectory_Response_type_support_data_t
{
  void * data[2];
} _ArmForceTrajectory_Response_type_support_data_t;

static _ArmForceTrajectory_Response_type_support_data_t _ArmForceTrajectory_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ArmForceTrajectory_Response_message_typesupport_map = {
  2,
  "spot_msgs",
  &_ArmForceTrajectory_Response_message_typesupport_ids.typesupport_identifier[0],
  &_ArmForceTrajectory_Response_message_typesupport_symbol_names.symbol_name[0],
  &_ArmForceTrajectory_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t ArmForceTrajectory_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ArmForceTrajectory_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace spot_msgs

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_C_EXPORT_spot_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, spot_msgs, srv, ArmForceTrajectory_Response)() {
  return &::spot_msgs::srv::rosidl_typesupport_c::ArmForceTrajectory_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "spot_msgs/msg/rosidl_typesupport_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace spot_msgs
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _ArmForceTrajectory_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ArmForceTrajectory_type_support_ids_t;

static const _ArmForceTrajectory_type_support_ids_t _ArmForceTrajectory_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _ArmForceTrajectory_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ArmForceTrajectory_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ArmForceTrajectory_type_support_symbol_names_t _ArmForceTrajectory_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, spot_msgs, srv, ArmForceTrajectory)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, spot_msgs, srv, ArmForceTrajectory)),
  }
};

typedef struct _ArmForceTrajectory_type_support_data_t
{
  void * data[2];
} _ArmForceTrajectory_type_support_data_t;

static _ArmForceTrajectory_type_support_data_t _ArmForceTrajectory_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ArmForceTrajectory_service_typesupport_map = {
  2,
  "spot_msgs",
  &_ArmForceTrajectory_service_typesupport_ids.typesupport_identifier[0],
  &_ArmForceTrajectory_service_typesupport_symbol_names.symbol_name[0],
  &_ArmForceTrajectory_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t ArmForceTrajectory_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ArmForceTrajectory_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace spot_msgs

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_C_EXPORT_spot_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, spot_msgs, srv, ArmForceTrajectory)() {
  return &::spot_msgs::srv::rosidl_typesupport_c::ArmForceTrajectory_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif

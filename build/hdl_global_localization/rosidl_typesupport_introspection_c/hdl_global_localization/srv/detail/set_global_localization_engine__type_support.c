// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from hdl_global_localization:srv/SetGlobalLocalizationEngine.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "hdl_global_localization/srv/detail/set_global_localization_engine__rosidl_typesupport_introspection_c.h"
#include "hdl_global_localization/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "hdl_global_localization/srv/detail/set_global_localization_engine__functions.h"
#include "hdl_global_localization/srv/detail/set_global_localization_engine__struct.h"


// Include directives for member types
// Member `engine_name`
#include "std_msgs/msg/string.h"
// Member `engine_name`
#include "std_msgs/msg/detail/string__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void SetGlobalLocalizationEngine_Request__rosidl_typesupport_introspection_c__SetGlobalLocalizationEngine_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  hdl_global_localization__srv__SetGlobalLocalizationEngine_Request__init(message_memory);
}

void SetGlobalLocalizationEngine_Request__rosidl_typesupport_introspection_c__SetGlobalLocalizationEngine_Request_fini_function(void * message_memory)
{
  hdl_global_localization__srv__SetGlobalLocalizationEngine_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember SetGlobalLocalizationEngine_Request__rosidl_typesupport_introspection_c__SetGlobalLocalizationEngine_Request_message_member_array[1] = {
  {
    "engine_name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(hdl_global_localization__srv__SetGlobalLocalizationEngine_Request, engine_name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers SetGlobalLocalizationEngine_Request__rosidl_typesupport_introspection_c__SetGlobalLocalizationEngine_Request_message_members = {
  "hdl_global_localization__srv",  // message namespace
  "SetGlobalLocalizationEngine_Request",  // message name
  1,  // number of fields
  sizeof(hdl_global_localization__srv__SetGlobalLocalizationEngine_Request),
  SetGlobalLocalizationEngine_Request__rosidl_typesupport_introspection_c__SetGlobalLocalizationEngine_Request_message_member_array,  // message members
  SetGlobalLocalizationEngine_Request__rosidl_typesupport_introspection_c__SetGlobalLocalizationEngine_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  SetGlobalLocalizationEngine_Request__rosidl_typesupport_introspection_c__SetGlobalLocalizationEngine_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t SetGlobalLocalizationEngine_Request__rosidl_typesupport_introspection_c__SetGlobalLocalizationEngine_Request_message_type_support_handle = {
  0,
  &SetGlobalLocalizationEngine_Request__rosidl_typesupport_introspection_c__SetGlobalLocalizationEngine_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_hdl_global_localization
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, hdl_global_localization, srv, SetGlobalLocalizationEngine_Request)() {
  SetGlobalLocalizationEngine_Request__rosidl_typesupport_introspection_c__SetGlobalLocalizationEngine_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, String)();
  if (!SetGlobalLocalizationEngine_Request__rosidl_typesupport_introspection_c__SetGlobalLocalizationEngine_Request_message_type_support_handle.typesupport_identifier) {
    SetGlobalLocalizationEngine_Request__rosidl_typesupport_introspection_c__SetGlobalLocalizationEngine_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &SetGlobalLocalizationEngine_Request__rosidl_typesupport_introspection_c__SetGlobalLocalizationEngine_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "hdl_global_localization/srv/detail/set_global_localization_engine__rosidl_typesupport_introspection_c.h"
// already included above
// #include "hdl_global_localization/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "hdl_global_localization/srv/detail/set_global_localization_engine__functions.h"
// already included above
// #include "hdl_global_localization/srv/detail/set_global_localization_engine__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void SetGlobalLocalizationEngine_Response__rosidl_typesupport_introspection_c__SetGlobalLocalizationEngine_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  hdl_global_localization__srv__SetGlobalLocalizationEngine_Response__init(message_memory);
}

void SetGlobalLocalizationEngine_Response__rosidl_typesupport_introspection_c__SetGlobalLocalizationEngine_Response_fini_function(void * message_memory)
{
  hdl_global_localization__srv__SetGlobalLocalizationEngine_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember SetGlobalLocalizationEngine_Response__rosidl_typesupport_introspection_c__SetGlobalLocalizationEngine_Response_message_member_array[1] = {
  {
    "structure_needs_at_least_one_member",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(hdl_global_localization__srv__SetGlobalLocalizationEngine_Response, structure_needs_at_least_one_member),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers SetGlobalLocalizationEngine_Response__rosidl_typesupport_introspection_c__SetGlobalLocalizationEngine_Response_message_members = {
  "hdl_global_localization__srv",  // message namespace
  "SetGlobalLocalizationEngine_Response",  // message name
  1,  // number of fields
  sizeof(hdl_global_localization__srv__SetGlobalLocalizationEngine_Response),
  SetGlobalLocalizationEngine_Response__rosidl_typesupport_introspection_c__SetGlobalLocalizationEngine_Response_message_member_array,  // message members
  SetGlobalLocalizationEngine_Response__rosidl_typesupport_introspection_c__SetGlobalLocalizationEngine_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  SetGlobalLocalizationEngine_Response__rosidl_typesupport_introspection_c__SetGlobalLocalizationEngine_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t SetGlobalLocalizationEngine_Response__rosidl_typesupport_introspection_c__SetGlobalLocalizationEngine_Response_message_type_support_handle = {
  0,
  &SetGlobalLocalizationEngine_Response__rosidl_typesupport_introspection_c__SetGlobalLocalizationEngine_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_hdl_global_localization
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, hdl_global_localization, srv, SetGlobalLocalizationEngine_Response)() {
  if (!SetGlobalLocalizationEngine_Response__rosidl_typesupport_introspection_c__SetGlobalLocalizationEngine_Response_message_type_support_handle.typesupport_identifier) {
    SetGlobalLocalizationEngine_Response__rosidl_typesupport_introspection_c__SetGlobalLocalizationEngine_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &SetGlobalLocalizationEngine_Response__rosidl_typesupport_introspection_c__SetGlobalLocalizationEngine_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "hdl_global_localization/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "hdl_global_localization/srv/detail/set_global_localization_engine__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers hdl_global_localization__srv__detail__set_global_localization_engine__rosidl_typesupport_introspection_c__SetGlobalLocalizationEngine_service_members = {
  "hdl_global_localization__srv",  // service namespace
  "SetGlobalLocalizationEngine",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // hdl_global_localization__srv__detail__set_global_localization_engine__rosidl_typesupport_introspection_c__SetGlobalLocalizationEngine_Request_message_type_support_handle,
  NULL  // response message
  // hdl_global_localization__srv__detail__set_global_localization_engine__rosidl_typesupport_introspection_c__SetGlobalLocalizationEngine_Response_message_type_support_handle
};

static rosidl_service_type_support_t hdl_global_localization__srv__detail__set_global_localization_engine__rosidl_typesupport_introspection_c__SetGlobalLocalizationEngine_service_type_support_handle = {
  0,
  &hdl_global_localization__srv__detail__set_global_localization_engine__rosidl_typesupport_introspection_c__SetGlobalLocalizationEngine_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, hdl_global_localization, srv, SetGlobalLocalizationEngine_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, hdl_global_localization, srv, SetGlobalLocalizationEngine_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_hdl_global_localization
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, hdl_global_localization, srv, SetGlobalLocalizationEngine)() {
  if (!hdl_global_localization__srv__detail__set_global_localization_engine__rosidl_typesupport_introspection_c__SetGlobalLocalizationEngine_service_type_support_handle.typesupport_identifier) {
    hdl_global_localization__srv__detail__set_global_localization_engine__rosidl_typesupport_introspection_c__SetGlobalLocalizationEngine_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)hdl_global_localization__srv__detail__set_global_localization_engine__rosidl_typesupport_introspection_c__SetGlobalLocalizationEngine_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, hdl_global_localization, srv, SetGlobalLocalizationEngine_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, hdl_global_localization, srv, SetGlobalLocalizationEngine_Response)()->data;
  }

  return &hdl_global_localization__srv__detail__set_global_localization_engine__rosidl_typesupport_introspection_c__SetGlobalLocalizationEngine_service_type_support_handle;
}

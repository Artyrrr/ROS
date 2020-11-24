// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from tutorial_interfaces:srv\TopService.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "tutorial_interfaces/srv/detail/top_service__rosidl_typesupport_introspection_c.h"
#include "tutorial_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "tutorial_interfaces/srv/detail/top_service__functions.h"
#include "tutorial_interfaces/srv/detail/top_service__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void TopService_Request__rosidl_typesupport_introspection_c__TopService_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  tutorial_interfaces__srv__TopService_Request__init(message_memory);
}

void TopService_Request__rosidl_typesupport_introspection_c__TopService_Request_fini_function(void * message_memory)
{
  tutorial_interfaces__srv__TopService_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember TopService_Request__rosidl_typesupport_introspection_c__TopService_Request_message_member_array[3] = {
  {
    "a",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tutorial_interfaces__srv__TopService_Request, a),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "b",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tutorial_interfaces__srv__TopService_Request, b),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "c",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tutorial_interfaces__srv__TopService_Request, c),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers TopService_Request__rosidl_typesupport_introspection_c__TopService_Request_message_members = {
  "tutorial_interfaces__srv",  // message namespace
  "TopService_Request",  // message name
  3,  // number of fields
  sizeof(tutorial_interfaces__srv__TopService_Request),
  TopService_Request__rosidl_typesupport_introspection_c__TopService_Request_message_member_array,  // message members
  TopService_Request__rosidl_typesupport_introspection_c__TopService_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  TopService_Request__rosidl_typesupport_introspection_c__TopService_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t TopService_Request__rosidl_typesupport_introspection_c__TopService_Request_message_type_support_handle = {
  0,
  &TopService_Request__rosidl_typesupport_introspection_c__TopService_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_tutorial_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tutorial_interfaces, srv, TopService_Request)() {
  if (!TopService_Request__rosidl_typesupport_introspection_c__TopService_Request_message_type_support_handle.typesupport_identifier) {
    TopService_Request__rosidl_typesupport_introspection_c__TopService_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &TopService_Request__rosidl_typesupport_introspection_c__TopService_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "tutorial_interfaces/srv/detail/top_service__rosidl_typesupport_introspection_c.h"
// already included above
// #include "tutorial_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "tutorial_interfaces/srv/detail/top_service__functions.h"
// already included above
// #include "tutorial_interfaces/srv/detail/top_service__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void TopService_Response__rosidl_typesupport_introspection_c__TopService_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  tutorial_interfaces__srv__TopService_Response__init(message_memory);
}

void TopService_Response__rosidl_typesupport_introspection_c__TopService_Response_fini_function(void * message_memory)
{
  tutorial_interfaces__srv__TopService_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember TopService_Response__rosidl_typesupport_introspection_c__TopService_Response_message_member_array[1] = {
  {
    "sum",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tutorial_interfaces__srv__TopService_Response, sum),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers TopService_Response__rosidl_typesupport_introspection_c__TopService_Response_message_members = {
  "tutorial_interfaces__srv",  // message namespace
  "TopService_Response",  // message name
  1,  // number of fields
  sizeof(tutorial_interfaces__srv__TopService_Response),
  TopService_Response__rosidl_typesupport_introspection_c__TopService_Response_message_member_array,  // message members
  TopService_Response__rosidl_typesupport_introspection_c__TopService_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  TopService_Response__rosidl_typesupport_introspection_c__TopService_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t TopService_Response__rosidl_typesupport_introspection_c__TopService_Response_message_type_support_handle = {
  0,
  &TopService_Response__rosidl_typesupport_introspection_c__TopService_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_tutorial_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tutorial_interfaces, srv, TopService_Response)() {
  if (!TopService_Response__rosidl_typesupport_introspection_c__TopService_Response_message_type_support_handle.typesupport_identifier) {
    TopService_Response__rosidl_typesupport_introspection_c__TopService_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &TopService_Response__rosidl_typesupport_introspection_c__TopService_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "tutorial_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "tutorial_interfaces/srv/detail/top_service__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers tutorial_interfaces__srv__detail__top_service__rosidl_typesupport_introspection_c__TopService_service_members = {
  "tutorial_interfaces__srv",  // service namespace
  "TopService",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // tutorial_interfaces__srv__detail__top_service__rosidl_typesupport_introspection_c__TopService_Request_message_type_support_handle,
  NULL  // response message
  // tutorial_interfaces__srv__detail__top_service__rosidl_typesupport_introspection_c__TopService_Response_message_type_support_handle
};

static rosidl_service_type_support_t tutorial_interfaces__srv__detail__top_service__rosidl_typesupport_introspection_c__TopService_service_type_support_handle = {
  0,
  &tutorial_interfaces__srv__detail__top_service__rosidl_typesupport_introspection_c__TopService_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tutorial_interfaces, srv, TopService_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tutorial_interfaces, srv, TopService_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_tutorial_interfaces
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tutorial_interfaces, srv, TopService)() {
  if (!tutorial_interfaces__srv__detail__top_service__rosidl_typesupport_introspection_c__TopService_service_type_support_handle.typesupport_identifier) {
    tutorial_interfaces__srv__detail__top_service__rosidl_typesupport_introspection_c__TopService_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)tutorial_interfaces__srv__detail__top_service__rosidl_typesupport_introspection_c__TopService_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tutorial_interfaces, srv, TopService_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tutorial_interfaces, srv, TopService_Response)()->data;
  }

  return &tutorial_interfaces__srv__detail__top_service__rosidl_typesupport_introspection_c__TopService_service_type_support_handle;
}
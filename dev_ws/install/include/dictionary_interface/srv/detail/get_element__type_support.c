// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from dictionary_interface:srv\GetElement.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "dictionary_interface/srv/detail/get_element__rosidl_typesupport_introspection_c.h"
#include "dictionary_interface/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "dictionary_interface/srv/detail/get_element__functions.h"
#include "dictionary_interface/srv/detail/get_element__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void GetElement_Request__rosidl_typesupport_introspection_c__GetElement_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  dictionary_interface__srv__GetElement_Request__init(message_memory);
}

void GetElement_Request__rosidl_typesupport_introspection_c__GetElement_Request_fini_function(void * message_memory)
{
  dictionary_interface__srv__GetElement_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember GetElement_Request__rosidl_typesupport_introspection_c__GetElement_Request_message_member_array[1] = {
  {
    "n",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dictionary_interface__srv__GetElement_Request, n),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers GetElement_Request__rosidl_typesupport_introspection_c__GetElement_Request_message_members = {
  "dictionary_interface__srv",  // message namespace
  "GetElement_Request",  // message name
  1,  // number of fields
  sizeof(dictionary_interface__srv__GetElement_Request),
  GetElement_Request__rosidl_typesupport_introspection_c__GetElement_Request_message_member_array,  // message members
  GetElement_Request__rosidl_typesupport_introspection_c__GetElement_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  GetElement_Request__rosidl_typesupport_introspection_c__GetElement_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t GetElement_Request__rosidl_typesupport_introspection_c__GetElement_Request_message_type_support_handle = {
  0,
  &GetElement_Request__rosidl_typesupport_introspection_c__GetElement_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_dictionary_interface
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, dictionary_interface, srv, GetElement_Request)() {
  if (!GetElement_Request__rosidl_typesupport_introspection_c__GetElement_Request_message_type_support_handle.typesupport_identifier) {
    GetElement_Request__rosidl_typesupport_introspection_c__GetElement_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &GetElement_Request__rosidl_typesupport_introspection_c__GetElement_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "dictionary_interface/srv/detail/get_element__rosidl_typesupport_introspection_c.h"
// already included above
// #include "dictionary_interface/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "dictionary_interface/srv/detail/get_element__functions.h"
// already included above
// #include "dictionary_interface/srv/detail/get_element__struct.h"


// Include directives for member types
// Member `elm`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void GetElement_Response__rosidl_typesupport_introspection_c__GetElement_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  dictionary_interface__srv__GetElement_Response__init(message_memory);
}

void GetElement_Response__rosidl_typesupport_introspection_c__GetElement_Response_fini_function(void * message_memory)
{
  dictionary_interface__srv__GetElement_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember GetElement_Response__rosidl_typesupport_introspection_c__GetElement_Response_message_member_array[1] = {
  {
    "elm",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dictionary_interface__srv__GetElement_Response, elm),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers GetElement_Response__rosidl_typesupport_introspection_c__GetElement_Response_message_members = {
  "dictionary_interface__srv",  // message namespace
  "GetElement_Response",  // message name
  1,  // number of fields
  sizeof(dictionary_interface__srv__GetElement_Response),
  GetElement_Response__rosidl_typesupport_introspection_c__GetElement_Response_message_member_array,  // message members
  GetElement_Response__rosidl_typesupport_introspection_c__GetElement_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  GetElement_Response__rosidl_typesupport_introspection_c__GetElement_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t GetElement_Response__rosidl_typesupport_introspection_c__GetElement_Response_message_type_support_handle = {
  0,
  &GetElement_Response__rosidl_typesupport_introspection_c__GetElement_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_dictionary_interface
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, dictionary_interface, srv, GetElement_Response)() {
  if (!GetElement_Response__rosidl_typesupport_introspection_c__GetElement_Response_message_type_support_handle.typesupport_identifier) {
    GetElement_Response__rosidl_typesupport_introspection_c__GetElement_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &GetElement_Response__rosidl_typesupport_introspection_c__GetElement_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "dictionary_interface/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "dictionary_interface/srv/detail/get_element__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers dictionary_interface__srv__detail__get_element__rosidl_typesupport_introspection_c__GetElement_service_members = {
  "dictionary_interface__srv",  // service namespace
  "GetElement",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // dictionary_interface__srv__detail__get_element__rosidl_typesupport_introspection_c__GetElement_Request_message_type_support_handle,
  NULL  // response message
  // dictionary_interface__srv__detail__get_element__rosidl_typesupport_introspection_c__GetElement_Response_message_type_support_handle
};

static rosidl_service_type_support_t dictionary_interface__srv__detail__get_element__rosidl_typesupport_introspection_c__GetElement_service_type_support_handle = {
  0,
  &dictionary_interface__srv__detail__get_element__rosidl_typesupport_introspection_c__GetElement_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, dictionary_interface, srv, GetElement_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, dictionary_interface, srv, GetElement_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_dictionary_interface
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, dictionary_interface, srv, GetElement)() {
  if (!dictionary_interface__srv__detail__get_element__rosidl_typesupport_introspection_c__GetElement_service_type_support_handle.typesupport_identifier) {
    dictionary_interface__srv__detail__get_element__rosidl_typesupport_introspection_c__GetElement_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)dictionary_interface__srv__detail__get_element__rosidl_typesupport_introspection_c__GetElement_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, dictionary_interface, srv, GetElement_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, dictionary_interface, srv, GetElement_Response)()->data;
  }

  return &dictionary_interface__srv__detail__get_element__rosidl_typesupport_introspection_c__GetElement_service_type_support_handle;
}

// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from dictionary_interface:srv\GetElement.idl
// generated code does not contain a copyright notice
#include "dictionary_interface/srv/detail/get_element__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "dictionary_interface/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "dictionary_interface/srv/detail/get_element__struct.h"
#include "dictionary_interface/srv/detail/get_element__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _GetElement_Request__ros_msg_type = dictionary_interface__srv__GetElement_Request;

static bool _GetElement_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _GetElement_Request__ros_msg_type * ros_message = static_cast<const _GetElement_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: n
  {
    cdr << ros_message->n;
  }

  return true;
}

static bool _GetElement_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _GetElement_Request__ros_msg_type * ros_message = static_cast<_GetElement_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: n
  {
    cdr >> ros_message->n;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_dictionary_interface
size_t get_serialized_size_dictionary_interface__srv__GetElement_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _GetElement_Request__ros_msg_type * ros_message = static_cast<const _GetElement_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name n
  {
    size_t item_size = sizeof(ros_message->n);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _GetElement_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_dictionary_interface__srv__GetElement_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_dictionary_interface
size_t max_serialized_size_dictionary_interface__srv__GetElement_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: n
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _GetElement_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_dictionary_interface__srv__GetElement_Request(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_GetElement_Request = {
  "dictionary_interface::srv",
  "GetElement_Request",
  _GetElement_Request__cdr_serialize,
  _GetElement_Request__cdr_deserialize,
  _GetElement_Request__get_serialized_size,
  _GetElement_Request__max_serialized_size
};

static rosidl_message_type_support_t _GetElement_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_GetElement_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, dictionary_interface, srv, GetElement_Request)() {
  return &_GetElement_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "dictionary_interface/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "dictionary_interface/srv/detail/get_element__struct.h"
// already included above
// #include "dictionary_interface/srv/detail/get_element__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "rosidl_runtime_c/string.h"  // elm
#include "rosidl_runtime_c/string_functions.h"  // elm

// forward declare type support functions


using _GetElement_Response__ros_msg_type = dictionary_interface__srv__GetElement_Response;

static bool _GetElement_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _GetElement_Response__ros_msg_type * ros_message = static_cast<const _GetElement_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: elm
  {
    const rosidl_runtime_c__String * str = &ros_message->elm;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  return true;
}

static bool _GetElement_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _GetElement_Response__ros_msg_type * ros_message = static_cast<_GetElement_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: elm
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->elm.data) {
      rosidl_runtime_c__String__init(&ros_message->elm);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->elm,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'elm'\n");
      return false;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_dictionary_interface
size_t get_serialized_size_dictionary_interface__srv__GetElement_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _GetElement_Response__ros_msg_type * ros_message = static_cast<const _GetElement_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name elm
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->elm.size + 1);

  return current_alignment - initial_alignment;
}

static uint32_t _GetElement_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_dictionary_interface__srv__GetElement_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_dictionary_interface
size_t max_serialized_size_dictionary_interface__srv__GetElement_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: elm
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _GetElement_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_dictionary_interface__srv__GetElement_Response(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_GetElement_Response = {
  "dictionary_interface::srv",
  "GetElement_Response",
  _GetElement_Response__cdr_serialize,
  _GetElement_Response__cdr_deserialize,
  _GetElement_Response__get_serialized_size,
  _GetElement_Response__max_serialized_size
};

static rosidl_message_type_support_t _GetElement_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_GetElement_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, dictionary_interface, srv, GetElement_Response)() {
  return &_GetElement_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "dictionary_interface/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "dictionary_interface/srv/get_element.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t GetElement__callbacks = {
  "dictionary_interface::srv",
  "GetElement",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, dictionary_interface, srv, GetElement_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, dictionary_interface, srv, GetElement_Response)(),
};

static rosidl_service_type_support_t GetElement__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &GetElement__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, dictionary_interface, srv, GetElement)() {
  return &GetElement__handle;
}

#if defined(__cplusplus)
}
#endif

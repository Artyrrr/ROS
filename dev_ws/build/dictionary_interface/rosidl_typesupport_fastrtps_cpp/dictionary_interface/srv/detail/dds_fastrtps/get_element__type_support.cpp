// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from dictionary_interface:srv\GetElement.idl
// generated code does not contain a copyright notice
#include "dictionary_interface/srv/detail/get_element__rosidl_typesupport_fastrtps_cpp.hpp"
#include "dictionary_interface/srv/detail/get_element__struct.hpp"

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

namespace dictionary_interface
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_dictionary_interface
cdr_serialize(
  const dictionary_interface::srv::GetElement_Request & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: n
  cdr << ros_message.n;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_dictionary_interface
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  dictionary_interface::srv::GetElement_Request & ros_message)
{
  // Member: n
  cdr >> ros_message.n;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_dictionary_interface
get_serialized_size(
  const dictionary_interface::srv::GetElement_Request & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: n
  {
    size_t item_size = sizeof(ros_message.n);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_dictionary_interface
max_serialized_size_GetElement_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: n
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static bool _GetElement_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const dictionary_interface::srv::GetElement_Request *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _GetElement_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<dictionary_interface::srv::GetElement_Request *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _GetElement_Request__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const dictionary_interface::srv::GetElement_Request *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _GetElement_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_GetElement_Request(full_bounded, 0);
}

static message_type_support_callbacks_t _GetElement_Request__callbacks = {
  "dictionary_interface::srv",
  "GetElement_Request",
  _GetElement_Request__cdr_serialize,
  _GetElement_Request__cdr_deserialize,
  _GetElement_Request__get_serialized_size,
  _GetElement_Request__max_serialized_size
};

static rosidl_message_type_support_t _GetElement_Request__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_GetElement_Request__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace dictionary_interface

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_dictionary_interface
const rosidl_message_type_support_t *
get_message_type_support_handle<dictionary_interface::srv::GetElement_Request>()
{
  return &dictionary_interface::srv::typesupport_fastrtps_cpp::_GetElement_Request__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, dictionary_interface, srv, GetElement_Request)() {
  return &dictionary_interface::srv::typesupport_fastrtps_cpp::_GetElement_Request__handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include <limits>
// already included above
// #include <stdexcept>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
// already included above
// #include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace dictionary_interface
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_dictionary_interface
cdr_serialize(
  const dictionary_interface::srv::GetElement_Response & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: elm
  cdr << ros_message.elm;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_dictionary_interface
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  dictionary_interface::srv::GetElement_Response & ros_message)
{
  // Member: elm
  cdr >> ros_message.elm;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_dictionary_interface
get_serialized_size(
  const dictionary_interface::srv::GetElement_Response & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: elm
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.elm.size() + 1);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_dictionary_interface
max_serialized_size_GetElement_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: elm
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

static bool _GetElement_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const dictionary_interface::srv::GetElement_Response *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _GetElement_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<dictionary_interface::srv::GetElement_Response *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _GetElement_Response__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const dictionary_interface::srv::GetElement_Response *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _GetElement_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_GetElement_Response(full_bounded, 0);
}

static message_type_support_callbacks_t _GetElement_Response__callbacks = {
  "dictionary_interface::srv",
  "GetElement_Response",
  _GetElement_Response__cdr_serialize,
  _GetElement_Response__cdr_deserialize,
  _GetElement_Response__get_serialized_size,
  _GetElement_Response__max_serialized_size
};

static rosidl_message_type_support_t _GetElement_Response__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_GetElement_Response__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace dictionary_interface

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_dictionary_interface
const rosidl_message_type_support_t *
get_message_type_support_handle<dictionary_interface::srv::GetElement_Response>()
{
  return &dictionary_interface::srv::typesupport_fastrtps_cpp::_GetElement_Response__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, dictionary_interface, srv, GetElement_Response)() {
  return &dictionary_interface::srv::typesupport_fastrtps_cpp::_GetElement_Response__handle;
}

#ifdef __cplusplus
}
#endif

#include "rmw/error_handling.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support_decl.hpp"

namespace dictionary_interface
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

static service_type_support_callbacks_t _GetElement__callbacks = {
  "dictionary_interface::srv",
  "GetElement",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, dictionary_interface, srv, GetElement_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, dictionary_interface, srv, GetElement_Response)(),
};

static rosidl_service_type_support_t _GetElement__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_GetElement__callbacks,
  get_service_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace dictionary_interface

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_dictionary_interface
const rosidl_service_type_support_t *
get_service_type_support_handle<dictionary_interface::srv::GetElement>()
{
  return &dictionary_interface::srv::typesupport_fastrtps_cpp::_GetElement__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, dictionary_interface, srv, GetElement)() {
  return &dictionary_interface::srv::typesupport_fastrtps_cpp::_GetElement__handle;
}

#ifdef __cplusplus
}
#endif

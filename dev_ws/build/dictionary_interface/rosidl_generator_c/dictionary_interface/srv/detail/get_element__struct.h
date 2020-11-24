// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from dictionary_interface:srv\GetElement.idl
// generated code does not contain a copyright notice

#ifndef DICTIONARY_INTERFACE__SRV__DETAIL__GET_ELEMENT__STRUCT_H_
#define DICTIONARY_INTERFACE__SRV__DETAIL__GET_ELEMENT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in srv/GetElement in the package dictionary_interface.
typedef struct dictionary_interface__srv__GetElement_Request
{
  uint8_t n;
} dictionary_interface__srv__GetElement_Request;

// Struct for a sequence of dictionary_interface__srv__GetElement_Request.
typedef struct dictionary_interface__srv__GetElement_Request__Sequence
{
  dictionary_interface__srv__GetElement_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} dictionary_interface__srv__GetElement_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'elm'
#include "rosidl_runtime_c/string.h"

// Struct defined in srv/GetElement in the package dictionary_interface.
typedef struct dictionary_interface__srv__GetElement_Response
{
  rosidl_runtime_c__String elm;
} dictionary_interface__srv__GetElement_Response;

// Struct for a sequence of dictionary_interface__srv__GetElement_Response.
typedef struct dictionary_interface__srv__GetElement_Response__Sequence
{
  dictionary_interface__srv__GetElement_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} dictionary_interface__srv__GetElement_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DICTIONARY_INTERFACE__SRV__DETAIL__GET_ELEMENT__STRUCT_H_

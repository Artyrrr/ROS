// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from dictionary_interface:srv\GetElement.idl
// generated code does not contain a copyright notice

#ifndef DICTIONARY_INTERFACE__SRV__DETAIL__GET_ELEMENT__FUNCTIONS_H_
#define DICTIONARY_INTERFACE__SRV__DETAIL__GET_ELEMENT__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "dictionary_interface/msg/rosidl_generator_c__visibility_control.h"

#include "dictionary_interface/srv/detail/get_element__struct.h"

/// Initialize srv/GetElement message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * dictionary_interface__srv__GetElement_Request
 * )) before or use
 * dictionary_interface__srv__GetElement_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_dictionary_interface
bool
dictionary_interface__srv__GetElement_Request__init(dictionary_interface__srv__GetElement_Request * msg);

/// Finalize srv/GetElement message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_dictionary_interface
void
dictionary_interface__srv__GetElement_Request__fini(dictionary_interface__srv__GetElement_Request * msg);

/// Create srv/GetElement message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * dictionary_interface__srv__GetElement_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_dictionary_interface
dictionary_interface__srv__GetElement_Request *
dictionary_interface__srv__GetElement_Request__create();

/// Destroy srv/GetElement message.
/**
 * It calls
 * dictionary_interface__srv__GetElement_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_dictionary_interface
void
dictionary_interface__srv__GetElement_Request__destroy(dictionary_interface__srv__GetElement_Request * msg);


/// Initialize array of srv/GetElement messages.
/**
 * It allocates the memory for the number of elements and calls
 * dictionary_interface__srv__GetElement_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_dictionary_interface
bool
dictionary_interface__srv__GetElement_Request__Sequence__init(dictionary_interface__srv__GetElement_Request__Sequence * array, size_t size);

/// Finalize array of srv/GetElement messages.
/**
 * It calls
 * dictionary_interface__srv__GetElement_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_dictionary_interface
void
dictionary_interface__srv__GetElement_Request__Sequence__fini(dictionary_interface__srv__GetElement_Request__Sequence * array);

/// Create array of srv/GetElement messages.
/**
 * It allocates the memory for the array and calls
 * dictionary_interface__srv__GetElement_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_dictionary_interface
dictionary_interface__srv__GetElement_Request__Sequence *
dictionary_interface__srv__GetElement_Request__Sequence__create(size_t size);

/// Destroy array of srv/GetElement messages.
/**
 * It calls
 * dictionary_interface__srv__GetElement_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_dictionary_interface
void
dictionary_interface__srv__GetElement_Request__Sequence__destroy(dictionary_interface__srv__GetElement_Request__Sequence * array);

/// Initialize srv/GetElement message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * dictionary_interface__srv__GetElement_Response
 * )) before or use
 * dictionary_interface__srv__GetElement_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_dictionary_interface
bool
dictionary_interface__srv__GetElement_Response__init(dictionary_interface__srv__GetElement_Response * msg);

/// Finalize srv/GetElement message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_dictionary_interface
void
dictionary_interface__srv__GetElement_Response__fini(dictionary_interface__srv__GetElement_Response * msg);

/// Create srv/GetElement message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * dictionary_interface__srv__GetElement_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_dictionary_interface
dictionary_interface__srv__GetElement_Response *
dictionary_interface__srv__GetElement_Response__create();

/// Destroy srv/GetElement message.
/**
 * It calls
 * dictionary_interface__srv__GetElement_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_dictionary_interface
void
dictionary_interface__srv__GetElement_Response__destroy(dictionary_interface__srv__GetElement_Response * msg);


/// Initialize array of srv/GetElement messages.
/**
 * It allocates the memory for the number of elements and calls
 * dictionary_interface__srv__GetElement_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_dictionary_interface
bool
dictionary_interface__srv__GetElement_Response__Sequence__init(dictionary_interface__srv__GetElement_Response__Sequence * array, size_t size);

/// Finalize array of srv/GetElement messages.
/**
 * It calls
 * dictionary_interface__srv__GetElement_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_dictionary_interface
void
dictionary_interface__srv__GetElement_Response__Sequence__fini(dictionary_interface__srv__GetElement_Response__Sequence * array);

/// Create array of srv/GetElement messages.
/**
 * It allocates the memory for the array and calls
 * dictionary_interface__srv__GetElement_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_dictionary_interface
dictionary_interface__srv__GetElement_Response__Sequence *
dictionary_interface__srv__GetElement_Response__Sequence__create(size_t size);

/// Destroy array of srv/GetElement messages.
/**
 * It calls
 * dictionary_interface__srv__GetElement_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_dictionary_interface
void
dictionary_interface__srv__GetElement_Response__Sequence__destroy(dictionary_interface__srv__GetElement_Response__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // DICTIONARY_INTERFACE__SRV__DETAIL__GET_ELEMENT__FUNCTIONS_H_

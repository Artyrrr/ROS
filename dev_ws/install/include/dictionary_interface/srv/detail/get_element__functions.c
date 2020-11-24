// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from dictionary_interface:srv\GetElement.idl
// generated code does not contain a copyright notice
#include "dictionary_interface/srv/detail/get_element__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

bool
dictionary_interface__srv__GetElement_Request__init(dictionary_interface__srv__GetElement_Request * msg)
{
  if (!msg) {
    return false;
  }
  // n
  return true;
}

void
dictionary_interface__srv__GetElement_Request__fini(dictionary_interface__srv__GetElement_Request * msg)
{
  if (!msg) {
    return;
  }
  // n
}

dictionary_interface__srv__GetElement_Request *
dictionary_interface__srv__GetElement_Request__create()
{
  dictionary_interface__srv__GetElement_Request * msg = (dictionary_interface__srv__GetElement_Request *)malloc(sizeof(dictionary_interface__srv__GetElement_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(dictionary_interface__srv__GetElement_Request));
  bool success = dictionary_interface__srv__GetElement_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
dictionary_interface__srv__GetElement_Request__destroy(dictionary_interface__srv__GetElement_Request * msg)
{
  if (msg) {
    dictionary_interface__srv__GetElement_Request__fini(msg);
  }
  free(msg);
}


bool
dictionary_interface__srv__GetElement_Request__Sequence__init(dictionary_interface__srv__GetElement_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  dictionary_interface__srv__GetElement_Request * data = NULL;
  if (size) {
    data = (dictionary_interface__srv__GetElement_Request *)calloc(size, sizeof(dictionary_interface__srv__GetElement_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = dictionary_interface__srv__GetElement_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        dictionary_interface__srv__GetElement_Request__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
dictionary_interface__srv__GetElement_Request__Sequence__fini(dictionary_interface__srv__GetElement_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      dictionary_interface__srv__GetElement_Request__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

dictionary_interface__srv__GetElement_Request__Sequence *
dictionary_interface__srv__GetElement_Request__Sequence__create(size_t size)
{
  dictionary_interface__srv__GetElement_Request__Sequence * array = (dictionary_interface__srv__GetElement_Request__Sequence *)malloc(sizeof(dictionary_interface__srv__GetElement_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = dictionary_interface__srv__GetElement_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
dictionary_interface__srv__GetElement_Request__Sequence__destroy(dictionary_interface__srv__GetElement_Request__Sequence * array)
{
  if (array) {
    dictionary_interface__srv__GetElement_Request__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `elm`
#include "rosidl_runtime_c/string_functions.h"

bool
dictionary_interface__srv__GetElement_Response__init(dictionary_interface__srv__GetElement_Response * msg)
{
  if (!msg) {
    return false;
  }
  // elm
  if (!rosidl_runtime_c__String__init(&msg->elm)) {
    dictionary_interface__srv__GetElement_Response__fini(msg);
    return false;
  }
  return true;
}

void
dictionary_interface__srv__GetElement_Response__fini(dictionary_interface__srv__GetElement_Response * msg)
{
  if (!msg) {
    return;
  }
  // elm
  rosidl_runtime_c__String__fini(&msg->elm);
}

dictionary_interface__srv__GetElement_Response *
dictionary_interface__srv__GetElement_Response__create()
{
  dictionary_interface__srv__GetElement_Response * msg = (dictionary_interface__srv__GetElement_Response *)malloc(sizeof(dictionary_interface__srv__GetElement_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(dictionary_interface__srv__GetElement_Response));
  bool success = dictionary_interface__srv__GetElement_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
dictionary_interface__srv__GetElement_Response__destroy(dictionary_interface__srv__GetElement_Response * msg)
{
  if (msg) {
    dictionary_interface__srv__GetElement_Response__fini(msg);
  }
  free(msg);
}


bool
dictionary_interface__srv__GetElement_Response__Sequence__init(dictionary_interface__srv__GetElement_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  dictionary_interface__srv__GetElement_Response * data = NULL;
  if (size) {
    data = (dictionary_interface__srv__GetElement_Response *)calloc(size, sizeof(dictionary_interface__srv__GetElement_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = dictionary_interface__srv__GetElement_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        dictionary_interface__srv__GetElement_Response__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
dictionary_interface__srv__GetElement_Response__Sequence__fini(dictionary_interface__srv__GetElement_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      dictionary_interface__srv__GetElement_Response__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

dictionary_interface__srv__GetElement_Response__Sequence *
dictionary_interface__srv__GetElement_Response__Sequence__create(size_t size)
{
  dictionary_interface__srv__GetElement_Response__Sequence * array = (dictionary_interface__srv__GetElement_Response__Sequence *)malloc(sizeof(dictionary_interface__srv__GetElement_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = dictionary_interface__srv__GetElement_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
dictionary_interface__srv__GetElement_Response__Sequence__destroy(dictionary_interface__srv__GetElement_Response__Sequence * array)
{
  if (array) {
    dictionary_interface__srv__GetElement_Response__Sequence__fini(array);
  }
  free(array);
}

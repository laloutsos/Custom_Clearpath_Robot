// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from clearpath_platform_msgs:msg/DisplayStatus.idl
// generated code does not contain a copyright notice
#include "clearpath_platform_msgs/msg/detail/display_status__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `string1`
// Member `string2`
#include "rosidl_runtime_c/string_functions.h"

bool
clearpath_platform_msgs__msg__DisplayStatus__init(clearpath_platform_msgs__msg__DisplayStatus * msg)
{
  if (!msg) {
    return false;
  }
  // string1
  if (!rosidl_runtime_c__String__init(&msg->string1)) {
    clearpath_platform_msgs__msg__DisplayStatus__fini(msg);
    return false;
  }
  // string2
  if (!rosidl_runtime_c__String__init(&msg->string2)) {
    clearpath_platform_msgs__msg__DisplayStatus__fini(msg);
    return false;
  }
  return true;
}

void
clearpath_platform_msgs__msg__DisplayStatus__fini(clearpath_platform_msgs__msg__DisplayStatus * msg)
{
  if (!msg) {
    return;
  }
  // string1
  rosidl_runtime_c__String__fini(&msg->string1);
  // string2
  rosidl_runtime_c__String__fini(&msg->string2);
}

bool
clearpath_platform_msgs__msg__DisplayStatus__are_equal(const clearpath_platform_msgs__msg__DisplayStatus * lhs, const clearpath_platform_msgs__msg__DisplayStatus * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // string1
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->string1), &(rhs->string1)))
  {
    return false;
  }
  // string2
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->string2), &(rhs->string2)))
  {
    return false;
  }
  return true;
}

bool
clearpath_platform_msgs__msg__DisplayStatus__copy(
  const clearpath_platform_msgs__msg__DisplayStatus * input,
  clearpath_platform_msgs__msg__DisplayStatus * output)
{
  if (!input || !output) {
    return false;
  }
  // string1
  if (!rosidl_runtime_c__String__copy(
      &(input->string1), &(output->string1)))
  {
    return false;
  }
  // string2
  if (!rosidl_runtime_c__String__copy(
      &(input->string2), &(output->string2)))
  {
    return false;
  }
  return true;
}

clearpath_platform_msgs__msg__DisplayStatus *
clearpath_platform_msgs__msg__DisplayStatus__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  clearpath_platform_msgs__msg__DisplayStatus * msg = (clearpath_platform_msgs__msg__DisplayStatus *)allocator.allocate(sizeof(clearpath_platform_msgs__msg__DisplayStatus), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(clearpath_platform_msgs__msg__DisplayStatus));
  bool success = clearpath_platform_msgs__msg__DisplayStatus__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
clearpath_platform_msgs__msg__DisplayStatus__destroy(clearpath_platform_msgs__msg__DisplayStatus * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    clearpath_platform_msgs__msg__DisplayStatus__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
clearpath_platform_msgs__msg__DisplayStatus__Sequence__init(clearpath_platform_msgs__msg__DisplayStatus__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  clearpath_platform_msgs__msg__DisplayStatus * data = NULL;

  if (size) {
    data = (clearpath_platform_msgs__msg__DisplayStatus *)allocator.zero_allocate(size, sizeof(clearpath_platform_msgs__msg__DisplayStatus), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = clearpath_platform_msgs__msg__DisplayStatus__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        clearpath_platform_msgs__msg__DisplayStatus__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
clearpath_platform_msgs__msg__DisplayStatus__Sequence__fini(clearpath_platform_msgs__msg__DisplayStatus__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      clearpath_platform_msgs__msg__DisplayStatus__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

clearpath_platform_msgs__msg__DisplayStatus__Sequence *
clearpath_platform_msgs__msg__DisplayStatus__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  clearpath_platform_msgs__msg__DisplayStatus__Sequence * array = (clearpath_platform_msgs__msg__DisplayStatus__Sequence *)allocator.allocate(sizeof(clearpath_platform_msgs__msg__DisplayStatus__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = clearpath_platform_msgs__msg__DisplayStatus__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
clearpath_platform_msgs__msg__DisplayStatus__Sequence__destroy(clearpath_platform_msgs__msg__DisplayStatus__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    clearpath_platform_msgs__msg__DisplayStatus__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
clearpath_platform_msgs__msg__DisplayStatus__Sequence__are_equal(const clearpath_platform_msgs__msg__DisplayStatus__Sequence * lhs, const clearpath_platform_msgs__msg__DisplayStatus__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!clearpath_platform_msgs__msg__DisplayStatus__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
clearpath_platform_msgs__msg__DisplayStatus__Sequence__copy(
  const clearpath_platform_msgs__msg__DisplayStatus__Sequence * input,
  clearpath_platform_msgs__msg__DisplayStatus__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(clearpath_platform_msgs__msg__DisplayStatus);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    clearpath_platform_msgs__msg__DisplayStatus * data =
      (clearpath_platform_msgs__msg__DisplayStatus *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!clearpath_platform_msgs__msg__DisplayStatus__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          clearpath_platform_msgs__msg__DisplayStatus__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!clearpath_platform_msgs__msg__DisplayStatus__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}

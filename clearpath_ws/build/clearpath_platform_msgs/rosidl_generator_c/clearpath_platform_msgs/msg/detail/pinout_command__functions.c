// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from clearpath_platform_msgs:msg/PinoutCommand.idl
// generated code does not contain a copyright notice
#include "clearpath_platform_msgs/msg/detail/pinout_command__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `rails`
// Member `outputs`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
clearpath_platform_msgs__msg__PinoutCommand__init(clearpath_platform_msgs__msg__PinoutCommand * msg)
{
  if (!msg) {
    return false;
  }
  // rails
  if (!rosidl_runtime_c__boolean__Sequence__init(&msg->rails, 0)) {
    clearpath_platform_msgs__msg__PinoutCommand__fini(msg);
    return false;
  }
  // outputs
  if (!rosidl_runtime_c__uint32__Sequence__init(&msg->outputs, 0)) {
    clearpath_platform_msgs__msg__PinoutCommand__fini(msg);
    return false;
  }
  return true;
}

void
clearpath_platform_msgs__msg__PinoutCommand__fini(clearpath_platform_msgs__msg__PinoutCommand * msg)
{
  if (!msg) {
    return;
  }
  // rails
  rosidl_runtime_c__boolean__Sequence__fini(&msg->rails);
  // outputs
  rosidl_runtime_c__uint32__Sequence__fini(&msg->outputs);
}

bool
clearpath_platform_msgs__msg__PinoutCommand__are_equal(const clearpath_platform_msgs__msg__PinoutCommand * lhs, const clearpath_platform_msgs__msg__PinoutCommand * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // rails
  if (!rosidl_runtime_c__boolean__Sequence__are_equal(
      &(lhs->rails), &(rhs->rails)))
  {
    return false;
  }
  // outputs
  if (!rosidl_runtime_c__uint32__Sequence__are_equal(
      &(lhs->outputs), &(rhs->outputs)))
  {
    return false;
  }
  return true;
}

bool
clearpath_platform_msgs__msg__PinoutCommand__copy(
  const clearpath_platform_msgs__msg__PinoutCommand * input,
  clearpath_platform_msgs__msg__PinoutCommand * output)
{
  if (!input || !output) {
    return false;
  }
  // rails
  if (!rosidl_runtime_c__boolean__Sequence__copy(
      &(input->rails), &(output->rails)))
  {
    return false;
  }
  // outputs
  if (!rosidl_runtime_c__uint32__Sequence__copy(
      &(input->outputs), &(output->outputs)))
  {
    return false;
  }
  return true;
}

clearpath_platform_msgs__msg__PinoutCommand *
clearpath_platform_msgs__msg__PinoutCommand__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  clearpath_platform_msgs__msg__PinoutCommand * msg = (clearpath_platform_msgs__msg__PinoutCommand *)allocator.allocate(sizeof(clearpath_platform_msgs__msg__PinoutCommand), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(clearpath_platform_msgs__msg__PinoutCommand));
  bool success = clearpath_platform_msgs__msg__PinoutCommand__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
clearpath_platform_msgs__msg__PinoutCommand__destroy(clearpath_platform_msgs__msg__PinoutCommand * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    clearpath_platform_msgs__msg__PinoutCommand__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
clearpath_platform_msgs__msg__PinoutCommand__Sequence__init(clearpath_platform_msgs__msg__PinoutCommand__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  clearpath_platform_msgs__msg__PinoutCommand * data = NULL;

  if (size) {
    data = (clearpath_platform_msgs__msg__PinoutCommand *)allocator.zero_allocate(size, sizeof(clearpath_platform_msgs__msg__PinoutCommand), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = clearpath_platform_msgs__msg__PinoutCommand__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        clearpath_platform_msgs__msg__PinoutCommand__fini(&data[i - 1]);
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
clearpath_platform_msgs__msg__PinoutCommand__Sequence__fini(clearpath_platform_msgs__msg__PinoutCommand__Sequence * array)
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
      clearpath_platform_msgs__msg__PinoutCommand__fini(&array->data[i]);
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

clearpath_platform_msgs__msg__PinoutCommand__Sequence *
clearpath_platform_msgs__msg__PinoutCommand__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  clearpath_platform_msgs__msg__PinoutCommand__Sequence * array = (clearpath_platform_msgs__msg__PinoutCommand__Sequence *)allocator.allocate(sizeof(clearpath_platform_msgs__msg__PinoutCommand__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = clearpath_platform_msgs__msg__PinoutCommand__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
clearpath_platform_msgs__msg__PinoutCommand__Sequence__destroy(clearpath_platform_msgs__msg__PinoutCommand__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    clearpath_platform_msgs__msg__PinoutCommand__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
clearpath_platform_msgs__msg__PinoutCommand__Sequence__are_equal(const clearpath_platform_msgs__msg__PinoutCommand__Sequence * lhs, const clearpath_platform_msgs__msg__PinoutCommand__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!clearpath_platform_msgs__msg__PinoutCommand__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
clearpath_platform_msgs__msg__PinoutCommand__Sequence__copy(
  const clearpath_platform_msgs__msg__PinoutCommand__Sequence * input,
  clearpath_platform_msgs__msg__PinoutCommand__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(clearpath_platform_msgs__msg__PinoutCommand);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    clearpath_platform_msgs__msg__PinoutCommand * data =
      (clearpath_platform_msgs__msg__PinoutCommand *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!clearpath_platform_msgs__msg__PinoutCommand__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          clearpath_platform_msgs__msg__PinoutCommand__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!clearpath_platform_msgs__msg__PinoutCommand__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}

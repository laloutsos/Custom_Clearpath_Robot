// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from clearpath_motor_msgs:msg/LynxSystemProtection.idl
// generated code does not contain a copyright notice
#include "clearpath_motor_msgs/msg/detail/lynx_system_protection__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `motor_states`
#include "clearpath_motor_msgs/msg/detail/lynx_motor_protection__functions.h"

bool
clearpath_motor_msgs__msg__LynxSystemProtection__init(clearpath_motor_msgs__msg__LynxSystemProtection * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    clearpath_motor_msgs__msg__LynxSystemProtection__fini(msg);
    return false;
  }
  // system_state
  // motor_states
  if (!clearpath_motor_msgs__msg__LynxMotorProtection__Sequence__init(&msg->motor_states, 0)) {
    clearpath_motor_msgs__msg__LynxSystemProtection__fini(msg);
    return false;
  }
  return true;
}

void
clearpath_motor_msgs__msg__LynxSystemProtection__fini(clearpath_motor_msgs__msg__LynxSystemProtection * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // system_state
  // motor_states
  clearpath_motor_msgs__msg__LynxMotorProtection__Sequence__fini(&msg->motor_states);
}

bool
clearpath_motor_msgs__msg__LynxSystemProtection__are_equal(const clearpath_motor_msgs__msg__LynxSystemProtection * lhs, const clearpath_motor_msgs__msg__LynxSystemProtection * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__are_equal(
      &(lhs->header), &(rhs->header)))
  {
    return false;
  }
  // system_state
  if (lhs->system_state != rhs->system_state) {
    return false;
  }
  // motor_states
  if (!clearpath_motor_msgs__msg__LynxMotorProtection__Sequence__are_equal(
      &(lhs->motor_states), &(rhs->motor_states)))
  {
    return false;
  }
  return true;
}

bool
clearpath_motor_msgs__msg__LynxSystemProtection__copy(
  const clearpath_motor_msgs__msg__LynxSystemProtection * input,
  clearpath_motor_msgs__msg__LynxSystemProtection * output)
{
  if (!input || !output) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__copy(
      &(input->header), &(output->header)))
  {
    return false;
  }
  // system_state
  output->system_state = input->system_state;
  // motor_states
  if (!clearpath_motor_msgs__msg__LynxMotorProtection__Sequence__copy(
      &(input->motor_states), &(output->motor_states)))
  {
    return false;
  }
  return true;
}

clearpath_motor_msgs__msg__LynxSystemProtection *
clearpath_motor_msgs__msg__LynxSystemProtection__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  clearpath_motor_msgs__msg__LynxSystemProtection * msg = (clearpath_motor_msgs__msg__LynxSystemProtection *)allocator.allocate(sizeof(clearpath_motor_msgs__msg__LynxSystemProtection), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(clearpath_motor_msgs__msg__LynxSystemProtection));
  bool success = clearpath_motor_msgs__msg__LynxSystemProtection__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
clearpath_motor_msgs__msg__LynxSystemProtection__destroy(clearpath_motor_msgs__msg__LynxSystemProtection * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    clearpath_motor_msgs__msg__LynxSystemProtection__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
clearpath_motor_msgs__msg__LynxSystemProtection__Sequence__init(clearpath_motor_msgs__msg__LynxSystemProtection__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  clearpath_motor_msgs__msg__LynxSystemProtection * data = NULL;

  if (size) {
    data = (clearpath_motor_msgs__msg__LynxSystemProtection *)allocator.zero_allocate(size, sizeof(clearpath_motor_msgs__msg__LynxSystemProtection), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = clearpath_motor_msgs__msg__LynxSystemProtection__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        clearpath_motor_msgs__msg__LynxSystemProtection__fini(&data[i - 1]);
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
clearpath_motor_msgs__msg__LynxSystemProtection__Sequence__fini(clearpath_motor_msgs__msg__LynxSystemProtection__Sequence * array)
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
      clearpath_motor_msgs__msg__LynxSystemProtection__fini(&array->data[i]);
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

clearpath_motor_msgs__msg__LynxSystemProtection__Sequence *
clearpath_motor_msgs__msg__LynxSystemProtection__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  clearpath_motor_msgs__msg__LynxSystemProtection__Sequence * array = (clearpath_motor_msgs__msg__LynxSystemProtection__Sequence *)allocator.allocate(sizeof(clearpath_motor_msgs__msg__LynxSystemProtection__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = clearpath_motor_msgs__msg__LynxSystemProtection__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
clearpath_motor_msgs__msg__LynxSystemProtection__Sequence__destroy(clearpath_motor_msgs__msg__LynxSystemProtection__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    clearpath_motor_msgs__msg__LynxSystemProtection__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
clearpath_motor_msgs__msg__LynxSystemProtection__Sequence__are_equal(const clearpath_motor_msgs__msg__LynxSystemProtection__Sequence * lhs, const clearpath_motor_msgs__msg__LynxSystemProtection__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!clearpath_motor_msgs__msg__LynxSystemProtection__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
clearpath_motor_msgs__msg__LynxSystemProtection__Sequence__copy(
  const clearpath_motor_msgs__msg__LynxSystemProtection__Sequence * input,
  clearpath_motor_msgs__msg__LynxSystemProtection__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(clearpath_motor_msgs__msg__LynxSystemProtection);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    clearpath_motor_msgs__msg__LynxSystemProtection * data =
      (clearpath_motor_msgs__msg__LynxSystemProtection *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!clearpath_motor_msgs__msg__LynxSystemProtection__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          clearpath_motor_msgs__msg__LynxSystemProtection__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!clearpath_motor_msgs__msg__LynxSystemProtection__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}

// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from clearpath_platform_msgs:msg/PinoutState.idl
// generated code does not contain a copyright notice
#include "clearpath_platform_msgs/msg/detail/pinout_state__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `rails`
// Member `inputs`
// Member `outputs`
// Member `output_periods`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
clearpath_platform_msgs__msg__PinoutState__init(clearpath_platform_msgs__msg__PinoutState * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    clearpath_platform_msgs__msg__PinoutState__fini(msg);
    return false;
  }
  // rails
  if (!rosidl_runtime_c__boolean__Sequence__init(&msg->rails, 0)) {
    clearpath_platform_msgs__msg__PinoutState__fini(msg);
    return false;
  }
  // inputs
  if (!rosidl_runtime_c__boolean__Sequence__init(&msg->inputs, 0)) {
    clearpath_platform_msgs__msg__PinoutState__fini(msg);
    return false;
  }
  // outputs
  if (!rosidl_runtime_c__boolean__Sequence__init(&msg->outputs, 0)) {
    clearpath_platform_msgs__msg__PinoutState__fini(msg);
    return false;
  }
  // output_periods
  if (!rosidl_runtime_c__uint32__Sequence__init(&msg->output_periods, 0)) {
    clearpath_platform_msgs__msg__PinoutState__fini(msg);
    return false;
  }
  return true;
}

void
clearpath_platform_msgs__msg__PinoutState__fini(clearpath_platform_msgs__msg__PinoutState * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // rails
  rosidl_runtime_c__boolean__Sequence__fini(&msg->rails);
  // inputs
  rosidl_runtime_c__boolean__Sequence__fini(&msg->inputs);
  // outputs
  rosidl_runtime_c__boolean__Sequence__fini(&msg->outputs);
  // output_periods
  rosidl_runtime_c__uint32__Sequence__fini(&msg->output_periods);
}

bool
clearpath_platform_msgs__msg__PinoutState__are_equal(const clearpath_platform_msgs__msg__PinoutState * lhs, const clearpath_platform_msgs__msg__PinoutState * rhs)
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
  // rails
  if (!rosidl_runtime_c__boolean__Sequence__are_equal(
      &(lhs->rails), &(rhs->rails)))
  {
    return false;
  }
  // inputs
  if (!rosidl_runtime_c__boolean__Sequence__are_equal(
      &(lhs->inputs), &(rhs->inputs)))
  {
    return false;
  }
  // outputs
  if (!rosidl_runtime_c__boolean__Sequence__are_equal(
      &(lhs->outputs), &(rhs->outputs)))
  {
    return false;
  }
  // output_periods
  if (!rosidl_runtime_c__uint32__Sequence__are_equal(
      &(lhs->output_periods), &(rhs->output_periods)))
  {
    return false;
  }
  return true;
}

bool
clearpath_platform_msgs__msg__PinoutState__copy(
  const clearpath_platform_msgs__msg__PinoutState * input,
  clearpath_platform_msgs__msg__PinoutState * output)
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
  // rails
  if (!rosidl_runtime_c__boolean__Sequence__copy(
      &(input->rails), &(output->rails)))
  {
    return false;
  }
  // inputs
  if (!rosidl_runtime_c__boolean__Sequence__copy(
      &(input->inputs), &(output->inputs)))
  {
    return false;
  }
  // outputs
  if (!rosidl_runtime_c__boolean__Sequence__copy(
      &(input->outputs), &(output->outputs)))
  {
    return false;
  }
  // output_periods
  if (!rosidl_runtime_c__uint32__Sequence__copy(
      &(input->output_periods), &(output->output_periods)))
  {
    return false;
  }
  return true;
}

clearpath_platform_msgs__msg__PinoutState *
clearpath_platform_msgs__msg__PinoutState__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  clearpath_platform_msgs__msg__PinoutState * msg = (clearpath_platform_msgs__msg__PinoutState *)allocator.allocate(sizeof(clearpath_platform_msgs__msg__PinoutState), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(clearpath_platform_msgs__msg__PinoutState));
  bool success = clearpath_platform_msgs__msg__PinoutState__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
clearpath_platform_msgs__msg__PinoutState__destroy(clearpath_platform_msgs__msg__PinoutState * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    clearpath_platform_msgs__msg__PinoutState__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
clearpath_platform_msgs__msg__PinoutState__Sequence__init(clearpath_platform_msgs__msg__PinoutState__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  clearpath_platform_msgs__msg__PinoutState * data = NULL;

  if (size) {
    data = (clearpath_platform_msgs__msg__PinoutState *)allocator.zero_allocate(size, sizeof(clearpath_platform_msgs__msg__PinoutState), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = clearpath_platform_msgs__msg__PinoutState__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        clearpath_platform_msgs__msg__PinoutState__fini(&data[i - 1]);
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
clearpath_platform_msgs__msg__PinoutState__Sequence__fini(clearpath_platform_msgs__msg__PinoutState__Sequence * array)
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
      clearpath_platform_msgs__msg__PinoutState__fini(&array->data[i]);
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

clearpath_platform_msgs__msg__PinoutState__Sequence *
clearpath_platform_msgs__msg__PinoutState__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  clearpath_platform_msgs__msg__PinoutState__Sequence * array = (clearpath_platform_msgs__msg__PinoutState__Sequence *)allocator.allocate(sizeof(clearpath_platform_msgs__msg__PinoutState__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = clearpath_platform_msgs__msg__PinoutState__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
clearpath_platform_msgs__msg__PinoutState__Sequence__destroy(clearpath_platform_msgs__msg__PinoutState__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    clearpath_platform_msgs__msg__PinoutState__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
clearpath_platform_msgs__msg__PinoutState__Sequence__are_equal(const clearpath_platform_msgs__msg__PinoutState__Sequence * lhs, const clearpath_platform_msgs__msg__PinoutState__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!clearpath_platform_msgs__msg__PinoutState__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
clearpath_platform_msgs__msg__PinoutState__Sequence__copy(
  const clearpath_platform_msgs__msg__PinoutState__Sequence * input,
  clearpath_platform_msgs__msg__PinoutState__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(clearpath_platform_msgs__msg__PinoutState);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    clearpath_platform_msgs__msg__PinoutState * data =
      (clearpath_platform_msgs__msg__PinoutState *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!clearpath_platform_msgs__msg__PinoutState__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          clearpath_platform_msgs__msg__PinoutState__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!clearpath_platform_msgs__msg__PinoutState__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}

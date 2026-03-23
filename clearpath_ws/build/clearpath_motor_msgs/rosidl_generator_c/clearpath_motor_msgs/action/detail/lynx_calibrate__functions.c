// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from clearpath_motor_msgs:action/LynxCalibrate.idl
// generated code does not contain a copyright notice
#include "clearpath_motor_msgs/action/detail/lynx_calibrate__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
clearpath_motor_msgs__action__LynxCalibrate_Goal__init(clearpath_motor_msgs__action__LynxCalibrate_Goal * msg)
{
  if (!msg) {
    return false;
  }
  // structure_needs_at_least_one_member
  return true;
}

void
clearpath_motor_msgs__action__LynxCalibrate_Goal__fini(clearpath_motor_msgs__action__LynxCalibrate_Goal * msg)
{
  if (!msg) {
    return;
  }
  // structure_needs_at_least_one_member
}

bool
clearpath_motor_msgs__action__LynxCalibrate_Goal__are_equal(const clearpath_motor_msgs__action__LynxCalibrate_Goal * lhs, const clearpath_motor_msgs__action__LynxCalibrate_Goal * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // structure_needs_at_least_one_member
  if (lhs->structure_needs_at_least_one_member != rhs->structure_needs_at_least_one_member) {
    return false;
  }
  return true;
}

bool
clearpath_motor_msgs__action__LynxCalibrate_Goal__copy(
  const clearpath_motor_msgs__action__LynxCalibrate_Goal * input,
  clearpath_motor_msgs__action__LynxCalibrate_Goal * output)
{
  if (!input || !output) {
    return false;
  }
  // structure_needs_at_least_one_member
  output->structure_needs_at_least_one_member = input->structure_needs_at_least_one_member;
  return true;
}

clearpath_motor_msgs__action__LynxCalibrate_Goal *
clearpath_motor_msgs__action__LynxCalibrate_Goal__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  clearpath_motor_msgs__action__LynxCalibrate_Goal * msg = (clearpath_motor_msgs__action__LynxCalibrate_Goal *)allocator.allocate(sizeof(clearpath_motor_msgs__action__LynxCalibrate_Goal), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(clearpath_motor_msgs__action__LynxCalibrate_Goal));
  bool success = clearpath_motor_msgs__action__LynxCalibrate_Goal__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
clearpath_motor_msgs__action__LynxCalibrate_Goal__destroy(clearpath_motor_msgs__action__LynxCalibrate_Goal * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    clearpath_motor_msgs__action__LynxCalibrate_Goal__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
clearpath_motor_msgs__action__LynxCalibrate_Goal__Sequence__init(clearpath_motor_msgs__action__LynxCalibrate_Goal__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  clearpath_motor_msgs__action__LynxCalibrate_Goal * data = NULL;

  if (size) {
    data = (clearpath_motor_msgs__action__LynxCalibrate_Goal *)allocator.zero_allocate(size, sizeof(clearpath_motor_msgs__action__LynxCalibrate_Goal), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = clearpath_motor_msgs__action__LynxCalibrate_Goal__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        clearpath_motor_msgs__action__LynxCalibrate_Goal__fini(&data[i - 1]);
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
clearpath_motor_msgs__action__LynxCalibrate_Goal__Sequence__fini(clearpath_motor_msgs__action__LynxCalibrate_Goal__Sequence * array)
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
      clearpath_motor_msgs__action__LynxCalibrate_Goal__fini(&array->data[i]);
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

clearpath_motor_msgs__action__LynxCalibrate_Goal__Sequence *
clearpath_motor_msgs__action__LynxCalibrate_Goal__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  clearpath_motor_msgs__action__LynxCalibrate_Goal__Sequence * array = (clearpath_motor_msgs__action__LynxCalibrate_Goal__Sequence *)allocator.allocate(sizeof(clearpath_motor_msgs__action__LynxCalibrate_Goal__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = clearpath_motor_msgs__action__LynxCalibrate_Goal__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
clearpath_motor_msgs__action__LynxCalibrate_Goal__Sequence__destroy(clearpath_motor_msgs__action__LynxCalibrate_Goal__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    clearpath_motor_msgs__action__LynxCalibrate_Goal__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
clearpath_motor_msgs__action__LynxCalibrate_Goal__Sequence__are_equal(const clearpath_motor_msgs__action__LynxCalibrate_Goal__Sequence * lhs, const clearpath_motor_msgs__action__LynxCalibrate_Goal__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!clearpath_motor_msgs__action__LynxCalibrate_Goal__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
clearpath_motor_msgs__action__LynxCalibrate_Goal__Sequence__copy(
  const clearpath_motor_msgs__action__LynxCalibrate_Goal__Sequence * input,
  clearpath_motor_msgs__action__LynxCalibrate_Goal__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(clearpath_motor_msgs__action__LynxCalibrate_Goal);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    clearpath_motor_msgs__action__LynxCalibrate_Goal * data =
      (clearpath_motor_msgs__action__LynxCalibrate_Goal *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!clearpath_motor_msgs__action__LynxCalibrate_Goal__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          clearpath_motor_msgs__action__LynxCalibrate_Goal__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!clearpath_motor_msgs__action__LynxCalibrate_Goal__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `offset`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
clearpath_motor_msgs__action__LynxCalibrate_Result__init(clearpath_motor_msgs__action__LynxCalibrate_Result * msg)
{
  if (!msg) {
    return false;
  }
  // offset
  if (!rosidl_runtime_c__float__Sequence__init(&msg->offset, 0)) {
    clearpath_motor_msgs__action__LynxCalibrate_Result__fini(msg);
    return false;
  }
  return true;
}

void
clearpath_motor_msgs__action__LynxCalibrate_Result__fini(clearpath_motor_msgs__action__LynxCalibrate_Result * msg)
{
  if (!msg) {
    return;
  }
  // offset
  rosidl_runtime_c__float__Sequence__fini(&msg->offset);
}

bool
clearpath_motor_msgs__action__LynxCalibrate_Result__are_equal(const clearpath_motor_msgs__action__LynxCalibrate_Result * lhs, const clearpath_motor_msgs__action__LynxCalibrate_Result * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // offset
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->offset), &(rhs->offset)))
  {
    return false;
  }
  return true;
}

bool
clearpath_motor_msgs__action__LynxCalibrate_Result__copy(
  const clearpath_motor_msgs__action__LynxCalibrate_Result * input,
  clearpath_motor_msgs__action__LynxCalibrate_Result * output)
{
  if (!input || !output) {
    return false;
  }
  // offset
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->offset), &(output->offset)))
  {
    return false;
  }
  return true;
}

clearpath_motor_msgs__action__LynxCalibrate_Result *
clearpath_motor_msgs__action__LynxCalibrate_Result__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  clearpath_motor_msgs__action__LynxCalibrate_Result * msg = (clearpath_motor_msgs__action__LynxCalibrate_Result *)allocator.allocate(sizeof(clearpath_motor_msgs__action__LynxCalibrate_Result), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(clearpath_motor_msgs__action__LynxCalibrate_Result));
  bool success = clearpath_motor_msgs__action__LynxCalibrate_Result__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
clearpath_motor_msgs__action__LynxCalibrate_Result__destroy(clearpath_motor_msgs__action__LynxCalibrate_Result * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    clearpath_motor_msgs__action__LynxCalibrate_Result__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
clearpath_motor_msgs__action__LynxCalibrate_Result__Sequence__init(clearpath_motor_msgs__action__LynxCalibrate_Result__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  clearpath_motor_msgs__action__LynxCalibrate_Result * data = NULL;

  if (size) {
    data = (clearpath_motor_msgs__action__LynxCalibrate_Result *)allocator.zero_allocate(size, sizeof(clearpath_motor_msgs__action__LynxCalibrate_Result), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = clearpath_motor_msgs__action__LynxCalibrate_Result__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        clearpath_motor_msgs__action__LynxCalibrate_Result__fini(&data[i - 1]);
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
clearpath_motor_msgs__action__LynxCalibrate_Result__Sequence__fini(clearpath_motor_msgs__action__LynxCalibrate_Result__Sequence * array)
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
      clearpath_motor_msgs__action__LynxCalibrate_Result__fini(&array->data[i]);
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

clearpath_motor_msgs__action__LynxCalibrate_Result__Sequence *
clearpath_motor_msgs__action__LynxCalibrate_Result__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  clearpath_motor_msgs__action__LynxCalibrate_Result__Sequence * array = (clearpath_motor_msgs__action__LynxCalibrate_Result__Sequence *)allocator.allocate(sizeof(clearpath_motor_msgs__action__LynxCalibrate_Result__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = clearpath_motor_msgs__action__LynxCalibrate_Result__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
clearpath_motor_msgs__action__LynxCalibrate_Result__Sequence__destroy(clearpath_motor_msgs__action__LynxCalibrate_Result__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    clearpath_motor_msgs__action__LynxCalibrate_Result__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
clearpath_motor_msgs__action__LynxCalibrate_Result__Sequence__are_equal(const clearpath_motor_msgs__action__LynxCalibrate_Result__Sequence * lhs, const clearpath_motor_msgs__action__LynxCalibrate_Result__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!clearpath_motor_msgs__action__LynxCalibrate_Result__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
clearpath_motor_msgs__action__LynxCalibrate_Result__Sequence__copy(
  const clearpath_motor_msgs__action__LynxCalibrate_Result__Sequence * input,
  clearpath_motor_msgs__action__LynxCalibrate_Result__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(clearpath_motor_msgs__action__LynxCalibrate_Result);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    clearpath_motor_msgs__action__LynxCalibrate_Result * data =
      (clearpath_motor_msgs__action__LynxCalibrate_Result *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!clearpath_motor_msgs__action__LynxCalibrate_Result__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          clearpath_motor_msgs__action__LynxCalibrate_Result__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!clearpath_motor_msgs__action__LynxCalibrate_Result__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `iteration`
// already included above
// #include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
clearpath_motor_msgs__action__LynxCalibrate_Feedback__init(clearpath_motor_msgs__action__LynxCalibrate_Feedback * msg)
{
  if (!msg) {
    return false;
  }
  // iteration
  if (!rosidl_runtime_c__uint16__Sequence__init(&msg->iteration, 0)) {
    clearpath_motor_msgs__action__LynxCalibrate_Feedback__fini(msg);
    return false;
  }
  return true;
}

void
clearpath_motor_msgs__action__LynxCalibrate_Feedback__fini(clearpath_motor_msgs__action__LynxCalibrate_Feedback * msg)
{
  if (!msg) {
    return;
  }
  // iteration
  rosidl_runtime_c__uint16__Sequence__fini(&msg->iteration);
}

bool
clearpath_motor_msgs__action__LynxCalibrate_Feedback__are_equal(const clearpath_motor_msgs__action__LynxCalibrate_Feedback * lhs, const clearpath_motor_msgs__action__LynxCalibrate_Feedback * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // iteration
  if (!rosidl_runtime_c__uint16__Sequence__are_equal(
      &(lhs->iteration), &(rhs->iteration)))
  {
    return false;
  }
  return true;
}

bool
clearpath_motor_msgs__action__LynxCalibrate_Feedback__copy(
  const clearpath_motor_msgs__action__LynxCalibrate_Feedback * input,
  clearpath_motor_msgs__action__LynxCalibrate_Feedback * output)
{
  if (!input || !output) {
    return false;
  }
  // iteration
  if (!rosidl_runtime_c__uint16__Sequence__copy(
      &(input->iteration), &(output->iteration)))
  {
    return false;
  }
  return true;
}

clearpath_motor_msgs__action__LynxCalibrate_Feedback *
clearpath_motor_msgs__action__LynxCalibrate_Feedback__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  clearpath_motor_msgs__action__LynxCalibrate_Feedback * msg = (clearpath_motor_msgs__action__LynxCalibrate_Feedback *)allocator.allocate(sizeof(clearpath_motor_msgs__action__LynxCalibrate_Feedback), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(clearpath_motor_msgs__action__LynxCalibrate_Feedback));
  bool success = clearpath_motor_msgs__action__LynxCalibrate_Feedback__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
clearpath_motor_msgs__action__LynxCalibrate_Feedback__destroy(clearpath_motor_msgs__action__LynxCalibrate_Feedback * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    clearpath_motor_msgs__action__LynxCalibrate_Feedback__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
clearpath_motor_msgs__action__LynxCalibrate_Feedback__Sequence__init(clearpath_motor_msgs__action__LynxCalibrate_Feedback__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  clearpath_motor_msgs__action__LynxCalibrate_Feedback * data = NULL;

  if (size) {
    data = (clearpath_motor_msgs__action__LynxCalibrate_Feedback *)allocator.zero_allocate(size, sizeof(clearpath_motor_msgs__action__LynxCalibrate_Feedback), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = clearpath_motor_msgs__action__LynxCalibrate_Feedback__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        clearpath_motor_msgs__action__LynxCalibrate_Feedback__fini(&data[i - 1]);
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
clearpath_motor_msgs__action__LynxCalibrate_Feedback__Sequence__fini(clearpath_motor_msgs__action__LynxCalibrate_Feedback__Sequence * array)
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
      clearpath_motor_msgs__action__LynxCalibrate_Feedback__fini(&array->data[i]);
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

clearpath_motor_msgs__action__LynxCalibrate_Feedback__Sequence *
clearpath_motor_msgs__action__LynxCalibrate_Feedback__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  clearpath_motor_msgs__action__LynxCalibrate_Feedback__Sequence * array = (clearpath_motor_msgs__action__LynxCalibrate_Feedback__Sequence *)allocator.allocate(sizeof(clearpath_motor_msgs__action__LynxCalibrate_Feedback__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = clearpath_motor_msgs__action__LynxCalibrate_Feedback__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
clearpath_motor_msgs__action__LynxCalibrate_Feedback__Sequence__destroy(clearpath_motor_msgs__action__LynxCalibrate_Feedback__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    clearpath_motor_msgs__action__LynxCalibrate_Feedback__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
clearpath_motor_msgs__action__LynxCalibrate_Feedback__Sequence__are_equal(const clearpath_motor_msgs__action__LynxCalibrate_Feedback__Sequence * lhs, const clearpath_motor_msgs__action__LynxCalibrate_Feedback__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!clearpath_motor_msgs__action__LynxCalibrate_Feedback__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
clearpath_motor_msgs__action__LynxCalibrate_Feedback__Sequence__copy(
  const clearpath_motor_msgs__action__LynxCalibrate_Feedback__Sequence * input,
  clearpath_motor_msgs__action__LynxCalibrate_Feedback__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(clearpath_motor_msgs__action__LynxCalibrate_Feedback);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    clearpath_motor_msgs__action__LynxCalibrate_Feedback * data =
      (clearpath_motor_msgs__action__LynxCalibrate_Feedback *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!clearpath_motor_msgs__action__LynxCalibrate_Feedback__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          clearpath_motor_msgs__action__LynxCalibrate_Feedback__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!clearpath_motor_msgs__action__LynxCalibrate_Feedback__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `goal`
// already included above
// #include "clearpath_motor_msgs/action/detail/lynx_calibrate__functions.h"

bool
clearpath_motor_msgs__action__LynxCalibrate_SendGoal_Request__init(clearpath_motor_msgs__action__LynxCalibrate_SendGoal_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    clearpath_motor_msgs__action__LynxCalibrate_SendGoal_Request__fini(msg);
    return false;
  }
  // goal
  if (!clearpath_motor_msgs__action__LynxCalibrate_Goal__init(&msg->goal)) {
    clearpath_motor_msgs__action__LynxCalibrate_SendGoal_Request__fini(msg);
    return false;
  }
  return true;
}

void
clearpath_motor_msgs__action__LynxCalibrate_SendGoal_Request__fini(clearpath_motor_msgs__action__LynxCalibrate_SendGoal_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // goal
  clearpath_motor_msgs__action__LynxCalibrate_Goal__fini(&msg->goal);
}

bool
clearpath_motor_msgs__action__LynxCalibrate_SendGoal_Request__are_equal(const clearpath_motor_msgs__action__LynxCalibrate_SendGoal_Request * lhs, const clearpath_motor_msgs__action__LynxCalibrate_SendGoal_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  // goal
  if (!clearpath_motor_msgs__action__LynxCalibrate_Goal__are_equal(
      &(lhs->goal), &(rhs->goal)))
  {
    return false;
  }
  return true;
}

bool
clearpath_motor_msgs__action__LynxCalibrate_SendGoal_Request__copy(
  const clearpath_motor_msgs__action__LynxCalibrate_SendGoal_Request * input,
  clearpath_motor_msgs__action__LynxCalibrate_SendGoal_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  // goal
  if (!clearpath_motor_msgs__action__LynxCalibrate_Goal__copy(
      &(input->goal), &(output->goal)))
  {
    return false;
  }
  return true;
}

clearpath_motor_msgs__action__LynxCalibrate_SendGoal_Request *
clearpath_motor_msgs__action__LynxCalibrate_SendGoal_Request__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  clearpath_motor_msgs__action__LynxCalibrate_SendGoal_Request * msg = (clearpath_motor_msgs__action__LynxCalibrate_SendGoal_Request *)allocator.allocate(sizeof(clearpath_motor_msgs__action__LynxCalibrate_SendGoal_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(clearpath_motor_msgs__action__LynxCalibrate_SendGoal_Request));
  bool success = clearpath_motor_msgs__action__LynxCalibrate_SendGoal_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
clearpath_motor_msgs__action__LynxCalibrate_SendGoal_Request__destroy(clearpath_motor_msgs__action__LynxCalibrate_SendGoal_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    clearpath_motor_msgs__action__LynxCalibrate_SendGoal_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
clearpath_motor_msgs__action__LynxCalibrate_SendGoal_Request__Sequence__init(clearpath_motor_msgs__action__LynxCalibrate_SendGoal_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  clearpath_motor_msgs__action__LynxCalibrate_SendGoal_Request * data = NULL;

  if (size) {
    data = (clearpath_motor_msgs__action__LynxCalibrate_SendGoal_Request *)allocator.zero_allocate(size, sizeof(clearpath_motor_msgs__action__LynxCalibrate_SendGoal_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = clearpath_motor_msgs__action__LynxCalibrate_SendGoal_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        clearpath_motor_msgs__action__LynxCalibrate_SendGoal_Request__fini(&data[i - 1]);
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
clearpath_motor_msgs__action__LynxCalibrate_SendGoal_Request__Sequence__fini(clearpath_motor_msgs__action__LynxCalibrate_SendGoal_Request__Sequence * array)
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
      clearpath_motor_msgs__action__LynxCalibrate_SendGoal_Request__fini(&array->data[i]);
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

clearpath_motor_msgs__action__LynxCalibrate_SendGoal_Request__Sequence *
clearpath_motor_msgs__action__LynxCalibrate_SendGoal_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  clearpath_motor_msgs__action__LynxCalibrate_SendGoal_Request__Sequence * array = (clearpath_motor_msgs__action__LynxCalibrate_SendGoal_Request__Sequence *)allocator.allocate(sizeof(clearpath_motor_msgs__action__LynxCalibrate_SendGoal_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = clearpath_motor_msgs__action__LynxCalibrate_SendGoal_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
clearpath_motor_msgs__action__LynxCalibrate_SendGoal_Request__Sequence__destroy(clearpath_motor_msgs__action__LynxCalibrate_SendGoal_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    clearpath_motor_msgs__action__LynxCalibrate_SendGoal_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
clearpath_motor_msgs__action__LynxCalibrate_SendGoal_Request__Sequence__are_equal(const clearpath_motor_msgs__action__LynxCalibrate_SendGoal_Request__Sequence * lhs, const clearpath_motor_msgs__action__LynxCalibrate_SendGoal_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!clearpath_motor_msgs__action__LynxCalibrate_SendGoal_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
clearpath_motor_msgs__action__LynxCalibrate_SendGoal_Request__Sequence__copy(
  const clearpath_motor_msgs__action__LynxCalibrate_SendGoal_Request__Sequence * input,
  clearpath_motor_msgs__action__LynxCalibrate_SendGoal_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(clearpath_motor_msgs__action__LynxCalibrate_SendGoal_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    clearpath_motor_msgs__action__LynxCalibrate_SendGoal_Request * data =
      (clearpath_motor_msgs__action__LynxCalibrate_SendGoal_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!clearpath_motor_msgs__action__LynxCalibrate_SendGoal_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          clearpath_motor_msgs__action__LynxCalibrate_SendGoal_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!clearpath_motor_msgs__action__LynxCalibrate_SendGoal_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__functions.h"

bool
clearpath_motor_msgs__action__LynxCalibrate_SendGoal_Response__init(clearpath_motor_msgs__action__LynxCalibrate_SendGoal_Response * msg)
{
  if (!msg) {
    return false;
  }
  // accepted
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    clearpath_motor_msgs__action__LynxCalibrate_SendGoal_Response__fini(msg);
    return false;
  }
  return true;
}

void
clearpath_motor_msgs__action__LynxCalibrate_SendGoal_Response__fini(clearpath_motor_msgs__action__LynxCalibrate_SendGoal_Response * msg)
{
  if (!msg) {
    return;
  }
  // accepted
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
}

bool
clearpath_motor_msgs__action__LynxCalibrate_SendGoal_Response__are_equal(const clearpath_motor_msgs__action__LynxCalibrate_SendGoal_Response * lhs, const clearpath_motor_msgs__action__LynxCalibrate_SendGoal_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // accepted
  if (lhs->accepted != rhs->accepted) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->stamp), &(rhs->stamp)))
  {
    return false;
  }
  return true;
}

bool
clearpath_motor_msgs__action__LynxCalibrate_SendGoal_Response__copy(
  const clearpath_motor_msgs__action__LynxCalibrate_SendGoal_Response * input,
  clearpath_motor_msgs__action__LynxCalibrate_SendGoal_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // accepted
  output->accepted = input->accepted;
  // stamp
  if (!builtin_interfaces__msg__Time__copy(
      &(input->stamp), &(output->stamp)))
  {
    return false;
  }
  return true;
}

clearpath_motor_msgs__action__LynxCalibrate_SendGoal_Response *
clearpath_motor_msgs__action__LynxCalibrate_SendGoal_Response__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  clearpath_motor_msgs__action__LynxCalibrate_SendGoal_Response * msg = (clearpath_motor_msgs__action__LynxCalibrate_SendGoal_Response *)allocator.allocate(sizeof(clearpath_motor_msgs__action__LynxCalibrate_SendGoal_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(clearpath_motor_msgs__action__LynxCalibrate_SendGoal_Response));
  bool success = clearpath_motor_msgs__action__LynxCalibrate_SendGoal_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
clearpath_motor_msgs__action__LynxCalibrate_SendGoal_Response__destroy(clearpath_motor_msgs__action__LynxCalibrate_SendGoal_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    clearpath_motor_msgs__action__LynxCalibrate_SendGoal_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
clearpath_motor_msgs__action__LynxCalibrate_SendGoal_Response__Sequence__init(clearpath_motor_msgs__action__LynxCalibrate_SendGoal_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  clearpath_motor_msgs__action__LynxCalibrate_SendGoal_Response * data = NULL;

  if (size) {
    data = (clearpath_motor_msgs__action__LynxCalibrate_SendGoal_Response *)allocator.zero_allocate(size, sizeof(clearpath_motor_msgs__action__LynxCalibrate_SendGoal_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = clearpath_motor_msgs__action__LynxCalibrate_SendGoal_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        clearpath_motor_msgs__action__LynxCalibrate_SendGoal_Response__fini(&data[i - 1]);
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
clearpath_motor_msgs__action__LynxCalibrate_SendGoal_Response__Sequence__fini(clearpath_motor_msgs__action__LynxCalibrate_SendGoal_Response__Sequence * array)
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
      clearpath_motor_msgs__action__LynxCalibrate_SendGoal_Response__fini(&array->data[i]);
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

clearpath_motor_msgs__action__LynxCalibrate_SendGoal_Response__Sequence *
clearpath_motor_msgs__action__LynxCalibrate_SendGoal_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  clearpath_motor_msgs__action__LynxCalibrate_SendGoal_Response__Sequence * array = (clearpath_motor_msgs__action__LynxCalibrate_SendGoal_Response__Sequence *)allocator.allocate(sizeof(clearpath_motor_msgs__action__LynxCalibrate_SendGoal_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = clearpath_motor_msgs__action__LynxCalibrate_SendGoal_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
clearpath_motor_msgs__action__LynxCalibrate_SendGoal_Response__Sequence__destroy(clearpath_motor_msgs__action__LynxCalibrate_SendGoal_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    clearpath_motor_msgs__action__LynxCalibrate_SendGoal_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
clearpath_motor_msgs__action__LynxCalibrate_SendGoal_Response__Sequence__are_equal(const clearpath_motor_msgs__action__LynxCalibrate_SendGoal_Response__Sequence * lhs, const clearpath_motor_msgs__action__LynxCalibrate_SendGoal_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!clearpath_motor_msgs__action__LynxCalibrate_SendGoal_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
clearpath_motor_msgs__action__LynxCalibrate_SendGoal_Response__Sequence__copy(
  const clearpath_motor_msgs__action__LynxCalibrate_SendGoal_Response__Sequence * input,
  clearpath_motor_msgs__action__LynxCalibrate_SendGoal_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(clearpath_motor_msgs__action__LynxCalibrate_SendGoal_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    clearpath_motor_msgs__action__LynxCalibrate_SendGoal_Response * data =
      (clearpath_motor_msgs__action__LynxCalibrate_SendGoal_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!clearpath_motor_msgs__action__LynxCalibrate_SendGoal_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          clearpath_motor_msgs__action__LynxCalibrate_SendGoal_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!clearpath_motor_msgs__action__LynxCalibrate_SendGoal_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `info`
#include "service_msgs/msg/detail/service_event_info__functions.h"
// Member `request`
// Member `response`
// already included above
// #include "clearpath_motor_msgs/action/detail/lynx_calibrate__functions.h"

bool
clearpath_motor_msgs__action__LynxCalibrate_SendGoal_Event__init(clearpath_motor_msgs__action__LynxCalibrate_SendGoal_Event * msg)
{
  if (!msg) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__init(&msg->info)) {
    clearpath_motor_msgs__action__LynxCalibrate_SendGoal_Event__fini(msg);
    return false;
  }
  // request
  if (!clearpath_motor_msgs__action__LynxCalibrate_SendGoal_Request__Sequence__init(&msg->request, 0)) {
    clearpath_motor_msgs__action__LynxCalibrate_SendGoal_Event__fini(msg);
    return false;
  }
  // response
  if (!clearpath_motor_msgs__action__LynxCalibrate_SendGoal_Response__Sequence__init(&msg->response, 0)) {
    clearpath_motor_msgs__action__LynxCalibrate_SendGoal_Event__fini(msg);
    return false;
  }
  return true;
}

void
clearpath_motor_msgs__action__LynxCalibrate_SendGoal_Event__fini(clearpath_motor_msgs__action__LynxCalibrate_SendGoal_Event * msg)
{
  if (!msg) {
    return;
  }
  // info
  service_msgs__msg__ServiceEventInfo__fini(&msg->info);
  // request
  clearpath_motor_msgs__action__LynxCalibrate_SendGoal_Request__Sequence__fini(&msg->request);
  // response
  clearpath_motor_msgs__action__LynxCalibrate_SendGoal_Response__Sequence__fini(&msg->response);
}

bool
clearpath_motor_msgs__action__LynxCalibrate_SendGoal_Event__are_equal(const clearpath_motor_msgs__action__LynxCalibrate_SendGoal_Event * lhs, const clearpath_motor_msgs__action__LynxCalibrate_SendGoal_Event * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__are_equal(
      &(lhs->info), &(rhs->info)))
  {
    return false;
  }
  // request
  if (!clearpath_motor_msgs__action__LynxCalibrate_SendGoal_Request__Sequence__are_equal(
      &(lhs->request), &(rhs->request)))
  {
    return false;
  }
  // response
  if (!clearpath_motor_msgs__action__LynxCalibrate_SendGoal_Response__Sequence__are_equal(
      &(lhs->response), &(rhs->response)))
  {
    return false;
  }
  return true;
}

bool
clearpath_motor_msgs__action__LynxCalibrate_SendGoal_Event__copy(
  const clearpath_motor_msgs__action__LynxCalibrate_SendGoal_Event * input,
  clearpath_motor_msgs__action__LynxCalibrate_SendGoal_Event * output)
{
  if (!input || !output) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__copy(
      &(input->info), &(output->info)))
  {
    return false;
  }
  // request
  if (!clearpath_motor_msgs__action__LynxCalibrate_SendGoal_Request__Sequence__copy(
      &(input->request), &(output->request)))
  {
    return false;
  }
  // response
  if (!clearpath_motor_msgs__action__LynxCalibrate_SendGoal_Response__Sequence__copy(
      &(input->response), &(output->response)))
  {
    return false;
  }
  return true;
}

clearpath_motor_msgs__action__LynxCalibrate_SendGoal_Event *
clearpath_motor_msgs__action__LynxCalibrate_SendGoal_Event__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  clearpath_motor_msgs__action__LynxCalibrate_SendGoal_Event * msg = (clearpath_motor_msgs__action__LynxCalibrate_SendGoal_Event *)allocator.allocate(sizeof(clearpath_motor_msgs__action__LynxCalibrate_SendGoal_Event), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(clearpath_motor_msgs__action__LynxCalibrate_SendGoal_Event));
  bool success = clearpath_motor_msgs__action__LynxCalibrate_SendGoal_Event__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
clearpath_motor_msgs__action__LynxCalibrate_SendGoal_Event__destroy(clearpath_motor_msgs__action__LynxCalibrate_SendGoal_Event * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    clearpath_motor_msgs__action__LynxCalibrate_SendGoal_Event__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
clearpath_motor_msgs__action__LynxCalibrate_SendGoal_Event__Sequence__init(clearpath_motor_msgs__action__LynxCalibrate_SendGoal_Event__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  clearpath_motor_msgs__action__LynxCalibrate_SendGoal_Event * data = NULL;

  if (size) {
    data = (clearpath_motor_msgs__action__LynxCalibrate_SendGoal_Event *)allocator.zero_allocate(size, sizeof(clearpath_motor_msgs__action__LynxCalibrate_SendGoal_Event), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = clearpath_motor_msgs__action__LynxCalibrate_SendGoal_Event__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        clearpath_motor_msgs__action__LynxCalibrate_SendGoal_Event__fini(&data[i - 1]);
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
clearpath_motor_msgs__action__LynxCalibrate_SendGoal_Event__Sequence__fini(clearpath_motor_msgs__action__LynxCalibrate_SendGoal_Event__Sequence * array)
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
      clearpath_motor_msgs__action__LynxCalibrate_SendGoal_Event__fini(&array->data[i]);
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

clearpath_motor_msgs__action__LynxCalibrate_SendGoal_Event__Sequence *
clearpath_motor_msgs__action__LynxCalibrate_SendGoal_Event__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  clearpath_motor_msgs__action__LynxCalibrate_SendGoal_Event__Sequence * array = (clearpath_motor_msgs__action__LynxCalibrate_SendGoal_Event__Sequence *)allocator.allocate(sizeof(clearpath_motor_msgs__action__LynxCalibrate_SendGoal_Event__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = clearpath_motor_msgs__action__LynxCalibrate_SendGoal_Event__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
clearpath_motor_msgs__action__LynxCalibrate_SendGoal_Event__Sequence__destroy(clearpath_motor_msgs__action__LynxCalibrate_SendGoal_Event__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    clearpath_motor_msgs__action__LynxCalibrate_SendGoal_Event__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
clearpath_motor_msgs__action__LynxCalibrate_SendGoal_Event__Sequence__are_equal(const clearpath_motor_msgs__action__LynxCalibrate_SendGoal_Event__Sequence * lhs, const clearpath_motor_msgs__action__LynxCalibrate_SendGoal_Event__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!clearpath_motor_msgs__action__LynxCalibrate_SendGoal_Event__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
clearpath_motor_msgs__action__LynxCalibrate_SendGoal_Event__Sequence__copy(
  const clearpath_motor_msgs__action__LynxCalibrate_SendGoal_Event__Sequence * input,
  clearpath_motor_msgs__action__LynxCalibrate_SendGoal_Event__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(clearpath_motor_msgs__action__LynxCalibrate_SendGoal_Event);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    clearpath_motor_msgs__action__LynxCalibrate_SendGoal_Event * data =
      (clearpath_motor_msgs__action__LynxCalibrate_SendGoal_Event *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!clearpath_motor_msgs__action__LynxCalibrate_SendGoal_Event__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          clearpath_motor_msgs__action__LynxCalibrate_SendGoal_Event__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!clearpath_motor_msgs__action__LynxCalibrate_SendGoal_Event__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"

bool
clearpath_motor_msgs__action__LynxCalibrate_GetResult_Request__init(clearpath_motor_msgs__action__LynxCalibrate_GetResult_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    clearpath_motor_msgs__action__LynxCalibrate_GetResult_Request__fini(msg);
    return false;
  }
  return true;
}

void
clearpath_motor_msgs__action__LynxCalibrate_GetResult_Request__fini(clearpath_motor_msgs__action__LynxCalibrate_GetResult_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
}

bool
clearpath_motor_msgs__action__LynxCalibrate_GetResult_Request__are_equal(const clearpath_motor_msgs__action__LynxCalibrate_GetResult_Request * lhs, const clearpath_motor_msgs__action__LynxCalibrate_GetResult_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  return true;
}

bool
clearpath_motor_msgs__action__LynxCalibrate_GetResult_Request__copy(
  const clearpath_motor_msgs__action__LynxCalibrate_GetResult_Request * input,
  clearpath_motor_msgs__action__LynxCalibrate_GetResult_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  return true;
}

clearpath_motor_msgs__action__LynxCalibrate_GetResult_Request *
clearpath_motor_msgs__action__LynxCalibrate_GetResult_Request__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  clearpath_motor_msgs__action__LynxCalibrate_GetResult_Request * msg = (clearpath_motor_msgs__action__LynxCalibrate_GetResult_Request *)allocator.allocate(sizeof(clearpath_motor_msgs__action__LynxCalibrate_GetResult_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(clearpath_motor_msgs__action__LynxCalibrate_GetResult_Request));
  bool success = clearpath_motor_msgs__action__LynxCalibrate_GetResult_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
clearpath_motor_msgs__action__LynxCalibrate_GetResult_Request__destroy(clearpath_motor_msgs__action__LynxCalibrate_GetResult_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    clearpath_motor_msgs__action__LynxCalibrate_GetResult_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
clearpath_motor_msgs__action__LynxCalibrate_GetResult_Request__Sequence__init(clearpath_motor_msgs__action__LynxCalibrate_GetResult_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  clearpath_motor_msgs__action__LynxCalibrate_GetResult_Request * data = NULL;

  if (size) {
    data = (clearpath_motor_msgs__action__LynxCalibrate_GetResult_Request *)allocator.zero_allocate(size, sizeof(clearpath_motor_msgs__action__LynxCalibrate_GetResult_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = clearpath_motor_msgs__action__LynxCalibrate_GetResult_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        clearpath_motor_msgs__action__LynxCalibrate_GetResult_Request__fini(&data[i - 1]);
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
clearpath_motor_msgs__action__LynxCalibrate_GetResult_Request__Sequence__fini(clearpath_motor_msgs__action__LynxCalibrate_GetResult_Request__Sequence * array)
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
      clearpath_motor_msgs__action__LynxCalibrate_GetResult_Request__fini(&array->data[i]);
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

clearpath_motor_msgs__action__LynxCalibrate_GetResult_Request__Sequence *
clearpath_motor_msgs__action__LynxCalibrate_GetResult_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  clearpath_motor_msgs__action__LynxCalibrate_GetResult_Request__Sequence * array = (clearpath_motor_msgs__action__LynxCalibrate_GetResult_Request__Sequence *)allocator.allocate(sizeof(clearpath_motor_msgs__action__LynxCalibrate_GetResult_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = clearpath_motor_msgs__action__LynxCalibrate_GetResult_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
clearpath_motor_msgs__action__LynxCalibrate_GetResult_Request__Sequence__destroy(clearpath_motor_msgs__action__LynxCalibrate_GetResult_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    clearpath_motor_msgs__action__LynxCalibrate_GetResult_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
clearpath_motor_msgs__action__LynxCalibrate_GetResult_Request__Sequence__are_equal(const clearpath_motor_msgs__action__LynxCalibrate_GetResult_Request__Sequence * lhs, const clearpath_motor_msgs__action__LynxCalibrate_GetResult_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!clearpath_motor_msgs__action__LynxCalibrate_GetResult_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
clearpath_motor_msgs__action__LynxCalibrate_GetResult_Request__Sequence__copy(
  const clearpath_motor_msgs__action__LynxCalibrate_GetResult_Request__Sequence * input,
  clearpath_motor_msgs__action__LynxCalibrate_GetResult_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(clearpath_motor_msgs__action__LynxCalibrate_GetResult_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    clearpath_motor_msgs__action__LynxCalibrate_GetResult_Request * data =
      (clearpath_motor_msgs__action__LynxCalibrate_GetResult_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!clearpath_motor_msgs__action__LynxCalibrate_GetResult_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          clearpath_motor_msgs__action__LynxCalibrate_GetResult_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!clearpath_motor_msgs__action__LynxCalibrate_GetResult_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `result`
// already included above
// #include "clearpath_motor_msgs/action/detail/lynx_calibrate__functions.h"

bool
clearpath_motor_msgs__action__LynxCalibrate_GetResult_Response__init(clearpath_motor_msgs__action__LynxCalibrate_GetResult_Response * msg)
{
  if (!msg) {
    return false;
  }
  // status
  // result
  if (!clearpath_motor_msgs__action__LynxCalibrate_Result__init(&msg->result)) {
    clearpath_motor_msgs__action__LynxCalibrate_GetResult_Response__fini(msg);
    return false;
  }
  return true;
}

void
clearpath_motor_msgs__action__LynxCalibrate_GetResult_Response__fini(clearpath_motor_msgs__action__LynxCalibrate_GetResult_Response * msg)
{
  if (!msg) {
    return;
  }
  // status
  // result
  clearpath_motor_msgs__action__LynxCalibrate_Result__fini(&msg->result);
}

bool
clearpath_motor_msgs__action__LynxCalibrate_GetResult_Response__are_equal(const clearpath_motor_msgs__action__LynxCalibrate_GetResult_Response * lhs, const clearpath_motor_msgs__action__LynxCalibrate_GetResult_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // status
  if (lhs->status != rhs->status) {
    return false;
  }
  // result
  if (!clearpath_motor_msgs__action__LynxCalibrate_Result__are_equal(
      &(lhs->result), &(rhs->result)))
  {
    return false;
  }
  return true;
}

bool
clearpath_motor_msgs__action__LynxCalibrate_GetResult_Response__copy(
  const clearpath_motor_msgs__action__LynxCalibrate_GetResult_Response * input,
  clearpath_motor_msgs__action__LynxCalibrate_GetResult_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // status
  output->status = input->status;
  // result
  if (!clearpath_motor_msgs__action__LynxCalibrate_Result__copy(
      &(input->result), &(output->result)))
  {
    return false;
  }
  return true;
}

clearpath_motor_msgs__action__LynxCalibrate_GetResult_Response *
clearpath_motor_msgs__action__LynxCalibrate_GetResult_Response__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  clearpath_motor_msgs__action__LynxCalibrate_GetResult_Response * msg = (clearpath_motor_msgs__action__LynxCalibrate_GetResult_Response *)allocator.allocate(sizeof(clearpath_motor_msgs__action__LynxCalibrate_GetResult_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(clearpath_motor_msgs__action__LynxCalibrate_GetResult_Response));
  bool success = clearpath_motor_msgs__action__LynxCalibrate_GetResult_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
clearpath_motor_msgs__action__LynxCalibrate_GetResult_Response__destroy(clearpath_motor_msgs__action__LynxCalibrate_GetResult_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    clearpath_motor_msgs__action__LynxCalibrate_GetResult_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
clearpath_motor_msgs__action__LynxCalibrate_GetResult_Response__Sequence__init(clearpath_motor_msgs__action__LynxCalibrate_GetResult_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  clearpath_motor_msgs__action__LynxCalibrate_GetResult_Response * data = NULL;

  if (size) {
    data = (clearpath_motor_msgs__action__LynxCalibrate_GetResult_Response *)allocator.zero_allocate(size, sizeof(clearpath_motor_msgs__action__LynxCalibrate_GetResult_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = clearpath_motor_msgs__action__LynxCalibrate_GetResult_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        clearpath_motor_msgs__action__LynxCalibrate_GetResult_Response__fini(&data[i - 1]);
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
clearpath_motor_msgs__action__LynxCalibrate_GetResult_Response__Sequence__fini(clearpath_motor_msgs__action__LynxCalibrate_GetResult_Response__Sequence * array)
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
      clearpath_motor_msgs__action__LynxCalibrate_GetResult_Response__fini(&array->data[i]);
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

clearpath_motor_msgs__action__LynxCalibrate_GetResult_Response__Sequence *
clearpath_motor_msgs__action__LynxCalibrate_GetResult_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  clearpath_motor_msgs__action__LynxCalibrate_GetResult_Response__Sequence * array = (clearpath_motor_msgs__action__LynxCalibrate_GetResult_Response__Sequence *)allocator.allocate(sizeof(clearpath_motor_msgs__action__LynxCalibrate_GetResult_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = clearpath_motor_msgs__action__LynxCalibrate_GetResult_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
clearpath_motor_msgs__action__LynxCalibrate_GetResult_Response__Sequence__destroy(clearpath_motor_msgs__action__LynxCalibrate_GetResult_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    clearpath_motor_msgs__action__LynxCalibrate_GetResult_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
clearpath_motor_msgs__action__LynxCalibrate_GetResult_Response__Sequence__are_equal(const clearpath_motor_msgs__action__LynxCalibrate_GetResult_Response__Sequence * lhs, const clearpath_motor_msgs__action__LynxCalibrate_GetResult_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!clearpath_motor_msgs__action__LynxCalibrate_GetResult_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
clearpath_motor_msgs__action__LynxCalibrate_GetResult_Response__Sequence__copy(
  const clearpath_motor_msgs__action__LynxCalibrate_GetResult_Response__Sequence * input,
  clearpath_motor_msgs__action__LynxCalibrate_GetResult_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(clearpath_motor_msgs__action__LynxCalibrate_GetResult_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    clearpath_motor_msgs__action__LynxCalibrate_GetResult_Response * data =
      (clearpath_motor_msgs__action__LynxCalibrate_GetResult_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!clearpath_motor_msgs__action__LynxCalibrate_GetResult_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          clearpath_motor_msgs__action__LynxCalibrate_GetResult_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!clearpath_motor_msgs__action__LynxCalibrate_GetResult_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `info`
// already included above
// #include "service_msgs/msg/detail/service_event_info__functions.h"
// Member `request`
// Member `response`
// already included above
// #include "clearpath_motor_msgs/action/detail/lynx_calibrate__functions.h"

bool
clearpath_motor_msgs__action__LynxCalibrate_GetResult_Event__init(clearpath_motor_msgs__action__LynxCalibrate_GetResult_Event * msg)
{
  if (!msg) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__init(&msg->info)) {
    clearpath_motor_msgs__action__LynxCalibrate_GetResult_Event__fini(msg);
    return false;
  }
  // request
  if (!clearpath_motor_msgs__action__LynxCalibrate_GetResult_Request__Sequence__init(&msg->request, 0)) {
    clearpath_motor_msgs__action__LynxCalibrate_GetResult_Event__fini(msg);
    return false;
  }
  // response
  if (!clearpath_motor_msgs__action__LynxCalibrate_GetResult_Response__Sequence__init(&msg->response, 0)) {
    clearpath_motor_msgs__action__LynxCalibrate_GetResult_Event__fini(msg);
    return false;
  }
  return true;
}

void
clearpath_motor_msgs__action__LynxCalibrate_GetResult_Event__fini(clearpath_motor_msgs__action__LynxCalibrate_GetResult_Event * msg)
{
  if (!msg) {
    return;
  }
  // info
  service_msgs__msg__ServiceEventInfo__fini(&msg->info);
  // request
  clearpath_motor_msgs__action__LynxCalibrate_GetResult_Request__Sequence__fini(&msg->request);
  // response
  clearpath_motor_msgs__action__LynxCalibrate_GetResult_Response__Sequence__fini(&msg->response);
}

bool
clearpath_motor_msgs__action__LynxCalibrate_GetResult_Event__are_equal(const clearpath_motor_msgs__action__LynxCalibrate_GetResult_Event * lhs, const clearpath_motor_msgs__action__LynxCalibrate_GetResult_Event * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__are_equal(
      &(lhs->info), &(rhs->info)))
  {
    return false;
  }
  // request
  if (!clearpath_motor_msgs__action__LynxCalibrate_GetResult_Request__Sequence__are_equal(
      &(lhs->request), &(rhs->request)))
  {
    return false;
  }
  // response
  if (!clearpath_motor_msgs__action__LynxCalibrate_GetResult_Response__Sequence__are_equal(
      &(lhs->response), &(rhs->response)))
  {
    return false;
  }
  return true;
}

bool
clearpath_motor_msgs__action__LynxCalibrate_GetResult_Event__copy(
  const clearpath_motor_msgs__action__LynxCalibrate_GetResult_Event * input,
  clearpath_motor_msgs__action__LynxCalibrate_GetResult_Event * output)
{
  if (!input || !output) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__copy(
      &(input->info), &(output->info)))
  {
    return false;
  }
  // request
  if (!clearpath_motor_msgs__action__LynxCalibrate_GetResult_Request__Sequence__copy(
      &(input->request), &(output->request)))
  {
    return false;
  }
  // response
  if (!clearpath_motor_msgs__action__LynxCalibrate_GetResult_Response__Sequence__copy(
      &(input->response), &(output->response)))
  {
    return false;
  }
  return true;
}

clearpath_motor_msgs__action__LynxCalibrate_GetResult_Event *
clearpath_motor_msgs__action__LynxCalibrate_GetResult_Event__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  clearpath_motor_msgs__action__LynxCalibrate_GetResult_Event * msg = (clearpath_motor_msgs__action__LynxCalibrate_GetResult_Event *)allocator.allocate(sizeof(clearpath_motor_msgs__action__LynxCalibrate_GetResult_Event), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(clearpath_motor_msgs__action__LynxCalibrate_GetResult_Event));
  bool success = clearpath_motor_msgs__action__LynxCalibrate_GetResult_Event__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
clearpath_motor_msgs__action__LynxCalibrate_GetResult_Event__destroy(clearpath_motor_msgs__action__LynxCalibrate_GetResult_Event * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    clearpath_motor_msgs__action__LynxCalibrate_GetResult_Event__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
clearpath_motor_msgs__action__LynxCalibrate_GetResult_Event__Sequence__init(clearpath_motor_msgs__action__LynxCalibrate_GetResult_Event__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  clearpath_motor_msgs__action__LynxCalibrate_GetResult_Event * data = NULL;

  if (size) {
    data = (clearpath_motor_msgs__action__LynxCalibrate_GetResult_Event *)allocator.zero_allocate(size, sizeof(clearpath_motor_msgs__action__LynxCalibrate_GetResult_Event), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = clearpath_motor_msgs__action__LynxCalibrate_GetResult_Event__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        clearpath_motor_msgs__action__LynxCalibrate_GetResult_Event__fini(&data[i - 1]);
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
clearpath_motor_msgs__action__LynxCalibrate_GetResult_Event__Sequence__fini(clearpath_motor_msgs__action__LynxCalibrate_GetResult_Event__Sequence * array)
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
      clearpath_motor_msgs__action__LynxCalibrate_GetResult_Event__fini(&array->data[i]);
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

clearpath_motor_msgs__action__LynxCalibrate_GetResult_Event__Sequence *
clearpath_motor_msgs__action__LynxCalibrate_GetResult_Event__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  clearpath_motor_msgs__action__LynxCalibrate_GetResult_Event__Sequence * array = (clearpath_motor_msgs__action__LynxCalibrate_GetResult_Event__Sequence *)allocator.allocate(sizeof(clearpath_motor_msgs__action__LynxCalibrate_GetResult_Event__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = clearpath_motor_msgs__action__LynxCalibrate_GetResult_Event__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
clearpath_motor_msgs__action__LynxCalibrate_GetResult_Event__Sequence__destroy(clearpath_motor_msgs__action__LynxCalibrate_GetResult_Event__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    clearpath_motor_msgs__action__LynxCalibrate_GetResult_Event__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
clearpath_motor_msgs__action__LynxCalibrate_GetResult_Event__Sequence__are_equal(const clearpath_motor_msgs__action__LynxCalibrate_GetResult_Event__Sequence * lhs, const clearpath_motor_msgs__action__LynxCalibrate_GetResult_Event__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!clearpath_motor_msgs__action__LynxCalibrate_GetResult_Event__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
clearpath_motor_msgs__action__LynxCalibrate_GetResult_Event__Sequence__copy(
  const clearpath_motor_msgs__action__LynxCalibrate_GetResult_Event__Sequence * input,
  clearpath_motor_msgs__action__LynxCalibrate_GetResult_Event__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(clearpath_motor_msgs__action__LynxCalibrate_GetResult_Event);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    clearpath_motor_msgs__action__LynxCalibrate_GetResult_Event * data =
      (clearpath_motor_msgs__action__LynxCalibrate_GetResult_Event *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!clearpath_motor_msgs__action__LynxCalibrate_GetResult_Event__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          clearpath_motor_msgs__action__LynxCalibrate_GetResult_Event__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!clearpath_motor_msgs__action__LynxCalibrate_GetResult_Event__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `feedback`
// already included above
// #include "clearpath_motor_msgs/action/detail/lynx_calibrate__functions.h"

bool
clearpath_motor_msgs__action__LynxCalibrate_FeedbackMessage__init(clearpath_motor_msgs__action__LynxCalibrate_FeedbackMessage * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    clearpath_motor_msgs__action__LynxCalibrate_FeedbackMessage__fini(msg);
    return false;
  }
  // feedback
  if (!clearpath_motor_msgs__action__LynxCalibrate_Feedback__init(&msg->feedback)) {
    clearpath_motor_msgs__action__LynxCalibrate_FeedbackMessage__fini(msg);
    return false;
  }
  return true;
}

void
clearpath_motor_msgs__action__LynxCalibrate_FeedbackMessage__fini(clearpath_motor_msgs__action__LynxCalibrate_FeedbackMessage * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // feedback
  clearpath_motor_msgs__action__LynxCalibrate_Feedback__fini(&msg->feedback);
}

bool
clearpath_motor_msgs__action__LynxCalibrate_FeedbackMessage__are_equal(const clearpath_motor_msgs__action__LynxCalibrate_FeedbackMessage * lhs, const clearpath_motor_msgs__action__LynxCalibrate_FeedbackMessage * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  // feedback
  if (!clearpath_motor_msgs__action__LynxCalibrate_Feedback__are_equal(
      &(lhs->feedback), &(rhs->feedback)))
  {
    return false;
  }
  return true;
}

bool
clearpath_motor_msgs__action__LynxCalibrate_FeedbackMessage__copy(
  const clearpath_motor_msgs__action__LynxCalibrate_FeedbackMessage * input,
  clearpath_motor_msgs__action__LynxCalibrate_FeedbackMessage * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  // feedback
  if (!clearpath_motor_msgs__action__LynxCalibrate_Feedback__copy(
      &(input->feedback), &(output->feedback)))
  {
    return false;
  }
  return true;
}

clearpath_motor_msgs__action__LynxCalibrate_FeedbackMessage *
clearpath_motor_msgs__action__LynxCalibrate_FeedbackMessage__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  clearpath_motor_msgs__action__LynxCalibrate_FeedbackMessage * msg = (clearpath_motor_msgs__action__LynxCalibrate_FeedbackMessage *)allocator.allocate(sizeof(clearpath_motor_msgs__action__LynxCalibrate_FeedbackMessage), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(clearpath_motor_msgs__action__LynxCalibrate_FeedbackMessage));
  bool success = clearpath_motor_msgs__action__LynxCalibrate_FeedbackMessage__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
clearpath_motor_msgs__action__LynxCalibrate_FeedbackMessage__destroy(clearpath_motor_msgs__action__LynxCalibrate_FeedbackMessage * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    clearpath_motor_msgs__action__LynxCalibrate_FeedbackMessage__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
clearpath_motor_msgs__action__LynxCalibrate_FeedbackMessage__Sequence__init(clearpath_motor_msgs__action__LynxCalibrate_FeedbackMessage__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  clearpath_motor_msgs__action__LynxCalibrate_FeedbackMessage * data = NULL;

  if (size) {
    data = (clearpath_motor_msgs__action__LynxCalibrate_FeedbackMessage *)allocator.zero_allocate(size, sizeof(clearpath_motor_msgs__action__LynxCalibrate_FeedbackMessage), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = clearpath_motor_msgs__action__LynxCalibrate_FeedbackMessage__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        clearpath_motor_msgs__action__LynxCalibrate_FeedbackMessage__fini(&data[i - 1]);
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
clearpath_motor_msgs__action__LynxCalibrate_FeedbackMessage__Sequence__fini(clearpath_motor_msgs__action__LynxCalibrate_FeedbackMessage__Sequence * array)
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
      clearpath_motor_msgs__action__LynxCalibrate_FeedbackMessage__fini(&array->data[i]);
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

clearpath_motor_msgs__action__LynxCalibrate_FeedbackMessage__Sequence *
clearpath_motor_msgs__action__LynxCalibrate_FeedbackMessage__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  clearpath_motor_msgs__action__LynxCalibrate_FeedbackMessage__Sequence * array = (clearpath_motor_msgs__action__LynxCalibrate_FeedbackMessage__Sequence *)allocator.allocate(sizeof(clearpath_motor_msgs__action__LynxCalibrate_FeedbackMessage__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = clearpath_motor_msgs__action__LynxCalibrate_FeedbackMessage__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
clearpath_motor_msgs__action__LynxCalibrate_FeedbackMessage__Sequence__destroy(clearpath_motor_msgs__action__LynxCalibrate_FeedbackMessage__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    clearpath_motor_msgs__action__LynxCalibrate_FeedbackMessage__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
clearpath_motor_msgs__action__LynxCalibrate_FeedbackMessage__Sequence__are_equal(const clearpath_motor_msgs__action__LynxCalibrate_FeedbackMessage__Sequence * lhs, const clearpath_motor_msgs__action__LynxCalibrate_FeedbackMessage__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!clearpath_motor_msgs__action__LynxCalibrate_FeedbackMessage__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
clearpath_motor_msgs__action__LynxCalibrate_FeedbackMessage__Sequence__copy(
  const clearpath_motor_msgs__action__LynxCalibrate_FeedbackMessage__Sequence * input,
  clearpath_motor_msgs__action__LynxCalibrate_FeedbackMessage__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(clearpath_motor_msgs__action__LynxCalibrate_FeedbackMessage);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    clearpath_motor_msgs__action__LynxCalibrate_FeedbackMessage * data =
      (clearpath_motor_msgs__action__LynxCalibrate_FeedbackMessage *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!clearpath_motor_msgs__action__LynxCalibrate_FeedbackMessage__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          clearpath_motor_msgs__action__LynxCalibrate_FeedbackMessage__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!clearpath_motor_msgs__action__LynxCalibrate_FeedbackMessage__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}

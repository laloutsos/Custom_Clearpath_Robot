// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from clearpath_motor_msgs:msg/LynxFeedback.idl
// generated code does not contain a copyright notice
#include "clearpath_motor_msgs/msg/detail/lynx_feedback__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `joint_name`
#include "rosidl_runtime_c/string_functions.h"

bool
clearpath_motor_msgs__msg__LynxFeedback__init(clearpath_motor_msgs__msg__LynxFeedback * msg)
{
  if (!msg) {
    return false;
  }
  // can_id
  // joint_name
  if (!rosidl_runtime_c__String__init(&msg->joint_name)) {
    clearpath_motor_msgs__msg__LynxFeedback__fini(msg);
    return false;
  }
  // current
  // voltage
  // velocity
  // travel
  return true;
}

void
clearpath_motor_msgs__msg__LynxFeedback__fini(clearpath_motor_msgs__msg__LynxFeedback * msg)
{
  if (!msg) {
    return;
  }
  // can_id
  // joint_name
  rosidl_runtime_c__String__fini(&msg->joint_name);
  // current
  // voltage
  // velocity
  // travel
}

bool
clearpath_motor_msgs__msg__LynxFeedback__are_equal(const clearpath_motor_msgs__msg__LynxFeedback * lhs, const clearpath_motor_msgs__msg__LynxFeedback * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // can_id
  if (lhs->can_id != rhs->can_id) {
    return false;
  }
  // joint_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->joint_name), &(rhs->joint_name)))
  {
    return false;
  }
  // current
  if (lhs->current != rhs->current) {
    return false;
  }
  // voltage
  if (lhs->voltage != rhs->voltage) {
    return false;
  }
  // velocity
  if (lhs->velocity != rhs->velocity) {
    return false;
  }
  // travel
  if (lhs->travel != rhs->travel) {
    return false;
  }
  return true;
}

bool
clearpath_motor_msgs__msg__LynxFeedback__copy(
  const clearpath_motor_msgs__msg__LynxFeedback * input,
  clearpath_motor_msgs__msg__LynxFeedback * output)
{
  if (!input || !output) {
    return false;
  }
  // can_id
  output->can_id = input->can_id;
  // joint_name
  if (!rosidl_runtime_c__String__copy(
      &(input->joint_name), &(output->joint_name)))
  {
    return false;
  }
  // current
  output->current = input->current;
  // voltage
  output->voltage = input->voltage;
  // velocity
  output->velocity = input->velocity;
  // travel
  output->travel = input->travel;
  return true;
}

clearpath_motor_msgs__msg__LynxFeedback *
clearpath_motor_msgs__msg__LynxFeedback__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  clearpath_motor_msgs__msg__LynxFeedback * msg = (clearpath_motor_msgs__msg__LynxFeedback *)allocator.allocate(sizeof(clearpath_motor_msgs__msg__LynxFeedback), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(clearpath_motor_msgs__msg__LynxFeedback));
  bool success = clearpath_motor_msgs__msg__LynxFeedback__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
clearpath_motor_msgs__msg__LynxFeedback__destroy(clearpath_motor_msgs__msg__LynxFeedback * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    clearpath_motor_msgs__msg__LynxFeedback__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
clearpath_motor_msgs__msg__LynxFeedback__Sequence__init(clearpath_motor_msgs__msg__LynxFeedback__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  clearpath_motor_msgs__msg__LynxFeedback * data = NULL;

  if (size) {
    data = (clearpath_motor_msgs__msg__LynxFeedback *)allocator.zero_allocate(size, sizeof(clearpath_motor_msgs__msg__LynxFeedback), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = clearpath_motor_msgs__msg__LynxFeedback__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        clearpath_motor_msgs__msg__LynxFeedback__fini(&data[i - 1]);
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
clearpath_motor_msgs__msg__LynxFeedback__Sequence__fini(clearpath_motor_msgs__msg__LynxFeedback__Sequence * array)
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
      clearpath_motor_msgs__msg__LynxFeedback__fini(&array->data[i]);
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

clearpath_motor_msgs__msg__LynxFeedback__Sequence *
clearpath_motor_msgs__msg__LynxFeedback__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  clearpath_motor_msgs__msg__LynxFeedback__Sequence * array = (clearpath_motor_msgs__msg__LynxFeedback__Sequence *)allocator.allocate(sizeof(clearpath_motor_msgs__msg__LynxFeedback__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = clearpath_motor_msgs__msg__LynxFeedback__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
clearpath_motor_msgs__msg__LynxFeedback__Sequence__destroy(clearpath_motor_msgs__msg__LynxFeedback__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    clearpath_motor_msgs__msg__LynxFeedback__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
clearpath_motor_msgs__msg__LynxFeedback__Sequence__are_equal(const clearpath_motor_msgs__msg__LynxFeedback__Sequence * lhs, const clearpath_motor_msgs__msg__LynxFeedback__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!clearpath_motor_msgs__msg__LynxFeedback__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
clearpath_motor_msgs__msg__LynxFeedback__Sequence__copy(
  const clearpath_motor_msgs__msg__LynxFeedback__Sequence * input,
  clearpath_motor_msgs__msg__LynxFeedback__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(clearpath_motor_msgs__msg__LynxFeedback);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    clearpath_motor_msgs__msg__LynxFeedback * data =
      (clearpath_motor_msgs__msg__LynxFeedback *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!clearpath_motor_msgs__msg__LynxFeedback__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          clearpath_motor_msgs__msg__LynxFeedback__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!clearpath_motor_msgs__msg__LynxFeedback__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}

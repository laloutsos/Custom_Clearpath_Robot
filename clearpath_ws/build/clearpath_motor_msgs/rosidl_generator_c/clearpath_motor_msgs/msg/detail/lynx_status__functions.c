// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from clearpath_motor_msgs:msg/LynxStatus.idl
// generated code does not contain a copyright notice
#include "clearpath_motor_msgs/msg/detail/lynx_status__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `joint_name`
// Member `firmware_version`
#include "rosidl_runtime_c/string_functions.h"

bool
clearpath_motor_msgs__msg__LynxStatus__init(clearpath_motor_msgs__msg__LynxStatus * msg)
{
  if (!msg) {
    return false;
  }
  // can_id
  // joint_name
  if (!rosidl_runtime_c__String__init(&msg->joint_name)) {
    clearpath_motor_msgs__msg__LynxStatus__fini(msg);
    return false;
  }
  // firmware_version
  if (!rosidl_runtime_c__String__init(&msg->firmware_version)) {
    clearpath_motor_msgs__msg__LynxStatus__fini(msg);
    return false;
  }
  // motor_temperature
  // mcu_temperature
  // pcb_temperature
  // stopped
  // status_flags
  // warning_flags
  // error_flags
  return true;
}

void
clearpath_motor_msgs__msg__LynxStatus__fini(clearpath_motor_msgs__msg__LynxStatus * msg)
{
  if (!msg) {
    return;
  }
  // can_id
  // joint_name
  rosidl_runtime_c__String__fini(&msg->joint_name);
  // firmware_version
  rosidl_runtime_c__String__fini(&msg->firmware_version);
  // motor_temperature
  // mcu_temperature
  // pcb_temperature
  // stopped
  // status_flags
  // warning_flags
  // error_flags
}

bool
clearpath_motor_msgs__msg__LynxStatus__are_equal(const clearpath_motor_msgs__msg__LynxStatus * lhs, const clearpath_motor_msgs__msg__LynxStatus * rhs)
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
  // firmware_version
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->firmware_version), &(rhs->firmware_version)))
  {
    return false;
  }
  // motor_temperature
  if (lhs->motor_temperature != rhs->motor_temperature) {
    return false;
  }
  // mcu_temperature
  if (lhs->mcu_temperature != rhs->mcu_temperature) {
    return false;
  }
  // pcb_temperature
  if (lhs->pcb_temperature != rhs->pcb_temperature) {
    return false;
  }
  // stopped
  if (lhs->stopped != rhs->stopped) {
    return false;
  }
  // status_flags
  if (lhs->status_flags != rhs->status_flags) {
    return false;
  }
  // warning_flags
  if (lhs->warning_flags != rhs->warning_flags) {
    return false;
  }
  // error_flags
  if (lhs->error_flags != rhs->error_flags) {
    return false;
  }
  return true;
}

bool
clearpath_motor_msgs__msg__LynxStatus__copy(
  const clearpath_motor_msgs__msg__LynxStatus * input,
  clearpath_motor_msgs__msg__LynxStatus * output)
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
  // firmware_version
  if (!rosidl_runtime_c__String__copy(
      &(input->firmware_version), &(output->firmware_version)))
  {
    return false;
  }
  // motor_temperature
  output->motor_temperature = input->motor_temperature;
  // mcu_temperature
  output->mcu_temperature = input->mcu_temperature;
  // pcb_temperature
  output->pcb_temperature = input->pcb_temperature;
  // stopped
  output->stopped = input->stopped;
  // status_flags
  output->status_flags = input->status_flags;
  // warning_flags
  output->warning_flags = input->warning_flags;
  // error_flags
  output->error_flags = input->error_flags;
  return true;
}

clearpath_motor_msgs__msg__LynxStatus *
clearpath_motor_msgs__msg__LynxStatus__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  clearpath_motor_msgs__msg__LynxStatus * msg = (clearpath_motor_msgs__msg__LynxStatus *)allocator.allocate(sizeof(clearpath_motor_msgs__msg__LynxStatus), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(clearpath_motor_msgs__msg__LynxStatus));
  bool success = clearpath_motor_msgs__msg__LynxStatus__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
clearpath_motor_msgs__msg__LynxStatus__destroy(clearpath_motor_msgs__msg__LynxStatus * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    clearpath_motor_msgs__msg__LynxStatus__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
clearpath_motor_msgs__msg__LynxStatus__Sequence__init(clearpath_motor_msgs__msg__LynxStatus__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  clearpath_motor_msgs__msg__LynxStatus * data = NULL;

  if (size) {
    data = (clearpath_motor_msgs__msg__LynxStatus *)allocator.zero_allocate(size, sizeof(clearpath_motor_msgs__msg__LynxStatus), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = clearpath_motor_msgs__msg__LynxStatus__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        clearpath_motor_msgs__msg__LynxStatus__fini(&data[i - 1]);
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
clearpath_motor_msgs__msg__LynxStatus__Sequence__fini(clearpath_motor_msgs__msg__LynxStatus__Sequence * array)
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
      clearpath_motor_msgs__msg__LynxStatus__fini(&array->data[i]);
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

clearpath_motor_msgs__msg__LynxStatus__Sequence *
clearpath_motor_msgs__msg__LynxStatus__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  clearpath_motor_msgs__msg__LynxStatus__Sequence * array = (clearpath_motor_msgs__msg__LynxStatus__Sequence *)allocator.allocate(sizeof(clearpath_motor_msgs__msg__LynxStatus__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = clearpath_motor_msgs__msg__LynxStatus__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
clearpath_motor_msgs__msg__LynxStatus__Sequence__destroy(clearpath_motor_msgs__msg__LynxStatus__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    clearpath_motor_msgs__msg__LynxStatus__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
clearpath_motor_msgs__msg__LynxStatus__Sequence__are_equal(const clearpath_motor_msgs__msg__LynxStatus__Sequence * lhs, const clearpath_motor_msgs__msg__LynxStatus__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!clearpath_motor_msgs__msg__LynxStatus__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
clearpath_motor_msgs__msg__LynxStatus__Sequence__copy(
  const clearpath_motor_msgs__msg__LynxStatus__Sequence * input,
  clearpath_motor_msgs__msg__LynxStatus__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(clearpath_motor_msgs__msg__LynxStatus);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    clearpath_motor_msgs__msg__LynxStatus * data =
      (clearpath_motor_msgs__msg__LynxStatus *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!clearpath_motor_msgs__msg__LynxStatus__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          clearpath_motor_msgs__msg__LynxStatus__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!clearpath_motor_msgs__msg__LynxStatus__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}

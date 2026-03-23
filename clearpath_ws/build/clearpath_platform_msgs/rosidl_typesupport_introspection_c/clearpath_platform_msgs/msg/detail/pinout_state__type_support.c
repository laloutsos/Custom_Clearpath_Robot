// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from clearpath_platform_msgs:msg/PinoutState.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "clearpath_platform_msgs/msg/detail/pinout_state__rosidl_typesupport_introspection_c.h"
#include "clearpath_platform_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "clearpath_platform_msgs/msg/detail/pinout_state__functions.h"
#include "clearpath_platform_msgs/msg/detail/pinout_state__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `rails`
// Member `inputs`
// Member `outputs`
// Member `output_periods`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void clearpath_platform_msgs__msg__PinoutState__rosidl_typesupport_introspection_c__PinoutState_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  clearpath_platform_msgs__msg__PinoutState__init(message_memory);
}

void clearpath_platform_msgs__msg__PinoutState__rosidl_typesupport_introspection_c__PinoutState_fini_function(void * message_memory)
{
  clearpath_platform_msgs__msg__PinoutState__fini(message_memory);
}

size_t clearpath_platform_msgs__msg__PinoutState__rosidl_typesupport_introspection_c__size_function__PinoutState__rails(
  const void * untyped_member)
{
  const rosidl_runtime_c__boolean__Sequence * member =
    (const rosidl_runtime_c__boolean__Sequence *)(untyped_member);
  return member->size;
}

const void * clearpath_platform_msgs__msg__PinoutState__rosidl_typesupport_introspection_c__get_const_function__PinoutState__rails(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__boolean__Sequence * member =
    (const rosidl_runtime_c__boolean__Sequence *)(untyped_member);
  return &member->data[index];
}

void * clearpath_platform_msgs__msg__PinoutState__rosidl_typesupport_introspection_c__get_function__PinoutState__rails(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__boolean__Sequence * member =
    (rosidl_runtime_c__boolean__Sequence *)(untyped_member);
  return &member->data[index];
}

void clearpath_platform_msgs__msg__PinoutState__rosidl_typesupport_introspection_c__fetch_function__PinoutState__rails(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const bool * item =
    ((const bool *)
    clearpath_platform_msgs__msg__PinoutState__rosidl_typesupport_introspection_c__get_const_function__PinoutState__rails(untyped_member, index));
  bool * value =
    (bool *)(untyped_value);
  *value = *item;
}

void clearpath_platform_msgs__msg__PinoutState__rosidl_typesupport_introspection_c__assign_function__PinoutState__rails(
  void * untyped_member, size_t index, const void * untyped_value)
{
  bool * item =
    ((bool *)
    clearpath_platform_msgs__msg__PinoutState__rosidl_typesupport_introspection_c__get_function__PinoutState__rails(untyped_member, index));
  const bool * value =
    (const bool *)(untyped_value);
  *item = *value;
}

bool clearpath_platform_msgs__msg__PinoutState__rosidl_typesupport_introspection_c__resize_function__PinoutState__rails(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__boolean__Sequence * member =
    (rosidl_runtime_c__boolean__Sequence *)(untyped_member);
  rosidl_runtime_c__boolean__Sequence__fini(member);
  return rosidl_runtime_c__boolean__Sequence__init(member, size);
}

size_t clearpath_platform_msgs__msg__PinoutState__rosidl_typesupport_introspection_c__size_function__PinoutState__inputs(
  const void * untyped_member)
{
  const rosidl_runtime_c__boolean__Sequence * member =
    (const rosidl_runtime_c__boolean__Sequence *)(untyped_member);
  return member->size;
}

const void * clearpath_platform_msgs__msg__PinoutState__rosidl_typesupport_introspection_c__get_const_function__PinoutState__inputs(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__boolean__Sequence * member =
    (const rosidl_runtime_c__boolean__Sequence *)(untyped_member);
  return &member->data[index];
}

void * clearpath_platform_msgs__msg__PinoutState__rosidl_typesupport_introspection_c__get_function__PinoutState__inputs(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__boolean__Sequence * member =
    (rosidl_runtime_c__boolean__Sequence *)(untyped_member);
  return &member->data[index];
}

void clearpath_platform_msgs__msg__PinoutState__rosidl_typesupport_introspection_c__fetch_function__PinoutState__inputs(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const bool * item =
    ((const bool *)
    clearpath_platform_msgs__msg__PinoutState__rosidl_typesupport_introspection_c__get_const_function__PinoutState__inputs(untyped_member, index));
  bool * value =
    (bool *)(untyped_value);
  *value = *item;
}

void clearpath_platform_msgs__msg__PinoutState__rosidl_typesupport_introspection_c__assign_function__PinoutState__inputs(
  void * untyped_member, size_t index, const void * untyped_value)
{
  bool * item =
    ((bool *)
    clearpath_platform_msgs__msg__PinoutState__rosidl_typesupport_introspection_c__get_function__PinoutState__inputs(untyped_member, index));
  const bool * value =
    (const bool *)(untyped_value);
  *item = *value;
}

bool clearpath_platform_msgs__msg__PinoutState__rosidl_typesupport_introspection_c__resize_function__PinoutState__inputs(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__boolean__Sequence * member =
    (rosidl_runtime_c__boolean__Sequence *)(untyped_member);
  rosidl_runtime_c__boolean__Sequence__fini(member);
  return rosidl_runtime_c__boolean__Sequence__init(member, size);
}

size_t clearpath_platform_msgs__msg__PinoutState__rosidl_typesupport_introspection_c__size_function__PinoutState__outputs(
  const void * untyped_member)
{
  const rosidl_runtime_c__boolean__Sequence * member =
    (const rosidl_runtime_c__boolean__Sequence *)(untyped_member);
  return member->size;
}

const void * clearpath_platform_msgs__msg__PinoutState__rosidl_typesupport_introspection_c__get_const_function__PinoutState__outputs(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__boolean__Sequence * member =
    (const rosidl_runtime_c__boolean__Sequence *)(untyped_member);
  return &member->data[index];
}

void * clearpath_platform_msgs__msg__PinoutState__rosidl_typesupport_introspection_c__get_function__PinoutState__outputs(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__boolean__Sequence * member =
    (rosidl_runtime_c__boolean__Sequence *)(untyped_member);
  return &member->data[index];
}

void clearpath_platform_msgs__msg__PinoutState__rosidl_typesupport_introspection_c__fetch_function__PinoutState__outputs(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const bool * item =
    ((const bool *)
    clearpath_platform_msgs__msg__PinoutState__rosidl_typesupport_introspection_c__get_const_function__PinoutState__outputs(untyped_member, index));
  bool * value =
    (bool *)(untyped_value);
  *value = *item;
}

void clearpath_platform_msgs__msg__PinoutState__rosidl_typesupport_introspection_c__assign_function__PinoutState__outputs(
  void * untyped_member, size_t index, const void * untyped_value)
{
  bool * item =
    ((bool *)
    clearpath_platform_msgs__msg__PinoutState__rosidl_typesupport_introspection_c__get_function__PinoutState__outputs(untyped_member, index));
  const bool * value =
    (const bool *)(untyped_value);
  *item = *value;
}

bool clearpath_platform_msgs__msg__PinoutState__rosidl_typesupport_introspection_c__resize_function__PinoutState__outputs(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__boolean__Sequence * member =
    (rosidl_runtime_c__boolean__Sequence *)(untyped_member);
  rosidl_runtime_c__boolean__Sequence__fini(member);
  return rosidl_runtime_c__boolean__Sequence__init(member, size);
}

size_t clearpath_platform_msgs__msg__PinoutState__rosidl_typesupport_introspection_c__size_function__PinoutState__output_periods(
  const void * untyped_member)
{
  const rosidl_runtime_c__uint32__Sequence * member =
    (const rosidl_runtime_c__uint32__Sequence *)(untyped_member);
  return member->size;
}

const void * clearpath_platform_msgs__msg__PinoutState__rosidl_typesupport_introspection_c__get_const_function__PinoutState__output_periods(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__uint32__Sequence * member =
    (const rosidl_runtime_c__uint32__Sequence *)(untyped_member);
  return &member->data[index];
}

void * clearpath_platform_msgs__msg__PinoutState__rosidl_typesupport_introspection_c__get_function__PinoutState__output_periods(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__uint32__Sequence * member =
    (rosidl_runtime_c__uint32__Sequence *)(untyped_member);
  return &member->data[index];
}

void clearpath_platform_msgs__msg__PinoutState__rosidl_typesupport_introspection_c__fetch_function__PinoutState__output_periods(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint32_t * item =
    ((const uint32_t *)
    clearpath_platform_msgs__msg__PinoutState__rosidl_typesupport_introspection_c__get_const_function__PinoutState__output_periods(untyped_member, index));
  uint32_t * value =
    (uint32_t *)(untyped_value);
  *value = *item;
}

void clearpath_platform_msgs__msg__PinoutState__rosidl_typesupport_introspection_c__assign_function__PinoutState__output_periods(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint32_t * item =
    ((uint32_t *)
    clearpath_platform_msgs__msg__PinoutState__rosidl_typesupport_introspection_c__get_function__PinoutState__output_periods(untyped_member, index));
  const uint32_t * value =
    (const uint32_t *)(untyped_value);
  *item = *value;
}

bool clearpath_platform_msgs__msg__PinoutState__rosidl_typesupport_introspection_c__resize_function__PinoutState__output_periods(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__uint32__Sequence * member =
    (rosidl_runtime_c__uint32__Sequence *)(untyped_member);
  rosidl_runtime_c__uint32__Sequence__fini(member);
  return rosidl_runtime_c__uint32__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember clearpath_platform_msgs__msg__PinoutState__rosidl_typesupport_introspection_c__PinoutState_message_member_array[5] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(clearpath_platform_msgs__msg__PinoutState, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "rails",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(clearpath_platform_msgs__msg__PinoutState, rails),  // bytes offset in struct
    NULL,  // default value
    clearpath_platform_msgs__msg__PinoutState__rosidl_typesupport_introspection_c__size_function__PinoutState__rails,  // size() function pointer
    clearpath_platform_msgs__msg__PinoutState__rosidl_typesupport_introspection_c__get_const_function__PinoutState__rails,  // get_const(index) function pointer
    clearpath_platform_msgs__msg__PinoutState__rosidl_typesupport_introspection_c__get_function__PinoutState__rails,  // get(index) function pointer
    clearpath_platform_msgs__msg__PinoutState__rosidl_typesupport_introspection_c__fetch_function__PinoutState__rails,  // fetch(index, &value) function pointer
    clearpath_platform_msgs__msg__PinoutState__rosidl_typesupport_introspection_c__assign_function__PinoutState__rails,  // assign(index, value) function pointer
    clearpath_platform_msgs__msg__PinoutState__rosidl_typesupport_introspection_c__resize_function__PinoutState__rails  // resize(index) function pointer
  },
  {
    "inputs",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(clearpath_platform_msgs__msg__PinoutState, inputs),  // bytes offset in struct
    NULL,  // default value
    clearpath_platform_msgs__msg__PinoutState__rosidl_typesupport_introspection_c__size_function__PinoutState__inputs,  // size() function pointer
    clearpath_platform_msgs__msg__PinoutState__rosidl_typesupport_introspection_c__get_const_function__PinoutState__inputs,  // get_const(index) function pointer
    clearpath_platform_msgs__msg__PinoutState__rosidl_typesupport_introspection_c__get_function__PinoutState__inputs,  // get(index) function pointer
    clearpath_platform_msgs__msg__PinoutState__rosidl_typesupport_introspection_c__fetch_function__PinoutState__inputs,  // fetch(index, &value) function pointer
    clearpath_platform_msgs__msg__PinoutState__rosidl_typesupport_introspection_c__assign_function__PinoutState__inputs,  // assign(index, value) function pointer
    clearpath_platform_msgs__msg__PinoutState__rosidl_typesupport_introspection_c__resize_function__PinoutState__inputs  // resize(index) function pointer
  },
  {
    "outputs",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(clearpath_platform_msgs__msg__PinoutState, outputs),  // bytes offset in struct
    NULL,  // default value
    clearpath_platform_msgs__msg__PinoutState__rosidl_typesupport_introspection_c__size_function__PinoutState__outputs,  // size() function pointer
    clearpath_platform_msgs__msg__PinoutState__rosidl_typesupport_introspection_c__get_const_function__PinoutState__outputs,  // get_const(index) function pointer
    clearpath_platform_msgs__msg__PinoutState__rosidl_typesupport_introspection_c__get_function__PinoutState__outputs,  // get(index) function pointer
    clearpath_platform_msgs__msg__PinoutState__rosidl_typesupport_introspection_c__fetch_function__PinoutState__outputs,  // fetch(index, &value) function pointer
    clearpath_platform_msgs__msg__PinoutState__rosidl_typesupport_introspection_c__assign_function__PinoutState__outputs,  // assign(index, value) function pointer
    clearpath_platform_msgs__msg__PinoutState__rosidl_typesupport_introspection_c__resize_function__PinoutState__outputs  // resize(index) function pointer
  },
  {
    "output_periods",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(clearpath_platform_msgs__msg__PinoutState, output_periods),  // bytes offset in struct
    NULL,  // default value
    clearpath_platform_msgs__msg__PinoutState__rosidl_typesupport_introspection_c__size_function__PinoutState__output_periods,  // size() function pointer
    clearpath_platform_msgs__msg__PinoutState__rosidl_typesupport_introspection_c__get_const_function__PinoutState__output_periods,  // get_const(index) function pointer
    clearpath_platform_msgs__msg__PinoutState__rosidl_typesupport_introspection_c__get_function__PinoutState__output_periods,  // get(index) function pointer
    clearpath_platform_msgs__msg__PinoutState__rosidl_typesupport_introspection_c__fetch_function__PinoutState__output_periods,  // fetch(index, &value) function pointer
    clearpath_platform_msgs__msg__PinoutState__rosidl_typesupport_introspection_c__assign_function__PinoutState__output_periods,  // assign(index, value) function pointer
    clearpath_platform_msgs__msg__PinoutState__rosidl_typesupport_introspection_c__resize_function__PinoutState__output_periods  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers clearpath_platform_msgs__msg__PinoutState__rosidl_typesupport_introspection_c__PinoutState_message_members = {
  "clearpath_platform_msgs__msg",  // message namespace
  "PinoutState",  // message name
  5,  // number of fields
  sizeof(clearpath_platform_msgs__msg__PinoutState),
  false,  // has_any_key_member_
  clearpath_platform_msgs__msg__PinoutState__rosidl_typesupport_introspection_c__PinoutState_message_member_array,  // message members
  clearpath_platform_msgs__msg__PinoutState__rosidl_typesupport_introspection_c__PinoutState_init_function,  // function to initialize message memory (memory has to be allocated)
  clearpath_platform_msgs__msg__PinoutState__rosidl_typesupport_introspection_c__PinoutState_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t clearpath_platform_msgs__msg__PinoutState__rosidl_typesupport_introspection_c__PinoutState_message_type_support_handle = {
  0,
  &clearpath_platform_msgs__msg__PinoutState__rosidl_typesupport_introspection_c__PinoutState_message_members,
  get_message_typesupport_handle_function,
  &clearpath_platform_msgs__msg__PinoutState__get_type_hash,
  &clearpath_platform_msgs__msg__PinoutState__get_type_description,
  &clearpath_platform_msgs__msg__PinoutState__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_clearpath_platform_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, clearpath_platform_msgs, msg, PinoutState)() {
  clearpath_platform_msgs__msg__PinoutState__rosidl_typesupport_introspection_c__PinoutState_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  if (!clearpath_platform_msgs__msg__PinoutState__rosidl_typesupport_introspection_c__PinoutState_message_type_support_handle.typesupport_identifier) {
    clearpath_platform_msgs__msg__PinoutState__rosidl_typesupport_introspection_c__PinoutState_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &clearpath_platform_msgs__msg__PinoutState__rosidl_typesupport_introspection_c__PinoutState_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

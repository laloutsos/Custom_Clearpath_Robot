// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from clearpath_platform_msgs:msg/PinoutCommand.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "clearpath_platform_msgs/msg/detail/pinout_command__rosidl_typesupport_introspection_c.h"
#include "clearpath_platform_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "clearpath_platform_msgs/msg/detail/pinout_command__functions.h"
#include "clearpath_platform_msgs/msg/detail/pinout_command__struct.h"


// Include directives for member types
// Member `rails`
// Member `outputs`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void clearpath_platform_msgs__msg__PinoutCommand__rosidl_typesupport_introspection_c__PinoutCommand_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  clearpath_platform_msgs__msg__PinoutCommand__init(message_memory);
}

void clearpath_platform_msgs__msg__PinoutCommand__rosidl_typesupport_introspection_c__PinoutCommand_fini_function(void * message_memory)
{
  clearpath_platform_msgs__msg__PinoutCommand__fini(message_memory);
}

size_t clearpath_platform_msgs__msg__PinoutCommand__rosidl_typesupport_introspection_c__size_function__PinoutCommand__rails(
  const void * untyped_member)
{
  const rosidl_runtime_c__boolean__Sequence * member =
    (const rosidl_runtime_c__boolean__Sequence *)(untyped_member);
  return member->size;
}

const void * clearpath_platform_msgs__msg__PinoutCommand__rosidl_typesupport_introspection_c__get_const_function__PinoutCommand__rails(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__boolean__Sequence * member =
    (const rosidl_runtime_c__boolean__Sequence *)(untyped_member);
  return &member->data[index];
}

void * clearpath_platform_msgs__msg__PinoutCommand__rosidl_typesupport_introspection_c__get_function__PinoutCommand__rails(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__boolean__Sequence * member =
    (rosidl_runtime_c__boolean__Sequence *)(untyped_member);
  return &member->data[index];
}

void clearpath_platform_msgs__msg__PinoutCommand__rosidl_typesupport_introspection_c__fetch_function__PinoutCommand__rails(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const bool * item =
    ((const bool *)
    clearpath_platform_msgs__msg__PinoutCommand__rosidl_typesupport_introspection_c__get_const_function__PinoutCommand__rails(untyped_member, index));
  bool * value =
    (bool *)(untyped_value);
  *value = *item;
}

void clearpath_platform_msgs__msg__PinoutCommand__rosidl_typesupport_introspection_c__assign_function__PinoutCommand__rails(
  void * untyped_member, size_t index, const void * untyped_value)
{
  bool * item =
    ((bool *)
    clearpath_platform_msgs__msg__PinoutCommand__rosidl_typesupport_introspection_c__get_function__PinoutCommand__rails(untyped_member, index));
  const bool * value =
    (const bool *)(untyped_value);
  *item = *value;
}

bool clearpath_platform_msgs__msg__PinoutCommand__rosidl_typesupport_introspection_c__resize_function__PinoutCommand__rails(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__boolean__Sequence * member =
    (rosidl_runtime_c__boolean__Sequence *)(untyped_member);
  rosidl_runtime_c__boolean__Sequence__fini(member);
  return rosidl_runtime_c__boolean__Sequence__init(member, size);
}

size_t clearpath_platform_msgs__msg__PinoutCommand__rosidl_typesupport_introspection_c__size_function__PinoutCommand__outputs(
  const void * untyped_member)
{
  const rosidl_runtime_c__uint32__Sequence * member =
    (const rosidl_runtime_c__uint32__Sequence *)(untyped_member);
  return member->size;
}

const void * clearpath_platform_msgs__msg__PinoutCommand__rosidl_typesupport_introspection_c__get_const_function__PinoutCommand__outputs(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__uint32__Sequence * member =
    (const rosidl_runtime_c__uint32__Sequence *)(untyped_member);
  return &member->data[index];
}

void * clearpath_platform_msgs__msg__PinoutCommand__rosidl_typesupport_introspection_c__get_function__PinoutCommand__outputs(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__uint32__Sequence * member =
    (rosidl_runtime_c__uint32__Sequence *)(untyped_member);
  return &member->data[index];
}

void clearpath_platform_msgs__msg__PinoutCommand__rosidl_typesupport_introspection_c__fetch_function__PinoutCommand__outputs(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint32_t * item =
    ((const uint32_t *)
    clearpath_platform_msgs__msg__PinoutCommand__rosidl_typesupport_introspection_c__get_const_function__PinoutCommand__outputs(untyped_member, index));
  uint32_t * value =
    (uint32_t *)(untyped_value);
  *value = *item;
}

void clearpath_platform_msgs__msg__PinoutCommand__rosidl_typesupport_introspection_c__assign_function__PinoutCommand__outputs(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint32_t * item =
    ((uint32_t *)
    clearpath_platform_msgs__msg__PinoutCommand__rosidl_typesupport_introspection_c__get_function__PinoutCommand__outputs(untyped_member, index));
  const uint32_t * value =
    (const uint32_t *)(untyped_value);
  *item = *value;
}

bool clearpath_platform_msgs__msg__PinoutCommand__rosidl_typesupport_introspection_c__resize_function__PinoutCommand__outputs(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__uint32__Sequence * member =
    (rosidl_runtime_c__uint32__Sequence *)(untyped_member);
  rosidl_runtime_c__uint32__Sequence__fini(member);
  return rosidl_runtime_c__uint32__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember clearpath_platform_msgs__msg__PinoutCommand__rosidl_typesupport_introspection_c__PinoutCommand_message_member_array[2] = {
  {
    "rails",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(clearpath_platform_msgs__msg__PinoutCommand, rails),  // bytes offset in struct
    NULL,  // default value
    clearpath_platform_msgs__msg__PinoutCommand__rosidl_typesupport_introspection_c__size_function__PinoutCommand__rails,  // size() function pointer
    clearpath_platform_msgs__msg__PinoutCommand__rosidl_typesupport_introspection_c__get_const_function__PinoutCommand__rails,  // get_const(index) function pointer
    clearpath_platform_msgs__msg__PinoutCommand__rosidl_typesupport_introspection_c__get_function__PinoutCommand__rails,  // get(index) function pointer
    clearpath_platform_msgs__msg__PinoutCommand__rosidl_typesupport_introspection_c__fetch_function__PinoutCommand__rails,  // fetch(index, &value) function pointer
    clearpath_platform_msgs__msg__PinoutCommand__rosidl_typesupport_introspection_c__assign_function__PinoutCommand__rails,  // assign(index, value) function pointer
    clearpath_platform_msgs__msg__PinoutCommand__rosidl_typesupport_introspection_c__resize_function__PinoutCommand__rails  // resize(index) function pointer
  },
  {
    "outputs",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(clearpath_platform_msgs__msg__PinoutCommand, outputs),  // bytes offset in struct
    NULL,  // default value
    clearpath_platform_msgs__msg__PinoutCommand__rosidl_typesupport_introspection_c__size_function__PinoutCommand__outputs,  // size() function pointer
    clearpath_platform_msgs__msg__PinoutCommand__rosidl_typesupport_introspection_c__get_const_function__PinoutCommand__outputs,  // get_const(index) function pointer
    clearpath_platform_msgs__msg__PinoutCommand__rosidl_typesupport_introspection_c__get_function__PinoutCommand__outputs,  // get(index) function pointer
    clearpath_platform_msgs__msg__PinoutCommand__rosidl_typesupport_introspection_c__fetch_function__PinoutCommand__outputs,  // fetch(index, &value) function pointer
    clearpath_platform_msgs__msg__PinoutCommand__rosidl_typesupport_introspection_c__assign_function__PinoutCommand__outputs,  // assign(index, value) function pointer
    clearpath_platform_msgs__msg__PinoutCommand__rosidl_typesupport_introspection_c__resize_function__PinoutCommand__outputs  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers clearpath_platform_msgs__msg__PinoutCommand__rosidl_typesupport_introspection_c__PinoutCommand_message_members = {
  "clearpath_platform_msgs__msg",  // message namespace
  "PinoutCommand",  // message name
  2,  // number of fields
  sizeof(clearpath_platform_msgs__msg__PinoutCommand),
  false,  // has_any_key_member_
  clearpath_platform_msgs__msg__PinoutCommand__rosidl_typesupport_introspection_c__PinoutCommand_message_member_array,  // message members
  clearpath_platform_msgs__msg__PinoutCommand__rosidl_typesupport_introspection_c__PinoutCommand_init_function,  // function to initialize message memory (memory has to be allocated)
  clearpath_platform_msgs__msg__PinoutCommand__rosidl_typesupport_introspection_c__PinoutCommand_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t clearpath_platform_msgs__msg__PinoutCommand__rosidl_typesupport_introspection_c__PinoutCommand_message_type_support_handle = {
  0,
  &clearpath_platform_msgs__msg__PinoutCommand__rosidl_typesupport_introspection_c__PinoutCommand_message_members,
  get_message_typesupport_handle_function,
  &clearpath_platform_msgs__msg__PinoutCommand__get_type_hash,
  &clearpath_platform_msgs__msg__PinoutCommand__get_type_description,
  &clearpath_platform_msgs__msg__PinoutCommand__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_clearpath_platform_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, clearpath_platform_msgs, msg, PinoutCommand)() {
  if (!clearpath_platform_msgs__msg__PinoutCommand__rosidl_typesupport_introspection_c__PinoutCommand_message_type_support_handle.typesupport_identifier) {
    clearpath_platform_msgs__msg__PinoutCommand__rosidl_typesupport_introspection_c__PinoutCommand_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &clearpath_platform_msgs__msg__PinoutCommand__rosidl_typesupport_introspection_c__PinoutCommand_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

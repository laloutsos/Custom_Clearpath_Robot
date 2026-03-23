// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from clearpath_motor_msgs:msg/LynxDebug.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "clearpath_motor_msgs/msg/detail/lynx_debug__rosidl_typesupport_introspection_c.h"
#include "clearpath_motor_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "clearpath_motor_msgs/msg/detail/lynx_debug__functions.h"
#include "clearpath_motor_msgs/msg/detail/lynx_debug__struct.h"


// Include directives for member types
// Member `joint_name`
#include "rosidl_runtime_c/string_functions.h"
// Member `accumulators`
// Member `currents`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void clearpath_motor_msgs__msg__LynxDebug__rosidl_typesupport_introspection_c__LynxDebug_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  clearpath_motor_msgs__msg__LynxDebug__init(message_memory);
}

void clearpath_motor_msgs__msg__LynxDebug__rosidl_typesupport_introspection_c__LynxDebug_fini_function(void * message_memory)
{
  clearpath_motor_msgs__msg__LynxDebug__fini(message_memory);
}

size_t clearpath_motor_msgs__msg__LynxDebug__rosidl_typesupport_introspection_c__size_function__LynxDebug__accumulators(
  const void * untyped_member)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return member->size;
}

const void * clearpath_motor_msgs__msg__LynxDebug__rosidl_typesupport_introspection_c__get_const_function__LynxDebug__accumulators(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void * clearpath_motor_msgs__msg__LynxDebug__rosidl_typesupport_introspection_c__get_function__LynxDebug__accumulators(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void clearpath_motor_msgs__msg__LynxDebug__rosidl_typesupport_introspection_c__fetch_function__LynxDebug__accumulators(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    clearpath_motor_msgs__msg__LynxDebug__rosidl_typesupport_introspection_c__get_const_function__LynxDebug__accumulators(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void clearpath_motor_msgs__msg__LynxDebug__rosidl_typesupport_introspection_c__assign_function__LynxDebug__accumulators(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    clearpath_motor_msgs__msg__LynxDebug__rosidl_typesupport_introspection_c__get_function__LynxDebug__accumulators(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

bool clearpath_motor_msgs__msg__LynxDebug__rosidl_typesupport_introspection_c__resize_function__LynxDebug__accumulators(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  rosidl_runtime_c__float__Sequence__fini(member);
  return rosidl_runtime_c__float__Sequence__init(member, size);
}

size_t clearpath_motor_msgs__msg__LynxDebug__rosidl_typesupport_introspection_c__size_function__LynxDebug__currents(
  const void * untyped_member)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return member->size;
}

const void * clearpath_motor_msgs__msg__LynxDebug__rosidl_typesupport_introspection_c__get_const_function__LynxDebug__currents(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void * clearpath_motor_msgs__msg__LynxDebug__rosidl_typesupport_introspection_c__get_function__LynxDebug__currents(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void clearpath_motor_msgs__msg__LynxDebug__rosidl_typesupport_introspection_c__fetch_function__LynxDebug__currents(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    clearpath_motor_msgs__msg__LynxDebug__rosidl_typesupport_introspection_c__get_const_function__LynxDebug__currents(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void clearpath_motor_msgs__msg__LynxDebug__rosidl_typesupport_introspection_c__assign_function__LynxDebug__currents(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    clearpath_motor_msgs__msg__LynxDebug__rosidl_typesupport_introspection_c__get_function__LynxDebug__currents(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

bool clearpath_motor_msgs__msg__LynxDebug__rosidl_typesupport_introspection_c__resize_function__LynxDebug__currents(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  rosidl_runtime_c__float__Sequence__fini(member);
  return rosidl_runtime_c__float__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember clearpath_motor_msgs__msg__LynxDebug__rosidl_typesupport_introspection_c__LynxDebug_message_member_array[6] = {
  {
    "can_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(clearpath_motor_msgs__msg__LynxDebug, can_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "joint_name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(clearpath_motor_msgs__msg__LynxDebug, joint_name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "fault_frequency",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(clearpath_motor_msgs__msg__LynxDebug, fault_frequency),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "accumulator_flags",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(clearpath_motor_msgs__msg__LynxDebug, accumulator_flags),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "accumulators",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(clearpath_motor_msgs__msg__LynxDebug, accumulators),  // bytes offset in struct
    NULL,  // default value
    clearpath_motor_msgs__msg__LynxDebug__rosidl_typesupport_introspection_c__size_function__LynxDebug__accumulators,  // size() function pointer
    clearpath_motor_msgs__msg__LynxDebug__rosidl_typesupport_introspection_c__get_const_function__LynxDebug__accumulators,  // get_const(index) function pointer
    clearpath_motor_msgs__msg__LynxDebug__rosidl_typesupport_introspection_c__get_function__LynxDebug__accumulators,  // get(index) function pointer
    clearpath_motor_msgs__msg__LynxDebug__rosidl_typesupport_introspection_c__fetch_function__LynxDebug__accumulators,  // fetch(index, &value) function pointer
    clearpath_motor_msgs__msg__LynxDebug__rosidl_typesupport_introspection_c__assign_function__LynxDebug__accumulators,  // assign(index, value) function pointer
    clearpath_motor_msgs__msg__LynxDebug__rosidl_typesupport_introspection_c__resize_function__LynxDebug__accumulators  // resize(index) function pointer
  },
  {
    "currents",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(clearpath_motor_msgs__msg__LynxDebug, currents),  // bytes offset in struct
    NULL,  // default value
    clearpath_motor_msgs__msg__LynxDebug__rosidl_typesupport_introspection_c__size_function__LynxDebug__currents,  // size() function pointer
    clearpath_motor_msgs__msg__LynxDebug__rosidl_typesupport_introspection_c__get_const_function__LynxDebug__currents,  // get_const(index) function pointer
    clearpath_motor_msgs__msg__LynxDebug__rosidl_typesupport_introspection_c__get_function__LynxDebug__currents,  // get(index) function pointer
    clearpath_motor_msgs__msg__LynxDebug__rosidl_typesupport_introspection_c__fetch_function__LynxDebug__currents,  // fetch(index, &value) function pointer
    clearpath_motor_msgs__msg__LynxDebug__rosidl_typesupport_introspection_c__assign_function__LynxDebug__currents,  // assign(index, value) function pointer
    clearpath_motor_msgs__msg__LynxDebug__rosidl_typesupport_introspection_c__resize_function__LynxDebug__currents  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers clearpath_motor_msgs__msg__LynxDebug__rosidl_typesupport_introspection_c__LynxDebug_message_members = {
  "clearpath_motor_msgs__msg",  // message namespace
  "LynxDebug",  // message name
  6,  // number of fields
  sizeof(clearpath_motor_msgs__msg__LynxDebug),
  false,  // has_any_key_member_
  clearpath_motor_msgs__msg__LynxDebug__rosidl_typesupport_introspection_c__LynxDebug_message_member_array,  // message members
  clearpath_motor_msgs__msg__LynxDebug__rosidl_typesupport_introspection_c__LynxDebug_init_function,  // function to initialize message memory (memory has to be allocated)
  clearpath_motor_msgs__msg__LynxDebug__rosidl_typesupport_introspection_c__LynxDebug_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t clearpath_motor_msgs__msg__LynxDebug__rosidl_typesupport_introspection_c__LynxDebug_message_type_support_handle = {
  0,
  &clearpath_motor_msgs__msg__LynxDebug__rosidl_typesupport_introspection_c__LynxDebug_message_members,
  get_message_typesupport_handle_function,
  &clearpath_motor_msgs__msg__LynxDebug__get_type_hash,
  &clearpath_motor_msgs__msg__LynxDebug__get_type_description,
  &clearpath_motor_msgs__msg__LynxDebug__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_clearpath_motor_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, clearpath_motor_msgs, msg, LynxDebug)() {
  if (!clearpath_motor_msgs__msg__LynxDebug__rosidl_typesupport_introspection_c__LynxDebug_message_type_support_handle.typesupport_identifier) {
    clearpath_motor_msgs__msg__LynxDebug__rosidl_typesupport_introspection_c__LynxDebug_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &clearpath_motor_msgs__msg__LynxDebug__rosidl_typesupport_introspection_c__LynxDebug_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

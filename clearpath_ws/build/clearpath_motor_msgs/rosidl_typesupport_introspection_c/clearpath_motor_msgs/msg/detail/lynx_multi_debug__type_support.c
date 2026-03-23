// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from clearpath_motor_msgs:msg/LynxMultiDebug.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "clearpath_motor_msgs/msg/detail/lynx_multi_debug__rosidl_typesupport_introspection_c.h"
#include "clearpath_motor_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "clearpath_motor_msgs/msg/detail/lynx_multi_debug__functions.h"
#include "clearpath_motor_msgs/msg/detail/lynx_multi_debug__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `drivers`
#include "clearpath_motor_msgs/msg/lynx_debug.h"
// Member `drivers`
#include "clearpath_motor_msgs/msg/detail/lynx_debug__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void clearpath_motor_msgs__msg__LynxMultiDebug__rosidl_typesupport_introspection_c__LynxMultiDebug_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  clearpath_motor_msgs__msg__LynxMultiDebug__init(message_memory);
}

void clearpath_motor_msgs__msg__LynxMultiDebug__rosidl_typesupport_introspection_c__LynxMultiDebug_fini_function(void * message_memory)
{
  clearpath_motor_msgs__msg__LynxMultiDebug__fini(message_memory);
}

size_t clearpath_motor_msgs__msg__LynxMultiDebug__rosidl_typesupport_introspection_c__size_function__LynxMultiDebug__drivers(
  const void * untyped_member)
{
  const clearpath_motor_msgs__msg__LynxDebug__Sequence * member =
    (const clearpath_motor_msgs__msg__LynxDebug__Sequence *)(untyped_member);
  return member->size;
}

const void * clearpath_motor_msgs__msg__LynxMultiDebug__rosidl_typesupport_introspection_c__get_const_function__LynxMultiDebug__drivers(
  const void * untyped_member, size_t index)
{
  const clearpath_motor_msgs__msg__LynxDebug__Sequence * member =
    (const clearpath_motor_msgs__msg__LynxDebug__Sequence *)(untyped_member);
  return &member->data[index];
}

void * clearpath_motor_msgs__msg__LynxMultiDebug__rosidl_typesupport_introspection_c__get_function__LynxMultiDebug__drivers(
  void * untyped_member, size_t index)
{
  clearpath_motor_msgs__msg__LynxDebug__Sequence * member =
    (clearpath_motor_msgs__msg__LynxDebug__Sequence *)(untyped_member);
  return &member->data[index];
}

void clearpath_motor_msgs__msg__LynxMultiDebug__rosidl_typesupport_introspection_c__fetch_function__LynxMultiDebug__drivers(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const clearpath_motor_msgs__msg__LynxDebug * item =
    ((const clearpath_motor_msgs__msg__LynxDebug *)
    clearpath_motor_msgs__msg__LynxMultiDebug__rosidl_typesupport_introspection_c__get_const_function__LynxMultiDebug__drivers(untyped_member, index));
  clearpath_motor_msgs__msg__LynxDebug * value =
    (clearpath_motor_msgs__msg__LynxDebug *)(untyped_value);
  *value = *item;
}

void clearpath_motor_msgs__msg__LynxMultiDebug__rosidl_typesupport_introspection_c__assign_function__LynxMultiDebug__drivers(
  void * untyped_member, size_t index, const void * untyped_value)
{
  clearpath_motor_msgs__msg__LynxDebug * item =
    ((clearpath_motor_msgs__msg__LynxDebug *)
    clearpath_motor_msgs__msg__LynxMultiDebug__rosidl_typesupport_introspection_c__get_function__LynxMultiDebug__drivers(untyped_member, index));
  const clearpath_motor_msgs__msg__LynxDebug * value =
    (const clearpath_motor_msgs__msg__LynxDebug *)(untyped_value);
  *item = *value;
}

bool clearpath_motor_msgs__msg__LynxMultiDebug__rosidl_typesupport_introspection_c__resize_function__LynxMultiDebug__drivers(
  void * untyped_member, size_t size)
{
  clearpath_motor_msgs__msg__LynxDebug__Sequence * member =
    (clearpath_motor_msgs__msg__LynxDebug__Sequence *)(untyped_member);
  clearpath_motor_msgs__msg__LynxDebug__Sequence__fini(member);
  return clearpath_motor_msgs__msg__LynxDebug__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember clearpath_motor_msgs__msg__LynxMultiDebug__rosidl_typesupport_introspection_c__LynxMultiDebug_message_member_array[2] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(clearpath_motor_msgs__msg__LynxMultiDebug, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "drivers",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(clearpath_motor_msgs__msg__LynxMultiDebug, drivers),  // bytes offset in struct
    NULL,  // default value
    clearpath_motor_msgs__msg__LynxMultiDebug__rosidl_typesupport_introspection_c__size_function__LynxMultiDebug__drivers,  // size() function pointer
    clearpath_motor_msgs__msg__LynxMultiDebug__rosidl_typesupport_introspection_c__get_const_function__LynxMultiDebug__drivers,  // get_const(index) function pointer
    clearpath_motor_msgs__msg__LynxMultiDebug__rosidl_typesupport_introspection_c__get_function__LynxMultiDebug__drivers,  // get(index) function pointer
    clearpath_motor_msgs__msg__LynxMultiDebug__rosidl_typesupport_introspection_c__fetch_function__LynxMultiDebug__drivers,  // fetch(index, &value) function pointer
    clearpath_motor_msgs__msg__LynxMultiDebug__rosidl_typesupport_introspection_c__assign_function__LynxMultiDebug__drivers,  // assign(index, value) function pointer
    clearpath_motor_msgs__msg__LynxMultiDebug__rosidl_typesupport_introspection_c__resize_function__LynxMultiDebug__drivers  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers clearpath_motor_msgs__msg__LynxMultiDebug__rosidl_typesupport_introspection_c__LynxMultiDebug_message_members = {
  "clearpath_motor_msgs__msg",  // message namespace
  "LynxMultiDebug",  // message name
  2,  // number of fields
  sizeof(clearpath_motor_msgs__msg__LynxMultiDebug),
  false,  // has_any_key_member_
  clearpath_motor_msgs__msg__LynxMultiDebug__rosidl_typesupport_introspection_c__LynxMultiDebug_message_member_array,  // message members
  clearpath_motor_msgs__msg__LynxMultiDebug__rosidl_typesupport_introspection_c__LynxMultiDebug_init_function,  // function to initialize message memory (memory has to be allocated)
  clearpath_motor_msgs__msg__LynxMultiDebug__rosidl_typesupport_introspection_c__LynxMultiDebug_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t clearpath_motor_msgs__msg__LynxMultiDebug__rosidl_typesupport_introspection_c__LynxMultiDebug_message_type_support_handle = {
  0,
  &clearpath_motor_msgs__msg__LynxMultiDebug__rosidl_typesupport_introspection_c__LynxMultiDebug_message_members,
  get_message_typesupport_handle_function,
  &clearpath_motor_msgs__msg__LynxMultiDebug__get_type_hash,
  &clearpath_motor_msgs__msg__LynxMultiDebug__get_type_description,
  &clearpath_motor_msgs__msg__LynxMultiDebug__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_clearpath_motor_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, clearpath_motor_msgs, msg, LynxMultiDebug)() {
  clearpath_motor_msgs__msg__LynxMultiDebug__rosidl_typesupport_introspection_c__LynxMultiDebug_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  clearpath_motor_msgs__msg__LynxMultiDebug__rosidl_typesupport_introspection_c__LynxMultiDebug_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, clearpath_motor_msgs, msg, LynxDebug)();
  if (!clearpath_motor_msgs__msg__LynxMultiDebug__rosidl_typesupport_introspection_c__LynxMultiDebug_message_type_support_handle.typesupport_identifier) {
    clearpath_motor_msgs__msg__LynxMultiDebug__rosidl_typesupport_introspection_c__LynxMultiDebug_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &clearpath_motor_msgs__msg__LynxMultiDebug__rosidl_typesupport_introspection_c__LynxMultiDebug_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

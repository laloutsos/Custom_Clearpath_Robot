// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from clearpath_motor_msgs:msg/LynxMotorProtection.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "clearpath_motor_msgs/msg/detail/lynx_motor_protection__functions.h"
#include "clearpath_motor_msgs/msg/detail/lynx_motor_protection__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace clearpath_motor_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void LynxMotorProtection_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) clearpath_motor_msgs::msg::LynxMotorProtection(_init);
}

void LynxMotorProtection_fini_function(void * message_memory)
{
  auto typed_message = static_cast<clearpath_motor_msgs::msg::LynxMotorProtection *>(message_memory);
  typed_message->~LynxMotorProtection();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember LynxMotorProtection_message_member_array[3] = {
  {
    "can_id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(clearpath_motor_msgs::msg::LynxMotorProtection, can_id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "joint_name",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(clearpath_motor_msgs::msg::LynxMotorProtection, joint_name),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "state",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(clearpath_motor_msgs::msg::LynxMotorProtection, state),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers LynxMotorProtection_message_members = {
  "clearpath_motor_msgs::msg",  // message namespace
  "LynxMotorProtection",  // message name
  3,  // number of fields
  sizeof(clearpath_motor_msgs::msg::LynxMotorProtection),
  false,  // has_any_key_member_
  LynxMotorProtection_message_member_array,  // message members
  LynxMotorProtection_init_function,  // function to initialize message memory (memory has to be allocated)
  LynxMotorProtection_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t LynxMotorProtection_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &LynxMotorProtection_message_members,
  get_message_typesupport_handle_function,
  &clearpath_motor_msgs__msg__LynxMotorProtection__get_type_hash,
  &clearpath_motor_msgs__msg__LynxMotorProtection__get_type_description,
  &clearpath_motor_msgs__msg__LynxMotorProtection__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace clearpath_motor_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<clearpath_motor_msgs::msg::LynxMotorProtection>()
{
  return &::clearpath_motor_msgs::msg::rosidl_typesupport_introspection_cpp::LynxMotorProtection_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, clearpath_motor_msgs, msg, LynxMotorProtection)() {
  return &::clearpath_motor_msgs::msg::rosidl_typesupport_introspection_cpp::LynxMotorProtection_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

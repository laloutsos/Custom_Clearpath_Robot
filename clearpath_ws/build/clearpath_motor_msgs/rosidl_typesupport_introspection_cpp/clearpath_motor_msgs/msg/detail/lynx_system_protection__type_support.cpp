// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from clearpath_motor_msgs:msg/LynxSystemProtection.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "clearpath_motor_msgs/msg/detail/lynx_system_protection__functions.h"
#include "clearpath_motor_msgs/msg/detail/lynx_system_protection__struct.hpp"
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

void LynxSystemProtection_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) clearpath_motor_msgs::msg::LynxSystemProtection(_init);
}

void LynxSystemProtection_fini_function(void * message_memory)
{
  auto typed_message = static_cast<clearpath_motor_msgs::msg::LynxSystemProtection *>(message_memory);
  typed_message->~LynxSystemProtection();
}

size_t size_function__LynxSystemProtection__motor_states(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<clearpath_motor_msgs::msg::LynxMotorProtection> *>(untyped_member);
  return member->size();
}

const void * get_const_function__LynxSystemProtection__motor_states(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<clearpath_motor_msgs::msg::LynxMotorProtection> *>(untyped_member);
  return &member[index];
}

void * get_function__LynxSystemProtection__motor_states(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<clearpath_motor_msgs::msg::LynxMotorProtection> *>(untyped_member);
  return &member[index];
}

void fetch_function__LynxSystemProtection__motor_states(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const clearpath_motor_msgs::msg::LynxMotorProtection *>(
    get_const_function__LynxSystemProtection__motor_states(untyped_member, index));
  auto & value = *reinterpret_cast<clearpath_motor_msgs::msg::LynxMotorProtection *>(untyped_value);
  value = item;
}

void assign_function__LynxSystemProtection__motor_states(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<clearpath_motor_msgs::msg::LynxMotorProtection *>(
    get_function__LynxSystemProtection__motor_states(untyped_member, index));
  const auto & value = *reinterpret_cast<const clearpath_motor_msgs::msg::LynxMotorProtection *>(untyped_value);
  item = value;
}

void resize_function__LynxSystemProtection__motor_states(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<clearpath_motor_msgs::msg::LynxMotorProtection> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember LynxSystemProtection_message_member_array[3] = {
  {
    "header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<std_msgs::msg::Header>(),  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(clearpath_motor_msgs::msg::LynxSystemProtection, header),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "system_state",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(clearpath_motor_msgs::msg::LynxSystemProtection, system_state),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "motor_states",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<clearpath_motor_msgs::msg::LynxMotorProtection>(),  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(clearpath_motor_msgs::msg::LynxSystemProtection, motor_states),  // bytes offset in struct
    nullptr,  // default value
    size_function__LynxSystemProtection__motor_states,  // size() function pointer
    get_const_function__LynxSystemProtection__motor_states,  // get_const(index) function pointer
    get_function__LynxSystemProtection__motor_states,  // get(index) function pointer
    fetch_function__LynxSystemProtection__motor_states,  // fetch(index, &value) function pointer
    assign_function__LynxSystemProtection__motor_states,  // assign(index, value) function pointer
    resize_function__LynxSystemProtection__motor_states  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers LynxSystemProtection_message_members = {
  "clearpath_motor_msgs::msg",  // message namespace
  "LynxSystemProtection",  // message name
  3,  // number of fields
  sizeof(clearpath_motor_msgs::msg::LynxSystemProtection),
  false,  // has_any_key_member_
  LynxSystemProtection_message_member_array,  // message members
  LynxSystemProtection_init_function,  // function to initialize message memory (memory has to be allocated)
  LynxSystemProtection_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t LynxSystemProtection_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &LynxSystemProtection_message_members,
  get_message_typesupport_handle_function,
  &clearpath_motor_msgs__msg__LynxSystemProtection__get_type_hash,
  &clearpath_motor_msgs__msg__LynxSystemProtection__get_type_description,
  &clearpath_motor_msgs__msg__LynxSystemProtection__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace clearpath_motor_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<clearpath_motor_msgs::msg::LynxSystemProtection>()
{
  return &::clearpath_motor_msgs::msg::rosidl_typesupport_introspection_cpp::LynxSystemProtection_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, clearpath_motor_msgs, msg, LynxSystemProtection)() {
  return &::clearpath_motor_msgs::msg::rosidl_typesupport_introspection_cpp::LynxSystemProtection_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

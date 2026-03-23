// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from clearpath_platform_msgs:msg/PinoutCommand.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "clearpath_platform_msgs/msg/detail/pinout_command__functions.h"
#include "clearpath_platform_msgs/msg/detail/pinout_command__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace clearpath_platform_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void PinoutCommand_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) clearpath_platform_msgs::msg::PinoutCommand(_init);
}

void PinoutCommand_fini_function(void * message_memory)
{
  auto typed_message = static_cast<clearpath_platform_msgs::msg::PinoutCommand *>(message_memory);
  typed_message->~PinoutCommand();
}

size_t size_function__PinoutCommand__rails(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<bool> *>(untyped_member);
  return member->size();
}

void fetch_function__PinoutCommand__rails(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & member = *reinterpret_cast<const std::vector<bool> *>(untyped_member);
  auto & value = *reinterpret_cast<bool *>(untyped_value);
  value = member[index];
}

void assign_function__PinoutCommand__rails(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & member = *reinterpret_cast<std::vector<bool> *>(untyped_member);
  const auto & value = *reinterpret_cast<const bool *>(untyped_value);
  member[index] = value;
}

void resize_function__PinoutCommand__rails(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<bool> *>(untyped_member);
  member->resize(size);
}

size_t size_function__PinoutCommand__outputs(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<uint32_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__PinoutCommand__outputs(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<uint32_t> *>(untyped_member);
  return &member[index];
}

void * get_function__PinoutCommand__outputs(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<uint32_t> *>(untyped_member);
  return &member[index];
}

void fetch_function__PinoutCommand__outputs(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const uint32_t *>(
    get_const_function__PinoutCommand__outputs(untyped_member, index));
  auto & value = *reinterpret_cast<uint32_t *>(untyped_value);
  value = item;
}

void assign_function__PinoutCommand__outputs(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<uint32_t *>(
    get_function__PinoutCommand__outputs(untyped_member, index));
  const auto & value = *reinterpret_cast<const uint32_t *>(untyped_value);
  item = value;
}

void resize_function__PinoutCommand__outputs(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<uint32_t> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember PinoutCommand_message_member_array[2] = {
  {
    "rails",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(clearpath_platform_msgs::msg::PinoutCommand, rails),  // bytes offset in struct
    nullptr,  // default value
    size_function__PinoutCommand__rails,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    fetch_function__PinoutCommand__rails,  // fetch(index, &value) function pointer
    assign_function__PinoutCommand__rails,  // assign(index, value) function pointer
    resize_function__PinoutCommand__rails  // resize(index) function pointer
  },
  {
    "outputs",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(clearpath_platform_msgs::msg::PinoutCommand, outputs),  // bytes offset in struct
    nullptr,  // default value
    size_function__PinoutCommand__outputs,  // size() function pointer
    get_const_function__PinoutCommand__outputs,  // get_const(index) function pointer
    get_function__PinoutCommand__outputs,  // get(index) function pointer
    fetch_function__PinoutCommand__outputs,  // fetch(index, &value) function pointer
    assign_function__PinoutCommand__outputs,  // assign(index, value) function pointer
    resize_function__PinoutCommand__outputs  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers PinoutCommand_message_members = {
  "clearpath_platform_msgs::msg",  // message namespace
  "PinoutCommand",  // message name
  2,  // number of fields
  sizeof(clearpath_platform_msgs::msg::PinoutCommand),
  false,  // has_any_key_member_
  PinoutCommand_message_member_array,  // message members
  PinoutCommand_init_function,  // function to initialize message memory (memory has to be allocated)
  PinoutCommand_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t PinoutCommand_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &PinoutCommand_message_members,
  get_message_typesupport_handle_function,
  &clearpath_platform_msgs__msg__PinoutCommand__get_type_hash,
  &clearpath_platform_msgs__msg__PinoutCommand__get_type_description,
  &clearpath_platform_msgs__msg__PinoutCommand__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace clearpath_platform_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<clearpath_platform_msgs::msg::PinoutCommand>()
{
  return &::clearpath_platform_msgs::msg::rosidl_typesupport_introspection_cpp::PinoutCommand_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, clearpath_platform_msgs, msg, PinoutCommand)() {
  return &::clearpath_platform_msgs::msg::rosidl_typesupport_introspection_cpp::PinoutCommand_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

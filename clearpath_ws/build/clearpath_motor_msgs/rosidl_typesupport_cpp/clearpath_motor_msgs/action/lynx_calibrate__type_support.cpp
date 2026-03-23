// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from clearpath_motor_msgs:action/LynxCalibrate.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "clearpath_motor_msgs/action/detail/lynx_calibrate__functions.h"
#include "clearpath_motor_msgs/action/detail/lynx_calibrate__struct.hpp"
#include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
#include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace clearpath_motor_msgs
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _LynxCalibrate_Goal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _LynxCalibrate_Goal_type_support_ids_t;

static const _LynxCalibrate_Goal_type_support_ids_t _LynxCalibrate_Goal_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _LynxCalibrate_Goal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _LynxCalibrate_Goal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _LynxCalibrate_Goal_type_support_symbol_names_t _LynxCalibrate_Goal_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, clearpath_motor_msgs, action, LynxCalibrate_Goal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, clearpath_motor_msgs, action, LynxCalibrate_Goal)),
  }
};

typedef struct _LynxCalibrate_Goal_type_support_data_t
{
  void * data[2];
} _LynxCalibrate_Goal_type_support_data_t;

static _LynxCalibrate_Goal_type_support_data_t _LynxCalibrate_Goal_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _LynxCalibrate_Goal_message_typesupport_map = {
  2,
  "clearpath_motor_msgs",
  &_LynxCalibrate_Goal_message_typesupport_ids.typesupport_identifier[0],
  &_LynxCalibrate_Goal_message_typesupport_symbol_names.symbol_name[0],
  &_LynxCalibrate_Goal_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t LynxCalibrate_Goal_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_LynxCalibrate_Goal_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &clearpath_motor_msgs__action__LynxCalibrate_Goal__get_type_hash,
  &clearpath_motor_msgs__action__LynxCalibrate_Goal__get_type_description,
  &clearpath_motor_msgs__action__LynxCalibrate_Goal__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace clearpath_motor_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<clearpath_motor_msgs::action::LynxCalibrate_Goal>()
{
  return &::clearpath_motor_msgs::action::rosidl_typesupport_cpp::LynxCalibrate_Goal_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, clearpath_motor_msgs, action, LynxCalibrate_Goal)() {
  return get_message_type_support_handle<clearpath_motor_msgs::action::LynxCalibrate_Goal>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "clearpath_motor_msgs/action/detail/lynx_calibrate__functions.h"
// already included above
// #include "clearpath_motor_msgs/action/detail/lynx_calibrate__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace clearpath_motor_msgs
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _LynxCalibrate_Result_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _LynxCalibrate_Result_type_support_ids_t;

static const _LynxCalibrate_Result_type_support_ids_t _LynxCalibrate_Result_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _LynxCalibrate_Result_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _LynxCalibrate_Result_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _LynxCalibrate_Result_type_support_symbol_names_t _LynxCalibrate_Result_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, clearpath_motor_msgs, action, LynxCalibrate_Result)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, clearpath_motor_msgs, action, LynxCalibrate_Result)),
  }
};

typedef struct _LynxCalibrate_Result_type_support_data_t
{
  void * data[2];
} _LynxCalibrate_Result_type_support_data_t;

static _LynxCalibrate_Result_type_support_data_t _LynxCalibrate_Result_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _LynxCalibrate_Result_message_typesupport_map = {
  2,
  "clearpath_motor_msgs",
  &_LynxCalibrate_Result_message_typesupport_ids.typesupport_identifier[0],
  &_LynxCalibrate_Result_message_typesupport_symbol_names.symbol_name[0],
  &_LynxCalibrate_Result_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t LynxCalibrate_Result_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_LynxCalibrate_Result_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &clearpath_motor_msgs__action__LynxCalibrate_Result__get_type_hash,
  &clearpath_motor_msgs__action__LynxCalibrate_Result__get_type_description,
  &clearpath_motor_msgs__action__LynxCalibrate_Result__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace clearpath_motor_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<clearpath_motor_msgs::action::LynxCalibrate_Result>()
{
  return &::clearpath_motor_msgs::action::rosidl_typesupport_cpp::LynxCalibrate_Result_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, clearpath_motor_msgs, action, LynxCalibrate_Result)() {
  return get_message_type_support_handle<clearpath_motor_msgs::action::LynxCalibrate_Result>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "clearpath_motor_msgs/action/detail/lynx_calibrate__functions.h"
// already included above
// #include "clearpath_motor_msgs/action/detail/lynx_calibrate__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace clearpath_motor_msgs
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _LynxCalibrate_Feedback_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _LynxCalibrate_Feedback_type_support_ids_t;

static const _LynxCalibrate_Feedback_type_support_ids_t _LynxCalibrate_Feedback_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _LynxCalibrate_Feedback_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _LynxCalibrate_Feedback_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _LynxCalibrate_Feedback_type_support_symbol_names_t _LynxCalibrate_Feedback_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, clearpath_motor_msgs, action, LynxCalibrate_Feedback)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, clearpath_motor_msgs, action, LynxCalibrate_Feedback)),
  }
};

typedef struct _LynxCalibrate_Feedback_type_support_data_t
{
  void * data[2];
} _LynxCalibrate_Feedback_type_support_data_t;

static _LynxCalibrate_Feedback_type_support_data_t _LynxCalibrate_Feedback_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _LynxCalibrate_Feedback_message_typesupport_map = {
  2,
  "clearpath_motor_msgs",
  &_LynxCalibrate_Feedback_message_typesupport_ids.typesupport_identifier[0],
  &_LynxCalibrate_Feedback_message_typesupport_symbol_names.symbol_name[0],
  &_LynxCalibrate_Feedback_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t LynxCalibrate_Feedback_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_LynxCalibrate_Feedback_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &clearpath_motor_msgs__action__LynxCalibrate_Feedback__get_type_hash,
  &clearpath_motor_msgs__action__LynxCalibrate_Feedback__get_type_description,
  &clearpath_motor_msgs__action__LynxCalibrate_Feedback__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace clearpath_motor_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<clearpath_motor_msgs::action::LynxCalibrate_Feedback>()
{
  return &::clearpath_motor_msgs::action::rosidl_typesupport_cpp::LynxCalibrate_Feedback_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, clearpath_motor_msgs, action, LynxCalibrate_Feedback)() {
  return get_message_type_support_handle<clearpath_motor_msgs::action::LynxCalibrate_Feedback>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "clearpath_motor_msgs/action/detail/lynx_calibrate__functions.h"
// already included above
// #include "clearpath_motor_msgs/action/detail/lynx_calibrate__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace clearpath_motor_msgs
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _LynxCalibrate_SendGoal_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _LynxCalibrate_SendGoal_Request_type_support_ids_t;

static const _LynxCalibrate_SendGoal_Request_type_support_ids_t _LynxCalibrate_SendGoal_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _LynxCalibrate_SendGoal_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _LynxCalibrate_SendGoal_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _LynxCalibrate_SendGoal_Request_type_support_symbol_names_t _LynxCalibrate_SendGoal_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, clearpath_motor_msgs, action, LynxCalibrate_SendGoal_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, clearpath_motor_msgs, action, LynxCalibrate_SendGoal_Request)),
  }
};

typedef struct _LynxCalibrate_SendGoal_Request_type_support_data_t
{
  void * data[2];
} _LynxCalibrate_SendGoal_Request_type_support_data_t;

static _LynxCalibrate_SendGoal_Request_type_support_data_t _LynxCalibrate_SendGoal_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _LynxCalibrate_SendGoal_Request_message_typesupport_map = {
  2,
  "clearpath_motor_msgs",
  &_LynxCalibrate_SendGoal_Request_message_typesupport_ids.typesupport_identifier[0],
  &_LynxCalibrate_SendGoal_Request_message_typesupport_symbol_names.symbol_name[0],
  &_LynxCalibrate_SendGoal_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t LynxCalibrate_SendGoal_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_LynxCalibrate_SendGoal_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &clearpath_motor_msgs__action__LynxCalibrate_SendGoal_Request__get_type_hash,
  &clearpath_motor_msgs__action__LynxCalibrate_SendGoal_Request__get_type_description,
  &clearpath_motor_msgs__action__LynxCalibrate_SendGoal_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace clearpath_motor_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<clearpath_motor_msgs::action::LynxCalibrate_SendGoal_Request>()
{
  return &::clearpath_motor_msgs::action::rosidl_typesupport_cpp::LynxCalibrate_SendGoal_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, clearpath_motor_msgs, action, LynxCalibrate_SendGoal_Request)() {
  return get_message_type_support_handle<clearpath_motor_msgs::action::LynxCalibrate_SendGoal_Request>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "clearpath_motor_msgs/action/detail/lynx_calibrate__functions.h"
// already included above
// #include "clearpath_motor_msgs/action/detail/lynx_calibrate__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace clearpath_motor_msgs
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _LynxCalibrate_SendGoal_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _LynxCalibrate_SendGoal_Response_type_support_ids_t;

static const _LynxCalibrate_SendGoal_Response_type_support_ids_t _LynxCalibrate_SendGoal_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _LynxCalibrate_SendGoal_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _LynxCalibrate_SendGoal_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _LynxCalibrate_SendGoal_Response_type_support_symbol_names_t _LynxCalibrate_SendGoal_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, clearpath_motor_msgs, action, LynxCalibrate_SendGoal_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, clearpath_motor_msgs, action, LynxCalibrate_SendGoal_Response)),
  }
};

typedef struct _LynxCalibrate_SendGoal_Response_type_support_data_t
{
  void * data[2];
} _LynxCalibrate_SendGoal_Response_type_support_data_t;

static _LynxCalibrate_SendGoal_Response_type_support_data_t _LynxCalibrate_SendGoal_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _LynxCalibrate_SendGoal_Response_message_typesupport_map = {
  2,
  "clearpath_motor_msgs",
  &_LynxCalibrate_SendGoal_Response_message_typesupport_ids.typesupport_identifier[0],
  &_LynxCalibrate_SendGoal_Response_message_typesupport_symbol_names.symbol_name[0],
  &_LynxCalibrate_SendGoal_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t LynxCalibrate_SendGoal_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_LynxCalibrate_SendGoal_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &clearpath_motor_msgs__action__LynxCalibrate_SendGoal_Response__get_type_hash,
  &clearpath_motor_msgs__action__LynxCalibrate_SendGoal_Response__get_type_description,
  &clearpath_motor_msgs__action__LynxCalibrate_SendGoal_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace clearpath_motor_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<clearpath_motor_msgs::action::LynxCalibrate_SendGoal_Response>()
{
  return &::clearpath_motor_msgs::action::rosidl_typesupport_cpp::LynxCalibrate_SendGoal_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, clearpath_motor_msgs, action, LynxCalibrate_SendGoal_Response)() {
  return get_message_type_support_handle<clearpath_motor_msgs::action::LynxCalibrate_SendGoal_Response>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "clearpath_motor_msgs/action/detail/lynx_calibrate__functions.h"
// already included above
// #include "clearpath_motor_msgs/action/detail/lynx_calibrate__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace clearpath_motor_msgs
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _LynxCalibrate_SendGoal_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _LynxCalibrate_SendGoal_Event_type_support_ids_t;

static const _LynxCalibrate_SendGoal_Event_type_support_ids_t _LynxCalibrate_SendGoal_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _LynxCalibrate_SendGoal_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _LynxCalibrate_SendGoal_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _LynxCalibrate_SendGoal_Event_type_support_symbol_names_t _LynxCalibrate_SendGoal_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, clearpath_motor_msgs, action, LynxCalibrate_SendGoal_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, clearpath_motor_msgs, action, LynxCalibrate_SendGoal_Event)),
  }
};

typedef struct _LynxCalibrate_SendGoal_Event_type_support_data_t
{
  void * data[2];
} _LynxCalibrate_SendGoal_Event_type_support_data_t;

static _LynxCalibrate_SendGoal_Event_type_support_data_t _LynxCalibrate_SendGoal_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _LynxCalibrate_SendGoal_Event_message_typesupport_map = {
  2,
  "clearpath_motor_msgs",
  &_LynxCalibrate_SendGoal_Event_message_typesupport_ids.typesupport_identifier[0],
  &_LynxCalibrate_SendGoal_Event_message_typesupport_symbol_names.symbol_name[0],
  &_LynxCalibrate_SendGoal_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t LynxCalibrate_SendGoal_Event_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_LynxCalibrate_SendGoal_Event_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &clearpath_motor_msgs__action__LynxCalibrate_SendGoal_Event__get_type_hash,
  &clearpath_motor_msgs__action__LynxCalibrate_SendGoal_Event__get_type_description,
  &clearpath_motor_msgs__action__LynxCalibrate_SendGoal_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace clearpath_motor_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<clearpath_motor_msgs::action::LynxCalibrate_SendGoal_Event>()
{
  return &::clearpath_motor_msgs::action::rosidl_typesupport_cpp::LynxCalibrate_SendGoal_Event_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, clearpath_motor_msgs, action, LynxCalibrate_SendGoal_Event)() {
  return get_message_type_support_handle<clearpath_motor_msgs::action::LynxCalibrate_SendGoal_Event>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "clearpath_motor_msgs/action/detail/lynx_calibrate__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace clearpath_motor_msgs
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _LynxCalibrate_SendGoal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _LynxCalibrate_SendGoal_type_support_ids_t;

static const _LynxCalibrate_SendGoal_type_support_ids_t _LynxCalibrate_SendGoal_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _LynxCalibrate_SendGoal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _LynxCalibrate_SendGoal_type_support_symbol_names_t;
#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _LynxCalibrate_SendGoal_type_support_symbol_names_t _LynxCalibrate_SendGoal_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, clearpath_motor_msgs, action, LynxCalibrate_SendGoal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, clearpath_motor_msgs, action, LynxCalibrate_SendGoal)),
  }
};

typedef struct _LynxCalibrate_SendGoal_type_support_data_t
{
  void * data[2];
} _LynxCalibrate_SendGoal_type_support_data_t;

static _LynxCalibrate_SendGoal_type_support_data_t _LynxCalibrate_SendGoal_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _LynxCalibrate_SendGoal_service_typesupport_map = {
  2,
  "clearpath_motor_msgs",
  &_LynxCalibrate_SendGoal_service_typesupport_ids.typesupport_identifier[0],
  &_LynxCalibrate_SendGoal_service_typesupport_symbol_names.symbol_name[0],
  &_LynxCalibrate_SendGoal_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t LynxCalibrate_SendGoal_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_LynxCalibrate_SendGoal_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
  ::rosidl_typesupport_cpp::get_message_type_support_handle<clearpath_motor_msgs::action::LynxCalibrate_SendGoal_Request>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<clearpath_motor_msgs::action::LynxCalibrate_SendGoal_Response>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<clearpath_motor_msgs::action::LynxCalibrate_SendGoal_Event>(),
  &::rosidl_typesupport_cpp::service_create_event_message<clearpath_motor_msgs::action::LynxCalibrate_SendGoal>,
  &::rosidl_typesupport_cpp::service_destroy_event_message<clearpath_motor_msgs::action::LynxCalibrate_SendGoal>,
  &clearpath_motor_msgs__action__LynxCalibrate_SendGoal__get_type_hash,
  &clearpath_motor_msgs__action__LynxCalibrate_SendGoal__get_type_description,
  &clearpath_motor_msgs__action__LynxCalibrate_SendGoal__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace clearpath_motor_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<clearpath_motor_msgs::action::LynxCalibrate_SendGoal>()
{
  return &::clearpath_motor_msgs::action::rosidl_typesupport_cpp::LynxCalibrate_SendGoal_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_cpp, clearpath_motor_msgs, action, LynxCalibrate_SendGoal)() {
  return ::rosidl_typesupport_cpp::get_service_type_support_handle<clearpath_motor_msgs::action::LynxCalibrate_SendGoal>();
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "clearpath_motor_msgs/action/detail/lynx_calibrate__functions.h"
// already included above
// #include "clearpath_motor_msgs/action/detail/lynx_calibrate__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace clearpath_motor_msgs
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _LynxCalibrate_GetResult_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _LynxCalibrate_GetResult_Request_type_support_ids_t;

static const _LynxCalibrate_GetResult_Request_type_support_ids_t _LynxCalibrate_GetResult_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _LynxCalibrate_GetResult_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _LynxCalibrate_GetResult_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _LynxCalibrate_GetResult_Request_type_support_symbol_names_t _LynxCalibrate_GetResult_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, clearpath_motor_msgs, action, LynxCalibrate_GetResult_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, clearpath_motor_msgs, action, LynxCalibrate_GetResult_Request)),
  }
};

typedef struct _LynxCalibrate_GetResult_Request_type_support_data_t
{
  void * data[2];
} _LynxCalibrate_GetResult_Request_type_support_data_t;

static _LynxCalibrate_GetResult_Request_type_support_data_t _LynxCalibrate_GetResult_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _LynxCalibrate_GetResult_Request_message_typesupport_map = {
  2,
  "clearpath_motor_msgs",
  &_LynxCalibrate_GetResult_Request_message_typesupport_ids.typesupport_identifier[0],
  &_LynxCalibrate_GetResult_Request_message_typesupport_symbol_names.symbol_name[0],
  &_LynxCalibrate_GetResult_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t LynxCalibrate_GetResult_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_LynxCalibrate_GetResult_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &clearpath_motor_msgs__action__LynxCalibrate_GetResult_Request__get_type_hash,
  &clearpath_motor_msgs__action__LynxCalibrate_GetResult_Request__get_type_description,
  &clearpath_motor_msgs__action__LynxCalibrate_GetResult_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace clearpath_motor_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<clearpath_motor_msgs::action::LynxCalibrate_GetResult_Request>()
{
  return &::clearpath_motor_msgs::action::rosidl_typesupport_cpp::LynxCalibrate_GetResult_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, clearpath_motor_msgs, action, LynxCalibrate_GetResult_Request)() {
  return get_message_type_support_handle<clearpath_motor_msgs::action::LynxCalibrate_GetResult_Request>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "clearpath_motor_msgs/action/detail/lynx_calibrate__functions.h"
// already included above
// #include "clearpath_motor_msgs/action/detail/lynx_calibrate__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace clearpath_motor_msgs
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _LynxCalibrate_GetResult_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _LynxCalibrate_GetResult_Response_type_support_ids_t;

static const _LynxCalibrate_GetResult_Response_type_support_ids_t _LynxCalibrate_GetResult_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _LynxCalibrate_GetResult_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _LynxCalibrate_GetResult_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _LynxCalibrate_GetResult_Response_type_support_symbol_names_t _LynxCalibrate_GetResult_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, clearpath_motor_msgs, action, LynxCalibrate_GetResult_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, clearpath_motor_msgs, action, LynxCalibrate_GetResult_Response)),
  }
};

typedef struct _LynxCalibrate_GetResult_Response_type_support_data_t
{
  void * data[2];
} _LynxCalibrate_GetResult_Response_type_support_data_t;

static _LynxCalibrate_GetResult_Response_type_support_data_t _LynxCalibrate_GetResult_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _LynxCalibrate_GetResult_Response_message_typesupport_map = {
  2,
  "clearpath_motor_msgs",
  &_LynxCalibrate_GetResult_Response_message_typesupport_ids.typesupport_identifier[0],
  &_LynxCalibrate_GetResult_Response_message_typesupport_symbol_names.symbol_name[0],
  &_LynxCalibrate_GetResult_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t LynxCalibrate_GetResult_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_LynxCalibrate_GetResult_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &clearpath_motor_msgs__action__LynxCalibrate_GetResult_Response__get_type_hash,
  &clearpath_motor_msgs__action__LynxCalibrate_GetResult_Response__get_type_description,
  &clearpath_motor_msgs__action__LynxCalibrate_GetResult_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace clearpath_motor_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<clearpath_motor_msgs::action::LynxCalibrate_GetResult_Response>()
{
  return &::clearpath_motor_msgs::action::rosidl_typesupport_cpp::LynxCalibrate_GetResult_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, clearpath_motor_msgs, action, LynxCalibrate_GetResult_Response)() {
  return get_message_type_support_handle<clearpath_motor_msgs::action::LynxCalibrate_GetResult_Response>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "clearpath_motor_msgs/action/detail/lynx_calibrate__functions.h"
// already included above
// #include "clearpath_motor_msgs/action/detail/lynx_calibrate__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace clearpath_motor_msgs
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _LynxCalibrate_GetResult_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _LynxCalibrate_GetResult_Event_type_support_ids_t;

static const _LynxCalibrate_GetResult_Event_type_support_ids_t _LynxCalibrate_GetResult_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _LynxCalibrate_GetResult_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _LynxCalibrate_GetResult_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _LynxCalibrate_GetResult_Event_type_support_symbol_names_t _LynxCalibrate_GetResult_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, clearpath_motor_msgs, action, LynxCalibrate_GetResult_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, clearpath_motor_msgs, action, LynxCalibrate_GetResult_Event)),
  }
};

typedef struct _LynxCalibrate_GetResult_Event_type_support_data_t
{
  void * data[2];
} _LynxCalibrate_GetResult_Event_type_support_data_t;

static _LynxCalibrate_GetResult_Event_type_support_data_t _LynxCalibrate_GetResult_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _LynxCalibrate_GetResult_Event_message_typesupport_map = {
  2,
  "clearpath_motor_msgs",
  &_LynxCalibrate_GetResult_Event_message_typesupport_ids.typesupport_identifier[0],
  &_LynxCalibrate_GetResult_Event_message_typesupport_symbol_names.symbol_name[0],
  &_LynxCalibrate_GetResult_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t LynxCalibrate_GetResult_Event_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_LynxCalibrate_GetResult_Event_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &clearpath_motor_msgs__action__LynxCalibrate_GetResult_Event__get_type_hash,
  &clearpath_motor_msgs__action__LynxCalibrate_GetResult_Event__get_type_description,
  &clearpath_motor_msgs__action__LynxCalibrate_GetResult_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace clearpath_motor_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<clearpath_motor_msgs::action::LynxCalibrate_GetResult_Event>()
{
  return &::clearpath_motor_msgs::action::rosidl_typesupport_cpp::LynxCalibrate_GetResult_Event_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, clearpath_motor_msgs, action, LynxCalibrate_GetResult_Event)() {
  return get_message_type_support_handle<clearpath_motor_msgs::action::LynxCalibrate_GetResult_Event>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "clearpath_motor_msgs/action/detail/lynx_calibrate__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace clearpath_motor_msgs
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _LynxCalibrate_GetResult_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _LynxCalibrate_GetResult_type_support_ids_t;

static const _LynxCalibrate_GetResult_type_support_ids_t _LynxCalibrate_GetResult_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _LynxCalibrate_GetResult_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _LynxCalibrate_GetResult_type_support_symbol_names_t;
#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _LynxCalibrate_GetResult_type_support_symbol_names_t _LynxCalibrate_GetResult_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, clearpath_motor_msgs, action, LynxCalibrate_GetResult)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, clearpath_motor_msgs, action, LynxCalibrate_GetResult)),
  }
};

typedef struct _LynxCalibrate_GetResult_type_support_data_t
{
  void * data[2];
} _LynxCalibrate_GetResult_type_support_data_t;

static _LynxCalibrate_GetResult_type_support_data_t _LynxCalibrate_GetResult_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _LynxCalibrate_GetResult_service_typesupport_map = {
  2,
  "clearpath_motor_msgs",
  &_LynxCalibrate_GetResult_service_typesupport_ids.typesupport_identifier[0],
  &_LynxCalibrate_GetResult_service_typesupport_symbol_names.symbol_name[0],
  &_LynxCalibrate_GetResult_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t LynxCalibrate_GetResult_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_LynxCalibrate_GetResult_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
  ::rosidl_typesupport_cpp::get_message_type_support_handle<clearpath_motor_msgs::action::LynxCalibrate_GetResult_Request>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<clearpath_motor_msgs::action::LynxCalibrate_GetResult_Response>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<clearpath_motor_msgs::action::LynxCalibrate_GetResult_Event>(),
  &::rosidl_typesupport_cpp::service_create_event_message<clearpath_motor_msgs::action::LynxCalibrate_GetResult>,
  &::rosidl_typesupport_cpp::service_destroy_event_message<clearpath_motor_msgs::action::LynxCalibrate_GetResult>,
  &clearpath_motor_msgs__action__LynxCalibrate_GetResult__get_type_hash,
  &clearpath_motor_msgs__action__LynxCalibrate_GetResult__get_type_description,
  &clearpath_motor_msgs__action__LynxCalibrate_GetResult__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace clearpath_motor_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<clearpath_motor_msgs::action::LynxCalibrate_GetResult>()
{
  return &::clearpath_motor_msgs::action::rosidl_typesupport_cpp::LynxCalibrate_GetResult_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_cpp, clearpath_motor_msgs, action, LynxCalibrate_GetResult)() {
  return ::rosidl_typesupport_cpp::get_service_type_support_handle<clearpath_motor_msgs::action::LynxCalibrate_GetResult>();
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "clearpath_motor_msgs/action/detail/lynx_calibrate__functions.h"
// already included above
// #include "clearpath_motor_msgs/action/detail/lynx_calibrate__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace clearpath_motor_msgs
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _LynxCalibrate_FeedbackMessage_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _LynxCalibrate_FeedbackMessage_type_support_ids_t;

static const _LynxCalibrate_FeedbackMessage_type_support_ids_t _LynxCalibrate_FeedbackMessage_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _LynxCalibrate_FeedbackMessage_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _LynxCalibrate_FeedbackMessage_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _LynxCalibrate_FeedbackMessage_type_support_symbol_names_t _LynxCalibrate_FeedbackMessage_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, clearpath_motor_msgs, action, LynxCalibrate_FeedbackMessage)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, clearpath_motor_msgs, action, LynxCalibrate_FeedbackMessage)),
  }
};

typedef struct _LynxCalibrate_FeedbackMessage_type_support_data_t
{
  void * data[2];
} _LynxCalibrate_FeedbackMessage_type_support_data_t;

static _LynxCalibrate_FeedbackMessage_type_support_data_t _LynxCalibrate_FeedbackMessage_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _LynxCalibrate_FeedbackMessage_message_typesupport_map = {
  2,
  "clearpath_motor_msgs",
  &_LynxCalibrate_FeedbackMessage_message_typesupport_ids.typesupport_identifier[0],
  &_LynxCalibrate_FeedbackMessage_message_typesupport_symbol_names.symbol_name[0],
  &_LynxCalibrate_FeedbackMessage_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t LynxCalibrate_FeedbackMessage_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_LynxCalibrate_FeedbackMessage_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &clearpath_motor_msgs__action__LynxCalibrate_FeedbackMessage__get_type_hash,
  &clearpath_motor_msgs__action__LynxCalibrate_FeedbackMessage__get_type_description,
  &clearpath_motor_msgs__action__LynxCalibrate_FeedbackMessage__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace clearpath_motor_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<clearpath_motor_msgs::action::LynxCalibrate_FeedbackMessage>()
{
  return &::clearpath_motor_msgs::action::rosidl_typesupport_cpp::LynxCalibrate_FeedbackMessage_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, clearpath_motor_msgs, action, LynxCalibrate_FeedbackMessage)() {
  return get_message_type_support_handle<clearpath_motor_msgs::action::LynxCalibrate_FeedbackMessage>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

#include "action_msgs/msg/goal_status_array.hpp"
#include "action_msgs/srv/cancel_goal.hpp"
// already included above
// #include "clearpath_motor_msgs/action/detail/lynx_calibrate__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_runtime_c/action_type_support_struct.h"
#include "rosidl_typesupport_cpp/action_type_support.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support.hpp"

namespace clearpath_motor_msgs
{

namespace action
{

namespace rosidl_typesupport_cpp
{

static rosidl_action_type_support_t LynxCalibrate_action_type_support_handle = {
  NULL, NULL, NULL, NULL, NULL,
  &clearpath_motor_msgs__action__LynxCalibrate__get_type_hash,
  &clearpath_motor_msgs__action__LynxCalibrate__get_type_description,
  &clearpath_motor_msgs__action__LynxCalibrate__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace clearpath_motor_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_action_type_support_t *
get_action_type_support_handle<clearpath_motor_msgs::action::LynxCalibrate>()
{
  using ::clearpath_motor_msgs::action::rosidl_typesupport_cpp::LynxCalibrate_action_type_support_handle;
  // Thread-safe by always writing the same values to the static struct
  LynxCalibrate_action_type_support_handle.goal_service_type_support = get_service_type_support_handle<::clearpath_motor_msgs::action::LynxCalibrate::Impl::SendGoalService>();
  LynxCalibrate_action_type_support_handle.result_service_type_support = get_service_type_support_handle<::clearpath_motor_msgs::action::LynxCalibrate::Impl::GetResultService>();
  LynxCalibrate_action_type_support_handle.cancel_service_type_support = get_service_type_support_handle<::clearpath_motor_msgs::action::LynxCalibrate::Impl::CancelGoalService>();
  LynxCalibrate_action_type_support_handle.feedback_message_type_support = get_message_type_support_handle<::clearpath_motor_msgs::action::LynxCalibrate::Impl::FeedbackMessage>();
  LynxCalibrate_action_type_support_handle.status_message_type_support = get_message_type_support_handle<::clearpath_motor_msgs::action::LynxCalibrate::Impl::GoalStatusMessage>();
  return &LynxCalibrate_action_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_action_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__ACTION_SYMBOL_NAME(rosidl_typesupport_cpp, clearpath_motor_msgs, action, LynxCalibrate)() {
  return ::rosidl_typesupport_cpp::get_action_type_support_handle<clearpath_motor_msgs::action::LynxCalibrate>();
}

#ifdef __cplusplus
}
#endif

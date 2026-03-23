# generated from rosidl_generator_py/resource/_idl.py.em
# with input from clearpath_motor_msgs:msg/LynxStatus.idl
# generated code does not contain a copyright notice

# This is being done at the module level and not on the instance level to avoid looking
# for the same variable multiple times on each instance. This variable is not supposed to
# change during runtime so it makes sense to only look for it once.
from os import getenv

ros_python_check_fields = getenv('ROS_PYTHON_CHECK_FIELDS', default='')


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_LynxStatus(type):
    """Metaclass of message 'LynxStatus'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'STATUS_FLAG_ADC_CALIBRATED': 0,
        'STATUS_FLAG_FOC_ENABLED': 1,
        'STATUS_FLAG_CALIBRATION_REQUESTED': 2,
        'STATUS_FLAG_CALIBRATION_CANCELLED': 3,
        'STATUS_FLAG_ESTOPPED': 4,
        'WARNING_FLAG_MOTOR_THERMISTOR': 0,
        'WARNING_FLAG_PCB_THERMISTOR': 1,
        'WARNING_FLAG_PHASE': 2,
        'WARNING_FLAG_PHASE_A': 3,
        'WARNING_FLAG_PHASE_B': 4,
        'WARNING_FLAG_PHASE_C': 5,
        'WARNING_FLAG_ENCODER_INDEX': 6,
        'WARNING_FLAG_ENCODER_OUTPUT_A': 7,
        'WARNING_FLAG_ENCODER_OUTPUT_B': 8,
        'ERROR_FLAG_NOT_CALIBRATED': 0,
        'ERROR_FLAG_MOTOR_FAULT': 1,
        'ERROR_FLAG_MOTOR_STALLING': 2,
        'ERROR_FLAG_MOTOR_THERMISTOR': 3,
        'ERROR_FLAG_PCB_THERMISTOR': 4,
        'ERROR_FLAG_PHASE': 5,
        'ERROR_FLAG_PHASE_A': 6,
        'ERROR_FLAG_PHASE_B': 7,
        'ERROR_FLAG_PHASE_C': 8,
        'ERROR_FLAG_ENCODER_POWER': 9,
        'ERROR_FLAG_ENCODER_INDEX': 10,
        'ERROR_FLAG_ENCODER_OUTPUT_A': 11,
        'ERROR_FLAG_ENCODER_OUTPUT_B': 12,
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('clearpath_motor_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'clearpath_motor_msgs.msg.LynxStatus')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__lynx_status
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__lynx_status
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__lynx_status
            cls._TYPE_SUPPORT = module.type_support_msg__msg__lynx_status
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__lynx_status

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'STATUS_FLAG_ADC_CALIBRATED': cls.__constants['STATUS_FLAG_ADC_CALIBRATED'],
            'STATUS_FLAG_FOC_ENABLED': cls.__constants['STATUS_FLAG_FOC_ENABLED'],
            'STATUS_FLAG_CALIBRATION_REQUESTED': cls.__constants['STATUS_FLAG_CALIBRATION_REQUESTED'],
            'STATUS_FLAG_CALIBRATION_CANCELLED': cls.__constants['STATUS_FLAG_CALIBRATION_CANCELLED'],
            'STATUS_FLAG_ESTOPPED': cls.__constants['STATUS_FLAG_ESTOPPED'],
            'WARNING_FLAG_MOTOR_THERMISTOR': cls.__constants['WARNING_FLAG_MOTOR_THERMISTOR'],
            'WARNING_FLAG_PCB_THERMISTOR': cls.__constants['WARNING_FLAG_PCB_THERMISTOR'],
            'WARNING_FLAG_PHASE': cls.__constants['WARNING_FLAG_PHASE'],
            'WARNING_FLAG_PHASE_A': cls.__constants['WARNING_FLAG_PHASE_A'],
            'WARNING_FLAG_PHASE_B': cls.__constants['WARNING_FLAG_PHASE_B'],
            'WARNING_FLAG_PHASE_C': cls.__constants['WARNING_FLAG_PHASE_C'],
            'WARNING_FLAG_ENCODER_INDEX': cls.__constants['WARNING_FLAG_ENCODER_INDEX'],
            'WARNING_FLAG_ENCODER_OUTPUT_A': cls.__constants['WARNING_FLAG_ENCODER_OUTPUT_A'],
            'WARNING_FLAG_ENCODER_OUTPUT_B': cls.__constants['WARNING_FLAG_ENCODER_OUTPUT_B'],
            'ERROR_FLAG_NOT_CALIBRATED': cls.__constants['ERROR_FLAG_NOT_CALIBRATED'],
            'ERROR_FLAG_MOTOR_FAULT': cls.__constants['ERROR_FLAG_MOTOR_FAULT'],
            'ERROR_FLAG_MOTOR_STALLING': cls.__constants['ERROR_FLAG_MOTOR_STALLING'],
            'ERROR_FLAG_MOTOR_THERMISTOR': cls.__constants['ERROR_FLAG_MOTOR_THERMISTOR'],
            'ERROR_FLAG_PCB_THERMISTOR': cls.__constants['ERROR_FLAG_PCB_THERMISTOR'],
            'ERROR_FLAG_PHASE': cls.__constants['ERROR_FLAG_PHASE'],
            'ERROR_FLAG_PHASE_A': cls.__constants['ERROR_FLAG_PHASE_A'],
            'ERROR_FLAG_PHASE_B': cls.__constants['ERROR_FLAG_PHASE_B'],
            'ERROR_FLAG_PHASE_C': cls.__constants['ERROR_FLAG_PHASE_C'],
            'ERROR_FLAG_ENCODER_POWER': cls.__constants['ERROR_FLAG_ENCODER_POWER'],
            'ERROR_FLAG_ENCODER_INDEX': cls.__constants['ERROR_FLAG_ENCODER_INDEX'],
            'ERROR_FLAG_ENCODER_OUTPUT_A': cls.__constants['ERROR_FLAG_ENCODER_OUTPUT_A'],
            'ERROR_FLAG_ENCODER_OUTPUT_B': cls.__constants['ERROR_FLAG_ENCODER_OUTPUT_B'],
        }

    @property
    def STATUS_FLAG_ADC_CALIBRATED(self):
        """Message constant 'STATUS_FLAG_ADC_CALIBRATED'."""
        return Metaclass_LynxStatus.__constants['STATUS_FLAG_ADC_CALIBRATED']

    @property
    def STATUS_FLAG_FOC_ENABLED(self):
        """Message constant 'STATUS_FLAG_FOC_ENABLED'."""
        return Metaclass_LynxStatus.__constants['STATUS_FLAG_FOC_ENABLED']

    @property
    def STATUS_FLAG_CALIBRATION_REQUESTED(self):
        """Message constant 'STATUS_FLAG_CALIBRATION_REQUESTED'."""
        return Metaclass_LynxStatus.__constants['STATUS_FLAG_CALIBRATION_REQUESTED']

    @property
    def STATUS_FLAG_CALIBRATION_CANCELLED(self):
        """Message constant 'STATUS_FLAG_CALIBRATION_CANCELLED'."""
        return Metaclass_LynxStatus.__constants['STATUS_FLAG_CALIBRATION_CANCELLED']

    @property
    def STATUS_FLAG_ESTOPPED(self):
        """Message constant 'STATUS_FLAG_ESTOPPED'."""
        return Metaclass_LynxStatus.__constants['STATUS_FLAG_ESTOPPED']

    @property
    def WARNING_FLAG_MOTOR_THERMISTOR(self):
        """Message constant 'WARNING_FLAG_MOTOR_THERMISTOR'."""
        return Metaclass_LynxStatus.__constants['WARNING_FLAG_MOTOR_THERMISTOR']

    @property
    def WARNING_FLAG_PCB_THERMISTOR(self):
        """Message constant 'WARNING_FLAG_PCB_THERMISTOR'."""
        return Metaclass_LynxStatus.__constants['WARNING_FLAG_PCB_THERMISTOR']

    @property
    def WARNING_FLAG_PHASE(self):
        """Message constant 'WARNING_FLAG_PHASE'."""
        return Metaclass_LynxStatus.__constants['WARNING_FLAG_PHASE']

    @property
    def WARNING_FLAG_PHASE_A(self):
        """Message constant 'WARNING_FLAG_PHASE_A'."""
        return Metaclass_LynxStatus.__constants['WARNING_FLAG_PHASE_A']

    @property
    def WARNING_FLAG_PHASE_B(self):
        """Message constant 'WARNING_FLAG_PHASE_B'."""
        return Metaclass_LynxStatus.__constants['WARNING_FLAG_PHASE_B']

    @property
    def WARNING_FLAG_PHASE_C(self):
        """Message constant 'WARNING_FLAG_PHASE_C'."""
        return Metaclass_LynxStatus.__constants['WARNING_FLAG_PHASE_C']

    @property
    def WARNING_FLAG_ENCODER_INDEX(self):
        """Message constant 'WARNING_FLAG_ENCODER_INDEX'."""
        return Metaclass_LynxStatus.__constants['WARNING_FLAG_ENCODER_INDEX']

    @property
    def WARNING_FLAG_ENCODER_OUTPUT_A(self):
        """Message constant 'WARNING_FLAG_ENCODER_OUTPUT_A'."""
        return Metaclass_LynxStatus.__constants['WARNING_FLAG_ENCODER_OUTPUT_A']

    @property
    def WARNING_FLAG_ENCODER_OUTPUT_B(self):
        """Message constant 'WARNING_FLAG_ENCODER_OUTPUT_B'."""
        return Metaclass_LynxStatus.__constants['WARNING_FLAG_ENCODER_OUTPUT_B']

    @property
    def ERROR_FLAG_NOT_CALIBRATED(self):
        """Message constant 'ERROR_FLAG_NOT_CALIBRATED'."""
        return Metaclass_LynxStatus.__constants['ERROR_FLAG_NOT_CALIBRATED']

    @property
    def ERROR_FLAG_MOTOR_FAULT(self):
        """Message constant 'ERROR_FLAG_MOTOR_FAULT'."""
        return Metaclass_LynxStatus.__constants['ERROR_FLAG_MOTOR_FAULT']

    @property
    def ERROR_FLAG_MOTOR_STALLING(self):
        """Message constant 'ERROR_FLAG_MOTOR_STALLING'."""
        return Metaclass_LynxStatus.__constants['ERROR_FLAG_MOTOR_STALLING']

    @property
    def ERROR_FLAG_MOTOR_THERMISTOR(self):
        """Message constant 'ERROR_FLAG_MOTOR_THERMISTOR'."""
        return Metaclass_LynxStatus.__constants['ERROR_FLAG_MOTOR_THERMISTOR']

    @property
    def ERROR_FLAG_PCB_THERMISTOR(self):
        """Message constant 'ERROR_FLAG_PCB_THERMISTOR'."""
        return Metaclass_LynxStatus.__constants['ERROR_FLAG_PCB_THERMISTOR']

    @property
    def ERROR_FLAG_PHASE(self):
        """Message constant 'ERROR_FLAG_PHASE'."""
        return Metaclass_LynxStatus.__constants['ERROR_FLAG_PHASE']

    @property
    def ERROR_FLAG_PHASE_A(self):
        """Message constant 'ERROR_FLAG_PHASE_A'."""
        return Metaclass_LynxStatus.__constants['ERROR_FLAG_PHASE_A']

    @property
    def ERROR_FLAG_PHASE_B(self):
        """Message constant 'ERROR_FLAG_PHASE_B'."""
        return Metaclass_LynxStatus.__constants['ERROR_FLAG_PHASE_B']

    @property
    def ERROR_FLAG_PHASE_C(self):
        """Message constant 'ERROR_FLAG_PHASE_C'."""
        return Metaclass_LynxStatus.__constants['ERROR_FLAG_PHASE_C']

    @property
    def ERROR_FLAG_ENCODER_POWER(self):
        """Message constant 'ERROR_FLAG_ENCODER_POWER'."""
        return Metaclass_LynxStatus.__constants['ERROR_FLAG_ENCODER_POWER']

    @property
    def ERROR_FLAG_ENCODER_INDEX(self):
        """Message constant 'ERROR_FLAG_ENCODER_INDEX'."""
        return Metaclass_LynxStatus.__constants['ERROR_FLAG_ENCODER_INDEX']

    @property
    def ERROR_FLAG_ENCODER_OUTPUT_A(self):
        """Message constant 'ERROR_FLAG_ENCODER_OUTPUT_A'."""
        return Metaclass_LynxStatus.__constants['ERROR_FLAG_ENCODER_OUTPUT_A']

    @property
    def ERROR_FLAG_ENCODER_OUTPUT_B(self):
        """Message constant 'ERROR_FLAG_ENCODER_OUTPUT_B'."""
        return Metaclass_LynxStatus.__constants['ERROR_FLAG_ENCODER_OUTPUT_B']


class LynxStatus(metaclass=Metaclass_LynxStatus):
    """
    Message class 'LynxStatus'.

    Constants:
      STATUS_FLAG_ADC_CALIBRATED
      STATUS_FLAG_FOC_ENABLED
      STATUS_FLAG_CALIBRATION_REQUESTED
      STATUS_FLAG_CALIBRATION_CANCELLED
      STATUS_FLAG_ESTOPPED
      WARNING_FLAG_MOTOR_THERMISTOR
      WARNING_FLAG_PCB_THERMISTOR
      WARNING_FLAG_PHASE
      WARNING_FLAG_PHASE_A
      WARNING_FLAG_PHASE_B
      WARNING_FLAG_PHASE_C
      WARNING_FLAG_ENCODER_INDEX
      WARNING_FLAG_ENCODER_OUTPUT_A
      WARNING_FLAG_ENCODER_OUTPUT_B
      ERROR_FLAG_NOT_CALIBRATED
      ERROR_FLAG_MOTOR_FAULT
      ERROR_FLAG_MOTOR_STALLING
      ERROR_FLAG_MOTOR_THERMISTOR
      ERROR_FLAG_PCB_THERMISTOR
      ERROR_FLAG_PHASE
      ERROR_FLAG_PHASE_A
      ERROR_FLAG_PHASE_B
      ERROR_FLAG_PHASE_C
      ERROR_FLAG_ENCODER_POWER
      ERROR_FLAG_ENCODER_INDEX
      ERROR_FLAG_ENCODER_OUTPUT_A
      ERROR_FLAG_ENCODER_OUTPUT_B
    """

    __slots__ = [
        '_can_id',
        '_joint_name',
        '_firmware_version',
        '_motor_temperature',
        '_mcu_temperature',
        '_pcb_temperature',
        '_stopped',
        '_status_flags',
        '_warning_flags',
        '_error_flags',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'can_id': 'uint8',
        'joint_name': 'string',
        'firmware_version': 'string',
        'motor_temperature': 'float',
        'mcu_temperature': 'float',
        'pcb_temperature': 'float',
        'stopped': 'boolean',
        'status_flags': 'uint32',
        'warning_flags': 'uint32',
        'error_flags': 'uint32',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        if 'check_fields' in kwargs:
            self._check_fields = kwargs['check_fields']
        else:
            self._check_fields = ros_python_check_fields == '1'
        if self._check_fields:
            assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
                'Invalid arguments passed to constructor: %s' % \
                ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.can_id = kwargs.get('can_id', int())
        self.joint_name = kwargs.get('joint_name', str())
        self.firmware_version = kwargs.get('firmware_version', str())
        self.motor_temperature = kwargs.get('motor_temperature', float())
        self.mcu_temperature = kwargs.get('mcu_temperature', float())
        self.pcb_temperature = kwargs.get('pcb_temperature', float())
        self.stopped = kwargs.get('stopped', bool())
        self.status_flags = kwargs.get('status_flags', int())
        self.warning_flags = kwargs.get('warning_flags', int())
        self.error_flags = kwargs.get('error_flags', int())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.get_fields_and_field_types().keys(), self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    if self._check_fields:
                        assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.can_id != other.can_id:
            return False
        if self.joint_name != other.joint_name:
            return False
        if self.firmware_version != other.firmware_version:
            return False
        if self.motor_temperature != other.motor_temperature:
            return False
        if self.mcu_temperature != other.mcu_temperature:
            return False
        if self.pcb_temperature != other.pcb_temperature:
            return False
        if self.stopped != other.stopped:
            return False
        if self.status_flags != other.status_flags:
            return False
        if self.warning_flags != other.warning_flags:
            return False
        if self.error_flags != other.error_flags:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def can_id(self):
        """Message field 'can_id'."""
        return self._can_id

    @can_id.setter
    def can_id(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'can_id' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'can_id' field must be an unsigned integer in [0, 255]"
        self._can_id = value

    @builtins.property
    def joint_name(self):
        """Message field 'joint_name'."""
        return self._joint_name

    @joint_name.setter
    def joint_name(self, value):
        if self._check_fields:
            assert \
                isinstance(value, str), \
                "The 'joint_name' field must be of type 'str'"
        self._joint_name = value

    @builtins.property
    def firmware_version(self):
        """Message field 'firmware_version'."""
        return self._firmware_version

    @firmware_version.setter
    def firmware_version(self, value):
        if self._check_fields:
            assert \
                isinstance(value, str), \
                "The 'firmware_version' field must be of type 'str'"
        self._firmware_version = value

    @builtins.property
    def motor_temperature(self):
        """Message field 'motor_temperature'."""
        return self._motor_temperature

    @motor_temperature.setter
    def motor_temperature(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'motor_temperature' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'motor_temperature' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._motor_temperature = value

    @builtins.property
    def mcu_temperature(self):
        """Message field 'mcu_temperature'."""
        return self._mcu_temperature

    @mcu_temperature.setter
    def mcu_temperature(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'mcu_temperature' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'mcu_temperature' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._mcu_temperature = value

    @builtins.property
    def pcb_temperature(self):
        """Message field 'pcb_temperature'."""
        return self._pcb_temperature

    @pcb_temperature.setter
    def pcb_temperature(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'pcb_temperature' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'pcb_temperature' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._pcb_temperature = value

    @builtins.property
    def stopped(self):
        """Message field 'stopped'."""
        return self._stopped

    @stopped.setter
    def stopped(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'stopped' field must be of type 'bool'"
        self._stopped = value

    @builtins.property
    def status_flags(self):
        """Message field 'status_flags'."""
        return self._status_flags

    @status_flags.setter
    def status_flags(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'status_flags' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'status_flags' field must be an unsigned integer in [0, 4294967295]"
        self._status_flags = value

    @builtins.property
    def warning_flags(self):
        """Message field 'warning_flags'."""
        return self._warning_flags

    @warning_flags.setter
    def warning_flags(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'warning_flags' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'warning_flags' field must be an unsigned integer in [0, 4294967295]"
        self._warning_flags = value

    @builtins.property
    def error_flags(self):
        """Message field 'error_flags'."""
        return self._error_flags

    @error_flags.setter
    def error_flags(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'error_flags' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'error_flags' field must be an unsigned integer in [0, 4294967295]"
        self._error_flags = value

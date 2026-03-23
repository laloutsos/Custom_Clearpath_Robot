# generated from rosidl_generator_py/resource/_idl.py.em
# with input from clearpath_platform_msgs:msg/Temperature.idl
# generated code does not contain a copyright notice

# This is being done at the module level and not on the instance level to avoid looking
# for the same variable multiple times on each instance. This variable is not supposed to
# change during runtime so it makes sense to only look for it once.
from os import getenv

ros_python_check_fields = getenv('ROS_PYTHON_CHECK_FIELDS', default='')


# Import statements for member types

# Member 'temperatures'
import array  # noqa: E402, I100

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Temperature(type):
    """Metaclass of message 'Temperature'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'J100_MCU': 0,
        'J100_PCB': 1,
        'D100_MCU': 0,
        'D100_PCB': 1,
        'D150_MCU': 0,
        'D150_PCB': 1,
        'W200_MCU': 0,
        'R100_MCU': 0,
        'R100_PCB': 1,
        'CC01_MCU': 0,
        'CC01_FAN1': 1,
        'CC01_FAN2': 2,
        'CC01_FAN3': 3,
        'CC01_FAN4': 4,
        'CC01_FAN5': 5,
        'CC01_FAN6': 6,
        'CC01_FAN7': 7,
        'CC01_FAN8': 8,
        'CC01_5V_INDUCTOR': 9,
        'CC01_MAIN_GND_LUG': 10,
        'CC01_24V_DCDC': 11,
        'CC01_12V_DCDC': 12,
        'CC01_EXT_1': 13,
        'CC01_EXT_2': 14,
        'CC01_EXT_3': 15,
        'CC01_EXT_4': 16,
        'CC01_BREAKOUT_1': 17,
        'CC01_BREAKOUT_2': 18,
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('clearpath_platform_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'clearpath_platform_msgs.msg.Temperature')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__temperature
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__temperature
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__temperature
            cls._TYPE_SUPPORT = module.type_support_msg__msg__temperature
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__temperature

            from std_msgs.msg import Header
            if Header.__class__._TYPE_SUPPORT is None:
                Header.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'J100_MCU': cls.__constants['J100_MCU'],
            'J100_PCB': cls.__constants['J100_PCB'],
            'D100_MCU': cls.__constants['D100_MCU'],
            'D100_PCB': cls.__constants['D100_PCB'],
            'D150_MCU': cls.__constants['D150_MCU'],
            'D150_PCB': cls.__constants['D150_PCB'],
            'W200_MCU': cls.__constants['W200_MCU'],
            'R100_MCU': cls.__constants['R100_MCU'],
            'R100_PCB': cls.__constants['R100_PCB'],
            'CC01_MCU': cls.__constants['CC01_MCU'],
            'CC01_FAN1': cls.__constants['CC01_FAN1'],
            'CC01_FAN2': cls.__constants['CC01_FAN2'],
            'CC01_FAN3': cls.__constants['CC01_FAN3'],
            'CC01_FAN4': cls.__constants['CC01_FAN4'],
            'CC01_FAN5': cls.__constants['CC01_FAN5'],
            'CC01_FAN6': cls.__constants['CC01_FAN6'],
            'CC01_FAN7': cls.__constants['CC01_FAN7'],
            'CC01_FAN8': cls.__constants['CC01_FAN8'],
            'CC01_5V_INDUCTOR': cls.__constants['CC01_5V_INDUCTOR'],
            'CC01_MAIN_GND_LUG': cls.__constants['CC01_MAIN_GND_LUG'],
            'CC01_24V_DCDC': cls.__constants['CC01_24V_DCDC'],
            'CC01_12V_DCDC': cls.__constants['CC01_12V_DCDC'],
            'CC01_EXT_1': cls.__constants['CC01_EXT_1'],
            'CC01_EXT_2': cls.__constants['CC01_EXT_2'],
            'CC01_EXT_3': cls.__constants['CC01_EXT_3'],
            'CC01_EXT_4': cls.__constants['CC01_EXT_4'],
            'CC01_BREAKOUT_1': cls.__constants['CC01_BREAKOUT_1'],
            'CC01_BREAKOUT_2': cls.__constants['CC01_BREAKOUT_2'],
        }

    @property
    def J100_MCU(self):
        """Message constant 'J100_MCU'."""
        return Metaclass_Temperature.__constants['J100_MCU']

    @property
    def J100_PCB(self):
        """Message constant 'J100_PCB'."""
        return Metaclass_Temperature.__constants['J100_PCB']

    @property
    def D100_MCU(self):
        """Message constant 'D100_MCU'."""
        return Metaclass_Temperature.__constants['D100_MCU']

    @property
    def D100_PCB(self):
        """Message constant 'D100_PCB'."""
        return Metaclass_Temperature.__constants['D100_PCB']

    @property
    def D150_MCU(self):
        """Message constant 'D150_MCU'."""
        return Metaclass_Temperature.__constants['D150_MCU']

    @property
    def D150_PCB(self):
        """Message constant 'D150_PCB'."""
        return Metaclass_Temperature.__constants['D150_PCB']

    @property
    def W200_MCU(self):
        """Message constant 'W200_MCU'."""
        return Metaclass_Temperature.__constants['W200_MCU']

    @property
    def R100_MCU(self):
        """Message constant 'R100_MCU'."""
        return Metaclass_Temperature.__constants['R100_MCU']

    @property
    def R100_PCB(self):
        """Message constant 'R100_PCB'."""
        return Metaclass_Temperature.__constants['R100_PCB']

    @property
    def CC01_MCU(self):
        """Message constant 'CC01_MCU'."""
        return Metaclass_Temperature.__constants['CC01_MCU']

    @property
    def CC01_FAN1(self):
        """Message constant 'CC01_FAN1'."""
        return Metaclass_Temperature.__constants['CC01_FAN1']

    @property
    def CC01_FAN2(self):
        """Message constant 'CC01_FAN2'."""
        return Metaclass_Temperature.__constants['CC01_FAN2']

    @property
    def CC01_FAN3(self):
        """Message constant 'CC01_FAN3'."""
        return Metaclass_Temperature.__constants['CC01_FAN3']

    @property
    def CC01_FAN4(self):
        """Message constant 'CC01_FAN4'."""
        return Metaclass_Temperature.__constants['CC01_FAN4']

    @property
    def CC01_FAN5(self):
        """Message constant 'CC01_FAN5'."""
        return Metaclass_Temperature.__constants['CC01_FAN5']

    @property
    def CC01_FAN6(self):
        """Message constant 'CC01_FAN6'."""
        return Metaclass_Temperature.__constants['CC01_FAN6']

    @property
    def CC01_FAN7(self):
        """Message constant 'CC01_FAN7'."""
        return Metaclass_Temperature.__constants['CC01_FAN7']

    @property
    def CC01_FAN8(self):
        """Message constant 'CC01_FAN8'."""
        return Metaclass_Temperature.__constants['CC01_FAN8']

    @property
    def CC01_5V_INDUCTOR(self):
        """Message constant 'CC01_5V_INDUCTOR'."""
        return Metaclass_Temperature.__constants['CC01_5V_INDUCTOR']

    @property
    def CC01_MAIN_GND_LUG(self):
        """Message constant 'CC01_MAIN_GND_LUG'."""
        return Metaclass_Temperature.__constants['CC01_MAIN_GND_LUG']

    @property
    def CC01_24V_DCDC(self):
        """Message constant 'CC01_24V_DCDC'."""
        return Metaclass_Temperature.__constants['CC01_24V_DCDC']

    @property
    def CC01_12V_DCDC(self):
        """Message constant 'CC01_12V_DCDC'."""
        return Metaclass_Temperature.__constants['CC01_12V_DCDC']

    @property
    def CC01_EXT_1(self):
        """Message constant 'CC01_EXT_1'."""
        return Metaclass_Temperature.__constants['CC01_EXT_1']

    @property
    def CC01_EXT_2(self):
        """Message constant 'CC01_EXT_2'."""
        return Metaclass_Temperature.__constants['CC01_EXT_2']

    @property
    def CC01_EXT_3(self):
        """Message constant 'CC01_EXT_3'."""
        return Metaclass_Temperature.__constants['CC01_EXT_3']

    @property
    def CC01_EXT_4(self):
        """Message constant 'CC01_EXT_4'."""
        return Metaclass_Temperature.__constants['CC01_EXT_4']

    @property
    def CC01_BREAKOUT_1(self):
        """Message constant 'CC01_BREAKOUT_1'."""
        return Metaclass_Temperature.__constants['CC01_BREAKOUT_1']

    @property
    def CC01_BREAKOUT_2(self):
        """Message constant 'CC01_BREAKOUT_2'."""
        return Metaclass_Temperature.__constants['CC01_BREAKOUT_2']


class Temperature(metaclass=Metaclass_Temperature):
    """
    Message class 'Temperature'.

    Constants:
      J100_MCU
      J100_PCB
      D100_MCU
      D100_PCB
      D150_MCU
      D150_PCB
      W200_MCU
      R100_MCU
      R100_PCB
      CC01_MCU
      CC01_FAN1
      CC01_FAN2
      CC01_FAN3
      CC01_FAN4
      CC01_FAN5
      CC01_FAN6
      CC01_FAN7
      CC01_FAN8
      CC01_5V_INDUCTOR
      CC01_MAIN_GND_LUG
      CC01_24V_DCDC
      CC01_12V_DCDC
      CC01_EXT_1
      CC01_EXT_2
      CC01_EXT_3
      CC01_EXT_4
      CC01_BREAKOUT_1
      CC01_BREAKOUT_2
    """

    __slots__ = [
        '_header',
        '_temperatures',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'temperatures': 'sequence<float>',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('float')),  # noqa: E501
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
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.temperatures = array.array('f', kwargs.get('temperatures', []))

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
        if self.header != other.header:
            return False
        if self.temperatures != other.temperatures:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def header(self):
        """Message field 'header'."""
        return self._header

    @header.setter
    def header(self, value):
        if self._check_fields:
            from std_msgs.msg import Header
            assert \
                isinstance(value, Header), \
                "The 'header' field must be a sub message of type 'Header'"
        self._header = value

    @builtins.property
    def temperatures(self):
        """Message field 'temperatures'."""
        return self._temperatures

    @temperatures.setter
    def temperatures(self, value):
        if self._check_fields:
            if isinstance(value, array.array):
                assert value.typecode == 'f', \
                    "The 'temperatures' array.array() must have the type code of 'f'"
                self._temperatures = value
                return
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -3.402823466e+38 or val > 3.402823466e+38) or math.isinf(val) for val in value)), \
                "The 'temperatures' field must be a set or sequence and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._temperatures = array.array('f', value)

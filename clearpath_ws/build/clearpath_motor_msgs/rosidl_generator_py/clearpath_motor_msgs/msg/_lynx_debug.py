# generated from rosidl_generator_py/resource/_idl.py.em
# with input from clearpath_motor_msgs:msg/LynxDebug.idl
# generated code does not contain a copyright notice

# This is being done at the module level and not on the instance level to avoid looking
# for the same variable multiple times on each instance. This variable is not supposed to
# change during runtime so it makes sense to only look for it once.
from os import getenv

ros_python_check_fields = getenv('ROS_PYTHON_CHECK_FIELDS', default='')


# Import statements for member types

# Member 'accumulators'
# Member 'currents'
import array  # noqa: E402, I100

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_LynxDebug(type):
    """Metaclass of message 'LynxDebug'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'ACCUMULATOR_FLAG_ABOVE_RATED': 0,
        'ACCUMULATOR_FLAG_CONTINUOUS_1_1': 1,
        'ACCUMULATOR_FLAG_CONTINUOUS_1_2': 2,
        'ACCUMULATOR_FLAG_CONTINUOUS_1_3': 3,
        'ACCUMULATOR_FLAG_CONTINUOUS_1_4': 4,
        'ACCUMULATOR_FLAG_CONTINUOUS_1_5': 5,
        'ACCUMULATOR_FLAG_CONTINUOUS_1_6': 6,
        'ACCUMULATOR_FLAG_CONTINUOUS_1_7': 7,
        'ACCUMULATOR_FLAG_CONTINUOUS_1_8': 8,
        'ACCUMULATOR_FLAG_CONTINUOUS_1_9': 9,
        'ACCUMULATOR_FLAG_CONTINUOUS_2_0': 10,
        'ACCUMULATOR_FLAG_CONTINUOUS_2_1': 11,
        'ACCUMULATOR_FLAG_CONTINUOUS_2_2': 12,
        'ACCUMULATOR_FLAG_CONTINUOUS_2_3': 13,
        'ACCUMULATOR_FLAG_CONTINUOUS_2_4': 14,
        'ACCUMULATOR_FLAG_CONTINUOUS_2_5': 15,
        'ACCUMULATOR_FLAG_CONTINUOUS_2_6': 16,
        'ACCUMULATOR_FLAG_CONTINUOUS_2_7': 17,
        'ACCUMULATOR_FLAG_CONTINUOUS_2_8': 18,
        'ACCUMULATOR_FLAG_CONTINUOUS_2_9': 19,
        'ACCUMULATOR_FLAG_CONTINUOUS_3_0': 20,
        'ACCUMULATOR_ABOVE_RATED': 0,
        'ACCUMULATOR_CONTINUOUS_1_1': 1,
        'ACCUMULATOR_CONTINUOUS_1_5': 2,
        'ACCUMULATOR_CONTINUOUS_2_0': 3,
        'ACCUMULATOR_CONTINUOUS_2_5': 4,
        'ACCUMULATOR_CONTINUOUS_3_0': 5,
        'CURRENT_ID_FB': 0,
        'CURRENT_ID_FF': 1,
        'CURRENT_ID_REF': 2,
        'CURRENT_IQ_FB': 3,
        'CURRENT_IQ_FF': 4,
        'CURRENT_IQ_REF': 5,
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
                'clearpath_motor_msgs.msg.LynxDebug')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__lynx_debug
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__lynx_debug
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__lynx_debug
            cls._TYPE_SUPPORT = module.type_support_msg__msg__lynx_debug
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__lynx_debug

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'ACCUMULATOR_FLAG_ABOVE_RATED': cls.__constants['ACCUMULATOR_FLAG_ABOVE_RATED'],
            'ACCUMULATOR_FLAG_CONTINUOUS_1_1': cls.__constants['ACCUMULATOR_FLAG_CONTINUOUS_1_1'],
            'ACCUMULATOR_FLAG_CONTINUOUS_1_2': cls.__constants['ACCUMULATOR_FLAG_CONTINUOUS_1_2'],
            'ACCUMULATOR_FLAG_CONTINUOUS_1_3': cls.__constants['ACCUMULATOR_FLAG_CONTINUOUS_1_3'],
            'ACCUMULATOR_FLAG_CONTINUOUS_1_4': cls.__constants['ACCUMULATOR_FLAG_CONTINUOUS_1_4'],
            'ACCUMULATOR_FLAG_CONTINUOUS_1_5': cls.__constants['ACCUMULATOR_FLAG_CONTINUOUS_1_5'],
            'ACCUMULATOR_FLAG_CONTINUOUS_1_6': cls.__constants['ACCUMULATOR_FLAG_CONTINUOUS_1_6'],
            'ACCUMULATOR_FLAG_CONTINUOUS_1_7': cls.__constants['ACCUMULATOR_FLAG_CONTINUOUS_1_7'],
            'ACCUMULATOR_FLAG_CONTINUOUS_1_8': cls.__constants['ACCUMULATOR_FLAG_CONTINUOUS_1_8'],
            'ACCUMULATOR_FLAG_CONTINUOUS_1_9': cls.__constants['ACCUMULATOR_FLAG_CONTINUOUS_1_9'],
            'ACCUMULATOR_FLAG_CONTINUOUS_2_0': cls.__constants['ACCUMULATOR_FLAG_CONTINUOUS_2_0'],
            'ACCUMULATOR_FLAG_CONTINUOUS_2_1': cls.__constants['ACCUMULATOR_FLAG_CONTINUOUS_2_1'],
            'ACCUMULATOR_FLAG_CONTINUOUS_2_2': cls.__constants['ACCUMULATOR_FLAG_CONTINUOUS_2_2'],
            'ACCUMULATOR_FLAG_CONTINUOUS_2_3': cls.__constants['ACCUMULATOR_FLAG_CONTINUOUS_2_3'],
            'ACCUMULATOR_FLAG_CONTINUOUS_2_4': cls.__constants['ACCUMULATOR_FLAG_CONTINUOUS_2_4'],
            'ACCUMULATOR_FLAG_CONTINUOUS_2_5': cls.__constants['ACCUMULATOR_FLAG_CONTINUOUS_2_5'],
            'ACCUMULATOR_FLAG_CONTINUOUS_2_6': cls.__constants['ACCUMULATOR_FLAG_CONTINUOUS_2_6'],
            'ACCUMULATOR_FLAG_CONTINUOUS_2_7': cls.__constants['ACCUMULATOR_FLAG_CONTINUOUS_2_7'],
            'ACCUMULATOR_FLAG_CONTINUOUS_2_8': cls.__constants['ACCUMULATOR_FLAG_CONTINUOUS_2_8'],
            'ACCUMULATOR_FLAG_CONTINUOUS_2_9': cls.__constants['ACCUMULATOR_FLAG_CONTINUOUS_2_9'],
            'ACCUMULATOR_FLAG_CONTINUOUS_3_0': cls.__constants['ACCUMULATOR_FLAG_CONTINUOUS_3_0'],
            'ACCUMULATOR_ABOVE_RATED': cls.__constants['ACCUMULATOR_ABOVE_RATED'],
            'ACCUMULATOR_CONTINUOUS_1_1': cls.__constants['ACCUMULATOR_CONTINUOUS_1_1'],
            'ACCUMULATOR_CONTINUOUS_1_5': cls.__constants['ACCUMULATOR_CONTINUOUS_1_5'],
            'ACCUMULATOR_CONTINUOUS_2_0': cls.__constants['ACCUMULATOR_CONTINUOUS_2_0'],
            'ACCUMULATOR_CONTINUOUS_2_5': cls.__constants['ACCUMULATOR_CONTINUOUS_2_5'],
            'ACCUMULATOR_CONTINUOUS_3_0': cls.__constants['ACCUMULATOR_CONTINUOUS_3_0'],
            'CURRENT_ID_FB': cls.__constants['CURRENT_ID_FB'],
            'CURRENT_ID_FF': cls.__constants['CURRENT_ID_FF'],
            'CURRENT_ID_REF': cls.__constants['CURRENT_ID_REF'],
            'CURRENT_IQ_FB': cls.__constants['CURRENT_IQ_FB'],
            'CURRENT_IQ_FF': cls.__constants['CURRENT_IQ_FF'],
            'CURRENT_IQ_REF': cls.__constants['CURRENT_IQ_REF'],
        }

    @property
    def ACCUMULATOR_FLAG_ABOVE_RATED(self):
        """Message constant 'ACCUMULATOR_FLAG_ABOVE_RATED'."""
        return Metaclass_LynxDebug.__constants['ACCUMULATOR_FLAG_ABOVE_RATED']

    @property
    def ACCUMULATOR_FLAG_CONTINUOUS_1_1(self):
        """Message constant 'ACCUMULATOR_FLAG_CONTINUOUS_1_1'."""
        return Metaclass_LynxDebug.__constants['ACCUMULATOR_FLAG_CONTINUOUS_1_1']

    @property
    def ACCUMULATOR_FLAG_CONTINUOUS_1_2(self):
        """Message constant 'ACCUMULATOR_FLAG_CONTINUOUS_1_2'."""
        return Metaclass_LynxDebug.__constants['ACCUMULATOR_FLAG_CONTINUOUS_1_2']

    @property
    def ACCUMULATOR_FLAG_CONTINUOUS_1_3(self):
        """Message constant 'ACCUMULATOR_FLAG_CONTINUOUS_1_3'."""
        return Metaclass_LynxDebug.__constants['ACCUMULATOR_FLAG_CONTINUOUS_1_3']

    @property
    def ACCUMULATOR_FLAG_CONTINUOUS_1_4(self):
        """Message constant 'ACCUMULATOR_FLAG_CONTINUOUS_1_4'."""
        return Metaclass_LynxDebug.__constants['ACCUMULATOR_FLAG_CONTINUOUS_1_4']

    @property
    def ACCUMULATOR_FLAG_CONTINUOUS_1_5(self):
        """Message constant 'ACCUMULATOR_FLAG_CONTINUOUS_1_5'."""
        return Metaclass_LynxDebug.__constants['ACCUMULATOR_FLAG_CONTINUOUS_1_5']

    @property
    def ACCUMULATOR_FLAG_CONTINUOUS_1_6(self):
        """Message constant 'ACCUMULATOR_FLAG_CONTINUOUS_1_6'."""
        return Metaclass_LynxDebug.__constants['ACCUMULATOR_FLAG_CONTINUOUS_1_6']

    @property
    def ACCUMULATOR_FLAG_CONTINUOUS_1_7(self):
        """Message constant 'ACCUMULATOR_FLAG_CONTINUOUS_1_7'."""
        return Metaclass_LynxDebug.__constants['ACCUMULATOR_FLAG_CONTINUOUS_1_7']

    @property
    def ACCUMULATOR_FLAG_CONTINUOUS_1_8(self):
        """Message constant 'ACCUMULATOR_FLAG_CONTINUOUS_1_8'."""
        return Metaclass_LynxDebug.__constants['ACCUMULATOR_FLAG_CONTINUOUS_1_8']

    @property
    def ACCUMULATOR_FLAG_CONTINUOUS_1_9(self):
        """Message constant 'ACCUMULATOR_FLAG_CONTINUOUS_1_9'."""
        return Metaclass_LynxDebug.__constants['ACCUMULATOR_FLAG_CONTINUOUS_1_9']

    @property
    def ACCUMULATOR_FLAG_CONTINUOUS_2_0(self):
        """Message constant 'ACCUMULATOR_FLAG_CONTINUOUS_2_0'."""
        return Metaclass_LynxDebug.__constants['ACCUMULATOR_FLAG_CONTINUOUS_2_0']

    @property
    def ACCUMULATOR_FLAG_CONTINUOUS_2_1(self):
        """Message constant 'ACCUMULATOR_FLAG_CONTINUOUS_2_1'."""
        return Metaclass_LynxDebug.__constants['ACCUMULATOR_FLAG_CONTINUOUS_2_1']

    @property
    def ACCUMULATOR_FLAG_CONTINUOUS_2_2(self):
        """Message constant 'ACCUMULATOR_FLAG_CONTINUOUS_2_2'."""
        return Metaclass_LynxDebug.__constants['ACCUMULATOR_FLAG_CONTINUOUS_2_2']

    @property
    def ACCUMULATOR_FLAG_CONTINUOUS_2_3(self):
        """Message constant 'ACCUMULATOR_FLAG_CONTINUOUS_2_3'."""
        return Metaclass_LynxDebug.__constants['ACCUMULATOR_FLAG_CONTINUOUS_2_3']

    @property
    def ACCUMULATOR_FLAG_CONTINUOUS_2_4(self):
        """Message constant 'ACCUMULATOR_FLAG_CONTINUOUS_2_4'."""
        return Metaclass_LynxDebug.__constants['ACCUMULATOR_FLAG_CONTINUOUS_2_4']

    @property
    def ACCUMULATOR_FLAG_CONTINUOUS_2_5(self):
        """Message constant 'ACCUMULATOR_FLAG_CONTINUOUS_2_5'."""
        return Metaclass_LynxDebug.__constants['ACCUMULATOR_FLAG_CONTINUOUS_2_5']

    @property
    def ACCUMULATOR_FLAG_CONTINUOUS_2_6(self):
        """Message constant 'ACCUMULATOR_FLAG_CONTINUOUS_2_6'."""
        return Metaclass_LynxDebug.__constants['ACCUMULATOR_FLAG_CONTINUOUS_2_6']

    @property
    def ACCUMULATOR_FLAG_CONTINUOUS_2_7(self):
        """Message constant 'ACCUMULATOR_FLAG_CONTINUOUS_2_7'."""
        return Metaclass_LynxDebug.__constants['ACCUMULATOR_FLAG_CONTINUOUS_2_7']

    @property
    def ACCUMULATOR_FLAG_CONTINUOUS_2_8(self):
        """Message constant 'ACCUMULATOR_FLAG_CONTINUOUS_2_8'."""
        return Metaclass_LynxDebug.__constants['ACCUMULATOR_FLAG_CONTINUOUS_2_8']

    @property
    def ACCUMULATOR_FLAG_CONTINUOUS_2_9(self):
        """Message constant 'ACCUMULATOR_FLAG_CONTINUOUS_2_9'."""
        return Metaclass_LynxDebug.__constants['ACCUMULATOR_FLAG_CONTINUOUS_2_9']

    @property
    def ACCUMULATOR_FLAG_CONTINUOUS_3_0(self):
        """Message constant 'ACCUMULATOR_FLAG_CONTINUOUS_3_0'."""
        return Metaclass_LynxDebug.__constants['ACCUMULATOR_FLAG_CONTINUOUS_3_0']

    @property
    def ACCUMULATOR_ABOVE_RATED(self):
        """Message constant 'ACCUMULATOR_ABOVE_RATED'."""
        return Metaclass_LynxDebug.__constants['ACCUMULATOR_ABOVE_RATED']

    @property
    def ACCUMULATOR_CONTINUOUS_1_1(self):
        """Message constant 'ACCUMULATOR_CONTINUOUS_1_1'."""
        return Metaclass_LynxDebug.__constants['ACCUMULATOR_CONTINUOUS_1_1']

    @property
    def ACCUMULATOR_CONTINUOUS_1_5(self):
        """Message constant 'ACCUMULATOR_CONTINUOUS_1_5'."""
        return Metaclass_LynxDebug.__constants['ACCUMULATOR_CONTINUOUS_1_5']

    @property
    def ACCUMULATOR_CONTINUOUS_2_0(self):
        """Message constant 'ACCUMULATOR_CONTINUOUS_2_0'."""
        return Metaclass_LynxDebug.__constants['ACCUMULATOR_CONTINUOUS_2_0']

    @property
    def ACCUMULATOR_CONTINUOUS_2_5(self):
        """Message constant 'ACCUMULATOR_CONTINUOUS_2_5'."""
        return Metaclass_LynxDebug.__constants['ACCUMULATOR_CONTINUOUS_2_5']

    @property
    def ACCUMULATOR_CONTINUOUS_3_0(self):
        """Message constant 'ACCUMULATOR_CONTINUOUS_3_0'."""
        return Metaclass_LynxDebug.__constants['ACCUMULATOR_CONTINUOUS_3_0']

    @property
    def CURRENT_ID_FB(self):
        """Message constant 'CURRENT_ID_FB'."""
        return Metaclass_LynxDebug.__constants['CURRENT_ID_FB']

    @property
    def CURRENT_ID_FF(self):
        """Message constant 'CURRENT_ID_FF'."""
        return Metaclass_LynxDebug.__constants['CURRENT_ID_FF']

    @property
    def CURRENT_ID_REF(self):
        """Message constant 'CURRENT_ID_REF'."""
        return Metaclass_LynxDebug.__constants['CURRENT_ID_REF']

    @property
    def CURRENT_IQ_FB(self):
        """Message constant 'CURRENT_IQ_FB'."""
        return Metaclass_LynxDebug.__constants['CURRENT_IQ_FB']

    @property
    def CURRENT_IQ_FF(self):
        """Message constant 'CURRENT_IQ_FF'."""
        return Metaclass_LynxDebug.__constants['CURRENT_IQ_FF']

    @property
    def CURRENT_IQ_REF(self):
        """Message constant 'CURRENT_IQ_REF'."""
        return Metaclass_LynxDebug.__constants['CURRENT_IQ_REF']


class LynxDebug(metaclass=Metaclass_LynxDebug):
    """
    Message class 'LynxDebug'.

    Constants:
      ACCUMULATOR_FLAG_ABOVE_RATED
      ACCUMULATOR_FLAG_CONTINUOUS_1_1
      ACCUMULATOR_FLAG_CONTINUOUS_1_2
      ACCUMULATOR_FLAG_CONTINUOUS_1_3
      ACCUMULATOR_FLAG_CONTINUOUS_1_4
      ACCUMULATOR_FLAG_CONTINUOUS_1_5
      ACCUMULATOR_FLAG_CONTINUOUS_1_6
      ACCUMULATOR_FLAG_CONTINUOUS_1_7
      ACCUMULATOR_FLAG_CONTINUOUS_1_8
      ACCUMULATOR_FLAG_CONTINUOUS_1_9
      ACCUMULATOR_FLAG_CONTINUOUS_2_0
      ACCUMULATOR_FLAG_CONTINUOUS_2_1
      ACCUMULATOR_FLAG_CONTINUOUS_2_2
      ACCUMULATOR_FLAG_CONTINUOUS_2_3
      ACCUMULATOR_FLAG_CONTINUOUS_2_4
      ACCUMULATOR_FLAG_CONTINUOUS_2_5
      ACCUMULATOR_FLAG_CONTINUOUS_2_6
      ACCUMULATOR_FLAG_CONTINUOUS_2_7
      ACCUMULATOR_FLAG_CONTINUOUS_2_8
      ACCUMULATOR_FLAG_CONTINUOUS_2_9
      ACCUMULATOR_FLAG_CONTINUOUS_3_0
      ACCUMULATOR_ABOVE_RATED
      ACCUMULATOR_CONTINUOUS_1_1
      ACCUMULATOR_CONTINUOUS_1_5
      ACCUMULATOR_CONTINUOUS_2_0
      ACCUMULATOR_CONTINUOUS_2_5
      ACCUMULATOR_CONTINUOUS_3_0
      CURRENT_ID_FB
      CURRENT_ID_FF
      CURRENT_ID_REF
      CURRENT_IQ_FB
      CURRENT_IQ_FF
      CURRENT_IQ_REF
    """

    __slots__ = [
        '_can_id',
        '_joint_name',
        '_fault_frequency',
        '_accumulator_flags',
        '_accumulators',
        '_currents',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'can_id': 'uint8',
        'joint_name': 'string',
        'fault_frequency': 'uint16',
        'accumulator_flags': 'uint32',
        'accumulators': 'sequence<float>',
        'currents': 'sequence<float>',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('float')),  # noqa: E501
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
        self.can_id = kwargs.get('can_id', int())
        self.joint_name = kwargs.get('joint_name', str())
        self.fault_frequency = kwargs.get('fault_frequency', int())
        self.accumulator_flags = kwargs.get('accumulator_flags', int())
        self.accumulators = array.array('f', kwargs.get('accumulators', []))
        self.currents = array.array('f', kwargs.get('currents', []))

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
        if self.fault_frequency != other.fault_frequency:
            return False
        if self.accumulator_flags != other.accumulator_flags:
            return False
        if self.accumulators != other.accumulators:
            return False
        if self.currents != other.currents:
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
    def fault_frequency(self):
        """Message field 'fault_frequency'."""
        return self._fault_frequency

    @fault_frequency.setter
    def fault_frequency(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'fault_frequency' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'fault_frequency' field must be an unsigned integer in [0, 65535]"
        self._fault_frequency = value

    @builtins.property
    def accumulator_flags(self):
        """Message field 'accumulator_flags'."""
        return self._accumulator_flags

    @accumulator_flags.setter
    def accumulator_flags(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'accumulator_flags' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'accumulator_flags' field must be an unsigned integer in [0, 4294967295]"
        self._accumulator_flags = value

    @builtins.property
    def accumulators(self):
        """Message field 'accumulators'."""
        return self._accumulators

    @accumulators.setter
    def accumulators(self, value):
        if self._check_fields:
            if isinstance(value, array.array):
                assert value.typecode == 'f', \
                    "The 'accumulators' array.array() must have the type code of 'f'"
                self._accumulators = value
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
                "The 'accumulators' field must be a set or sequence and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._accumulators = array.array('f', value)

    @builtins.property
    def currents(self):
        """Message field 'currents'."""
        return self._currents

    @currents.setter
    def currents(self, value):
        if self._check_fields:
            if isinstance(value, array.array):
                assert value.typecode == 'f', \
                    "The 'currents' array.array() must have the type code of 'f'"
                self._currents = value
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
                "The 'currents' field must be a set or sequence and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._currents = array.array('f', value)

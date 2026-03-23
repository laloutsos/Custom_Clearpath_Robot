# generated from rosidl_generator_py/resource/_idl.py.em
# with input from clearpath_platform_msgs:msg/PinoutState.idl
# generated code does not contain a copyright notice

# This is being done at the module level and not on the instance level to avoid looking
# for the same variable multiple times on each instance. This variable is not supposed to
# change during runtime so it makes sense to only look for it once.
from os import getenv

ros_python_check_fields = getenv('ROS_PYTHON_CHECK_FIELDS', default='')


# Import statements for member types

# Member 'output_periods'
import array  # noqa: E402, I100

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_PinoutState(type):
    """Metaclass of message 'PinoutState'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'CC01_USER_PWR_CTRL': 0,
        'D100_AUX_IN1': 0,
        'D100_AUX_IN2': 1,
        'D100_AUX_IN3': 2,
        'D150_AUX_IN1': 0,
        'D150_AUX_IN2': 1,
        'D150_AUX_IN3': 2,
        'CC01_AUX_IN1': 0,
        'CC01_AUX_IN2': 1,
        'CC01_AUX_IN3': 2,
        'CC01_GPI0': 3,
        'CC01_GPI1': 4,
        'CC01_GPI2': 5,
        'CC01_GPI3': 6,
        'D100_AUX_OUT1': 0,
        'D100_AUX_OUT2': 1,
        'D100_AUX_OUT3': 2,
        'D150_AUX_OUT1': 0,
        'D150_AUX_OUT2': 1,
        'D150_AUX_OUT3': 2,
        'CC01_AUX_OUT1': 0,
        'CC01_AUX_OUT2': 1,
        'CC01_AUX_OUT3': 2,
        'CC01_GPO0': 3,
        'CC01_GPO1': 4,
        'CC01_GPO2': 5,
        'CC01_GPO3': 6,
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
                'clearpath_platform_msgs.msg.PinoutState')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__pinout_state
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__pinout_state
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__pinout_state
            cls._TYPE_SUPPORT = module.type_support_msg__msg__pinout_state
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__pinout_state

            from std_msgs.msg import Header
            if Header.__class__._TYPE_SUPPORT is None:
                Header.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'CC01_USER_PWR_CTRL': cls.__constants['CC01_USER_PWR_CTRL'],
            'D100_AUX_IN1': cls.__constants['D100_AUX_IN1'],
            'D100_AUX_IN2': cls.__constants['D100_AUX_IN2'],
            'D100_AUX_IN3': cls.__constants['D100_AUX_IN3'],
            'D150_AUX_IN1': cls.__constants['D150_AUX_IN1'],
            'D150_AUX_IN2': cls.__constants['D150_AUX_IN2'],
            'D150_AUX_IN3': cls.__constants['D150_AUX_IN3'],
            'CC01_AUX_IN1': cls.__constants['CC01_AUX_IN1'],
            'CC01_AUX_IN2': cls.__constants['CC01_AUX_IN2'],
            'CC01_AUX_IN3': cls.__constants['CC01_AUX_IN3'],
            'CC01_GPI0': cls.__constants['CC01_GPI0'],
            'CC01_GPI1': cls.__constants['CC01_GPI1'],
            'CC01_GPI2': cls.__constants['CC01_GPI2'],
            'CC01_GPI3': cls.__constants['CC01_GPI3'],
            'D100_AUX_OUT1': cls.__constants['D100_AUX_OUT1'],
            'D100_AUX_OUT2': cls.__constants['D100_AUX_OUT2'],
            'D100_AUX_OUT3': cls.__constants['D100_AUX_OUT3'],
            'D150_AUX_OUT1': cls.__constants['D150_AUX_OUT1'],
            'D150_AUX_OUT2': cls.__constants['D150_AUX_OUT2'],
            'D150_AUX_OUT3': cls.__constants['D150_AUX_OUT3'],
            'CC01_AUX_OUT1': cls.__constants['CC01_AUX_OUT1'],
            'CC01_AUX_OUT2': cls.__constants['CC01_AUX_OUT2'],
            'CC01_AUX_OUT3': cls.__constants['CC01_AUX_OUT3'],
            'CC01_GPO0': cls.__constants['CC01_GPO0'],
            'CC01_GPO1': cls.__constants['CC01_GPO1'],
            'CC01_GPO2': cls.__constants['CC01_GPO2'],
            'CC01_GPO3': cls.__constants['CC01_GPO3'],
        }

    @property
    def CC01_USER_PWR_CTRL(self):
        """Message constant 'CC01_USER_PWR_CTRL'."""
        return Metaclass_PinoutState.__constants['CC01_USER_PWR_CTRL']

    @property
    def D100_AUX_IN1(self):
        """Message constant 'D100_AUX_IN1'."""
        return Metaclass_PinoutState.__constants['D100_AUX_IN1']

    @property
    def D100_AUX_IN2(self):
        """Message constant 'D100_AUX_IN2'."""
        return Metaclass_PinoutState.__constants['D100_AUX_IN2']

    @property
    def D100_AUX_IN3(self):
        """Message constant 'D100_AUX_IN3'."""
        return Metaclass_PinoutState.__constants['D100_AUX_IN3']

    @property
    def D150_AUX_IN1(self):
        """Message constant 'D150_AUX_IN1'."""
        return Metaclass_PinoutState.__constants['D150_AUX_IN1']

    @property
    def D150_AUX_IN2(self):
        """Message constant 'D150_AUX_IN2'."""
        return Metaclass_PinoutState.__constants['D150_AUX_IN2']

    @property
    def D150_AUX_IN3(self):
        """Message constant 'D150_AUX_IN3'."""
        return Metaclass_PinoutState.__constants['D150_AUX_IN3']

    @property
    def CC01_AUX_IN1(self):
        """Message constant 'CC01_AUX_IN1'."""
        return Metaclass_PinoutState.__constants['CC01_AUX_IN1']

    @property
    def CC01_AUX_IN2(self):
        """Message constant 'CC01_AUX_IN2'."""
        return Metaclass_PinoutState.__constants['CC01_AUX_IN2']

    @property
    def CC01_AUX_IN3(self):
        """Message constant 'CC01_AUX_IN3'."""
        return Metaclass_PinoutState.__constants['CC01_AUX_IN3']

    @property
    def CC01_GPI0(self):
        """Message constant 'CC01_GPI0'."""
        return Metaclass_PinoutState.__constants['CC01_GPI0']

    @property
    def CC01_GPI1(self):
        """Message constant 'CC01_GPI1'."""
        return Metaclass_PinoutState.__constants['CC01_GPI1']

    @property
    def CC01_GPI2(self):
        """Message constant 'CC01_GPI2'."""
        return Metaclass_PinoutState.__constants['CC01_GPI2']

    @property
    def CC01_GPI3(self):
        """Message constant 'CC01_GPI3'."""
        return Metaclass_PinoutState.__constants['CC01_GPI3']

    @property
    def D100_AUX_OUT1(self):
        """Message constant 'D100_AUX_OUT1'."""
        return Metaclass_PinoutState.__constants['D100_AUX_OUT1']

    @property
    def D100_AUX_OUT2(self):
        """Message constant 'D100_AUX_OUT2'."""
        return Metaclass_PinoutState.__constants['D100_AUX_OUT2']

    @property
    def D100_AUX_OUT3(self):
        """Message constant 'D100_AUX_OUT3'."""
        return Metaclass_PinoutState.__constants['D100_AUX_OUT3']

    @property
    def D150_AUX_OUT1(self):
        """Message constant 'D150_AUX_OUT1'."""
        return Metaclass_PinoutState.__constants['D150_AUX_OUT1']

    @property
    def D150_AUX_OUT2(self):
        """Message constant 'D150_AUX_OUT2'."""
        return Metaclass_PinoutState.__constants['D150_AUX_OUT2']

    @property
    def D150_AUX_OUT3(self):
        """Message constant 'D150_AUX_OUT3'."""
        return Metaclass_PinoutState.__constants['D150_AUX_OUT3']

    @property
    def CC01_AUX_OUT1(self):
        """Message constant 'CC01_AUX_OUT1'."""
        return Metaclass_PinoutState.__constants['CC01_AUX_OUT1']

    @property
    def CC01_AUX_OUT2(self):
        """Message constant 'CC01_AUX_OUT2'."""
        return Metaclass_PinoutState.__constants['CC01_AUX_OUT2']

    @property
    def CC01_AUX_OUT3(self):
        """Message constant 'CC01_AUX_OUT3'."""
        return Metaclass_PinoutState.__constants['CC01_AUX_OUT3']

    @property
    def CC01_GPO0(self):
        """Message constant 'CC01_GPO0'."""
        return Metaclass_PinoutState.__constants['CC01_GPO0']

    @property
    def CC01_GPO1(self):
        """Message constant 'CC01_GPO1'."""
        return Metaclass_PinoutState.__constants['CC01_GPO1']

    @property
    def CC01_GPO2(self):
        """Message constant 'CC01_GPO2'."""
        return Metaclass_PinoutState.__constants['CC01_GPO2']

    @property
    def CC01_GPO3(self):
        """Message constant 'CC01_GPO3'."""
        return Metaclass_PinoutState.__constants['CC01_GPO3']


class PinoutState(metaclass=Metaclass_PinoutState):
    """
    Message class 'PinoutState'.

    Constants:
      CC01_USER_PWR_CTRL
      D100_AUX_IN1
      D100_AUX_IN2
      D100_AUX_IN3
      D150_AUX_IN1
      D150_AUX_IN2
      D150_AUX_IN3
      CC01_AUX_IN1
      CC01_AUX_IN2
      CC01_AUX_IN3
      CC01_GPI0
      CC01_GPI1
      CC01_GPI2
      CC01_GPI3
      D100_AUX_OUT1
      D100_AUX_OUT2
      D100_AUX_OUT3
      D150_AUX_OUT1
      D150_AUX_OUT2
      D150_AUX_OUT3
      CC01_AUX_OUT1
      CC01_AUX_OUT2
      CC01_AUX_OUT3
      CC01_GPO0
      CC01_GPO1
      CC01_GPO2
      CC01_GPO3
    """

    __slots__ = [
        '_header',
        '_rails',
        '_inputs',
        '_outputs',
        '_output_periods',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'rails': 'sequence<boolean>',
        'inputs': 'sequence<boolean>',
        'outputs': 'sequence<boolean>',
        'output_periods': 'sequence<uint32>',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('boolean')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('boolean')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('boolean')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('uint32')),  # noqa: E501
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
        self.rails = kwargs.get('rails', [])
        self.inputs = kwargs.get('inputs', [])
        self.outputs = kwargs.get('outputs', [])
        self.output_periods = array.array('I', kwargs.get('output_periods', []))

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
        if self.rails != other.rails:
            return False
        if self.inputs != other.inputs:
            return False
        if self.outputs != other.outputs:
            return False
        if self.output_periods != other.output_periods:
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
    def rails(self):
        """Message field 'rails'."""
        return self._rails

    @rails.setter
    def rails(self, value):
        if self._check_fields:
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
                 all(isinstance(v, bool) for v in value) and
                 True), \
                "The 'rails' field must be a set or sequence and each value of type 'bool'"
        self._rails = value

    @builtins.property
    def inputs(self):
        """Message field 'inputs'."""
        return self._inputs

    @inputs.setter
    def inputs(self, value):
        if self._check_fields:
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
                 all(isinstance(v, bool) for v in value) and
                 True), \
                "The 'inputs' field must be a set or sequence and each value of type 'bool'"
        self._inputs = value

    @builtins.property
    def outputs(self):
        """Message field 'outputs'."""
        return self._outputs

    @outputs.setter
    def outputs(self, value):
        if self._check_fields:
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
                 all(isinstance(v, bool) for v in value) and
                 True), \
                "The 'outputs' field must be a set or sequence and each value of type 'bool'"
        self._outputs = value

    @builtins.property
    def output_periods(self):
        """Message field 'output_periods'."""
        return self._output_periods

    @output_periods.setter
    def output_periods(self, value):
        if self._check_fields:
            if isinstance(value, array.array):
                assert value.typecode == 'I', \
                    "The 'output_periods' array.array() must have the type code of 'I'"
                self._output_periods = value
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
                 all(isinstance(v, int) for v in value) and
                 all(val >= 0 and val < 4294967296 for val in value)), \
                "The 'output_periods' field must be a set or sequence and each value of type 'int' and each unsigned integer in [0, 4294967295]"
        self._output_periods = array.array('I', value)

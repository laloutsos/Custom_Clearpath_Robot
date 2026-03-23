# generated from rosidl_generator_py/resource/_idl.py.em
# with input from clearpath_platform_msgs:msg/Lights.idl
# generated code does not contain a copyright notice

# This is being done at the module level and not on the instance level to avoid looking
# for the same variable multiple times on each instance. This variable is not supposed to
# change during runtime so it makes sense to only look for it once.
from os import getenv

ros_python_check_fields = getenv('ROS_PYTHON_CHECK_FIELDS', default='')


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Lights(type):
    """Metaclass of message 'Lights'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'D100_LIGHTS_REAR_LEFT': 0,
        'D100_LIGHTS_FRONT_LEFT': 1,
        'D100_LIGHTS_FRONT_RIGHT': 2,
        'D100_LIGHTS_REAR_RIGHT': 3,
        'D150_LIGHTS_REAR_LEFT': 0,
        'D150_LIGHTS_FRONT_LEFT': 1,
        'D150_LIGHTS_FRONT_RIGHT': 2,
        'D150_LIGHTS_REAR_RIGHT': 3,
        'R100_LIGHTS_FRONT_PORT_UPPER': 0,
        'R100_LIGHTS_FRONT_PORT_LOWER': 1,
        'R100_LIGHTS_FRONT_STARBOARD_UPPER': 2,
        'R100_LIGHTS_FRONT_STARBOARD_LOWER': 3,
        'R100_LIGHTS_REAR_PORT_UPPER': 4,
        'R100_LIGHTS_REAR_PORT_LOWER': 5,
        'R100_LIGHTS_REAR_STARBOARD_UPPER': 6,
        'R100_LIGHTS_REAR_STARBOARD_LOWER': 7,
        'W200_LIGHTS_FRONT_LEFT': 0,
        'W200_LIGHTS_FRONT_RIGHT': 1,
        'W200_LIGHTS_REAR_LEFT': 2,
        'W200_LIGHTS_REAR_RIGHT': 3,
        'A300_LIGHTS_FRONT_RIGHT': 0,
        'A300_LIGHTS_FRONT_LEFT': 1,
        'A300_LIGHTS_REAR_LEFT': 2,
        'A300_LIGHTS_REAR_RIGHT': 3,
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
                'clearpath_platform_msgs.msg.Lights')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__lights
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__lights
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__lights
            cls._TYPE_SUPPORT = module.type_support_msg__msg__lights
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__lights

            from clearpath_platform_msgs.msg import RGB
            if RGB.__class__._TYPE_SUPPORT is None:
                RGB.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'D100_LIGHTS_REAR_LEFT': cls.__constants['D100_LIGHTS_REAR_LEFT'],
            'D100_LIGHTS_FRONT_LEFT': cls.__constants['D100_LIGHTS_FRONT_LEFT'],
            'D100_LIGHTS_FRONT_RIGHT': cls.__constants['D100_LIGHTS_FRONT_RIGHT'],
            'D100_LIGHTS_REAR_RIGHT': cls.__constants['D100_LIGHTS_REAR_RIGHT'],
            'D150_LIGHTS_REAR_LEFT': cls.__constants['D150_LIGHTS_REAR_LEFT'],
            'D150_LIGHTS_FRONT_LEFT': cls.__constants['D150_LIGHTS_FRONT_LEFT'],
            'D150_LIGHTS_FRONT_RIGHT': cls.__constants['D150_LIGHTS_FRONT_RIGHT'],
            'D150_LIGHTS_REAR_RIGHT': cls.__constants['D150_LIGHTS_REAR_RIGHT'],
            'R100_LIGHTS_FRONT_PORT_UPPER': cls.__constants['R100_LIGHTS_FRONT_PORT_UPPER'],
            'R100_LIGHTS_FRONT_PORT_LOWER': cls.__constants['R100_LIGHTS_FRONT_PORT_LOWER'],
            'R100_LIGHTS_FRONT_STARBOARD_UPPER': cls.__constants['R100_LIGHTS_FRONT_STARBOARD_UPPER'],
            'R100_LIGHTS_FRONT_STARBOARD_LOWER': cls.__constants['R100_LIGHTS_FRONT_STARBOARD_LOWER'],
            'R100_LIGHTS_REAR_PORT_UPPER': cls.__constants['R100_LIGHTS_REAR_PORT_UPPER'],
            'R100_LIGHTS_REAR_PORT_LOWER': cls.__constants['R100_LIGHTS_REAR_PORT_LOWER'],
            'R100_LIGHTS_REAR_STARBOARD_UPPER': cls.__constants['R100_LIGHTS_REAR_STARBOARD_UPPER'],
            'R100_LIGHTS_REAR_STARBOARD_LOWER': cls.__constants['R100_LIGHTS_REAR_STARBOARD_LOWER'],
            'W200_LIGHTS_FRONT_LEFT': cls.__constants['W200_LIGHTS_FRONT_LEFT'],
            'W200_LIGHTS_FRONT_RIGHT': cls.__constants['W200_LIGHTS_FRONT_RIGHT'],
            'W200_LIGHTS_REAR_LEFT': cls.__constants['W200_LIGHTS_REAR_LEFT'],
            'W200_LIGHTS_REAR_RIGHT': cls.__constants['W200_LIGHTS_REAR_RIGHT'],
            'A300_LIGHTS_FRONT_RIGHT': cls.__constants['A300_LIGHTS_FRONT_RIGHT'],
            'A300_LIGHTS_FRONT_LEFT': cls.__constants['A300_LIGHTS_FRONT_LEFT'],
            'A300_LIGHTS_REAR_LEFT': cls.__constants['A300_LIGHTS_REAR_LEFT'],
            'A300_LIGHTS_REAR_RIGHT': cls.__constants['A300_LIGHTS_REAR_RIGHT'],
        }

    @property
    def D100_LIGHTS_REAR_LEFT(self):
        """Message constant 'D100_LIGHTS_REAR_LEFT'."""
        return Metaclass_Lights.__constants['D100_LIGHTS_REAR_LEFT']

    @property
    def D100_LIGHTS_FRONT_LEFT(self):
        """Message constant 'D100_LIGHTS_FRONT_LEFT'."""
        return Metaclass_Lights.__constants['D100_LIGHTS_FRONT_LEFT']

    @property
    def D100_LIGHTS_FRONT_RIGHT(self):
        """Message constant 'D100_LIGHTS_FRONT_RIGHT'."""
        return Metaclass_Lights.__constants['D100_LIGHTS_FRONT_RIGHT']

    @property
    def D100_LIGHTS_REAR_RIGHT(self):
        """Message constant 'D100_LIGHTS_REAR_RIGHT'."""
        return Metaclass_Lights.__constants['D100_LIGHTS_REAR_RIGHT']

    @property
    def D150_LIGHTS_REAR_LEFT(self):
        """Message constant 'D150_LIGHTS_REAR_LEFT'."""
        return Metaclass_Lights.__constants['D150_LIGHTS_REAR_LEFT']

    @property
    def D150_LIGHTS_FRONT_LEFT(self):
        """Message constant 'D150_LIGHTS_FRONT_LEFT'."""
        return Metaclass_Lights.__constants['D150_LIGHTS_FRONT_LEFT']

    @property
    def D150_LIGHTS_FRONT_RIGHT(self):
        """Message constant 'D150_LIGHTS_FRONT_RIGHT'."""
        return Metaclass_Lights.__constants['D150_LIGHTS_FRONT_RIGHT']

    @property
    def D150_LIGHTS_REAR_RIGHT(self):
        """Message constant 'D150_LIGHTS_REAR_RIGHT'."""
        return Metaclass_Lights.__constants['D150_LIGHTS_REAR_RIGHT']

    @property
    def R100_LIGHTS_FRONT_PORT_UPPER(self):
        """Message constant 'R100_LIGHTS_FRONT_PORT_UPPER'."""
        return Metaclass_Lights.__constants['R100_LIGHTS_FRONT_PORT_UPPER']

    @property
    def R100_LIGHTS_FRONT_PORT_LOWER(self):
        """Message constant 'R100_LIGHTS_FRONT_PORT_LOWER'."""
        return Metaclass_Lights.__constants['R100_LIGHTS_FRONT_PORT_LOWER']

    @property
    def R100_LIGHTS_FRONT_STARBOARD_UPPER(self):
        """Message constant 'R100_LIGHTS_FRONT_STARBOARD_UPPER'."""
        return Metaclass_Lights.__constants['R100_LIGHTS_FRONT_STARBOARD_UPPER']

    @property
    def R100_LIGHTS_FRONT_STARBOARD_LOWER(self):
        """Message constant 'R100_LIGHTS_FRONT_STARBOARD_LOWER'."""
        return Metaclass_Lights.__constants['R100_LIGHTS_FRONT_STARBOARD_LOWER']

    @property
    def R100_LIGHTS_REAR_PORT_UPPER(self):
        """Message constant 'R100_LIGHTS_REAR_PORT_UPPER'."""
        return Metaclass_Lights.__constants['R100_LIGHTS_REAR_PORT_UPPER']

    @property
    def R100_LIGHTS_REAR_PORT_LOWER(self):
        """Message constant 'R100_LIGHTS_REAR_PORT_LOWER'."""
        return Metaclass_Lights.__constants['R100_LIGHTS_REAR_PORT_LOWER']

    @property
    def R100_LIGHTS_REAR_STARBOARD_UPPER(self):
        """Message constant 'R100_LIGHTS_REAR_STARBOARD_UPPER'."""
        return Metaclass_Lights.__constants['R100_LIGHTS_REAR_STARBOARD_UPPER']

    @property
    def R100_LIGHTS_REAR_STARBOARD_LOWER(self):
        """Message constant 'R100_LIGHTS_REAR_STARBOARD_LOWER'."""
        return Metaclass_Lights.__constants['R100_LIGHTS_REAR_STARBOARD_LOWER']

    @property
    def W200_LIGHTS_FRONT_LEFT(self):
        """Message constant 'W200_LIGHTS_FRONT_LEFT'."""
        return Metaclass_Lights.__constants['W200_LIGHTS_FRONT_LEFT']

    @property
    def W200_LIGHTS_FRONT_RIGHT(self):
        """Message constant 'W200_LIGHTS_FRONT_RIGHT'."""
        return Metaclass_Lights.__constants['W200_LIGHTS_FRONT_RIGHT']

    @property
    def W200_LIGHTS_REAR_LEFT(self):
        """Message constant 'W200_LIGHTS_REAR_LEFT'."""
        return Metaclass_Lights.__constants['W200_LIGHTS_REAR_LEFT']

    @property
    def W200_LIGHTS_REAR_RIGHT(self):
        """Message constant 'W200_LIGHTS_REAR_RIGHT'."""
        return Metaclass_Lights.__constants['W200_LIGHTS_REAR_RIGHT']

    @property
    def A300_LIGHTS_FRONT_RIGHT(self):
        """Message constant 'A300_LIGHTS_FRONT_RIGHT'."""
        return Metaclass_Lights.__constants['A300_LIGHTS_FRONT_RIGHT']

    @property
    def A300_LIGHTS_FRONT_LEFT(self):
        """Message constant 'A300_LIGHTS_FRONT_LEFT'."""
        return Metaclass_Lights.__constants['A300_LIGHTS_FRONT_LEFT']

    @property
    def A300_LIGHTS_REAR_LEFT(self):
        """Message constant 'A300_LIGHTS_REAR_LEFT'."""
        return Metaclass_Lights.__constants['A300_LIGHTS_REAR_LEFT']

    @property
    def A300_LIGHTS_REAR_RIGHT(self):
        """Message constant 'A300_LIGHTS_REAR_RIGHT'."""
        return Metaclass_Lights.__constants['A300_LIGHTS_REAR_RIGHT']


class Lights(metaclass=Metaclass_Lights):
    """
    Message class 'Lights'.

    Constants:
      D100_LIGHTS_REAR_LEFT
      D100_LIGHTS_FRONT_LEFT
      D100_LIGHTS_FRONT_RIGHT
      D100_LIGHTS_REAR_RIGHT
      D150_LIGHTS_REAR_LEFT
      D150_LIGHTS_FRONT_LEFT
      D150_LIGHTS_FRONT_RIGHT
      D150_LIGHTS_REAR_RIGHT
      R100_LIGHTS_FRONT_PORT_UPPER
      R100_LIGHTS_FRONT_PORT_LOWER
      R100_LIGHTS_FRONT_STARBOARD_UPPER
      R100_LIGHTS_FRONT_STARBOARD_LOWER
      R100_LIGHTS_REAR_PORT_UPPER
      R100_LIGHTS_REAR_PORT_LOWER
      R100_LIGHTS_REAR_STARBOARD_UPPER
      R100_LIGHTS_REAR_STARBOARD_LOWER
      W200_LIGHTS_FRONT_LEFT
      W200_LIGHTS_FRONT_RIGHT
      W200_LIGHTS_REAR_LEFT
      W200_LIGHTS_REAR_RIGHT
      A300_LIGHTS_FRONT_RIGHT
      A300_LIGHTS_FRONT_LEFT
      A300_LIGHTS_REAR_LEFT
      A300_LIGHTS_REAR_RIGHT
    """

    __slots__ = [
        '_lights',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'lights': 'sequence<clearpath_platform_msgs/RGB>',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['clearpath_platform_msgs', 'msg'], 'RGB')),  # noqa: E501
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
        self.lights = kwargs.get('lights', [])

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
        if self.lights != other.lights:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def lights(self):
        """Message field 'lights'."""
        return self._lights

    @lights.setter
    def lights(self, value):
        if self._check_fields:
            from clearpath_platform_msgs.msg import RGB
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
                 all(isinstance(v, RGB) for v in value) and
                 True), \
                "The 'lights' field must be a set or sequence and each value of type 'RGB'"
        self._lights = value

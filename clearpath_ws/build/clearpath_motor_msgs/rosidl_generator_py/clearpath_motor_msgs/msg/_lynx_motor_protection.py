# generated from rosidl_generator_py/resource/_idl.py.em
# with input from clearpath_motor_msgs:msg/LynxMotorProtection.idl
# generated code does not contain a copyright notice

# This is being done at the module level and not on the instance level to avoid looking
# for the same variable multiple times on each instance. This variable is not supposed to
# change during runtime so it makes sense to only look for it once.
from os import getenv

ros_python_check_fields = getenv('ROS_PYTHON_CHECK_FIELDS', default='')


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_LynxMotorProtection(type):
    """Metaclass of message 'LynxMotorProtection'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'NORMAL': 0,
        'THROTTLED': 1,
        'OVERHEATED': 2,
        'ERROR': 3,
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
                'clearpath_motor_msgs.msg.LynxMotorProtection')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__lynx_motor_protection
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__lynx_motor_protection
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__lynx_motor_protection
            cls._TYPE_SUPPORT = module.type_support_msg__msg__lynx_motor_protection
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__lynx_motor_protection

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'NORMAL': cls.__constants['NORMAL'],
            'THROTTLED': cls.__constants['THROTTLED'],
            'OVERHEATED': cls.__constants['OVERHEATED'],
            'ERROR': cls.__constants['ERROR'],
        }

    @property
    def NORMAL(self):
        """Message constant 'NORMAL'."""
        return Metaclass_LynxMotorProtection.__constants['NORMAL']

    @property
    def THROTTLED(self):
        """Message constant 'THROTTLED'."""
        return Metaclass_LynxMotorProtection.__constants['THROTTLED']

    @property
    def OVERHEATED(self):
        """Message constant 'OVERHEATED'."""
        return Metaclass_LynxMotorProtection.__constants['OVERHEATED']

    @property
    def ERROR(self):
        """Message constant 'ERROR'."""
        return Metaclass_LynxMotorProtection.__constants['ERROR']


class LynxMotorProtection(metaclass=Metaclass_LynxMotorProtection):
    """
    Message class 'LynxMotorProtection'.

    Constants:
      NORMAL
      THROTTLED
      OVERHEATED
      ERROR
    """

    __slots__ = [
        '_can_id',
        '_joint_name',
        '_state',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'can_id': 'uint8',
        'joint_name': 'string',
        'state': 'uint8',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
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
        self.state = kwargs.get('state', int())

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
        if self.state != other.state:
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
    def state(self):
        """Message field 'state'."""
        return self._state

    @state.setter
    def state(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'state' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'state' field must be an unsigned integer in [0, 255]"
        self._state = value

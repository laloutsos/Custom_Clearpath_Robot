# generated from rosidl_generator_py/resource/_idl.py.em
# with input from clearpath_platform_msgs:msg/DisplayStatus.idl
# generated code does not contain a copyright notice

# This is being done at the module level and not on the instance level to avoid looking
# for the same variable multiple times on each instance. This variable is not supposed to
# change during runtime so it makes sense to only look for it once.
from os import getenv

ros_python_check_fields = getenv('ROS_PYTHON_CHECK_FIELDS', default='')


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_DisplayStatus(type):
    """Metaclass of message 'DisplayStatus'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
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
                'clearpath_platform_msgs.msg.DisplayStatus')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__display_status
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__display_status
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__display_status
            cls._TYPE_SUPPORT = module.type_support_msg__msg__display_status
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__display_status

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class DisplayStatus(metaclass=Metaclass_DisplayStatus):
    """Message class 'DisplayStatus'."""

    __slots__ = [
        '_string1',
        '_string2',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'string1': 'string<49>',
        'string2': 'string<49>',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.BoundedString(49),  # noqa: E501
        rosidl_parser.definition.BoundedString(49),  # noqa: E501
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
        self.string1 = kwargs.get('string1', str())
        self.string2 = kwargs.get('string2', str())

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
        if self.string1 != other.string1:
            return False
        if self.string2 != other.string2:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def string1(self):
        """Message field 'string1'."""
        return self._string1

    @string1.setter
    def string1(self, value):
        if self._check_fields:
            from collections import UserString
            assert \
                (isinstance(value, (str, UserString)) and
                 len(value) <= 49), \
                "The 'string1' field must be string value " \
                'not longer than 49'
        self._string1 = value

    @builtins.property
    def string2(self):
        """Message field 'string2'."""
        return self._string2

    @string2.setter
    def string2(self, value):
        if self._check_fields:
            from collections import UserString
            assert \
                (isinstance(value, (str, UserString)) and
                 len(value) <= 49), \
                "The 'string2' field must be string value " \
                'not longer than 49'
        self._string2 = value

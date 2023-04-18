# generated from rosidl_generator_py/resource/_idl.py.em
# with input from tier4_external_api_msgs:msg/RouteSection.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'lane_ids'
# Member 'continued_lane_ids'
import array  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_RouteSection(type):
    """Metaclass of message 'RouteSection'."""

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
            module = import_type_support('tier4_external_api_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'tier4_external_api_msgs.msg.RouteSection')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__route_section
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__route_section
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__route_section
            cls._TYPE_SUPPORT = module.type_support_msg__msg__route_section
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__route_section

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class RouteSection(metaclass=Metaclass_RouteSection):
    """Message class 'RouteSection'."""

    __slots__ = [
        '_preferred_lane_id',
        '_lane_ids',
        '_continued_lane_ids',
    ]

    _fields_and_field_types = {
        'preferred_lane_id': 'int64',
        'lane_ids': 'sequence<int64>',
        'continued_lane_ids': 'sequence<int64>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('int64')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('int64')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.preferred_lane_id = kwargs.get('preferred_lane_id', int())
        self.lane_ids = array.array('q', kwargs.get('lane_ids', []))
        self.continued_lane_ids = array.array('q', kwargs.get('continued_lane_ids', []))

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
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
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.preferred_lane_id != other.preferred_lane_id:
            return False
        if self.lane_ids != other.lane_ids:
            return False
        if self.continued_lane_ids != other.continued_lane_ids:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def preferred_lane_id(self):
        """Message field 'preferred_lane_id'."""
        return self._preferred_lane_id

    @preferred_lane_id.setter
    def preferred_lane_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'preferred_lane_id' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'preferred_lane_id' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._preferred_lane_id = value

    @property
    def lane_ids(self):
        """Message field 'lane_ids'."""
        return self._lane_ids

    @lane_ids.setter
    def lane_ids(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'q', \
                "The 'lane_ids' array.array() must have the type code of 'q'"
            self._lane_ids = value
            return
        if __debug__:
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
                 all(val >= -9223372036854775808 and val < 9223372036854775808 for val in value)), \
                "The 'lane_ids' field must be a set or sequence and each value of type 'int' and each integer in [-9223372036854775808, 9223372036854775807]"
        self._lane_ids = array.array('q', value)

    @property
    def continued_lane_ids(self):
        """Message field 'continued_lane_ids'."""
        return self._continued_lane_ids

    @continued_lane_ids.setter
    def continued_lane_ids(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'q', \
                "The 'continued_lane_ids' array.array() must have the type code of 'q'"
            self._continued_lane_ids = value
            return
        if __debug__:
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
                 all(val >= -9223372036854775808 and val < 9223372036854775808 for val in value)), \
                "The 'continued_lane_ids' field must be a set or sequence and each value of type 'int' and each integer in [-9223372036854775808, 9223372036854775807]"
        self._continued_lane_ids = array.array('q', value)

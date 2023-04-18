# generated from rosidl_generator_py/resource/_idl.py.em
# with input from tier4_planning_msgs:msg/VelocityLimit.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_VelocityLimit(type):
    """Metaclass of message 'VelocityLimit'."""

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
            module = import_type_support('tier4_planning_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'tier4_planning_msgs.msg.VelocityLimit')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__velocity_limit
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__velocity_limit
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__velocity_limit
            cls._TYPE_SUPPORT = module.type_support_msg__msg__velocity_limit
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__velocity_limit

            from builtin_interfaces.msg import Time
            if Time.__class__._TYPE_SUPPORT is None:
                Time.__class__.__import_type_support__()

            from tier4_planning_msgs.msg import VelocityLimitConstraints
            if VelocityLimitConstraints.__class__._TYPE_SUPPORT is None:
                VelocityLimitConstraints.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'USE_CONSTRAINTS__DEFAULT': False,
        }

    @property
    def USE_CONSTRAINTS__DEFAULT(cls):
        """Return default value for message field 'use_constraints'."""
        return False


class VelocityLimit(metaclass=Metaclass_VelocityLimit):
    """Message class 'VelocityLimit'."""

    __slots__ = [
        '_stamp',
        '_max_velocity',
        '_use_constraints',
        '_constraints',
        '_sender',
    ]

    _fields_and_field_types = {
        'stamp': 'builtin_interfaces/Time',
        'max_velocity': 'float',
        'use_constraints': 'boolean',
        'constraints': 'tier4_planning_msgs/VelocityLimitConstraints',
        'sender': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['builtin_interfaces', 'msg'], 'Time'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['tier4_planning_msgs', 'msg'], 'VelocityLimitConstraints'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from builtin_interfaces.msg import Time
        self.stamp = kwargs.get('stamp', Time())
        self.max_velocity = kwargs.get('max_velocity', float())
        self.use_constraints = kwargs.get(
            'use_constraints', VelocityLimit.USE_CONSTRAINTS__DEFAULT)
        from tier4_planning_msgs.msg import VelocityLimitConstraints
        self.constraints = kwargs.get('constraints', VelocityLimitConstraints())
        self.sender = kwargs.get('sender', str())

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
        if self.stamp != other.stamp:
            return False
        if self.max_velocity != other.max_velocity:
            return False
        if self.use_constraints != other.use_constraints:
            return False
        if self.constraints != other.constraints:
            return False
        if self.sender != other.sender:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def stamp(self):
        """Message field 'stamp'."""
        return self._stamp

    @stamp.setter
    def stamp(self, value):
        if __debug__:
            from builtin_interfaces.msg import Time
            assert \
                isinstance(value, Time), \
                "The 'stamp' field must be a sub message of type 'Time'"
        self._stamp = value

    @property
    def max_velocity(self):
        """Message field 'max_velocity'."""
        return self._max_velocity

    @max_velocity.setter
    def max_velocity(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'max_velocity' field must be of type 'float'"
        self._max_velocity = value

    @property
    def use_constraints(self):
        """Message field 'use_constraints'."""
        return self._use_constraints

    @use_constraints.setter
    def use_constraints(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'use_constraints' field must be of type 'bool'"
        self._use_constraints = value

    @property
    def constraints(self):
        """Message field 'constraints'."""
        return self._constraints

    @constraints.setter
    def constraints(self, value):
        if __debug__:
            from tier4_planning_msgs.msg import VelocityLimitConstraints
            assert \
                isinstance(value, VelocityLimitConstraints), \
                "The 'constraints' field must be a sub message of type 'VelocityLimitConstraints'"
        self._constraints = value

    @property
    def sender(self):
        """Message field 'sender'."""
        return self._sender

    @sender.setter
    def sender(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'sender' field must be of type 'str'"
        self._sender = value

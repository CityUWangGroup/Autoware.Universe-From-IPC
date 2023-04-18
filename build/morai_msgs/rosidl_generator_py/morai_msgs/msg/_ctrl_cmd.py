# generated from rosidl_generator_py/resource/_idl.py.em
# with input from morai_msgs:msg/CtrlCmd.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_CtrlCmd(type):
    """Metaclass of message 'CtrlCmd'."""

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
            module = import_type_support('morai_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'morai_msgs.msg.CtrlCmd')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__ctrl_cmd
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__ctrl_cmd
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__ctrl_cmd
            cls._TYPE_SUPPORT = module.type_support_msg__msg__ctrl_cmd
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__ctrl_cmd

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class CtrlCmd(metaclass=Metaclass_CtrlCmd):
    """Message class 'CtrlCmd'."""

    __slots__ = [
        '_longl_cmd_type',
        '_accel',
        '_brake',
        '_steering',
        '_velocity',
        '_acceleration',
    ]

    _fields_and_field_types = {
        'longl_cmd_type': 'int32',
        'accel': 'double',
        'brake': 'double',
        'steering': 'double',
        'velocity': 'double',
        'acceleration': 'double',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.longl_cmd_type = kwargs.get('longl_cmd_type', int())
        self.accel = kwargs.get('accel', float())
        self.brake = kwargs.get('brake', float())
        self.steering = kwargs.get('steering', float())
        self.velocity = kwargs.get('velocity', float())
        self.acceleration = kwargs.get('acceleration', float())

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
        if self.longl_cmd_type != other.longl_cmd_type:
            return False
        if self.accel != other.accel:
            return False
        if self.brake != other.brake:
            return False
        if self.steering != other.steering:
            return False
        if self.velocity != other.velocity:
            return False
        if self.acceleration != other.acceleration:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def longl_cmd_type(self):
        """Message field 'longl_cmd_type'."""
        return self._longl_cmd_type

    @longl_cmd_type.setter
    def longl_cmd_type(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'longl_cmd_type' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'longl_cmd_type' field must be an integer in [-2147483648, 2147483647]"
        self._longl_cmd_type = value

    @property
    def accel(self):
        """Message field 'accel'."""
        return self._accel

    @accel.setter
    def accel(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'accel' field must be of type 'float'"
        self._accel = value

    @property
    def brake(self):
        """Message field 'brake'."""
        return self._brake

    @brake.setter
    def brake(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'brake' field must be of type 'float'"
        self._brake = value

    @property
    def steering(self):
        """Message field 'steering'."""
        return self._steering

    @steering.setter
    def steering(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'steering' field must be of type 'float'"
        self._steering = value

    @property
    def velocity(self):
        """Message field 'velocity'."""
        return self._velocity

    @velocity.setter
    def velocity(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'velocity' field must be of type 'float'"
        self._velocity = value

    @property
    def acceleration(self):
        """Message field 'acceleration'."""
        return self._acceleration

    @acceleration.setter
    def acceleration(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'acceleration' field must be of type 'float'"
        self._acceleration = value

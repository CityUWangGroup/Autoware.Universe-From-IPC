# generated from rosidl_generator_py/resource/_idl.py.em
# with input from morai_msgs:msg/EventInfo.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_EventInfo(type):
    """Metaclass of message 'EventInfo'."""

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
                'morai_msgs.msg.EventInfo')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__event_info
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__event_info
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__event_info
            cls._TYPE_SUPPORT = module.type_support_msg__msg__event_info
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__event_info

            from morai_msgs.msg import Lamps
            if Lamps.__class__._TYPE_SUPPORT is None:
                Lamps.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class EventInfo(metaclass=Metaclass_EventInfo):
    """Message class 'EventInfo'."""

    __slots__ = [
        '_option',
        '_ctrl_mode',
        '_gear',
        '_lamps',
        '_set_pause',
    ]

    _fields_and_field_types = {
        'option': 'int8',
        'ctrl_mode': 'int32',
        'gear': 'int32',
        'lamps': 'morai_msgs/Lamps',
        'set_pause': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['morai_msgs', 'msg'], 'Lamps'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.option = kwargs.get('option', int())
        self.ctrl_mode = kwargs.get('ctrl_mode', int())
        self.gear = kwargs.get('gear', int())
        from morai_msgs.msg import Lamps
        self.lamps = kwargs.get('lamps', Lamps())
        self.set_pause = kwargs.get('set_pause', bool())

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
        if self.option != other.option:
            return False
        if self.ctrl_mode != other.ctrl_mode:
            return False
        if self.gear != other.gear:
            return False
        if self.lamps != other.lamps:
            return False
        if self.set_pause != other.set_pause:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def option(self):
        """Message field 'option'."""
        return self._option

    @option.setter
    def option(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'option' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'option' field must be an integer in [-128, 127]"
        self._option = value

    @property
    def ctrl_mode(self):
        """Message field 'ctrl_mode'."""
        return self._ctrl_mode

    @ctrl_mode.setter
    def ctrl_mode(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'ctrl_mode' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'ctrl_mode' field must be an integer in [-2147483648, 2147483647]"
        self._ctrl_mode = value

    @property
    def gear(self):
        """Message field 'gear'."""
        return self._gear

    @gear.setter
    def gear(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'gear' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'gear' field must be an integer in [-2147483648, 2147483647]"
        self._gear = value

    @property
    def lamps(self):
        """Message field 'lamps'."""
        return self._lamps

    @lamps.setter
    def lamps(self, value):
        if __debug__:
            from morai_msgs.msg import Lamps
            assert \
                isinstance(value, Lamps), \
                "The 'lamps' field must be a sub message of type 'Lamps'"
        self._lamps = value

    @property
    def set_pause(self):
        """Message field 'set_pause'."""
        return self._set_pause

    @set_pause.setter
    def set_pause(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'set_pause' field must be of type 'bool'"
        self._set_pause = value

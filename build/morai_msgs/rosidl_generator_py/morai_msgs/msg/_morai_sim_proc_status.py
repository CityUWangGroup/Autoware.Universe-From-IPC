# generated from rosidl_generator_py/resource/_idl.py.em
# with input from morai_msgs:msg/MoraiSimProcStatus.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_MoraiSimProcStatus(type):
    """Metaclass of message 'MoraiSimProcStatus'."""

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
                'morai_msgs.msg.MoraiSimProcStatus')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__morai_sim_proc_status
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__morai_sim_proc_status
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__morai_sim_proc_status
            cls._TYPE_SUPPORT = module.type_support_msg__msg__morai_sim_proc_status
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__morai_sim_proc_status

            from builtin_interfaces.msg import Time
            if Time.__class__._TYPE_SUPPORT is None:
                Time.__class__.__import_type_support__()

            from std_msgs.msg import Header
            if Header.__class__._TYPE_SUPPORT is None:
                Header.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class MoraiSimProcStatus(metaclass=Metaclass_MoraiSimProcStatus):
    """Message class 'MoraiSimProcStatus'."""

    __slots__ = [
        '_header',
        '_latest_command_time',
        '_command_result',
        '_current_mode',
        '_current_status',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'latest_command_time': 'builtin_interfaces/Time',
        'command_result': 'uint8',
        'current_mode': 'uint8',
        'current_status': 'uint8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['builtin_interfaces', 'msg'], 'Time'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        from builtin_interfaces.msg import Time
        self.latest_command_time = kwargs.get('latest_command_time', Time())
        self.command_result = kwargs.get('command_result', int())
        self.current_mode = kwargs.get('current_mode', int())
        self.current_status = kwargs.get('current_status', int())

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
        if self.header != other.header:
            return False
        if self.latest_command_time != other.latest_command_time:
            return False
        if self.command_result != other.command_result:
            return False
        if self.current_mode != other.current_mode:
            return False
        if self.current_status != other.current_status:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def header(self):
        """Message field 'header'."""
        return self._header

    @header.setter
    def header(self, value):
        if __debug__:
            from std_msgs.msg import Header
            assert \
                isinstance(value, Header), \
                "The 'header' field must be a sub message of type 'Header'"
        self._header = value

    @property
    def latest_command_time(self):
        """Message field 'latest_command_time'."""
        return self._latest_command_time

    @latest_command_time.setter
    def latest_command_time(self, value):
        if __debug__:
            from builtin_interfaces.msg import Time
            assert \
                isinstance(value, Time), \
                "The 'latest_command_time' field must be a sub message of type 'Time'"
        self._latest_command_time = value

    @property
    def command_result(self):
        """Message field 'command_result'."""
        return self._command_result

    @command_result.setter
    def command_result(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'command_result' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'command_result' field must be an unsigned integer in [0, 255]"
        self._command_result = value

    @property
    def current_mode(self):
        """Message field 'current_mode'."""
        return self._current_mode

    @current_mode.setter
    def current_mode(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'current_mode' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'current_mode' field must be an unsigned integer in [0, 255]"
        self._current_mode = value

    @property
    def current_status(self):
        """Message field 'current_status'."""
        return self._current_status

    @current_status.setter
    def current_status(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'current_status' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'current_status' field must be an unsigned integer in [0, 255]"
        self._current_status = value

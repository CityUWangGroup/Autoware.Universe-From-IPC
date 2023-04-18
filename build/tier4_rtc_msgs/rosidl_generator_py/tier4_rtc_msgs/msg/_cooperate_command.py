# generated from rosidl_generator_py/resource/_idl.py.em
# with input from tier4_rtc_msgs:msg/CooperateCommand.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_CooperateCommand(type):
    """Metaclass of message 'CooperateCommand'."""

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
            module = import_type_support('tier4_rtc_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'tier4_rtc_msgs.msg.CooperateCommand')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__cooperate_command
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__cooperate_command
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__cooperate_command
            cls._TYPE_SUPPORT = module.type_support_msg__msg__cooperate_command
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__cooperate_command

            from tier4_rtc_msgs.msg import Command
            if Command.__class__._TYPE_SUPPORT is None:
                Command.__class__.__import_type_support__()

            from tier4_rtc_msgs.msg import Module
            if Module.__class__._TYPE_SUPPORT is None:
                Module.__class__.__import_type_support__()

            from unique_identifier_msgs.msg import UUID
            if UUID.__class__._TYPE_SUPPORT is None:
                UUID.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class CooperateCommand(metaclass=Metaclass_CooperateCommand):
    """Message class 'CooperateCommand'."""

    __slots__ = [
        '_uuid',
        '_module',
        '_command',
    ]

    _fields_and_field_types = {
        'uuid': 'unique_identifier_msgs/UUID',
        'module': 'tier4_rtc_msgs/Module',
        'command': 'tier4_rtc_msgs/Command',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['unique_identifier_msgs', 'msg'], 'UUID'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['tier4_rtc_msgs', 'msg'], 'Module'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['tier4_rtc_msgs', 'msg'], 'Command'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from unique_identifier_msgs.msg import UUID
        self.uuid = kwargs.get('uuid', UUID())
        from tier4_rtc_msgs.msg import Module
        self.module = kwargs.get('module', Module())
        from tier4_rtc_msgs.msg import Command
        self.command = kwargs.get('command', Command())

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
        if self.uuid != other.uuid:
            return False
        if self.module != other.module:
            return False
        if self.command != other.command:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def uuid(self):
        """Message field 'uuid'."""
        return self._uuid

    @uuid.setter
    def uuid(self, value):
        if __debug__:
            from unique_identifier_msgs.msg import UUID
            assert \
                isinstance(value, UUID), \
                "The 'uuid' field must be a sub message of type 'UUID'"
        self._uuid = value

    @property
    def module(self):
        """Message field 'module'."""
        return self._module

    @module.setter
    def module(self, value):
        if __debug__:
            from tier4_rtc_msgs.msg import Module
            assert \
                isinstance(value, Module), \
                "The 'module' field must be a sub message of type 'Module'"
        self._module = value

    @property
    def command(self):
        """Message field 'command'."""
        return self._command

    @command.setter
    def command(self, value):
        if __debug__:
            from tier4_rtc_msgs.msg import Command
            assert \
                isinstance(value, Command), \
                "The 'command' field must be a sub message of type 'Command'"
        self._command = value

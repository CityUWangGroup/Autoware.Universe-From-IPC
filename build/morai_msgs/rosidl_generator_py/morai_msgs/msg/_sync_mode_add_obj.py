# generated from rosidl_generator_py/resource/_idl.py.em
# with input from morai_msgs:msg/SyncModeAddObj.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SyncModeAddObj(type):
    """Metaclass of message 'SyncModeAddObj'."""

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
                'morai_msgs.msg.SyncModeAddObj')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__sync_mode_add_obj
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__sync_mode_add_obj
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__sync_mode_add_obj
            cls._TYPE_SUPPORT = module.type_support_msg__msg__sync_mode_add_obj
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__sync_mode_add_obj

            from geometry_msgs.msg import Vector3
            if Vector3.__class__._TYPE_SUPPORT is None:
                Vector3.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SyncModeAddObj(metaclass=Metaclass_SyncModeAddObj):
    """Message class 'SyncModeAddObj'."""

    __slots__ = [
        '_name',
        '_position',
        '_heading',
        '_frame',
    ]

    _fields_and_field_types = {
        'name': 'string',
        'position': 'geometry_msgs/Vector3',
        'heading': 'double',
        'frame': 'uint64',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Vector3'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.name = kwargs.get('name', str())
        from geometry_msgs.msg import Vector3
        self.position = kwargs.get('position', Vector3())
        self.heading = kwargs.get('heading', float())
        self.frame = kwargs.get('frame', int())

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
        if self.name != other.name:
            return False
        if self.position != other.position:
            return False
        if self.heading != other.heading:
            return False
        if self.frame != other.frame:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def name(self):
        """Message field 'name'."""
        return self._name

    @name.setter
    def name(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'name' field must be of type 'str'"
        self._name = value

    @property
    def position(self):
        """Message field 'position'."""
        return self._position

    @position.setter
    def position(self, value):
        if __debug__:
            from geometry_msgs.msg import Vector3
            assert \
                isinstance(value, Vector3), \
                "The 'position' field must be a sub message of type 'Vector3'"
        self._position = value

    @property
    def heading(self):
        """Message field 'heading'."""
        return self._heading

    @heading.setter
    def heading(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'heading' field must be of type 'float'"
        self._heading = value

    @property
    def frame(self):
        """Message field 'frame'."""
        return self._frame

    @frame.setter
    def frame(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'frame' field must be of type 'int'"
            assert value >= 0 and value < 18446744073709551616, \
                "The 'frame' field must be an unsigned integer in [0, 18446744073709551615]"
        self._frame = value

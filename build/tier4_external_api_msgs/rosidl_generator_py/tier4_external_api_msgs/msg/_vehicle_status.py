# generated from rosidl_generator_py/resource/_idl.py.em
# with input from tier4_external_api_msgs:msg/VehicleStatus.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_VehicleStatus(type):
    """Metaclass of message 'VehicleStatus'."""

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
                'tier4_external_api_msgs.msg.VehicleStatus')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__vehicle_status
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__vehicle_status
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__vehicle_status
            cls._TYPE_SUPPORT = module.type_support_msg__msg__vehicle_status
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__vehicle_status

            from geometry_msgs.msg import Twist
            if Twist.__class__._TYPE_SUPPORT is None:
                Twist.__class__.__import_type_support__()

            from tier4_external_api_msgs.msg import GearShift
            if GearShift.__class__._TYPE_SUPPORT is None:
                GearShift.__class__.__import_type_support__()

            from tier4_external_api_msgs.msg import Steering
            if Steering.__class__._TYPE_SUPPORT is None:
                Steering.__class__.__import_type_support__()

            from tier4_external_api_msgs.msg import TurnSignal
            if TurnSignal.__class__._TYPE_SUPPORT is None:
                TurnSignal.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class VehicleStatus(metaclass=Metaclass_VehicleStatus):
    """Message class 'VehicleStatus'."""

    __slots__ = [
        '_twist',
        '_steering',
        '_turn_signal',
        '_gear_shift',
    ]

    _fields_and_field_types = {
        'twist': 'geometry_msgs/Twist',
        'steering': 'tier4_external_api_msgs/Steering',
        'turn_signal': 'tier4_external_api_msgs/TurnSignal',
        'gear_shift': 'tier4_external_api_msgs/GearShift',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Twist'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['tier4_external_api_msgs', 'msg'], 'Steering'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['tier4_external_api_msgs', 'msg'], 'TurnSignal'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['tier4_external_api_msgs', 'msg'], 'GearShift'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from geometry_msgs.msg import Twist
        self.twist = kwargs.get('twist', Twist())
        from tier4_external_api_msgs.msg import Steering
        self.steering = kwargs.get('steering', Steering())
        from tier4_external_api_msgs.msg import TurnSignal
        self.turn_signal = kwargs.get('turn_signal', TurnSignal())
        from tier4_external_api_msgs.msg import GearShift
        self.gear_shift = kwargs.get('gear_shift', GearShift())

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
        if self.twist != other.twist:
            return False
        if self.steering != other.steering:
            return False
        if self.turn_signal != other.turn_signal:
            return False
        if self.gear_shift != other.gear_shift:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def twist(self):
        """Message field 'twist'."""
        return self._twist

    @twist.setter
    def twist(self, value):
        if __debug__:
            from geometry_msgs.msg import Twist
            assert \
                isinstance(value, Twist), \
                "The 'twist' field must be a sub message of type 'Twist'"
        self._twist = value

    @property
    def steering(self):
        """Message field 'steering'."""
        return self._steering

    @steering.setter
    def steering(self, value):
        if __debug__:
            from tier4_external_api_msgs.msg import Steering
            assert \
                isinstance(value, Steering), \
                "The 'steering' field must be a sub message of type 'Steering'"
        self._steering = value

    @property
    def turn_signal(self):
        """Message field 'turn_signal'."""
        return self._turn_signal

    @turn_signal.setter
    def turn_signal(self, value):
        if __debug__:
            from tier4_external_api_msgs.msg import TurnSignal
            assert \
                isinstance(value, TurnSignal), \
                "The 'turn_signal' field must be a sub message of type 'TurnSignal'"
        self._turn_signal = value

    @property
    def gear_shift(self):
        """Message field 'gear_shift'."""
        return self._gear_shift

    @gear_shift.setter
    def gear_shift(self, value):
        if __debug__:
            from tier4_external_api_msgs.msg import GearShift
            assert \
                isinstance(value, GearShift), \
                "The 'gear_shift' field must be a sub message of type 'GearShift'"
        self._gear_shift = value

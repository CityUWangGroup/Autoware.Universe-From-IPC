# generated from rosidl_generator_py/resource/_idl.py.em
# with input from static_centerline_optimizer:srv/PlanRoute.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_PlanRoute_Request(type):
    """Metaclass of message 'PlanRoute_Request'."""

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
            module = import_type_support('static_centerline_optimizer')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'static_centerline_optimizer.srv.PlanRoute_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__plan_route__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__plan_route__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__plan_route__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__plan_route__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__plan_route__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class PlanRoute_Request(metaclass=Metaclass_PlanRoute_Request):
    """Message class 'PlanRoute_Request'."""

    __slots__ = [
        '_start_lane_id',
        '_end_lane_id',
    ]

    _fields_and_field_types = {
        'start_lane_id': 'uint32',
        'end_lane_id': 'uint32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.start_lane_id = kwargs.get('start_lane_id', int())
        self.end_lane_id = kwargs.get('end_lane_id', int())

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
        if self.start_lane_id != other.start_lane_id:
            return False
        if self.end_lane_id != other.end_lane_id:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def start_lane_id(self):
        """Message field 'start_lane_id'."""
        return self._start_lane_id

    @start_lane_id.setter
    def start_lane_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'start_lane_id' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'start_lane_id' field must be an unsigned integer in [0, 4294967295]"
        self._start_lane_id = value

    @property
    def end_lane_id(self):
        """Message field 'end_lane_id'."""
        return self._end_lane_id

    @end_lane_id.setter
    def end_lane_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'end_lane_id' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'end_lane_id' field must be an unsigned integer in [0, 4294967295]"
        self._end_lane_id = value


# Import statements for member types

# Member 'lane_ids'
import array  # noqa: E402, I100

# already imported above
# import rosidl_parser.definition


class Metaclass_PlanRoute_Response(type):
    """Metaclass of message 'PlanRoute_Response'."""

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
            module = import_type_support('static_centerline_optimizer')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'static_centerline_optimizer.srv.PlanRoute_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__plan_route__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__plan_route__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__plan_route__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__plan_route__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__plan_route__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class PlanRoute_Response(metaclass=Metaclass_PlanRoute_Response):
    """Message class 'PlanRoute_Response'."""

    __slots__ = [
        '_lane_ids',
        '_message',
    ]

    _fields_and_field_types = {
        'lane_ids': 'sequence<uint32>',
        'message': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('uint32')),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.lane_ids = array.array('I', kwargs.get('lane_ids', []))
        self.message = kwargs.get('message', str())

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
        if self.lane_ids != other.lane_ids:
            return False
        if self.message != other.message:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def lane_ids(self):
        """Message field 'lane_ids'."""
        return self._lane_ids

    @lane_ids.setter
    def lane_ids(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'I', \
                "The 'lane_ids' array.array() must have the type code of 'I'"
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
                 all(val >= 0 and val < 4294967296 for val in value)), \
                "The 'lane_ids' field must be a set or sequence and each value of type 'int' and each unsigned integer in [0, 4294967295]"
        self._lane_ids = array.array('I', value)

    @property
    def message(self):
        """Message field 'message'."""
        return self._message

    @message.setter
    def message(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'message' field must be of type 'str'"
        self._message = value


class Metaclass_PlanRoute(type):
    """Metaclass of service 'PlanRoute'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('static_centerline_optimizer')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'static_centerline_optimizer.srv.PlanRoute')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__plan_route

            from static_centerline_optimizer.srv import _plan_route
            if _plan_route.Metaclass_PlanRoute_Request._TYPE_SUPPORT is None:
                _plan_route.Metaclass_PlanRoute_Request.__import_type_support__()
            if _plan_route.Metaclass_PlanRoute_Response._TYPE_SUPPORT is None:
                _plan_route.Metaclass_PlanRoute_Response.__import_type_support__()


class PlanRoute(metaclass=Metaclass_PlanRoute):
    from static_centerline_optimizer.srv._plan_route import PlanRoute_Request as Request
    from static_centerline_optimizer.srv._plan_route import PlanRoute_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')

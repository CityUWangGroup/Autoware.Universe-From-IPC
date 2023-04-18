# generated from rosidl_generator_py/resource/_idl.py.em
# with input from morai_msgs:srv/MoraiEventCmdSrv.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_MoraiEventCmdSrv_Request(type):
    """Metaclass of message 'MoraiEventCmdSrv_Request'."""

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
                'morai_msgs.srv.MoraiEventCmdSrv_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__morai_event_cmd_srv__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__morai_event_cmd_srv__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__morai_event_cmd_srv__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__morai_event_cmd_srv__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__morai_event_cmd_srv__request

            from morai_msgs.msg import EventInfo
            if EventInfo.__class__._TYPE_SUPPORT is None:
                EventInfo.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class MoraiEventCmdSrv_Request(metaclass=Metaclass_MoraiEventCmdSrv_Request):
    """Message class 'MoraiEventCmdSrv_Request'."""

    __slots__ = [
        '_request',
    ]

    _fields_and_field_types = {
        'request': 'morai_msgs/EventInfo',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['morai_msgs', 'msg'], 'EventInfo'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from morai_msgs.msg import EventInfo
        self.request = kwargs.get('request', EventInfo())

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
        if self.request != other.request:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def request(self):
        """Message field 'request'."""
        return self._request

    @request.setter
    def request(self, value):
        if __debug__:
            from morai_msgs.msg import EventInfo
            assert \
                isinstance(value, EventInfo), \
                "The 'request' field must be a sub message of type 'EventInfo'"
        self._request = value


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_MoraiEventCmdSrv_Response(type):
    """Metaclass of message 'MoraiEventCmdSrv_Response'."""

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
                'morai_msgs.srv.MoraiEventCmdSrv_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__morai_event_cmd_srv__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__morai_event_cmd_srv__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__morai_event_cmd_srv__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__morai_event_cmd_srv__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__morai_event_cmd_srv__response

            from morai_msgs.msg import EventInfo
            if EventInfo.__class__._TYPE_SUPPORT is None:
                EventInfo.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class MoraiEventCmdSrv_Response(metaclass=Metaclass_MoraiEventCmdSrv_Response):
    """Message class 'MoraiEventCmdSrv_Response'."""

    __slots__ = [
        '_response',
    ]

    _fields_and_field_types = {
        'response': 'morai_msgs/EventInfo',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['morai_msgs', 'msg'], 'EventInfo'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from morai_msgs.msg import EventInfo
        self.response = kwargs.get('response', EventInfo())

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
        if self.response != other.response:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def response(self):
        """Message field 'response'."""
        return self._response

    @response.setter
    def response(self, value):
        if __debug__:
            from morai_msgs.msg import EventInfo
            assert \
                isinstance(value, EventInfo), \
                "The 'response' field must be a sub message of type 'EventInfo'"
        self._response = value


class Metaclass_MoraiEventCmdSrv(type):
    """Metaclass of service 'MoraiEventCmdSrv'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('morai_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'morai_msgs.srv.MoraiEventCmdSrv')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__morai_event_cmd_srv

            from morai_msgs.srv import _morai_event_cmd_srv
            if _morai_event_cmd_srv.Metaclass_MoraiEventCmdSrv_Request._TYPE_SUPPORT is None:
                _morai_event_cmd_srv.Metaclass_MoraiEventCmdSrv_Request.__import_type_support__()
            if _morai_event_cmd_srv.Metaclass_MoraiEventCmdSrv_Response._TYPE_SUPPORT is None:
                _morai_event_cmd_srv.Metaclass_MoraiEventCmdSrv_Response.__import_type_support__()


class MoraiEventCmdSrv(metaclass=Metaclass_MoraiEventCmdSrv):
    from morai_msgs.srv._morai_event_cmd_srv import MoraiEventCmdSrv_Request as Request
    from morai_msgs.srv._morai_event_cmd_srv import MoraiEventCmdSrv_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')

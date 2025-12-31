# generated from rosidl_generator_py/resource/_idl.py.em
# with input from interface_package:srv/SetTeamNetwork.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SetTeamNetwork_Request(type):
    """Metaclass of message 'SetTeamNetwork_Request'."""

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
            module = import_type_support('interface_package')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'interface_package.srv.SetTeamNetwork_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__set_team_network__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__set_team_network__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__set_team_network__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__set_team_network__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__set_team_network__request

            from interface_package.msg import TeamColor
            if TeamColor.__class__._TYPE_SUPPORT is None:
                TeamColor.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SetTeamNetwork_Request(metaclass=Metaclass_SetTeamNetwork_Request):
    """Message class 'SetTeamNetwork_Request'."""

    __slots__ = [
        '_team',
        '_host',
        '_port',
    ]

    _fields_and_field_types = {
        'team': 'interface_package/TeamColor',
        'host': 'string',
        'port': 'uint16',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['interface_package', 'msg'], 'TeamColor'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from interface_package.msg import TeamColor
        self.team = kwargs.get('team', TeamColor())
        self.host = kwargs.get('host', str())
        self.port = kwargs.get('port', int())

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
        if self.team != other.team:
            return False
        if self.host != other.host:
            return False
        if self.port != other.port:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def team(self):
        """Message field 'team'."""
        return self._team

    @team.setter
    def team(self, value):
        if __debug__:
            from interface_package.msg import TeamColor
            assert \
                isinstance(value, TeamColor), \
                "The 'team' field must be a sub message of type 'TeamColor'"
        self._team = value

    @builtins.property
    def host(self):
        """Message field 'host'."""
        return self._host

    @host.setter
    def host(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'host' field must be of type 'str'"
        self._host = value

    @builtins.property
    def port(self):
        """Message field 'port'."""
        return self._port

    @port.setter
    def port(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'port' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'port' field must be an unsigned integer in [0, 65535]"
        self._port = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_SetTeamNetwork_Response(type):
    """Metaclass of message 'SetTeamNetwork_Response'."""

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
            module = import_type_support('interface_package')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'interface_package.srv.SetTeamNetwork_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__set_team_network__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__set_team_network__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__set_team_network__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__set_team_network__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__set_team_network__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SetTeamNetwork_Response(metaclass=Metaclass_SetTeamNetwork_Response):
    """Message class 'SetTeamNetwork_Response'."""

    __slots__ = [
        '_ok',
        '_message',
    ]

    _fields_and_field_types = {
        'ok': 'boolean',
        'message': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.ok = kwargs.get('ok', bool())
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
        if self.ok != other.ok:
            return False
        if self.message != other.message:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def ok(self):
        """Message field 'ok'."""
        return self._ok

    @ok.setter
    def ok(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'ok' field must be of type 'bool'"
        self._ok = value

    @builtins.property
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


class Metaclass_SetTeamNetwork(type):
    """Metaclass of service 'SetTeamNetwork'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('interface_package')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'interface_package.srv.SetTeamNetwork')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__set_team_network

            from interface_package.srv import _set_team_network
            if _set_team_network.Metaclass_SetTeamNetwork_Request._TYPE_SUPPORT is None:
                _set_team_network.Metaclass_SetTeamNetwork_Request.__import_type_support__()
            if _set_team_network.Metaclass_SetTeamNetwork_Response._TYPE_SUPPORT is None:
                _set_team_network.Metaclass_SetTeamNetwork_Response.__import_type_support__()


class SetTeamNetwork(metaclass=Metaclass_SetTeamNetwork):
    from interface_package.srv._set_team_network import SetTeamNetwork_Request as Request
    from interface_package.srv._set_team_network import SetTeamNetwork_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')

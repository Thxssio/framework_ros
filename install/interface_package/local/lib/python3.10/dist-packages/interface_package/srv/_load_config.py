# generated from rosidl_generator_py/resource/_idl.py.em
# with input from interface_package:srv/LoadConfig.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_LoadConfig_Request(type):
    """Metaclass of message 'LoadConfig_Request'."""

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
                'interface_package.srv.LoadConfig_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__load_config__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__load_config__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__load_config__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__load_config__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__load_config__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class LoadConfig_Request(metaclass=Metaclass_LoadConfig_Request):
    """Message class 'LoadConfig_Request'."""

    __slots__ = [
        '_kind',
        '_path',
    ]

    _fields_and_field_types = {
        'kind': 'uint8',
        'path': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.kind = kwargs.get('kind', int())
        self.path = kwargs.get('path', str())

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
        if self.kind != other.kind:
            return False
        if self.path != other.path:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def kind(self):
        """Message field 'kind'."""
        return self._kind

    @kind.setter
    def kind(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'kind' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'kind' field must be an unsigned integer in [0, 255]"
        self._kind = value

    @builtins.property
    def path(self):
        """Message field 'path'."""
        return self._path

    @path.setter
    def path(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'path' field must be of type 'str'"
        self._path = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_LoadConfig_Response(type):
    """Metaclass of message 'LoadConfig_Response'."""

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
                'interface_package.srv.LoadConfig_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__load_config__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__load_config__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__load_config__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__load_config__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__load_config__response

            from interface_package.msg import KickParameters
            if KickParameters.__class__._TYPE_SUPPORT is None:
                KickParameters.__class__.__import_type_support__()

            from interface_package.msg import NavigationConfig
            if NavigationConfig.__class__._TYPE_SUPPORT is None:
                NavigationConfig.__class__.__import_type_support__()

            from interface_package.msg import PrepareKickoffParameters
            if PrepareKickoffParameters.__class__._TYPE_SUPPORT is None:
                PrepareKickoffParameters.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class LoadConfig_Response(metaclass=Metaclass_LoadConfig_Response):
    """Message class 'LoadConfig_Response'."""

    __slots__ = [
        '_ok',
        '_message',
        '_nav',
        '_kick',
        '_prep',
    ]

    _fields_and_field_types = {
        'ok': 'boolean',
        'message': 'string',
        'nav': 'interface_package/NavigationConfig',
        'kick': 'interface_package/KickParameters',
        'prep': 'interface_package/PrepareKickoffParameters',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['interface_package', 'msg'], 'NavigationConfig'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['interface_package', 'msg'], 'KickParameters'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['interface_package', 'msg'], 'PrepareKickoffParameters'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.ok = kwargs.get('ok', bool())
        self.message = kwargs.get('message', str())
        from interface_package.msg import NavigationConfig
        self.nav = kwargs.get('nav', NavigationConfig())
        from interface_package.msg import KickParameters
        self.kick = kwargs.get('kick', KickParameters())
        from interface_package.msg import PrepareKickoffParameters
        self.prep = kwargs.get('prep', PrepareKickoffParameters())

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
        if self.nav != other.nav:
            return False
        if self.kick != other.kick:
            return False
        if self.prep != other.prep:
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

    @builtins.property
    def nav(self):
        """Message field 'nav'."""
        return self._nav

    @nav.setter
    def nav(self, value):
        if __debug__:
            from interface_package.msg import NavigationConfig
            assert \
                isinstance(value, NavigationConfig), \
                "The 'nav' field must be a sub message of type 'NavigationConfig'"
        self._nav = value

    @builtins.property
    def kick(self):
        """Message field 'kick'."""
        return self._kick

    @kick.setter
    def kick(self, value):
        if __debug__:
            from interface_package.msg import KickParameters
            assert \
                isinstance(value, KickParameters), \
                "The 'kick' field must be a sub message of type 'KickParameters'"
        self._kick = value

    @builtins.property
    def prep(self):
        """Message field 'prep'."""
        return self._prep

    @prep.setter
    def prep(self, value):
        if __debug__:
            from interface_package.msg import PrepareKickoffParameters
            assert \
                isinstance(value, PrepareKickoffParameters), \
                "The 'prep' field must be a sub message of type 'PrepareKickoffParameters'"
        self._prep = value


class Metaclass_LoadConfig(type):
    """Metaclass of service 'LoadConfig'."""

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
                'interface_package.srv.LoadConfig')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__load_config

            from interface_package.srv import _load_config
            if _load_config.Metaclass_LoadConfig_Request._TYPE_SUPPORT is None:
                _load_config.Metaclass_LoadConfig_Request.__import_type_support__()
            if _load_config.Metaclass_LoadConfig_Response._TYPE_SUPPORT is None:
                _load_config.Metaclass_LoadConfig_Response.__import_type_support__()


class LoadConfig(metaclass=Metaclass_LoadConfig):
    from interface_package.srv._load_config import LoadConfig_Request as Request
    from interface_package.srv._load_config import LoadConfig_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')

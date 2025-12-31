# generated from rosidl_generator_py/resource/_idl.py.em
# with input from interface_package:srv/SetPrepareKickoffParameters.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SetPrepareKickoffParameters_Request(type):
    """Metaclass of message 'SetPrepareKickoffParameters_Request'."""

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
                'interface_package.srv.SetPrepareKickoffParameters_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__set_prepare_kickoff_parameters__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__set_prepare_kickoff_parameters__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__set_prepare_kickoff_parameters__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__set_prepare_kickoff_parameters__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__set_prepare_kickoff_parameters__request

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


class SetPrepareKickoffParameters_Request(metaclass=Metaclass_SetPrepareKickoffParameters_Request):
    """Message class 'SetPrepareKickoffParameters_Request'."""

    __slots__ = [
        '_params',
    ]

    _fields_and_field_types = {
        'params': 'interface_package/PrepareKickoffParameters',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['interface_package', 'msg'], 'PrepareKickoffParameters'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from interface_package.msg import PrepareKickoffParameters
        self.params = kwargs.get('params', PrepareKickoffParameters())

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
        if self.params != other.params:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def params(self):
        """Message field 'params'."""
        return self._params

    @params.setter
    def params(self, value):
        if __debug__:
            from interface_package.msg import PrepareKickoffParameters
            assert \
                isinstance(value, PrepareKickoffParameters), \
                "The 'params' field must be a sub message of type 'PrepareKickoffParameters'"
        self._params = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_SetPrepareKickoffParameters_Response(type):
    """Metaclass of message 'SetPrepareKickoffParameters_Response'."""

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
                'interface_package.srv.SetPrepareKickoffParameters_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__set_prepare_kickoff_parameters__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__set_prepare_kickoff_parameters__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__set_prepare_kickoff_parameters__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__set_prepare_kickoff_parameters__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__set_prepare_kickoff_parameters__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SetPrepareKickoffParameters_Response(metaclass=Metaclass_SetPrepareKickoffParameters_Response):
    """Message class 'SetPrepareKickoffParameters_Response'."""

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


class Metaclass_SetPrepareKickoffParameters(type):
    """Metaclass of service 'SetPrepareKickoffParameters'."""

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
                'interface_package.srv.SetPrepareKickoffParameters')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__set_prepare_kickoff_parameters

            from interface_package.srv import _set_prepare_kickoff_parameters
            if _set_prepare_kickoff_parameters.Metaclass_SetPrepareKickoffParameters_Request._TYPE_SUPPORT is None:
                _set_prepare_kickoff_parameters.Metaclass_SetPrepareKickoffParameters_Request.__import_type_support__()
            if _set_prepare_kickoff_parameters.Metaclass_SetPrepareKickoffParameters_Response._TYPE_SUPPORT is None:
                _set_prepare_kickoff_parameters.Metaclass_SetPrepareKickoffParameters_Response.__import_type_support__()


class SetPrepareKickoffParameters(metaclass=Metaclass_SetPrepareKickoffParameters):
    from interface_package.srv._set_prepare_kickoff_parameters import SetPrepareKickoffParameters_Request as Request
    from interface_package.srv._set_prepare_kickoff_parameters import SetPrepareKickoffParameters_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')

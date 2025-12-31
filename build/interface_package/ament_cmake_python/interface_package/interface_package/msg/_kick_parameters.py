# generated from rosidl_generator_py/resource/_idl.py.em
# with input from interface_package:msg/KickParameters.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_KickParameters(type):
    """Metaclass of message 'KickParameters'."""

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
                'interface_package.msg.KickParameters')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__kick_parameters
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__kick_parameters
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__kick_parameters
            cls._TYPE_SUPPORT = module.type_support_msg__msg__kick_parameters
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__kick_parameters

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class KickParameters(metaclass=Metaclass_KickParameters):
    """Message class 'KickParameters'."""

    __slots__ = [
        '_kick_speed',
        '_kick_angle_deg',
        '_kick_distance',
        '_facing_tolerance',
        '_kick_push_speed',
        '_dribbler_rpm',
    ]

    _fields_and_field_types = {
        'kick_speed': 'double',
        'kick_angle_deg': 'double',
        'kick_distance': 'double',
        'facing_tolerance': 'double',
        'kick_push_speed': 'double',
        'dribbler_rpm': 'double',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.kick_speed = kwargs.get('kick_speed', float())
        self.kick_angle_deg = kwargs.get('kick_angle_deg', float())
        self.kick_distance = kwargs.get('kick_distance', float())
        self.facing_tolerance = kwargs.get('facing_tolerance', float())
        self.kick_push_speed = kwargs.get('kick_push_speed', float())
        self.dribbler_rpm = kwargs.get('dribbler_rpm', float())

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
        if self.kick_speed != other.kick_speed:
            return False
        if self.kick_angle_deg != other.kick_angle_deg:
            return False
        if self.kick_distance != other.kick_distance:
            return False
        if self.facing_tolerance != other.facing_tolerance:
            return False
        if self.kick_push_speed != other.kick_push_speed:
            return False
        if self.dribbler_rpm != other.dribbler_rpm:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def kick_speed(self):
        """Message field 'kick_speed'."""
        return self._kick_speed

    @kick_speed.setter
    def kick_speed(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'kick_speed' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'kick_speed' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._kick_speed = value

    @builtins.property
    def kick_angle_deg(self):
        """Message field 'kick_angle_deg'."""
        return self._kick_angle_deg

    @kick_angle_deg.setter
    def kick_angle_deg(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'kick_angle_deg' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'kick_angle_deg' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._kick_angle_deg = value

    @builtins.property
    def kick_distance(self):
        """Message field 'kick_distance'."""
        return self._kick_distance

    @kick_distance.setter
    def kick_distance(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'kick_distance' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'kick_distance' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._kick_distance = value

    @builtins.property
    def facing_tolerance(self):
        """Message field 'facing_tolerance'."""
        return self._facing_tolerance

    @facing_tolerance.setter
    def facing_tolerance(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'facing_tolerance' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'facing_tolerance' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._facing_tolerance = value

    @builtins.property
    def kick_push_speed(self):
        """Message field 'kick_push_speed'."""
        return self._kick_push_speed

    @kick_push_speed.setter
    def kick_push_speed(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'kick_push_speed' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'kick_push_speed' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._kick_push_speed = value

    @builtins.property
    def dribbler_rpm(self):
        """Message field 'dribbler_rpm'."""
        return self._dribbler_rpm

    @dribbler_rpm.setter
    def dribbler_rpm(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'dribbler_rpm' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'dribbler_rpm' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._dribbler_rpm = value

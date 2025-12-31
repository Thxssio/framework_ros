# generated from rosidl_generator_py/resource/_idl.py.em
# with input from interface_package:msg/WorldState.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_WorldState(type):
    """Metaclass of message 'WorldState'."""

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
                'interface_package.msg.WorldState')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__world_state
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__world_state
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__world_state
            cls._TYPE_SUPPORT = module.type_support_msg__msg__world_state
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__world_state

            from builtin_interfaces.msg import Time
            if Time.__class__._TYPE_SUPPORT is None:
                Time.__class__.__import_type_support__()

            from interface_package.msg import BallState
            if BallState.__class__._TYPE_SUPPORT is None:
                BallState.__class__.__import_type_support__()

            from interface_package.msg import FieldDimensions
            if FieldDimensions.__class__._TYPE_SUPPORT is None:
                FieldDimensions.__class__.__import_type_support__()

            from interface_package.msg import RobotState
            if RobotState.__class__._TYPE_SUPPORT is None:
                RobotState.__class__.__import_type_support__()

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


class WorldState(metaclass=Metaclass_WorldState):
    """Message class 'WorldState'."""

    __slots__ = [
        '_stamp',
        '_capture_timestamp',
        '_field',
        '_friendly',
        '_opponent',
        '_ball',
        '_friendly_color',
    ]

    _fields_and_field_types = {
        'stamp': 'builtin_interfaces/Time',
        'capture_timestamp': 'double',
        'field': 'interface_package/FieldDimensions',
        'friendly': 'sequence<interface_package/RobotState>',
        'opponent': 'sequence<interface_package/RobotState>',
        'ball': 'interface_package/BallState',
        'friendly_color': 'interface_package/TeamColor',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['builtin_interfaces', 'msg'], 'Time'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['interface_package', 'msg'], 'FieldDimensions'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['interface_package', 'msg'], 'RobotState')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['interface_package', 'msg'], 'RobotState')),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['interface_package', 'msg'], 'BallState'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['interface_package', 'msg'], 'TeamColor'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from builtin_interfaces.msg import Time
        self.stamp = kwargs.get('stamp', Time())
        self.capture_timestamp = kwargs.get('capture_timestamp', float())
        from interface_package.msg import FieldDimensions
        self.field = kwargs.get('field', FieldDimensions())
        self.friendly = kwargs.get('friendly', [])
        self.opponent = kwargs.get('opponent', [])
        from interface_package.msg import BallState
        self.ball = kwargs.get('ball', BallState())
        from interface_package.msg import TeamColor
        self.friendly_color = kwargs.get('friendly_color', TeamColor())

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
        if self.stamp != other.stamp:
            return False
        if self.capture_timestamp != other.capture_timestamp:
            return False
        if self.field != other.field:
            return False
        if self.friendly != other.friendly:
            return False
        if self.opponent != other.opponent:
            return False
        if self.ball != other.ball:
            return False
        if self.friendly_color != other.friendly_color:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def stamp(self):
        """Message field 'stamp'."""
        return self._stamp

    @stamp.setter
    def stamp(self, value):
        if __debug__:
            from builtin_interfaces.msg import Time
            assert \
                isinstance(value, Time), \
                "The 'stamp' field must be a sub message of type 'Time'"
        self._stamp = value

    @builtins.property
    def capture_timestamp(self):
        """Message field 'capture_timestamp'."""
        return self._capture_timestamp

    @capture_timestamp.setter
    def capture_timestamp(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'capture_timestamp' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'capture_timestamp' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._capture_timestamp = value

    @builtins.property
    def field(self):
        """Message field 'field'."""
        return self._field

    @field.setter
    def field(self, value):
        if __debug__:
            from interface_package.msg import FieldDimensions
            assert \
                isinstance(value, FieldDimensions), \
                "The 'field' field must be a sub message of type 'FieldDimensions'"
        self._field = value

    @builtins.property
    def friendly(self):
        """Message field 'friendly'."""
        return self._friendly

    @friendly.setter
    def friendly(self, value):
        if __debug__:
            from interface_package.msg import RobotState
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
                 all(isinstance(v, RobotState) for v in value) and
                 True), \
                "The 'friendly' field must be a set or sequence and each value of type 'RobotState'"
        self._friendly = value

    @builtins.property
    def opponent(self):
        """Message field 'opponent'."""
        return self._opponent

    @opponent.setter
    def opponent(self, value):
        if __debug__:
            from interface_package.msg import RobotState
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
                 all(isinstance(v, RobotState) for v in value) and
                 True), \
                "The 'opponent' field must be a set or sequence and each value of type 'RobotState'"
        self._opponent = value

    @builtins.property
    def ball(self):
        """Message field 'ball'."""
        return self._ball

    @ball.setter
    def ball(self, value):
        if __debug__:
            from interface_package.msg import BallState
            assert \
                isinstance(value, BallState), \
                "The 'ball' field must be a sub message of type 'BallState'"
        self._ball = value

    @builtins.property
    def friendly_color(self):
        """Message field 'friendly_color'."""
        return self._friendly_color

    @friendly_color.setter
    def friendly_color(self, value):
        if __debug__:
            from interface_package.msg import TeamColor
            assert \
                isinstance(value, TeamColor), \
                "The 'friendly_color' field must be a sub message of type 'TeamColor'"
        self._friendly_color = value

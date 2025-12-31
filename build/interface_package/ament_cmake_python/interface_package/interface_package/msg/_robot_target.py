# generated from rosidl_generator_py/resource/_idl.py.em
# with input from interface_package:msg/RobotTarget.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_RobotTarget(type):
    """Metaclass of message 'RobotTarget'."""

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
                'interface_package.msg.RobotTarget')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__robot_target
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__robot_target
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__robot_target
            cls._TYPE_SUPPORT = module.type_support_msg__msg__robot_target
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__robot_target

            from builtin_interfaces.msg import Time
            if Time.__class__._TYPE_SUPPORT is None:
                Time.__class__.__import_type_support__()

            from interface_package.msg import Pose2D
            if Pose2D.__class__._TYPE_SUPPORT is None:
                Pose2D.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class RobotTarget(metaclass=Metaclass_RobotTarget):
    """Message class 'RobotTarget'."""

    __slots__ = [
        '_stamp',
        '_robot_id',
        '_target',
        '_force_path',
        '_allow_goal_area',
        '_avoid_ball',
    ]

    _fields_and_field_types = {
        'stamp': 'builtin_interfaces/Time',
        'robot_id': 'uint32',
        'target': 'interface_package/Pose2D',
        'force_path': 'boolean',
        'allow_goal_area': 'boolean',
        'avoid_ball': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['builtin_interfaces', 'msg'], 'Time'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['interface_package', 'msg'], 'Pose2D'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from builtin_interfaces.msg import Time
        self.stamp = kwargs.get('stamp', Time())
        self.robot_id = kwargs.get('robot_id', int())
        from interface_package.msg import Pose2D
        self.target = kwargs.get('target', Pose2D())
        self.force_path = kwargs.get('force_path', bool())
        self.allow_goal_area = kwargs.get('allow_goal_area', bool())
        self.avoid_ball = kwargs.get('avoid_ball', bool())

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
        if self.robot_id != other.robot_id:
            return False
        if self.target != other.target:
            return False
        if self.force_path != other.force_path:
            return False
        if self.allow_goal_area != other.allow_goal_area:
            return False
        if self.avoid_ball != other.avoid_ball:
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
    def robot_id(self):
        """Message field 'robot_id'."""
        return self._robot_id

    @robot_id.setter
    def robot_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'robot_id' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'robot_id' field must be an unsigned integer in [0, 4294967295]"
        self._robot_id = value

    @builtins.property
    def target(self):
        """Message field 'target'."""
        return self._target

    @target.setter
    def target(self, value):
        if __debug__:
            from interface_package.msg import Pose2D
            assert \
                isinstance(value, Pose2D), \
                "The 'target' field must be a sub message of type 'Pose2D'"
        self._target = value

    @builtins.property
    def force_path(self):
        """Message field 'force_path'."""
        return self._force_path

    @force_path.setter
    def force_path(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'force_path' field must be of type 'bool'"
        self._force_path = value

    @builtins.property
    def allow_goal_area(self):
        """Message field 'allow_goal_area'."""
        return self._allow_goal_area

    @allow_goal_area.setter
    def allow_goal_area(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'allow_goal_area' field must be of type 'bool'"
        self._allow_goal_area = value

    @builtins.property
    def avoid_ball(self):
        """Message field 'avoid_ball'."""
        return self._avoid_ball

    @avoid_ball.setter
    def avoid_ball(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'avoid_ball' field must be of type 'bool'"
        self._avoid_ball = value

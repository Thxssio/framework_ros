# generated from rosidl_generator_py/resource/_idl.py.em
# with input from interface_package:msg/NavigationConfig.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_NavigationConfig(type):
    """Metaclass of message 'NavigationConfig'."""

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
                'interface_package.msg.NavigationConfig')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__navigation_config
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__navigation_config
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__navigation_config
            cls._TYPE_SUPPORT = module.type_support_msg__msg__navigation_config
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__navigation_config

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class NavigationConfig(metaclass=Metaclass_NavigationConfig):
    """Message class 'NavigationConfig'."""

    __slots__ = [
        '_stop_distance',
        '_linear_gain',
        '_max_speed',
        '_max_angular_speed',
        '_angular_gain',
        '_planner_resolution',
        '_planner_clearance',
        '_collision_threshold',
        '_optimizer_weight_smooth',
        '_optimizer_weight_jerk',
        '_optimizer_weight_obstacle',
        '_optimizer_step_size',
        '_optimizer_iterations',
        '_optimizer_clearance',
        '_force_path_planning',
        '_max_segment_length',
    ]

    _fields_and_field_types = {
        'stop_distance': 'double',
        'linear_gain': 'double',
        'max_speed': 'double',
        'max_angular_speed': 'double',
        'angular_gain': 'double',
        'planner_resolution': 'double',
        'planner_clearance': 'double',
        'collision_threshold': 'double',
        'optimizer_weight_smooth': 'double',
        'optimizer_weight_jerk': 'double',
        'optimizer_weight_obstacle': 'double',
        'optimizer_step_size': 'double',
        'optimizer_iterations': 'int32',
        'optimizer_clearance': 'double',
        'force_path_planning': 'boolean',
        'max_segment_length': 'double',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.stop_distance = kwargs.get('stop_distance', float())
        self.linear_gain = kwargs.get('linear_gain', float())
        self.max_speed = kwargs.get('max_speed', float())
        self.max_angular_speed = kwargs.get('max_angular_speed', float())
        self.angular_gain = kwargs.get('angular_gain', float())
        self.planner_resolution = kwargs.get('planner_resolution', float())
        self.planner_clearance = kwargs.get('planner_clearance', float())
        self.collision_threshold = kwargs.get('collision_threshold', float())
        self.optimizer_weight_smooth = kwargs.get('optimizer_weight_smooth', float())
        self.optimizer_weight_jerk = kwargs.get('optimizer_weight_jerk', float())
        self.optimizer_weight_obstacle = kwargs.get('optimizer_weight_obstacle', float())
        self.optimizer_step_size = kwargs.get('optimizer_step_size', float())
        self.optimizer_iterations = kwargs.get('optimizer_iterations', int())
        self.optimizer_clearance = kwargs.get('optimizer_clearance', float())
        self.force_path_planning = kwargs.get('force_path_planning', bool())
        self.max_segment_length = kwargs.get('max_segment_length', float())

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
        if self.stop_distance != other.stop_distance:
            return False
        if self.linear_gain != other.linear_gain:
            return False
        if self.max_speed != other.max_speed:
            return False
        if self.max_angular_speed != other.max_angular_speed:
            return False
        if self.angular_gain != other.angular_gain:
            return False
        if self.planner_resolution != other.planner_resolution:
            return False
        if self.planner_clearance != other.planner_clearance:
            return False
        if self.collision_threshold != other.collision_threshold:
            return False
        if self.optimizer_weight_smooth != other.optimizer_weight_smooth:
            return False
        if self.optimizer_weight_jerk != other.optimizer_weight_jerk:
            return False
        if self.optimizer_weight_obstacle != other.optimizer_weight_obstacle:
            return False
        if self.optimizer_step_size != other.optimizer_step_size:
            return False
        if self.optimizer_iterations != other.optimizer_iterations:
            return False
        if self.optimizer_clearance != other.optimizer_clearance:
            return False
        if self.force_path_planning != other.force_path_planning:
            return False
        if self.max_segment_length != other.max_segment_length:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def stop_distance(self):
        """Message field 'stop_distance'."""
        return self._stop_distance

    @stop_distance.setter
    def stop_distance(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'stop_distance' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'stop_distance' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._stop_distance = value

    @builtins.property
    def linear_gain(self):
        """Message field 'linear_gain'."""
        return self._linear_gain

    @linear_gain.setter
    def linear_gain(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'linear_gain' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'linear_gain' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._linear_gain = value

    @builtins.property
    def max_speed(self):
        """Message field 'max_speed'."""
        return self._max_speed

    @max_speed.setter
    def max_speed(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'max_speed' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'max_speed' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._max_speed = value

    @builtins.property
    def max_angular_speed(self):
        """Message field 'max_angular_speed'."""
        return self._max_angular_speed

    @max_angular_speed.setter
    def max_angular_speed(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'max_angular_speed' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'max_angular_speed' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._max_angular_speed = value

    @builtins.property
    def angular_gain(self):
        """Message field 'angular_gain'."""
        return self._angular_gain

    @angular_gain.setter
    def angular_gain(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'angular_gain' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'angular_gain' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._angular_gain = value

    @builtins.property
    def planner_resolution(self):
        """Message field 'planner_resolution'."""
        return self._planner_resolution

    @planner_resolution.setter
    def planner_resolution(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'planner_resolution' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'planner_resolution' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._planner_resolution = value

    @builtins.property
    def planner_clearance(self):
        """Message field 'planner_clearance'."""
        return self._planner_clearance

    @planner_clearance.setter
    def planner_clearance(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'planner_clearance' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'planner_clearance' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._planner_clearance = value

    @builtins.property
    def collision_threshold(self):
        """Message field 'collision_threshold'."""
        return self._collision_threshold

    @collision_threshold.setter
    def collision_threshold(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'collision_threshold' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'collision_threshold' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._collision_threshold = value

    @builtins.property
    def optimizer_weight_smooth(self):
        """Message field 'optimizer_weight_smooth'."""
        return self._optimizer_weight_smooth

    @optimizer_weight_smooth.setter
    def optimizer_weight_smooth(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'optimizer_weight_smooth' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'optimizer_weight_smooth' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._optimizer_weight_smooth = value

    @builtins.property
    def optimizer_weight_jerk(self):
        """Message field 'optimizer_weight_jerk'."""
        return self._optimizer_weight_jerk

    @optimizer_weight_jerk.setter
    def optimizer_weight_jerk(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'optimizer_weight_jerk' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'optimizer_weight_jerk' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._optimizer_weight_jerk = value

    @builtins.property
    def optimizer_weight_obstacle(self):
        """Message field 'optimizer_weight_obstacle'."""
        return self._optimizer_weight_obstacle

    @optimizer_weight_obstacle.setter
    def optimizer_weight_obstacle(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'optimizer_weight_obstacle' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'optimizer_weight_obstacle' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._optimizer_weight_obstacle = value

    @builtins.property
    def optimizer_step_size(self):
        """Message field 'optimizer_step_size'."""
        return self._optimizer_step_size

    @optimizer_step_size.setter
    def optimizer_step_size(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'optimizer_step_size' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'optimizer_step_size' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._optimizer_step_size = value

    @builtins.property
    def optimizer_iterations(self):
        """Message field 'optimizer_iterations'."""
        return self._optimizer_iterations

    @optimizer_iterations.setter
    def optimizer_iterations(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'optimizer_iterations' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'optimizer_iterations' field must be an integer in [-2147483648, 2147483647]"
        self._optimizer_iterations = value

    @builtins.property
    def optimizer_clearance(self):
        """Message field 'optimizer_clearance'."""
        return self._optimizer_clearance

    @optimizer_clearance.setter
    def optimizer_clearance(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'optimizer_clearance' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'optimizer_clearance' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._optimizer_clearance = value

    @builtins.property
    def force_path_planning(self):
        """Message field 'force_path_planning'."""
        return self._force_path_planning

    @force_path_planning.setter
    def force_path_planning(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'force_path_planning' field must be of type 'bool'"
        self._force_path_planning = value

    @builtins.property
    def max_segment_length(self):
        """Message field 'max_segment_length'."""
        return self._max_segment_length

    @max_segment_length.setter
    def max_segment_length(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'max_segment_length' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'max_segment_length' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._max_segment_length = value

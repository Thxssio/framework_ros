# generated from rosidl_generator_py/resource/_idl.py.em
# with input from interface_package:msg/FieldDimensions.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_FieldDimensions(type):
    """Metaclass of message 'FieldDimensions'."""

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
                'interface_package.msg.FieldDimensions')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__field_dimensions
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__field_dimensions
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__field_dimensions
            cls._TYPE_SUPPORT = module.type_support_msg__msg__field_dimensions
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__field_dimensions

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class FieldDimensions(metaclass=Metaclass_FieldDimensions):
    """Message class 'FieldDimensions'."""

    __slots__ = [
        '_length',
        '_width',
        '_goal_width',
        '_goal_depth',
        '_boundary_width',
    ]

    _fields_and_field_types = {
        'length': 'double',
        'width': 'double',
        'goal_width': 'double',
        'goal_depth': 'double',
        'boundary_width': 'double',
    }

    SLOT_TYPES = (
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
        self.length = kwargs.get('length', float())
        self.width = kwargs.get('width', float())
        self.goal_width = kwargs.get('goal_width', float())
        self.goal_depth = kwargs.get('goal_depth', float())
        self.boundary_width = kwargs.get('boundary_width', float())

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
        if self.length != other.length:
            return False
        if self.width != other.width:
            return False
        if self.goal_width != other.goal_width:
            return False
        if self.goal_depth != other.goal_depth:
            return False
        if self.boundary_width != other.boundary_width:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def length(self):
        """Message field 'length'."""
        return self._length

    @length.setter
    def length(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'length' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'length' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._length = value

    @builtins.property
    def width(self):
        """Message field 'width'."""
        return self._width

    @width.setter
    def width(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'width' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'width' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._width = value

    @builtins.property
    def goal_width(self):
        """Message field 'goal_width'."""
        return self._goal_width

    @goal_width.setter
    def goal_width(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'goal_width' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'goal_width' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._goal_width = value

    @builtins.property
    def goal_depth(self):
        """Message field 'goal_depth'."""
        return self._goal_depth

    @goal_depth.setter
    def goal_depth(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'goal_depth' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'goal_depth' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._goal_depth = value

    @builtins.property
    def boundary_width(self):
        """Message field 'boundary_width'."""
        return self._boundary_width

    @boundary_width.setter
    def boundary_width(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'boundary_width' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'boundary_width' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._boundary_width = value

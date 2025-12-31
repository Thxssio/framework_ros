# generated from rosidl_generator_py/resource/_idl.py.em
# with input from interface_package:msg/VisionGeometry.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'camera_ids'
import array  # noqa: E402, I100

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_VisionGeometry(type):
    """Metaclass of message 'VisionGeometry'."""

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
                'interface_package.msg.VisionGeometry')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__vision_geometry
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__vision_geometry
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__vision_geometry
            cls._TYPE_SUPPORT = module.type_support_msg__msg__vision_geometry
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__vision_geometry

            from builtin_interfaces.msg import Time
            if Time.__class__._TYPE_SUPPORT is None:
                Time.__class__.__import_type_support__()

            from interface_package.msg import FieldDimensions
            if FieldDimensions.__class__._TYPE_SUPPORT is None:
                FieldDimensions.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class VisionGeometry(metaclass=Metaclass_VisionGeometry):
    """Message class 'VisionGeometry'."""

    __slots__ = [
        '_stamp',
        '_field',
        '_expected_cameras',
        '_camera_count',
        '_camera_ids',
    ]

    _fields_and_field_types = {
        'stamp': 'builtin_interfaces/Time',
        'field': 'interface_package/FieldDimensions',
        'expected_cameras': 'uint32',
        'camera_count': 'uint32',
        'camera_ids': 'sequence<uint32>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['builtin_interfaces', 'msg'], 'Time'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['interface_package', 'msg'], 'FieldDimensions'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('uint32')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from builtin_interfaces.msg import Time
        self.stamp = kwargs.get('stamp', Time())
        from interface_package.msg import FieldDimensions
        self.field = kwargs.get('field', FieldDimensions())
        self.expected_cameras = kwargs.get('expected_cameras', int())
        self.camera_count = kwargs.get('camera_count', int())
        self.camera_ids = array.array('I', kwargs.get('camera_ids', []))

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
        if self.field != other.field:
            return False
        if self.expected_cameras != other.expected_cameras:
            return False
        if self.camera_count != other.camera_count:
            return False
        if self.camera_ids != other.camera_ids:
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
    def expected_cameras(self):
        """Message field 'expected_cameras'."""
        return self._expected_cameras

    @expected_cameras.setter
    def expected_cameras(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'expected_cameras' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'expected_cameras' field must be an unsigned integer in [0, 4294967295]"
        self._expected_cameras = value

    @builtins.property
    def camera_count(self):
        """Message field 'camera_count'."""
        return self._camera_count

    @camera_count.setter
    def camera_count(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'camera_count' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'camera_count' field must be an unsigned integer in [0, 4294967295]"
        self._camera_count = value

    @builtins.property
    def camera_ids(self):
        """Message field 'camera_ids'."""
        return self._camera_ids

    @camera_ids.setter
    def camera_ids(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'I', \
                "The 'camera_ids' array.array() must have the type code of 'I'"
            self._camera_ids = value
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
                "The 'camera_ids' field must be a set or sequence and each value of type 'int' and each unsigned integer in [0, 4294967295]"
        self._camera_ids = array.array('I', value)

# generated from rosidl_generator_py/resource/_idl.py.em
# with input from spot_msgs:srv/ArmForceTrajectory.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'forces_pt0'
# Member 'torques_pt0'
# Member 'forces_pt1'
# Member 'torques_pt1'
import numpy  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ArmForceTrajectory_Request(type):
    """Metaclass of message 'ArmForceTrajectory_Request'."""

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
            module = import_type_support('spot_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'spot_msgs.srv.ArmForceTrajectory_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__arm_force_trajectory__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__arm_force_trajectory__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__arm_force_trajectory__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__arm_force_trajectory__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__arm_force_trajectory__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ArmForceTrajectory_Request(metaclass=Metaclass_ArmForceTrajectory_Request):
    """Message class 'ArmForceTrajectory_Request'."""

    __slots__ = [
        '_forces_pt0',
        '_torques_pt0',
        '_forces_pt1',
        '_torques_pt1',
    ]

    _fields_and_field_types = {
        'forces_pt0': 'double[3]',
        'torques_pt0': 'double[3]',
        'forces_pt1': 'double[3]',
        'torques_pt1': 'double[3]',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('double'), 3),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('double'), 3),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('double'), 3),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('double'), 3),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        if 'forces_pt0' not in kwargs:
            self.forces_pt0 = numpy.zeros(3, dtype=numpy.float64)
        else:
            self.forces_pt0 = numpy.array(kwargs.get('forces_pt0'), dtype=numpy.float64)
            assert self.forces_pt0.shape == (3, )
        if 'torques_pt0' not in kwargs:
            self.torques_pt0 = numpy.zeros(3, dtype=numpy.float64)
        else:
            self.torques_pt0 = numpy.array(kwargs.get('torques_pt0'), dtype=numpy.float64)
            assert self.torques_pt0.shape == (3, )
        if 'forces_pt1' not in kwargs:
            self.forces_pt1 = numpy.zeros(3, dtype=numpy.float64)
        else:
            self.forces_pt1 = numpy.array(kwargs.get('forces_pt1'), dtype=numpy.float64)
            assert self.forces_pt1.shape == (3, )
        if 'torques_pt1' not in kwargs:
            self.torques_pt1 = numpy.zeros(3, dtype=numpy.float64)
        else:
            self.torques_pt1 = numpy.array(kwargs.get('torques_pt1'), dtype=numpy.float64)
            assert self.torques_pt1.shape == (3, )

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
        if all(self.forces_pt0 != other.forces_pt0):
            return False
        if all(self.torques_pt0 != other.torques_pt0):
            return False
        if all(self.forces_pt1 != other.forces_pt1):
            return False
        if all(self.torques_pt1 != other.torques_pt1):
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def forces_pt0(self):
        """Message field 'forces_pt0'."""
        return self._forces_pt0

    @forces_pt0.setter
    def forces_pt0(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float64, \
                "The 'forces_pt0' numpy.ndarray() must have the dtype of 'numpy.float64'"
            assert value.size == 3, \
                "The 'forces_pt0' numpy.ndarray() must have a size of 3"
            self._forces_pt0 = value
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
                 len(value) == 3 and
                 all(isinstance(v, float) for v in value) and
                 True), \
                "The 'forces_pt0' field must be a set or sequence with length 3 and each value of type 'float'"
        self._forces_pt0 = numpy.array(value, dtype=numpy.float64)

    @property
    def torques_pt0(self):
        """Message field 'torques_pt0'."""
        return self._torques_pt0

    @torques_pt0.setter
    def torques_pt0(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float64, \
                "The 'torques_pt0' numpy.ndarray() must have the dtype of 'numpy.float64'"
            assert value.size == 3, \
                "The 'torques_pt0' numpy.ndarray() must have a size of 3"
            self._torques_pt0 = value
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
                 len(value) == 3 and
                 all(isinstance(v, float) for v in value) and
                 True), \
                "The 'torques_pt0' field must be a set or sequence with length 3 and each value of type 'float'"
        self._torques_pt0 = numpy.array(value, dtype=numpy.float64)

    @property
    def forces_pt1(self):
        """Message field 'forces_pt1'."""
        return self._forces_pt1

    @forces_pt1.setter
    def forces_pt1(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float64, \
                "The 'forces_pt1' numpy.ndarray() must have the dtype of 'numpy.float64'"
            assert value.size == 3, \
                "The 'forces_pt1' numpy.ndarray() must have a size of 3"
            self._forces_pt1 = value
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
                 len(value) == 3 and
                 all(isinstance(v, float) for v in value) and
                 True), \
                "The 'forces_pt1' field must be a set or sequence with length 3 and each value of type 'float'"
        self._forces_pt1 = numpy.array(value, dtype=numpy.float64)

    @property
    def torques_pt1(self):
        """Message field 'torques_pt1'."""
        return self._torques_pt1

    @torques_pt1.setter
    def torques_pt1(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float64, \
                "The 'torques_pt1' numpy.ndarray() must have the dtype of 'numpy.float64'"
            assert value.size == 3, \
                "The 'torques_pt1' numpy.ndarray() must have a size of 3"
            self._torques_pt1 = value
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
                 len(value) == 3 and
                 all(isinstance(v, float) for v in value) and
                 True), \
                "The 'torques_pt1' field must be a set or sequence with length 3 and each value of type 'float'"
        self._torques_pt1 = numpy.array(value, dtype=numpy.float64)


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_ArmForceTrajectory_Response(type):
    """Metaclass of message 'ArmForceTrajectory_Response'."""

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
            module = import_type_support('spot_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'spot_msgs.srv.ArmForceTrajectory_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__arm_force_trajectory__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__arm_force_trajectory__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__arm_force_trajectory__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__arm_force_trajectory__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__arm_force_trajectory__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ArmForceTrajectory_Response(metaclass=Metaclass_ArmForceTrajectory_Response):
    """Message class 'ArmForceTrajectory_Response'."""

    __slots__ = [
        '_success',
        '_message',
    ]

    _fields_and_field_types = {
        'success': 'boolean',
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
        self.success = kwargs.get('success', bool())
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
        if self.success != other.success:
            return False
        if self.message != other.message:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def success(self):
        """Message field 'success'."""
        return self._success

    @success.setter
    def success(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'success' field must be of type 'bool'"
        self._success = value

    @property
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


class Metaclass_ArmForceTrajectory(type):
    """Metaclass of service 'ArmForceTrajectory'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('spot_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'spot_msgs.srv.ArmForceTrajectory')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__arm_force_trajectory

            from spot_msgs.srv import _arm_force_trajectory
            if _arm_force_trajectory.Metaclass_ArmForceTrajectory_Request._TYPE_SUPPORT is None:
                _arm_force_trajectory.Metaclass_ArmForceTrajectory_Request.__import_type_support__()
            if _arm_force_trajectory.Metaclass_ArmForceTrajectory_Response._TYPE_SUPPORT is None:
                _arm_force_trajectory.Metaclass_ArmForceTrajectory_Response.__import_type_support__()


class ArmForceTrajectory(metaclass=Metaclass_ArmForceTrajectory):
    from spot_msgs.srv._arm_force_trajectory import ArmForceTrajectory_Request as Request
    from spot_msgs.srv._arm_force_trajectory import ArmForceTrajectory_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')

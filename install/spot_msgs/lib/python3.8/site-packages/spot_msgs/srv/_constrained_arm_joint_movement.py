# generated from rosidl_generator_py/resource/_idl.py.em
# with input from spot_msgs:srv/ConstrainedArmJointMovement.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'joint_target'
import array  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ConstrainedArmJointMovement_Request(type):
    """Metaclass of message 'ConstrainedArmJointMovement_Request'."""

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
                'spot_msgs.srv.ConstrainedArmJointMovement_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__constrained_arm_joint_movement__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__constrained_arm_joint_movement__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__constrained_arm_joint_movement__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__constrained_arm_joint_movement__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__constrained_arm_joint_movement__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ConstrainedArmJointMovement_Request(metaclass=Metaclass_ConstrainedArmJointMovement_Request):
    """Message class 'ConstrainedArmJointMovement_Request'."""

    __slots__ = [
        '_joint_target',
        '_max_execution_time',
        '_max_velocity',
        '_max_acceleration',
    ]

    _fields_and_field_types = {
        'joint_target': 'sequence<double>',
        'max_execution_time': 'double',
        'max_velocity': 'double',
        'max_acceleration': 'double',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('double')),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.joint_target = array.array('d', kwargs.get('joint_target', []))
        self.max_execution_time = kwargs.get('max_execution_time', float())
        self.max_velocity = kwargs.get('max_velocity', float())
        self.max_acceleration = kwargs.get('max_acceleration', float())

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
        if self.joint_target != other.joint_target:
            return False
        if self.max_execution_time != other.max_execution_time:
            return False
        if self.max_velocity != other.max_velocity:
            return False
        if self.max_acceleration != other.max_acceleration:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def joint_target(self):
        """Message field 'joint_target'."""
        return self._joint_target

    @joint_target.setter
    def joint_target(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'd', \
                "The 'joint_target' array.array() must have the type code of 'd'"
            self._joint_target = value
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
                 all(isinstance(v, float) for v in value) and
                 True), \
                "The 'joint_target' field must be a set or sequence and each value of type 'float'"
        self._joint_target = array.array('d', value)

    @property
    def max_execution_time(self):
        """Message field 'max_execution_time'."""
        return self._max_execution_time

    @max_execution_time.setter
    def max_execution_time(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'max_execution_time' field must be of type 'float'"
        self._max_execution_time = value

    @property
    def max_velocity(self):
        """Message field 'max_velocity'."""
        return self._max_velocity

    @max_velocity.setter
    def max_velocity(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'max_velocity' field must be of type 'float'"
        self._max_velocity = value

    @property
    def max_acceleration(self):
        """Message field 'max_acceleration'."""
        return self._max_acceleration

    @max_acceleration.setter
    def max_acceleration(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'max_acceleration' field must be of type 'float'"
        self._max_acceleration = value


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_ConstrainedArmJointMovement_Response(type):
    """Metaclass of message 'ConstrainedArmJointMovement_Response'."""

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
                'spot_msgs.srv.ConstrainedArmJointMovement_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__constrained_arm_joint_movement__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__constrained_arm_joint_movement__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__constrained_arm_joint_movement__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__constrained_arm_joint_movement__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__constrained_arm_joint_movement__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ConstrainedArmJointMovement_Response(metaclass=Metaclass_ConstrainedArmJointMovement_Response):
    """Message class 'ConstrainedArmJointMovement_Response'."""

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


class Metaclass_ConstrainedArmJointMovement(type):
    """Metaclass of service 'ConstrainedArmJointMovement'."""

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
                'spot_msgs.srv.ConstrainedArmJointMovement')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__constrained_arm_joint_movement

            from spot_msgs.srv import _constrained_arm_joint_movement
            if _constrained_arm_joint_movement.Metaclass_ConstrainedArmJointMovement_Request._TYPE_SUPPORT is None:
                _constrained_arm_joint_movement.Metaclass_ConstrainedArmJointMovement_Request.__import_type_support__()
            if _constrained_arm_joint_movement.Metaclass_ConstrainedArmJointMovement_Response._TYPE_SUPPORT is None:
                _constrained_arm_joint_movement.Metaclass_ConstrainedArmJointMovement_Response.__import_type_support__()


class ConstrainedArmJointMovement(metaclass=Metaclass_ConstrainedArmJointMovement):
    from spot_msgs.srv._constrained_arm_joint_movement import ConstrainedArmJointMovement_Request as Request
    from spot_msgs.srv._constrained_arm_joint_movement import ConstrainedArmJointMovement_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')

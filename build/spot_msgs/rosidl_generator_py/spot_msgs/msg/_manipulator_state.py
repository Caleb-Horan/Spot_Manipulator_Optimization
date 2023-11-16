# generated from rosidl_generator_py/resource/_idl.py.em
# with input from spot_msgs:msg/ManipulatorState.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ManipulatorState(type):
    """Metaclass of message 'ManipulatorState'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'STOWSTATE_UNKNOWN': 0,
        'STOWSTATE_STOWED': 1,
        'STOWSTATE_DEPLOYED': 2,
        'CARRY_STATE_UNKNOWN': 0,
        'CARRY_STATE_NOT_CARRIABLE': 1,
        'CARRY_STATE_CARRIABLE': 3,
        'CARRY_STATE_CARRIABLE_AND_STOWABLE': 3,
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
                'spot_msgs.msg.ManipulatorState')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__manipulator_state
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__manipulator_state
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__manipulator_state
            cls._TYPE_SUPPORT = module.type_support_msg__msg__manipulator_state
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__manipulator_state

            from geometry_msgs.msg import Point
            if Point.__class__._TYPE_SUPPORT is None:
                Point.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'STOWSTATE_UNKNOWN': cls.__constants['STOWSTATE_UNKNOWN'],
            'STOWSTATE_STOWED': cls.__constants['STOWSTATE_STOWED'],
            'STOWSTATE_DEPLOYED': cls.__constants['STOWSTATE_DEPLOYED'],
            'CARRY_STATE_UNKNOWN': cls.__constants['CARRY_STATE_UNKNOWN'],
            'CARRY_STATE_NOT_CARRIABLE': cls.__constants['CARRY_STATE_NOT_CARRIABLE'],
            'CARRY_STATE_CARRIABLE': cls.__constants['CARRY_STATE_CARRIABLE'],
            'CARRY_STATE_CARRIABLE_AND_STOWABLE': cls.__constants['CARRY_STATE_CARRIABLE_AND_STOWABLE'],
        }

    @property
    def STOWSTATE_UNKNOWN(self):
        """Message constant 'STOWSTATE_UNKNOWN'."""
        return Metaclass_ManipulatorState.__constants['STOWSTATE_UNKNOWN']

    @property
    def STOWSTATE_STOWED(self):
        """Message constant 'STOWSTATE_STOWED'."""
        return Metaclass_ManipulatorState.__constants['STOWSTATE_STOWED']

    @property
    def STOWSTATE_DEPLOYED(self):
        """Message constant 'STOWSTATE_DEPLOYED'."""
        return Metaclass_ManipulatorState.__constants['STOWSTATE_DEPLOYED']

    @property
    def CARRY_STATE_UNKNOWN(self):
        """Message constant 'CARRY_STATE_UNKNOWN'."""
        return Metaclass_ManipulatorState.__constants['CARRY_STATE_UNKNOWN']

    @property
    def CARRY_STATE_NOT_CARRIABLE(self):
        """Message constant 'CARRY_STATE_NOT_CARRIABLE'."""
        return Metaclass_ManipulatorState.__constants['CARRY_STATE_NOT_CARRIABLE']

    @property
    def CARRY_STATE_CARRIABLE(self):
        """Message constant 'CARRY_STATE_CARRIABLE'."""
        return Metaclass_ManipulatorState.__constants['CARRY_STATE_CARRIABLE']

    @property
    def CARRY_STATE_CARRIABLE_AND_STOWABLE(self):
        """Message constant 'CARRY_STATE_CARRIABLE_AND_STOWABLE'."""
        return Metaclass_ManipulatorState.__constants['CARRY_STATE_CARRIABLE_AND_STOWABLE']


class ManipulatorState(metaclass=Metaclass_ManipulatorState):
    """
    Message class 'ManipulatorState'.

    Constants:
      STOWSTATE_UNKNOWN
      STOWSTATE_STOWED
      STOWSTATE_DEPLOYED
      CARRY_STATE_UNKNOWN
      CARRY_STATE_NOT_CARRIABLE
      CARRY_STATE_CARRIABLE
      CARRY_STATE_CARRIABLE_AND_STOWABLE
    """

    __slots__ = [
        '_gripper_open_percentage',
        '_is_gripper_holding_item',
        '_estimated_end_effector_force_in_hand',
        '_stow_state',
        '_carry_state',
    ]

    _fields_and_field_types = {
        'gripper_open_percentage': 'double',
        'is_gripper_holding_item': 'boolean',
        'estimated_end_effector_force_in_hand': 'geometry_msgs/Point',
        'stow_state': 'uint8',
        'carry_state': 'uint8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Point'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.gripper_open_percentage = kwargs.get('gripper_open_percentage', float())
        self.is_gripper_holding_item = kwargs.get('is_gripper_holding_item', bool())
        from geometry_msgs.msg import Point
        self.estimated_end_effector_force_in_hand = kwargs.get('estimated_end_effector_force_in_hand', Point())
        self.stow_state = kwargs.get('stow_state', int())
        self.carry_state = kwargs.get('carry_state', int())

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
        if self.gripper_open_percentage != other.gripper_open_percentage:
            return False
        if self.is_gripper_holding_item != other.is_gripper_holding_item:
            return False
        if self.estimated_end_effector_force_in_hand != other.estimated_end_effector_force_in_hand:
            return False
        if self.stow_state != other.stow_state:
            return False
        if self.carry_state != other.carry_state:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def gripper_open_percentage(self):
        """Message field 'gripper_open_percentage'."""
        return self._gripper_open_percentage

    @gripper_open_percentage.setter
    def gripper_open_percentage(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'gripper_open_percentage' field must be of type 'float'"
        self._gripper_open_percentage = value

    @property
    def is_gripper_holding_item(self):
        """Message field 'is_gripper_holding_item'."""
        return self._is_gripper_holding_item

    @is_gripper_holding_item.setter
    def is_gripper_holding_item(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'is_gripper_holding_item' field must be of type 'bool'"
        self._is_gripper_holding_item = value

    @property
    def estimated_end_effector_force_in_hand(self):
        """Message field 'estimated_end_effector_force_in_hand'."""
        return self._estimated_end_effector_force_in_hand

    @estimated_end_effector_force_in_hand.setter
    def estimated_end_effector_force_in_hand(self, value):
        if __debug__:
            from geometry_msgs.msg import Point
            assert \
                isinstance(value, Point), \
                "The 'estimated_end_effector_force_in_hand' field must be a sub message of type 'Point'"
        self._estimated_end_effector_force_in_hand = value

    @property
    def stow_state(self):
        """Message field 'stow_state'."""
        return self._stow_state

    @stow_state.setter
    def stow_state(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'stow_state' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'stow_state' field must be an unsigned integer in [0, 255]"
        self._stow_state = value

    @property
    def carry_state(self):
        """Message field 'carry_state'."""
        return self._carry_state

    @carry_state.setter
    def carry_state(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'carry_state' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'carry_state' field must be an unsigned integer in [0, 255]"
        self._carry_state = value

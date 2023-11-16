# generated from rosidl_generator_py/resource/_idl.py.em
# with input from spot_msgs:msg/DockState.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_DockState(type):
    """Metaclass of message 'DockState'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'DOCK_STATUS_UNKNOWN': 0,
        'DOCK_STATUS_DOCKED': 1,
        'DOCK_STATUS_DOCKING': 2,
        'DOCK_STATUS_UNDOCKED': 3,
        'DOCK_STATUS_UNDOCKING': 4,
        'DOCK_TYPE_UNKNOWN': 0,
        'DOCK_TYPE_CONTACT_PROTOTYPE': 2,
        'DOCK_TYPE_SPOT_DOCK': 3,
        'LINK_STATUS_UNKNOWN': 0,
        'LINK_STATUS_CONNECTED': 1,
        'LINK_STATUS_ERROR': 2,
        'LINK_STATUS_DETECTING': 3,
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
                'spot_msgs.msg.DockState')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__dock_state
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__dock_state
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__dock_state
            cls._TYPE_SUPPORT = module.type_support_msg__msg__dock_state
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__dock_state

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'DOCK_STATUS_UNKNOWN': cls.__constants['DOCK_STATUS_UNKNOWN'],
            'DOCK_STATUS_DOCKED': cls.__constants['DOCK_STATUS_DOCKED'],
            'DOCK_STATUS_DOCKING': cls.__constants['DOCK_STATUS_DOCKING'],
            'DOCK_STATUS_UNDOCKED': cls.__constants['DOCK_STATUS_UNDOCKED'],
            'DOCK_STATUS_UNDOCKING': cls.__constants['DOCK_STATUS_UNDOCKING'],
            'DOCK_TYPE_UNKNOWN': cls.__constants['DOCK_TYPE_UNKNOWN'],
            'DOCK_TYPE_CONTACT_PROTOTYPE': cls.__constants['DOCK_TYPE_CONTACT_PROTOTYPE'],
            'DOCK_TYPE_SPOT_DOCK': cls.__constants['DOCK_TYPE_SPOT_DOCK'],
            'LINK_STATUS_UNKNOWN': cls.__constants['LINK_STATUS_UNKNOWN'],
            'LINK_STATUS_CONNECTED': cls.__constants['LINK_STATUS_CONNECTED'],
            'LINK_STATUS_ERROR': cls.__constants['LINK_STATUS_ERROR'],
            'LINK_STATUS_DETECTING': cls.__constants['LINK_STATUS_DETECTING'],
        }

    @property
    def DOCK_STATUS_UNKNOWN(self):
        """Message constant 'DOCK_STATUS_UNKNOWN'."""
        return Metaclass_DockState.__constants['DOCK_STATUS_UNKNOWN']

    @property
    def DOCK_STATUS_DOCKED(self):
        """Message constant 'DOCK_STATUS_DOCKED'."""
        return Metaclass_DockState.__constants['DOCK_STATUS_DOCKED']

    @property
    def DOCK_STATUS_DOCKING(self):
        """Message constant 'DOCK_STATUS_DOCKING'."""
        return Metaclass_DockState.__constants['DOCK_STATUS_DOCKING']

    @property
    def DOCK_STATUS_UNDOCKED(self):
        """Message constant 'DOCK_STATUS_UNDOCKED'."""
        return Metaclass_DockState.__constants['DOCK_STATUS_UNDOCKED']

    @property
    def DOCK_STATUS_UNDOCKING(self):
        """Message constant 'DOCK_STATUS_UNDOCKING'."""
        return Metaclass_DockState.__constants['DOCK_STATUS_UNDOCKING']

    @property
    def DOCK_TYPE_UNKNOWN(self):
        """Message constant 'DOCK_TYPE_UNKNOWN'."""
        return Metaclass_DockState.__constants['DOCK_TYPE_UNKNOWN']

    @property
    def DOCK_TYPE_CONTACT_PROTOTYPE(self):
        """Message constant 'DOCK_TYPE_CONTACT_PROTOTYPE'."""
        return Metaclass_DockState.__constants['DOCK_TYPE_CONTACT_PROTOTYPE']

    @property
    def DOCK_TYPE_SPOT_DOCK(self):
        """Message constant 'DOCK_TYPE_SPOT_DOCK'."""
        return Metaclass_DockState.__constants['DOCK_TYPE_SPOT_DOCK']

    @property
    def LINK_STATUS_UNKNOWN(self):
        """Message constant 'LINK_STATUS_UNKNOWN'."""
        return Metaclass_DockState.__constants['LINK_STATUS_UNKNOWN']

    @property
    def LINK_STATUS_CONNECTED(self):
        """Message constant 'LINK_STATUS_CONNECTED'."""
        return Metaclass_DockState.__constants['LINK_STATUS_CONNECTED']

    @property
    def LINK_STATUS_ERROR(self):
        """Message constant 'LINK_STATUS_ERROR'."""
        return Metaclass_DockState.__constants['LINK_STATUS_ERROR']

    @property
    def LINK_STATUS_DETECTING(self):
        """Message constant 'LINK_STATUS_DETECTING'."""
        return Metaclass_DockState.__constants['LINK_STATUS_DETECTING']


class DockState(metaclass=Metaclass_DockState):
    """
    Message class 'DockState'.

    Constants:
      DOCK_STATUS_UNKNOWN
      DOCK_STATUS_DOCKED
      DOCK_STATUS_DOCKING
      DOCK_STATUS_UNDOCKED
      DOCK_STATUS_UNDOCKING
      DOCK_TYPE_UNKNOWN
      DOCK_TYPE_CONTACT_PROTOTYPE
      DOCK_TYPE_SPOT_DOCK
      LINK_STATUS_UNKNOWN
      LINK_STATUS_CONNECTED
      LINK_STATUS_ERROR
      LINK_STATUS_DETECTING
    """

    __slots__ = [
        '_status',
        '_dock_type',
        '_dock_id',
        '_power_status',
    ]

    _fields_and_field_types = {
        'status': 'uint8',
        'dock_type': 'uint8',
        'dock_id': 'uint32',
        'power_status': 'uint8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.status = kwargs.get('status', int())
        self.dock_type = kwargs.get('dock_type', int())
        self.dock_id = kwargs.get('dock_id', int())
        self.power_status = kwargs.get('power_status', int())

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
        if self.status != other.status:
            return False
        if self.dock_type != other.dock_type:
            return False
        if self.dock_id != other.dock_id:
            return False
        if self.power_status != other.power_status:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def status(self):
        """Message field 'status'."""
        return self._status

    @status.setter
    def status(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'status' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'status' field must be an unsigned integer in [0, 255]"
        self._status = value

    @property
    def dock_type(self):
        """Message field 'dock_type'."""
        return self._dock_type

    @dock_type.setter
    def dock_type(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'dock_type' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'dock_type' field must be an unsigned integer in [0, 255]"
        self._dock_type = value

    @property
    def dock_id(self):
        """Message field 'dock_id'."""
        return self._dock_id

    @dock_id.setter
    def dock_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'dock_id' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'dock_id' field must be an unsigned integer in [0, 4294967295]"
        self._dock_id = value

    @property
    def power_status(self):
        """Message field 'power_status'."""
        return self._power_status

    @power_status.setter
    def power_status(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'power_status' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'power_status' field must be an unsigned integer in [0, 255]"
        self._power_status = value

# generated from rosidl_generator_py/resource/_idl.py.em
# with input from dictionary_interface:srv\GetElement.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_GetElement_Request(type):
    """Metaclass of message 'GetElement_Request'."""

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
            module = import_type_support('dictionary_interface')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'dictionary_interface.srv.GetElement_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__get_element__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__get_element__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__get_element__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__get_element__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__get_element__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class GetElement_Request(metaclass=Metaclass_GetElement_Request):
    """Message class 'GetElement_Request'."""

    __slots__ = [
        '_n',
    ]

    _fields_and_field_types = {
        'n': 'uint8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.n = kwargs.get('n', int())

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
        if self.n != other.n:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def n(self):
        """Message field 'n'."""
        return self._n

    @n.setter
    def n(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'n' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'n' field must be an unsigned integer in [0, 255]"
        self._n = value


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_GetElement_Response(type):
    """Metaclass of message 'GetElement_Response'."""

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
            module = import_type_support('dictionary_interface')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'dictionary_interface.srv.GetElement_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__get_element__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__get_element__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__get_element__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__get_element__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__get_element__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class GetElement_Response(metaclass=Metaclass_GetElement_Response):
    """Message class 'GetElement_Response'."""

    __slots__ = [
        '_elm',
    ]

    _fields_and_field_types = {
        'elm': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.elm = kwargs.get('elm', str())

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
        if self.elm != other.elm:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def elm(self):
        """Message field 'elm'."""
        return self._elm

    @elm.setter
    def elm(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'elm' field must be of type 'str'"
        self._elm = value


class Metaclass_GetElement(type):
    """Metaclass of service 'GetElement'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('dictionary_interface')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'dictionary_interface.srv.GetElement')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__get_element

            from dictionary_interface.srv import _get_element
            if _get_element.Metaclass_GetElement_Request._TYPE_SUPPORT is None:
                _get_element.Metaclass_GetElement_Request.__import_type_support__()
            if _get_element.Metaclass_GetElement_Response._TYPE_SUPPORT is None:
                _get_element.Metaclass_GetElement_Response.__import_type_support__()


class GetElement(metaclass=Metaclass_GetElement):
    from dictionary_interface.srv._get_element import GetElement_Request as Request
    from dictionary_interface.srv._get_element import GetElement_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')

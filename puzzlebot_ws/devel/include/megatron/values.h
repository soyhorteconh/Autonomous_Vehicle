// Generated by gencpp from file megatron/values.msg
// DO NOT EDIT!


#ifndef MEGATRON_MESSAGE_VALUES_H
#define MEGATRON_MESSAGE_VALUES_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace megatron
{
template <class ContainerAllocator>
struct values_
{
  typedef values_<ContainerAllocator> Type;

  values_()
    : direction()
    , velocity()  {
    }
  values_(const ContainerAllocator& _alloc)
    : direction(_alloc)
    , velocity(_alloc)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> _direction_type;
  _direction_type direction;

   typedef std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> _velocity_type;
  _velocity_type velocity;





  typedef boost::shared_ptr< ::megatron::values_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::megatron::values_<ContainerAllocator> const> ConstPtr;

}; // struct values_

typedef ::megatron::values_<std::allocator<void> > values;

typedef boost::shared_ptr< ::megatron::values > valuesPtr;
typedef boost::shared_ptr< ::megatron::values const> valuesConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::megatron::values_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::megatron::values_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::megatron::values_<ContainerAllocator1> & lhs, const ::megatron::values_<ContainerAllocator2> & rhs)
{
  return lhs.direction == rhs.direction &&
    lhs.velocity == rhs.velocity;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::megatron::values_<ContainerAllocator1> & lhs, const ::megatron::values_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace megatron

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::megatron::values_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::megatron::values_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::megatron::values_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::megatron::values_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::megatron::values_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::megatron::values_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::megatron::values_<ContainerAllocator> >
{
  static const char* value()
  {
    return "4cf332b5242ea2dc6436208b418b4da2";
  }

  static const char* value(const ::megatron::values_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x4cf332b5242ea2dcULL;
  static const uint64_t static_value2 = 0x6436208b418b4da2ULL;
};

template<class ContainerAllocator>
struct DataType< ::megatron::values_<ContainerAllocator> >
{
  static const char* value()
  {
    return "megatron/values";
  }

  static const char* value(const ::megatron::values_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::megatron::values_<ContainerAllocator> >
{
  static const char* value()
  {
    return "string direction\n"
"string velocity\n"
;
  }

  static const char* value(const ::megatron::values_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::megatron::values_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.direction);
      stream.next(m.velocity);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct values_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::megatron::values_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::megatron::values_<ContainerAllocator>& v)
  {
    s << indent << "direction: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>::stream(s, indent + "  ", v.direction);
    s << indent << "velocity: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>::stream(s, indent + "  ", v.velocity);
  }
};

} // namespace message_operations
} // namespace ros

#endif // MEGATRON_MESSAGE_VALUES_H

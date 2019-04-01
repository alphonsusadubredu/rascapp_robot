// Generated by gencpp from file marvelmind_nav/hedge_pos_a.msg
// DO NOT EDIT!


#ifndef MARVELMIND_NAV_MESSAGE_HEDGE_POS_A_H
#define MARVELMIND_NAV_MESSAGE_HEDGE_POS_A_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace marvelmind_nav
{
template <class ContainerAllocator>
struct hedge_pos_a_
{
  typedef hedge_pos_a_<ContainerAllocator> Type;

  hedge_pos_a_()
    : address(0)
    , timestamp_ms(0)
    , x_m(0.0)
    , y_m(0.0)
    , z_m(0.0)
    , flags(0)  {
    }
  hedge_pos_a_(const ContainerAllocator& _alloc)
    : address(0)
    , timestamp_ms(0)
    , x_m(0.0)
    , y_m(0.0)
    , z_m(0.0)
    , flags(0)  {
  (void)_alloc;
    }



   typedef uint8_t _address_type;
  _address_type address;

   typedef int64_t _timestamp_ms_type;
  _timestamp_ms_type timestamp_ms;

   typedef double _x_m_type;
  _x_m_type x_m;

   typedef double _y_m_type;
  _y_m_type y_m;

   typedef double _z_m_type;
  _z_m_type z_m;

   typedef uint8_t _flags_type;
  _flags_type flags;





  typedef boost::shared_ptr< ::marvelmind_nav::hedge_pos_a_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::marvelmind_nav::hedge_pos_a_<ContainerAllocator> const> ConstPtr;

}; // struct hedge_pos_a_

typedef ::marvelmind_nav::hedge_pos_a_<std::allocator<void> > hedge_pos_a;

typedef boost::shared_ptr< ::marvelmind_nav::hedge_pos_a > hedge_pos_aPtr;
typedef boost::shared_ptr< ::marvelmind_nav::hedge_pos_a const> hedge_pos_aConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::marvelmind_nav::hedge_pos_a_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::marvelmind_nav::hedge_pos_a_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace marvelmind_nav

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'sensor_msgs': ['/opt/ros/kinetic/share/sensor_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'marvelmind_nav': ['/home/bill/bill_ros/ros_ws/src/marvelmind_nav/marvelmind_ros/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::marvelmind_nav::hedge_pos_a_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::marvelmind_nav::hedge_pos_a_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::marvelmind_nav::hedge_pos_a_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::marvelmind_nav::hedge_pos_a_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::marvelmind_nav::hedge_pos_a_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::marvelmind_nav::hedge_pos_a_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::marvelmind_nav::hedge_pos_a_<ContainerAllocator> >
{
  static const char* value()
  {
    return "674512ab330b329e8180ed5adabac64b";
  }

  static const char* value(const ::marvelmind_nav::hedge_pos_a_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x674512ab330b329eULL;
  static const uint64_t static_value2 = 0x8180ed5adabac64bULL;
};

template<class ContainerAllocator>
struct DataType< ::marvelmind_nav::hedge_pos_a_<ContainerAllocator> >
{
  static const char* value()
  {
    return "marvelmind_nav/hedge_pos_a";
  }

  static const char* value(const ::marvelmind_nav::hedge_pos_a_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::marvelmind_nav::hedge_pos_a_<ContainerAllocator> >
{
  static const char* value()
  {
    return "uint8 address\n\
int64 timestamp_ms\n\
float64 x_m\n\
float64 y_m\n\
float64 z_m\n\
uint8 flags\n\
";
  }

  static const char* value(const ::marvelmind_nav::hedge_pos_a_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::marvelmind_nav::hedge_pos_a_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.address);
      stream.next(m.timestamp_ms);
      stream.next(m.x_m);
      stream.next(m.y_m);
      stream.next(m.z_m);
      stream.next(m.flags);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct hedge_pos_a_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::marvelmind_nav::hedge_pos_a_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::marvelmind_nav::hedge_pos_a_<ContainerAllocator>& v)
  {
    s << indent << "address: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.address);
    s << indent << "timestamp_ms: ";
    Printer<int64_t>::stream(s, indent + "  ", v.timestamp_ms);
    s << indent << "x_m: ";
    Printer<double>::stream(s, indent + "  ", v.x_m);
    s << indent << "y_m: ";
    Printer<double>::stream(s, indent + "  ", v.y_m);
    s << indent << "z_m: ";
    Printer<double>::stream(s, indent + "  ", v.z_m);
    s << indent << "flags: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.flags);
  }
};

} // namespace message_operations
} // namespace ros

#endif // MARVELMIND_NAV_MESSAGE_HEDGE_POS_A_H

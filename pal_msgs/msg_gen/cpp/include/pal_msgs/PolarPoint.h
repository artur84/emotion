/* Auto-generated by genmsg_cpp for file /home/arturo/ros_works/pal/pal-ros-pkg/pal_msgs/msg/PolarPoint.msg */
#ifndef PAL_MSGS_MESSAGE_POLARPOINT_H
#define PAL_MSGS_MESSAGE_POLARPOINT_H
#include <string>
#include <vector>
#include <map>
#include <ostream>
#include "ros/serialization.h"
#include "ros/builtin_message_traits.h"
#include "ros/message_operations.h"
#include "ros/time.h"

#include "ros/macros.h"

#include "ros/assert.h"


namespace pal_msgs
{
template <class ContainerAllocator>
struct PolarPoint_ {
  typedef PolarPoint_<ContainerAllocator> Type;

  PolarPoint_()
  : rho(0.0)
  , theta(0.0)
  {
  }

  PolarPoint_(const ContainerAllocator& _alloc)
  : rho(0.0)
  , theta(0.0)
  {
  }

  typedef double _rho_type;
  double rho;

  typedef double _theta_type;
  double theta;


  typedef boost::shared_ptr< ::pal_msgs::PolarPoint_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::pal_msgs::PolarPoint_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct PolarPoint
typedef  ::pal_msgs::PolarPoint_<std::allocator<void> > PolarPoint;

typedef boost::shared_ptr< ::pal_msgs::PolarPoint> PolarPointPtr;
typedef boost::shared_ptr< ::pal_msgs::PolarPoint const> PolarPointConstPtr;


template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const  ::pal_msgs::PolarPoint_<ContainerAllocator> & v)
{
  ros::message_operations::Printer< ::pal_msgs::PolarPoint_<ContainerAllocator> >::stream(s, "", v);
  return s;}

} // namespace pal_msgs

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::pal_msgs::PolarPoint_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::pal_msgs::PolarPoint_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::pal_msgs::PolarPoint_<ContainerAllocator> > {
  static const char* value() 
  {
    return "a880a9e05853650b5374502b1e3413e1";
  }

  static const char* value(const  ::pal_msgs::PolarPoint_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0xa880a9e05853650bULL;
  static const uint64_t static_value2 = 0x5374502b1e3413e1ULL;
};

template<class ContainerAllocator>
struct DataType< ::pal_msgs::PolarPoint_<ContainerAllocator> > {
  static const char* value() 
  {
    return "pal_msgs/PolarPoint";
  }

  static const char* value(const  ::pal_msgs::PolarPoint_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::pal_msgs::PolarPoint_<ContainerAllocator> > {
  static const char* value() 
  {
    return "float64 rho\n\
float64 theta\n\
\n\
";
  }

  static const char* value(const  ::pal_msgs::PolarPoint_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct IsFixedSize< ::pal_msgs::PolarPoint_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::pal_msgs::PolarPoint_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.rho);
    stream.next(m.theta);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct PolarPoint_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::pal_msgs::PolarPoint_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const  ::pal_msgs::PolarPoint_<ContainerAllocator> & v) 
  {
    s << indent << "rho: ";
    Printer<double>::stream(s, indent + "  ", v.rho);
    s << indent << "theta: ";
    Printer<double>::stream(s, indent + "  ", v.theta);
  }
};


} // namespace message_operations
} // namespace ros

#endif // PAL_MSGS_MESSAGE_POLARPOINT_H

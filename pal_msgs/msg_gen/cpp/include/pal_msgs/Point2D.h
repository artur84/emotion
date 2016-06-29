/* Auto-generated by genmsg_cpp for file /home/arturo/ros_works/pal/pal-ros-pkg/pal_msgs/msg/Point2D.msg */
#ifndef PAL_MSGS_MESSAGE_POINT2D_H
#define PAL_MSGS_MESSAGE_POINT2D_H
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
struct Point2D_ {
  typedef Point2D_<ContainerAllocator> Type;

  Point2D_()
  : x(0.0)
  , y(0.0)
  {
  }

  Point2D_(const ContainerAllocator& _alloc)
  : x(0.0)
  , y(0.0)
  {
  }

  typedef double _x_type;
  double x;

  typedef double _y_type;
  double y;


  typedef boost::shared_ptr< ::pal_msgs::Point2D_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::pal_msgs::Point2D_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct Point2D
typedef  ::pal_msgs::Point2D_<std::allocator<void> > Point2D;

typedef boost::shared_ptr< ::pal_msgs::Point2D> Point2DPtr;
typedef boost::shared_ptr< ::pal_msgs::Point2D const> Point2DConstPtr;


template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const  ::pal_msgs::Point2D_<ContainerAllocator> & v)
{
  ros::message_operations::Printer< ::pal_msgs::Point2D_<ContainerAllocator> >::stream(s, "", v);
  return s;}

} // namespace pal_msgs

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::pal_msgs::Point2D_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::pal_msgs::Point2D_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::pal_msgs::Point2D_<ContainerAllocator> > {
  static const char* value() 
  {
    return "209f516d3eb691f0663e25cb750d67c1";
  }

  static const char* value(const  ::pal_msgs::Point2D_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0x209f516d3eb691f0ULL;
  static const uint64_t static_value2 = 0x663e25cb750d67c1ULL;
};

template<class ContainerAllocator>
struct DataType< ::pal_msgs::Point2D_<ContainerAllocator> > {
  static const char* value() 
  {
    return "pal_msgs/Point2D";
  }

  static const char* value(const  ::pal_msgs::Point2D_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::pal_msgs::Point2D_<ContainerAllocator> > {
  static const char* value() 
  {
    return "float64 x\n\
float64 y\n\
\n\
";
  }

  static const char* value(const  ::pal_msgs::Point2D_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct IsFixedSize< ::pal_msgs::Point2D_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::pal_msgs::Point2D_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.x);
    stream.next(m.y);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct Point2D_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::pal_msgs::Point2D_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const  ::pal_msgs::Point2D_<ContainerAllocator> & v) 
  {
    s << indent << "x: ";
    Printer<double>::stream(s, indent + "  ", v.x);
    s << indent << "y: ";
    Printer<double>::stream(s, indent + "  ", v.y);
  }
};


} // namespace message_operations
} // namespace ros

#endif // PAL_MSGS_MESSAGE_POINT2D_H


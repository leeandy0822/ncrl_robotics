// Generated by gencpp from file audio_common_msgs/AudioData.msg
// DO NOT EDIT!


#ifndef AUDIO_COMMON_MSGS_MESSAGE_AUDIODATA_H
#define AUDIO_COMMON_MSGS_MESSAGE_AUDIODATA_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace audio_common_msgs
{
template <class ContainerAllocator>
struct AudioData_
{
  typedef AudioData_<ContainerAllocator> Type;

  AudioData_()
    : data()  {
    }
  AudioData_(const ContainerAllocator& _alloc)
    : data(_alloc)  {
  (void)_alloc;
    }



   typedef std::vector<uint16_t, typename ContainerAllocator::template rebind<uint16_t>::other >  _data_type;
  _data_type data;





  typedef boost::shared_ptr< ::audio_common_msgs::AudioData_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::audio_common_msgs::AudioData_<ContainerAllocator> const> ConstPtr;

}; // struct AudioData_

typedef ::audio_common_msgs::AudioData_<std::allocator<void> > AudioData;

typedef boost::shared_ptr< ::audio_common_msgs::AudioData > AudioDataPtr;
typedef boost::shared_ptr< ::audio_common_msgs::AudioData const> AudioDataConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::audio_common_msgs::AudioData_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::audio_common_msgs::AudioData_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::audio_common_msgs::AudioData_<ContainerAllocator1> & lhs, const ::audio_common_msgs::AudioData_<ContainerAllocator2> & rhs)
{
  return lhs.data == rhs.data;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::audio_common_msgs::AudioData_<ContainerAllocator1> & lhs, const ::audio_common_msgs::AudioData_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace audio_common_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::audio_common_msgs::AudioData_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::audio_common_msgs::AudioData_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::audio_common_msgs::AudioData_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::audio_common_msgs::AudioData_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::audio_common_msgs::AudioData_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::audio_common_msgs::AudioData_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::audio_common_msgs::AudioData_<ContainerAllocator> >
{
  static const char* value()
  {
    return "e066daa5966378a57445687eb65bfa3b";
  }

  static const char* value(const ::audio_common_msgs::AudioData_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xe066daa5966378a5ULL;
  static const uint64_t static_value2 = 0x7445687eb65bfa3bULL;
};

template<class ContainerAllocator>
struct DataType< ::audio_common_msgs::AudioData_<ContainerAllocator> >
{
  static const char* value()
  {
    return "audio_common_msgs/AudioData";
  }

  static const char* value(const ::audio_common_msgs::AudioData_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::audio_common_msgs::AudioData_<ContainerAllocator> >
{
  static const char* value()
  {
    return "uint16[] data\n"
;
  }

  static const char* value(const ::audio_common_msgs::AudioData_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::audio_common_msgs::AudioData_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.data);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct AudioData_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::audio_common_msgs::AudioData_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::audio_common_msgs::AudioData_<ContainerAllocator>& v)
  {
    s << indent << "data[]" << std::endl;
    for (size_t i = 0; i < v.data.size(); ++i)
    {
      s << indent << "  data[" << i << "]: ";
      Printer<uint16_t>::stream(s, indent + "  ", v.data[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // AUDIO_COMMON_MSGS_MESSAGE_AUDIODATA_H

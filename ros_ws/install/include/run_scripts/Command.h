// Generated by gencpp from file run_scripts/Command.msg
// DO NOT EDIT!


#ifndef RUN_SCRIPTS_MESSAGE_COMMAND_H
#define RUN_SCRIPTS_MESSAGE_COMMAND_H

#include <ros/service_traits.h>


#include <run_scripts/CommandRequest.h>
#include <run_scripts/CommandResponse.h>


namespace run_scripts
{

struct Command
{

typedef CommandRequest Request;
typedef CommandResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct Command
} // namespace run_scripts


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::run_scripts::Command > {
  static const char* value()
  {
    return "601bd226f166ed265256e4c57d16fd6c";
  }

  static const char* value(const ::run_scripts::Command&) { return value(); }
};

template<>
struct DataType< ::run_scripts::Command > {
  static const char* value()
  {
    return "run_scripts/Command";
  }

  static const char* value(const ::run_scripts::Command&) { return value(); }
};


// service_traits::MD5Sum< ::run_scripts::CommandRequest> should match 
// service_traits::MD5Sum< ::run_scripts::Command > 
template<>
struct MD5Sum< ::run_scripts::CommandRequest>
{
  static const char* value()
  {
    return MD5Sum< ::run_scripts::Command >::value();
  }
  static const char* value(const ::run_scripts::CommandRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::run_scripts::CommandRequest> should match 
// service_traits::DataType< ::run_scripts::Command > 
template<>
struct DataType< ::run_scripts::CommandRequest>
{
  static const char* value()
  {
    return DataType< ::run_scripts::Command >::value();
  }
  static const char* value(const ::run_scripts::CommandRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::run_scripts::CommandResponse> should match 
// service_traits::MD5Sum< ::run_scripts::Command > 
template<>
struct MD5Sum< ::run_scripts::CommandResponse>
{
  static const char* value()
  {
    return MD5Sum< ::run_scripts::Command >::value();
  }
  static const char* value(const ::run_scripts::CommandResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::run_scripts::CommandResponse> should match 
// service_traits::DataType< ::run_scripts::Command > 
template<>
struct DataType< ::run_scripts::CommandResponse>
{
  static const char* value()
  {
    return DataType< ::run_scripts::Command >::value();
  }
  static const char* value(const ::run_scripts::CommandResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // RUN_SCRIPTS_MESSAGE_COMMAND_H

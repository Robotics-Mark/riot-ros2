//******************************************************************
// 
//  Generated by IDL to C++ Translator
//  
//  File name: Sample_GetParameterTypes_Request_.h
//  Source: rcl_interfaces/srv/dds_opensplice/Sample_GetParameterTypes_Request_.idl
//  Generated: timestamp removed to make the build reproducible
//  OpenSplice V6.4.140407OSS
//  
//******************************************************************
#ifndef _SAMPLE_GETPARAMETERTYPES_REQUEST__H_
#define _SAMPLE_GETPARAMETERTYPES_REQUEST__H_

#include "sacpp_mapping.h"
#include "sacpp_DDS_DCPS.h"
#include "GetParameterTypes_Request_.h"


namespace rcl_interfaces
{
   namespace srv
   {
      namespace dds_
      {
         struct Sample_GetParameterTypes_Request_;

         struct Sample_GetParameterTypes_Request_
         {
               DDS::ULongLong client_guid_0_;
               DDS::ULongLong client_guid_1_;
               DDS::LongLong sequence_number_;
               GetParameterTypes_Request_ request_;
         };

         typedef DDS_DCPSStruct_var < Sample_GetParameterTypes_Request_> Sample_GetParameterTypes_Request__var;
         typedef DDS_DCPSStruct_out < Sample_GetParameterTypes_Request_> Sample_GetParameterTypes_Request__out;
      }
   }
}




#endif 
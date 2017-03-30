#include "rmw/error_handling.h"
#include "rmw/rmw.h"

const char *
rmw_get_implementation_identifier(void)
{
  return NULL;
}

rmw_ret_t
rmw_init(void)
{
  return RMW_RET_OK;
}

rmw_node_t *
rmw_create_node(const char * name, size_t domain_id)
{
  (void) name;
  (void) domain_id;
  return NULL;
}

rmw_ret_t
rmw_destroy_node(rmw_node_t * node)
{
  (void) node;
  return RMW_RET_OK;
}

const rmw_guard_condition_t *
rmw_node_get_graph_guard_condition(const rmw_node_t * node)
{
  (void) node;
  return NULL;
}

rmw_publisher_t *
rmw_create_publisher(
  const rmw_node_t * node,
  const rosidl_message_type_support_t * type_support,
  const char * topic_name,
  const rmw_qos_profile_t * qos_policies)
{
  (void) node;
  (void) type_support;
  (void) topic_name;
  (void) qos_policies;
  return NULL;
}

rmw_ret_t
rmw_destroy_publisher(rmw_node_t * node, rmw_publisher_t * publisher)
{
  (void) node;
  (void) publisher;
  return RMW_RET_OK;
}

rmw_ret_t
rmw_publish(const rmw_publisher_t * publisher, const void * ros_message)
{
  (void) publisher;
  (void) ros_message;
  return RMW_RET_OK;
}

rmw_subscription_t *
rmw_create_subscription(
  const rmw_node_t * node,
  const rosidl_message_type_support_t * type_support,
  const char * topic_name,
  const rmw_qos_profile_t * qos_policies,
  bool ignore_local_publications)
{
  (void) node;
  (void) type_support;
  (void) topic_name;
  (void) qos_policies;
  (void) ignore_local_publications;
  return NULL;
}

rmw_ret_t
rmw_destroy_subscription(rmw_node_t * node, rmw_subscription_t * subscription)
{
  (void) node;
  (void) subscription;
  return RMW_RET_OK;
}

rmw_ret_t
rmw_take(const rmw_subscription_t * subscription, void * ros_message, bool * taken)
{
  (void) subscription;
  (void) ros_message;
  (void) taken;
  return RMW_RET_OK;
}

rmw_ret_t
rmw_take_with_info(
  const rmw_subscription_t * subscription,
  void * ros_message,
  bool * taken,
  rmw_message_info_t * message_info)
{
  (void) subscription;
  (void) ros_message;
  (void) taken;
  (void) message_info;
  return RMW_RET_OK;
}

rmw_client_t *
rmw_create_client(
  const rmw_node_t * node,
  const rosidl_service_type_support_t * type_support,
  const char * service_name,
  const rmw_qos_profile_t * qos_policies)
{
  (void) node;
  (void) type_support;
  (void) service_name;
  (void) qos_policies;
  return NULL;
}

rmw_ret_t
rmw_destroy_client(rmw_node_t * node, rmw_client_t * client)
{
  (void) node;
  (void) client;
  return RMW_RET_OK;
}

rmw_ret_t
rmw_send_request(
  const rmw_client_t * client,
  const void * ros_request,
  int64_t * sequence_id)
{
  (void) client;
  (void) ros_request;
  (void) sequence_id;
  return RMW_RET_OK;
}

rmw_ret_t
rmw_take_response(
  const rmw_client_t * client,
  rmw_request_id_t * request_header,
  void * ros_response,
  bool * taken)
{
  (void) client;
  (void) request_header;
  (void) ros_response;
  (void) taken;
  return RMW_RET_OK;
}

rmw_service_t *
rmw_create_service(
  const rmw_node_t * node,
  const rosidl_service_type_support_t * type_support,
  const char * service_name,
  const rmw_qos_profile_t * qos_policies)
{
  (void) node;
  (void) type_support;
  (void) service_name;
  (void) qos_policies;
  return NULL;
}

rmw_ret_t
rmw_destroy_service(rmw_node_t * node, rmw_service_t * service)
{
  (void) node;
  (void) service;
  return RMW_RET_OK;
}

rmw_ret_t
rmw_take_request(
  const rmw_service_t * service,
  rmw_request_id_t * request_header,
  void * ros_request,
  bool * taken)
{
  (void) service;
  (void) request_header;
  (void) ros_request;
  (void) taken;
  return RMW_RET_OK;
}

rmw_ret_t
rmw_send_response(
  const rmw_service_t * service,
  rmw_request_id_t * request_header,
  void * ros_response)
{
  (void) service;
  (void) request_header;
  (void) ros_response;
  return RMW_RET_OK;
}

rmw_guard_condition_t *
rmw_create_guard_condition(void)
{
  return NULL;
}

rmw_ret_t
rmw_destroy_guard_condition(rmw_guard_condition_t * guard_condition)
{
  (void) guard_condition;
  return RMW_RET_OK;
}

rmw_ret_t
rmw_trigger_guard_condition(const rmw_guard_condition_t * guard_condition)
{
  (void) guard_condition;
  return RMW_RET_OK;
}

rmw_waitset_t *
rmw_create_waitset(size_t max_conditions)
{
  (void) max_conditions;
  return NULL;
}

rmw_ret_t
rmw_destroy_waitset(rmw_waitset_t * waitset)
{
  (void) waitset;
  return RMW_RET_OK;
}

rmw_ret_t
rmw_wait(
  rmw_subscriptions_t * subscriptions,
  rmw_guard_conditions_t * guard_conditions,
  rmw_services_t * services,
  rmw_clients_t * clients,
  rmw_waitset_t * waitset,
  const rmw_time_t * wait_timeout)
{
  (void) subscriptions;
  (void) guard_conditions;
  (void) services;
  (void) clients;
  (void) waitset;
  (void) wait_timeout;
  return RMW_RET_OK;
}

rmw_ret_t
rmw_get_topic_names_and_types(
  const rmw_node_t * node,
  rmw_topic_names_and_types_t * topic_names_and_types)
{
  (void) node;
  (void) topic_names_and_types;
  return RMW_RET_OK;
}

rmw_ret_t
rmw_destroy_topic_names_and_types(
  rmw_topic_names_and_types_t * topic_names_and_types)
{
  (void) topic_names_and_types;
  return RMW_RET_OK;
}

rmw_ret_t
rmw_get_node_names(
  const rmw_node_t * node,
  rmw_string_array_t * node_names)
{
  (void) node;
  (void) node_names;
  return RMW_RET_OK;
}

rmw_ret_t
rmw_destroy_node_names(
  rmw_string_array_t * node_names)
{
  (void) node_names;
  return RMW_RET_OK;
}

rmw_ret_t
rmw_count_publishers(
  const rmw_node_t * node,
  const char * topic_name,
  size_t * count)
{
  (void) node;
  (void) topic_name;
  (void) count;
  return RMW_RET_OK;
}

rmw_ret_t
rmw_count_subscribers(
  const rmw_node_t * node,
  const char * topic_name,
  size_t * count)
{
  (void) node;
  (void) topic_name;
  (void) count;
  return RMW_RET_OK;
}

rmw_ret_t
rmw_get_gid_for_publisher(const rmw_publisher_t * publisher, rmw_gid_t * gid)
{
  (void) publisher;
  (void) gid;
  return RMW_RET_OK;
}

rmw_ret_t
rmw_compare_gids_equal(const rmw_gid_t * gid1, const rmw_gid_t * gid2, bool * result)
{
  (void) gid1;
  (void) gid2;
  (void) result;
  return RMW_RET_OK;
}

rmw_ret_t
rmw_service_server_is_available(
  const rmw_node_t * node,
  const rmw_client_t * client,
  bool * is_available)
{
  (void) node;
  (void) client;
  (void) is_available;
  return RMW_RET_OK;
}

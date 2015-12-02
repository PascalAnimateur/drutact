<?php
/**
 * @file
 * drutact_admin.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function drutact_admin_default_rules_configuration() {
  $items = array();
  $items['rules_file_assign_to_group'] = entity_import('rules_config', '{ "rules_file_assign_to_group" : {
      "LABEL" : "File - Assign to group",
      "PLUGIN" : "rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "og" ],
      "ACCESS_EXPOSED" : "1",
      "USES VARIABLES" : {
        "file" : { "label" : "File", "type" : "file" },
        "group" : { "label" : "Group", "type" : "node" }
      },
      "IF" : [
        { "og_entity_is_group_content" : { "entity" : [ "file" ] } },
        { "og_entity_is_group" : { "entity" : [ "group" ] } }
      ],
      "DO" : [
        { "og_group_content_add" : { "entity" : [ "file" ], "group" : [ "group" ] } }
      ]
    }
  }');
  $items['rules_node_assign_to_group'] = entity_import('rules_config', '{ "rules_node_assign_to_group" : {
      "LABEL" : "Node - Assign to group",
      "PLUGIN" : "rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "og" ],
      "ACCESS_EXPOSED" : "1",
      "USES VARIABLES" : {
        "node" : { "label" : "Node", "type" : "node" },
        "group" : { "label" : "Group", "type" : "node" }
      },
      "IF" : [
        { "og_entity_is_group_content" : { "entity" : [ "node" ] } },
        { "og_entity_is_group" : { "entity" : [ "group" ] } }
      ],
      "DO" : [
        { "og_group_content_add" : { "entity" : [ "node" ], "group" : [ "group" ] } }
      ]
    }
  }');
  $items['rules_user_subscribe_to_group'] = entity_import('rules_config', '{ "rules_user_subscribe_to_group" : {
      "LABEL" : "User - Subscribe to group",
      "PLUGIN" : "rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "og" ],
      "ACCESS_EXPOSED" : "1",
      "USES VARIABLES" : {
        "user" : { "label" : "User", "type" : "user" },
        "group" : { "label" : "Group", "type" : "node" }
      },
      "IF" : [ { "og_entity_is_group" : { "entity" : [ "group" ] } } ],
      "DO" : [
        { "og_subcribe_user" : { "user" : [ "user" ], "group" : [ "group" ] } }
      ]
    }
  }');
  return $items;
}

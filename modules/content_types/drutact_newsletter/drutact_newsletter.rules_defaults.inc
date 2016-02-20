<?php
/**
 * @file
 * drutact_newsletter.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function drutact_newsletter_default_rules_configuration() {
  $items = array();
  $items['rules_drutact_newsletter_subscribe_user'] = entity_import('rules_config', '{ "rules_drutact_newsletter_subscribe_user" : {
      "LABEL" : "DruTACT Newsletter - Subscribe user",
      "PLUGIN" : "action set",
      "OWNER" : "rules",
      "REQUIRES" : [ "simplenews_rules" ],
      "USES VARIABLES" : {
        "user" : { "label" : "User", "type" : "user" },
        "newsletter" : { "label" : "Newsletter", "type" : "simplenews_newsletter" }
      },
      "ACTION SET" : [
        { "simplenews_rules_action_subscribe" : {
            "mail" : [ "user:mail" ],
            "newsletter_id" : [ "newsletter:newsletter-id" ],
            "confirmation" : "2",
            "language" : [ "user:language" ]
          }
        }
      ]
    }
  }');
  return $items;
}

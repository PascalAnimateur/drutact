<?php
/**
 * @file
 * drutact_event_registration.features.inc
 */

/**
 * Implements hook_views_api().
 */
function drutact_event_registration_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_default_registration_state().
 */
function drutact_event_registration_default_registration_state() {
  $items = array();
  $items['canceled'] = entity_import('registration_state', '{
    "name" : "canceled",
    "label" : "Canceled",
    "description" : "Registrtaion has been canceled.",
    "default_state" : "0",
    "active" : "0",
    "held" : "0",
    "show_on_form" : "1",
    "weight" : "2"
  }');
  $items['complete'] = entity_import('registration_state', '{
    "name" : "complete",
    "label" : "Complete",
    "description" : "Registration has been completed.",
    "default_state" : "0",
    "active" : "1",
    "held" : "0",
    "show_on_form" : "1",
    "weight" : "0"
  }');
  $items['pending'] = entity_import('registration_state', '{
    "name" : "pending",
    "label" : "Pending",
    "description" : "Registration is pending.",
    "default_state" : "1",
    "active" : "1",
    "held" : "0",
    "show_on_form" : "1",
    "weight" : "1"
  }');
  return $items;
}

/**
 * Implements hook_default_registration_type().
 */
function drutact_event_registration_default_registration_type() {
  $items = array();
  $items['default_registration'] = entity_import('registration_type', '{
    "name" : "default_registration",
    "label" : "Default registration",
    "locked" : "0",
    "default_state" : "pending",
    "weight" : "0",
    "data" : { "held_expire" : "24", "held_expire_state" : "canceled" }
  }');
  return $items;
}

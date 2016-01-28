<?php
/**
 * @file
 * drutact_fr.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function drutact_fr_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_admin_show_component_translations_fr';
  $strongarm->value = 0;
  $export['features_admin_show_component_translations_fr'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_component_locked_translations_fr';
  $strongarm->value = 0;
  $export['features_component_locked_translations_fr'] = $strongarm;

  return $export;
}

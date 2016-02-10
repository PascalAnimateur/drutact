<?php
/**
 * @file
 * drutact_social_share.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function drutact_social_share_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_field_library__social_share';
  $strongarm->value = array(
    'view_modes' => array(
      'token' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_field_library__social_share'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'share42_library_path';
  $strongarm->value = 'profiles/drutact/modules/extra/drutact_social_share/share42';
  $export['share42_library_path'] = $strongarm;

  return $export;
}

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
  $strongarm->name = 'share42_library_path';
  $strongarm->value = 'profiles/drutact/modules/extra/drutact_social_share/share42';
  $export['share42_library_path'] = $strongarm;

  return $export;
}

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

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'share42_margin';
  $strongarm->value = '-70';
  $export['share42_margin'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'share42_top1';
  $strongarm->value = '200';
  $export['share42_top1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'share42_top2';
  $strongarm->value = '50';
  $export['share42_top2'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'share42_zero_counter';
  $strongarm->value = 0;
  $export['share42_zero_counter'] = $strongarm;

  return $export;
}

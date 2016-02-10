<?php
/**
 * @file
 * drutact_social_share.bundle_default.inc
 */

/**
 * Implements hook_field_library_bundle_defaults().
 */
function drutact_social_share_field_library_bundle_defaults() {
  $export = array();

  $field_library_bundle = new stdClass();
  $field_library_bundle->api_version = 1;
  $field_library_bundle->name = 'social_share';
  $field_library_bundle->title = 'Social share';
  $field_library_bundle->description = 'Social sharing widget for Facebook / Google+ / Linkedin / Twitter.';
  $export['social_share'] = $field_library_bundle;

  return $export;
}

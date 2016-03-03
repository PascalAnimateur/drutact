<?php
/**
 * @file
 * drutact_announcement.bundle_default.inc
 */

/**
 * Implements hook_field_library_bundle_defaults().
 */
function drutact_announcement_field_library_bundle_defaults() {
  $export = array();

  $field_library_bundle = new stdClass();
  $field_library_bundle->api_version = 1;
  $field_library_bundle->name = 'announcement';
  $field_library_bundle->title = 'Announcement';
  $field_library_bundle->description = 'Include content in announcements.';
  $export['announcement'] = $field_library_bundle;

  return $export;
}

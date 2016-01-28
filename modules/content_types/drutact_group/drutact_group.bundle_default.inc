<?php
/**
 * @file
 * drutact_group.bundle_default.inc
 */

/**
 * Implements hook_field_library_bundle_defaults().
 */
function drutact_group_field_library_bundle_defaults() {
  $export = array();

  $field_library_bundle = new stdClass();
  $field_library_bundle->api_version = 1;
  $field_library_bundle->name = 'group_content';
  $field_library_bundle->title = 'Group content';
  $field_library_bundle->description = 'Group audience and visibility.';
  $export['group_content'] = $field_library_bundle;

  return $export;
}

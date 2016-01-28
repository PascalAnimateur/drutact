<?php
/**
 * @file
 * drutact_tags.bundle_default.inc
 */

/**
 * Implements hook_field_library_bundle_defaults().
 */
function drutact_tags_field_library_bundle_defaults() {
  $export = array();

  $field_library_bundle = new stdClass();
  $field_library_bundle->api_version = 1;
  $field_library_bundle->name = 'tags';
  $field_library_bundle->title = 'Tags';
  $field_library_bundle->description = 'Tags field.';
  $export['tags'] = $field_library_bundle;

  return $export;
}

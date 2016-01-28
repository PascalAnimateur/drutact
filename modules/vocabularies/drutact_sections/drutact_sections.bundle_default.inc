<?php
/**
 * @file
 * drutact_sections.bundle_default.inc
 */

/**
 * Implements hook_field_library_bundle_defaults().
 */
function drutact_sections_field_library_bundle_defaults() {
  $export = array();

  $field_library_bundle = new stdClass();
  $field_library_bundle->api_version = 1;
  $field_library_bundle->name = 'sections';
  $field_library_bundle->title = 'Sections';
  $field_library_bundle->description = 'Sections field.';
  $export['sections'] = $field_library_bundle;

  return $export;
}

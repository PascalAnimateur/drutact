<?php
/**
 * @file
 * drutact_node.bundle_default.inc
 */

/**
 * Implements hook_field_library_bundle_defaults().
 */
function drutact_node_field_library_bundle_defaults() {
  $export = array();

  $field_library_bundle = new stdClass();
  $field_library_bundle->api_version = 1;
  $field_library_bundle->name = 'image';
  $field_library_bundle->title = 'Image';
  $field_library_bundle->description = 'Image field.';
  $export['image'] = $field_library_bundle;

  $field_library_bundle = new stdClass();
  $field_library_bundle->api_version = 1;
  $field_library_bundle->name = 'title';
  $field_library_bundle->title = 'Title';
  $field_library_bundle->description = 'Title field.';
  $export['title'] = $field_library_bundle;

  return $export;
}

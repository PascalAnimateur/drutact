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
  $field_library_bundle->name = 'node_title';
  $field_library_bundle->title = 'Node - Title';
  $field_library_bundle->description = 'Title field.';
  $export['node_title'] = $field_library_bundle;

  return $export;
}

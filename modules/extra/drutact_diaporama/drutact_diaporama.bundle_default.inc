<?php
/**
 * @file
 * drutact_diaporama.bundle_default.inc
 */

/**
 * Implements hook_field_library_bundle_defaults().
 */
function drutact_diaporama_field_library_bundle_defaults() {
  $export = array();

  $field_library_bundle = new stdClass();
  $field_library_bundle->api_version = 1;
  $field_library_bundle->name = 'diaporama';
  $field_library_bundle->title = 'Diaporama';
  $field_library_bundle->description = 'Diaporama field.';
  $export['diaporama'] = $field_library_bundle;

  return $export;
}

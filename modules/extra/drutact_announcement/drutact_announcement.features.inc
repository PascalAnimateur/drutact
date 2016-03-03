<?php
/**
 * @file
 * drutact_announcement.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function drutact_announcement_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_library" && $api == "bundle_default") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

<?php
/**
 * @file
 * drutact_node.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function drutact_node_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_library" && $api == "bundle_default") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function drutact_node_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

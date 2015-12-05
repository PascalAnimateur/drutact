<?php
/**
 * @file
 * drutact_charts.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function drutact_charts_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

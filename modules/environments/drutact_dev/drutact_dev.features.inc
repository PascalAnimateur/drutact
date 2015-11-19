<?php
/**
 * @file
 * drutact_dev.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function drutact_dev_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

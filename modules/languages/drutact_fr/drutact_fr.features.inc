<?php
/**
 * @file
 * drutact_fr.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function drutact_fr_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

<?php
/**
 * @file
 * drutact_email.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function drutact_email_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

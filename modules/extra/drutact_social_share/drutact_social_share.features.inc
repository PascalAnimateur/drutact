<?php
/**
 * @file
 * drutact_social_share.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function drutact_social_share_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

<?php
/**
 * @file
 * drutact_print_pdf.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function drutact_print_pdf_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

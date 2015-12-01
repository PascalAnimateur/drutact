<?php
/**
 * @file
 * drutact_media.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function drutact_media_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "file_entity" && $api == "file_default_displays") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_image_default_styles().
 */
function drutact_media_image_default_styles() {
  $styles = array();

  // Exported image style: responsive.
  $styles['responsive'] = array(
    'label' => 'Responsive (100%)',
    'effects' => array(
      1 => array(
        'name' => 'image_dimensions',
        'data' => array(),
        'weight' => 0,
      ),
    ),
  );

  return $styles;
}

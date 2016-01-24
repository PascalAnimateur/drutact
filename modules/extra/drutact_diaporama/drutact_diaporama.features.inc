<?php
/**
 * @file
 * drutact_diaporama.features.inc
 */

/**
 * Implements hook_views_api().
 */
function drutact_diaporama_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function drutact_diaporama_image_default_styles() {
  $styles = array();

  // Exported image style: diaporama.
  $styles['diaporama'] = array(
    'label' => 'Diaporama',
    'effects' => array(
      1 => array(
        'name' => 'focal_point_scale_and_crop',
        'data' => array(
          'width' => 1140,
          'height' => 300,
          'focal_point_advanced' => array(
            'shift_x' => '',
            'shift_y' => '',
          ),
        ),
        'weight' => 1,
      ),
      2 => array(
        'name' => 'image_dimensions',
        'data' => array(),
        'weight' => 2,
      ),
    ),
  );

  return $styles;
}

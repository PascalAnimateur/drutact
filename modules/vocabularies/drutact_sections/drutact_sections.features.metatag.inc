<?php
/**
 * @file
 * drutact_sections.features.metatag.inc
 */

/**
 * Implements hook_metatag_export_default().
 */
function drutact_sections_metatag_export_default() {
  $config = array();

  // Exported Metatag config instance: taxonomy_term:sections.
  $config['taxonomy_term:sections'] = array(
    'instance' => 'taxonomy_term:sections',
    'config' => array(),
  );

  return $config;
}

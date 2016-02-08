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
    'config' => array(
      'title' => array(
        'value' => '[term:name] | [site:name]',
      ),
      'description' => array(
        'value' => '[term:description]',
      ),
      'shortlink' => array(
        'value' => '[term:url:shorten]',
      ),
      'og:description' => array(
        'value' => '[term:description]',
      ),
      'og:title' => array(
        'value' => '[term:name]',
      ),
    ),
  );

  return $config;
}

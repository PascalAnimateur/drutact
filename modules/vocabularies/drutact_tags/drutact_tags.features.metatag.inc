<?php
/**
 * @file
 * drutact_tags.features.metatag.inc
 */

/**
 * Implements hook_metatag_export_default().
 */
function drutact_tags_metatag_export_default() {
  $config = array();

  // Exported Metatag config instance: taxonomy_term.
  $config['taxonomy_term'] = array(
    'instance' => 'taxonomy_term',
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

  // Exported Metatag config instance: taxonomy_term:tags.
  $config['taxonomy_term:tags'] = array(
    'instance' => 'taxonomy_term:tags',
    'config' => array(),
  );

  return $config;
}

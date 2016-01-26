<?php
/**
 * @file
 * drutact_resource.features.metatag.inc
 */

/**
 * Implements hook_metatag_export_default().
 */
function drutact_resource_metatag_export_default() {
  $config = array();

  // Exported Metatag config instance: node:resource.
  $config['node:resource'] = array(
    'instance' => 'node:resource',
    'config' => array(
      'keywords' => array(
        'value' => '[node:field-tags]',
      ),
      'image_src' => array(
        'value' => '[node:field-image]',
      ),
      'og:image' => array(
        'value' => '[node:field-image]',
      ),
    ),
  );

  return $config;
}

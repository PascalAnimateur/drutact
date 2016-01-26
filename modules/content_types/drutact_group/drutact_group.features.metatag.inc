<?php
/**
 * @file
 * drutact_group.features.metatag.inc
 */

/**
 * Implements hook_metatag_export_default().
 */
function drutact_group_metatag_export_default() {
  $config = array();

  // Exported Metatag config instance: node:group.
  $config['node:group'] = array(
    'instance' => 'node:group',
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

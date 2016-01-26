<?php
/**
 * @file
 * drutact_page.features.metatag.inc
 */

/**
 * Implements hook_metatag_export_default().
 */
function drutact_page_metatag_export_default() {
  $config = array();

  // Exported Metatag config instance: node:page.
  $config['node:page'] = array(
    'instance' => 'node:page',
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

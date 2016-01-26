<?php
/**
 * @file
 * drutact_webform.features.metatag.inc
 */

/**
 * Implements hook_metatag_export_default().
 */
function drutact_webform_metatag_export_default() {
  $config = array();

  // Exported Metatag config instance: node:webform.
  $config['node:webform'] = array(
    'instance' => 'node:webform',
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

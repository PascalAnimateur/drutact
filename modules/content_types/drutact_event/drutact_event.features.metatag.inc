<?php
/**
 * @file
 * drutact_event.features.metatag.inc
 */

/**
 * Implements hook_metatag_export_default().
 */
function drutact_event_metatag_export_default() {
  $config = array();

  // Exported Metatag config instance: node:event.
  $config['node:event'] = array(
    'instance' => 'node:event',
    'config' => array(
      'keywords' => array(
        'value' => '[node:field-tags]',
      ),
      'image_src' => array(
        'value' => '[node:field-image]',
      ),
      'shortlink' => array(
        'value' => '[node:url:shorten]',
      ),
      'og:image' => array(
        'value' => '[node:field-image]',
      ),
    ),
  );

  return $config;
}

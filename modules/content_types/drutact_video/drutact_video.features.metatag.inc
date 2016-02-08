<?php
/**
 * @file
 * drutact_video.features.metatag.inc
 */

/**
 * Implements hook_metatag_export_default().
 */
function drutact_video_metatag_export_default() {
  $config = array();

  // Exported Metatag config instance: node:video.
  $config['node:video'] = array(
    'instance' => 'node:video',
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
      'og:type' => array(
        'value' => 'video.other',
      ),
      'og:title' => array(
        'value' => '[node:title-field]',
      ),
      'og:image' => array(
        'value' => '[node:field-image]',
      ),
      'og:video:url' => array(
        'value' => '[node:field_converted_video]',
      ),
      'video:tag' => array(
        'value' => '[node:field-tags]',
      ),
    ),
  );

  return $config;
}

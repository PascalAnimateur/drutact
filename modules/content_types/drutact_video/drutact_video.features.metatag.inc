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
    'config' => array(),
  );

  return $config;
}

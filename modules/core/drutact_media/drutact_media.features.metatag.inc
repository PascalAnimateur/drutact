<?php
/**
 * @file
 * drutact_media.features.metatag.inc
 */

/**
 * Implements hook_metatag_export_default().
 */
function drutact_media_metatag_export_default() {
  $config = array();

  // Exported Metatag config instance: file.
  $config['file'] = array(
    'instance' => 'file',
    'config' => array(),
  );

  // Exported Metatag config instance: file:audio.
  $config['file:audio'] = array(
    'instance' => 'file:audio',
    'config' => array(),
  );

  // Exported Metatag config instance: file:document.
  $config['file:document'] = array(
    'instance' => 'file:document',
    'config' => array(),
  );

  // Exported Metatag config instance: file:image.
  $config['file:image'] = array(
    'instance' => 'file:image',
    'config' => array(),
  );

  // Exported Metatag config instance: file:video.
  $config['file:video'] = array(
    'instance' => 'file:video',
    'config' => array(),
  );

  return $config;
}

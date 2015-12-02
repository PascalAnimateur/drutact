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
    'config' => array(),
  );

  return $config;
}

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
    'config' => array(),
  );

  return $config;
}

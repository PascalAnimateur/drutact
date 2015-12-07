<?php
/**
 * @file
 * drutact_newsletter.features.metatag.inc
 */

/**
 * Implements hook_metatag_export_default().
 */
function drutact_newsletter_metatag_export_default() {
  $config = array();

  // Exported Metatag config instance: node:simplenews.
  $config['node:simplenews'] = array(
    'instance' => 'node:simplenews',
    'config' => array(),
  );

  return $config;
}

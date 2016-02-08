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
    'config' => array(
      'keywords' => array(
        'value' => '[node:field-tags]',
      ),
      'shortlink' => array(
        'value' => '[node:url:shorten]',
      ),
    ),
  );

  // Exported Metatag config instance: simplenews_newsletter.
  $config['simplenews_newsletter'] = array(
    'instance' => 'simplenews_newsletter',
    'config' => array(
      'description' => array(
        'value' => '[simplenews_newsletter:description]',
      ),
    ),
  );

  return $config;
}

<?php
/**
 * @file
 * drutact_article.features.metatag.inc
 */

/**
 * Implements hook_metatag_export_default().
 */
function drutact_article_metatag_export_default() {
  $config = array();

  // Exported Metatag config instance: node:article.
  $config['node:article'] = array(
    'instance' => 'node:article',
    'config' => array(),
  );

  return $config;
}

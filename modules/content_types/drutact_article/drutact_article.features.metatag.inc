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

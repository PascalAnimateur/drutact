<?php
/**
 * @file
 * drutact_wysiwyg.features.filter.inc
 */

/**
 * Implements hook_filter_default_formats().
 */
function drutact_wysiwyg_filter_default_formats() {
  $formats = array();

  // Exported format: HTML.
  $formats['html'] = array(
    'format' => 'html',
    'name' => 'HTML',
    'cache' => 1,
    'status' => 1,
    'weight' => 0,
    'filters' => array(
      'filter_autop' => array(
        'weight' => 0,
        'status' => 1,
        'settings' => array(),
      ),
      'filter_url' => array(
        'weight' => 0,
        'status' => 1,
        'settings' => array(
          'filter_url_length' => 72,
        ),
      ),
      'media_filter' => array(
        'weight' => 2,
        'status' => 1,
        'settings' => array(),
      ),
      'pathologic' => array(
        'weight' => 50,
        'status' => 1,
        'settings' => array(
          'settings_source' => 'global',
          'local_paths' => '',
          'protocol_style' => 'full',
          'local_settings' => array(
            'protocol_style' => 'full',
            'local_paths' => '',
          ),
        ),
      ),
    ),
  );

  // Exported format: Simple.
  $formats['plain_text'] = array(
    'format' => 'plain_text',
    'name' => 'Simple',
    'cache' => 1,
    'status' => 1,
    'weight' => 10,
    'filters' => array(
      'filter_html_escape' => array(
        'weight' => 0,
        'status' => 1,
        'settings' => array(),
      ),
      'filter_url' => array(
        'weight' => 1,
        'status' => 1,
        'settings' => array(
          'filter_url_length' => 72,
        ),
      ),
      'filter_autop' => array(
        'weight' => 2,
        'status' => 1,
        'settings' => array(),
      ),
      'pathologic' => array(
        'weight' => 50,
        'status' => 1,
        'settings' => array(
          'settings_source' => 'global',
          'local_paths' => '',
          'protocol_style' => 'full',
          'local_settings' => array(
            'protocol_style' => 'full',
            'local_paths' => '',
          ),
        ),
      ),
    ),
  );

  return $formats;
}

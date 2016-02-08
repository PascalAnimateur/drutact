<?php
/**
 * @file
 * drutact_video.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function drutact_video_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function drutact_video_node_info() {
  $items = array(
    'video' => array(
      'name' => t('Video'),
      'base' => 'node_content',
      'description' => t('Use <em>videos</em> to publish video content along with a description. Media files are automatically transcoded and optimized for the web.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}

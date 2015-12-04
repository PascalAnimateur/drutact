<?php
/**
 * @file
 * drutact_webform.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function drutact_webform_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function drutact_webform_node_info() {
  $items = array(
    'webform' => array(
      'name' => t('Webform'),
      'base' => 'node_content',
      'description' => t('Use <em>webforms</em> to create questionnaires accessible to users. Submission results and statistics are recorded and accessible to privileged users.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => t('You must first save the webform with a title and optional description before being able to add components (questions, instructions, etc.)'),
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}

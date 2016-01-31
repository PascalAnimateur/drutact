<?php
/**
 * @file
 * drutact_newsletter.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function drutact_newsletter_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
  if ($module == "ultimate_cron" && $api == "ultimate_cron") {
    return array("version" => "3");
  }
}

/**
 * Implements hook_views_api().
 */
function drutact_newsletter_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function drutact_newsletter_node_info() {
  $items = array(
    'simplenews' => array(
      'name' => t('Newsletter issue'),
      'base' => 'node_content',
      'description' => t('Use <em>newsletter issues</em> to send out information to subscribed email addresses.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}

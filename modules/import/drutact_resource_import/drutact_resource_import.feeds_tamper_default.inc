<?php
/**
 * @file
 * drutact_resource_import.feeds_tamper_default.inc
 */

/**
 * Implements hook_feeds_tamper_default().
 */
function drutact_resource_import_feeds_tamper_default() {
  $export = array();

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'import_resources_csv-attached_files-explode_attached_files';
  $feeds_tamper->importer = 'import_resources_csv';
  $feeds_tamper->source = 'attached_files';
  $feeds_tamper->plugin_id = 'explode';
  $feeds_tamper->settings = array(
    'separator' => '|',
    'limit' => '',
    'real_separator' => '|',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Explode - Attached files';
  $export['import_resources_csv-attached_files-explode_attached_files'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'import_resources_csv-date_created-strtotime_created';
  $feeds_tamper->importer = 'import_resources_csv';
  $feeds_tamper->source = 'date_created';
  $feeds_tamper->plugin_id = 'strtotime';
  $feeds_tamper->settings = array();
  $feeds_tamper->weight = 1;
  $feeds_tamper->description = 'String to Unix timestamp - Created';
  $export['import_resources_csv-date_created-strtotime_created'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'import_resources_csv-language-default_value_language';
  $feeds_tamper->importer = 'import_resources_csv';
  $feeds_tamper->source = 'language';
  $feeds_tamper->plugin_id = 'default_value';
  $feeds_tamper->settings = array(
    'default_value' => 'en',
    'only_if_empty' => 1,
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Set value or default value - Language';
  $export['import_resources_csv-language-default_value_language'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'import_resources_csv-tags-explode_tags';
  $feeds_tamper->importer = 'import_resources_csv';
  $feeds_tamper->source = 'tags';
  $feeds_tamper->plugin_id = 'explode';
  $feeds_tamper->settings = array(
    'separator' => '|',
    'limit' => '',
    'real_separator' => '|',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Explode - Tags';
  $export['import_resources_csv-tags-explode_tags'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'import_resources_csv-web_links_title-explode_web_links_title';
  $feeds_tamper->importer = 'import_resources_csv';
  $feeds_tamper->source = 'web_links_title';
  $feeds_tamper->plugin_id = 'explode';
  $feeds_tamper->settings = array(
    'separator' => '|',
    'limit' => '',
    'real_separator' => '|',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Explode - Web links (title)';
  $export['import_resources_csv-web_links_title-explode_web_links_title'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'import_resources_csv-web_links_url-explode_web_links_url';
  $feeds_tamper->importer = 'import_resources_csv';
  $feeds_tamper->source = 'web_links_url';
  $feeds_tamper->plugin_id = 'explode';
  $feeds_tamper->settings = array(
    'separator' => '|',
    'limit' => '',
    'real_separator' => '|',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Explode - Web links (URL)';
  $export['import_resources_csv-web_links_url-explode_web_links_url'] = $feeds_tamper;

  return $export;
}

<?php
/**
 * @file
 * drutact_group_import.feeds_tamper_default.inc
 */

/**
 * Implements hook_feeds_tamper_default().
 */
function drutact_group_import_feeds_tamper_default() {
  $export = array();

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'import_groups_csv-group_visibility-find_replace_public';
  $feeds_tamper->importer = 'import_groups_csv';
  $feeds_tamper->source = 'group_visibility';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => 'Public',
    'replace' => '0',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 0,
    'regex' => FALSE,
    'func' => 'str_ireplace',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Find replace - Public';
  $export['import_groups_csv-group_visibility-find_replace_public'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'import_groups_csv-group_visibility-find_replace_secret';
  $feeds_tamper->importer = 'import_groups_csv';
  $feeds_tamper->source = 'group_visibility';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => 'Secret',
    'replace' => '1',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 0,
    'regex' => FALSE,
    'func' => 'str_ireplace',
  );
  $feeds_tamper->weight = 1;
  $feeds_tamper->description = 'Find replace - Secret';
  $export['import_groups_csv-group_visibility-find_replace_secret'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'import_groups_csv-language-default_value_language';
  $feeds_tamper->importer = 'import_groups_csv';
  $feeds_tamper->source = 'language';
  $feeds_tamper->plugin_id = 'default_value';
  $feeds_tamper->settings = array(
    'default_value' => 'en',
    'only_if_empty' => 1,
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Set value or default value - Language';
  $export['import_groups_csv-language-default_value_language'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'import_groups_csv-tags-explode_tags';
  $feeds_tamper->importer = 'import_groups_csv';
  $feeds_tamper->source = 'tags';
  $feeds_tamper->plugin_id = 'explode';
  $feeds_tamper->settings = array(
    'separator' => '|',
    'limit' => '',
    'real_separator' => '|',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Explode - Tags';
  $export['import_groups_csv-tags-explode_tags'] = $feeds_tamper;

  return $export;
}

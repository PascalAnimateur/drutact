<?php
/**
 * @file
 * drutact_user_import.feeds_tamper_default.inc
 */

/**
 * Implements hook_feeds_tamper_default().
 */
function drutact_user_import_feeds_tamper_default() {
  $export = array();

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'import_users_csv-groups-explode_groups';
  $feeds_tamper->importer = 'import_users_csv';
  $feeds_tamper->source = 'groups';
  $feeds_tamper->plugin_id = 'explode';
  $feeds_tamper->settings = array(
    'separator' => '|',
    'limit' => '',
    'real_separator' => '|',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Explode - Groups';
  $export['import_users_csv-groups-explode_groups'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'import_users_csv-roles-explode';
  $feeds_tamper->importer = 'import_users_csv';
  $feeds_tamper->source = 'roles';
  $feeds_tamper->plugin_id = 'explode';
  $feeds_tamper->settings = array(
    'separator' => '|',
    'limit' => '',
    'real_separator' => '|',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Explode';
  $export['import_users_csv-roles-explode'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'import_users_csv-username-convert_case_username';
  $feeds_tamper->importer = 'import_users_csv';
  $feeds_tamper->source = 'username';
  $feeds_tamper->plugin_id = 'convert_case';
  $feeds_tamper->settings = array(
    'mode' => '1',
  );
  $feeds_tamper->weight = 1;
  $feeds_tamper->description = 'Convert case - Username';
  $export['import_users_csv-username-convert_case_username'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'import_users_csv-username-rewrite_username';
  $feeds_tamper->importer = 'import_users_csv';
  $feeds_tamper->source = 'username';
  $feeds_tamper->plugin_id = 'rewrite';
  $feeds_tamper->settings = array(
    'text' => '[given_name].[family_name]',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Rewrite - Username';
  $export['import_users_csv-username-rewrite_username'] = $feeds_tamper;

  return $export;
}

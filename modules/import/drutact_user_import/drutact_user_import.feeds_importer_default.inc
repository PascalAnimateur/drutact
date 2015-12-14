<?php
/**
 * @file
 * drutact_user_import.feeds_importer_default.inc
 */

/**
 * Implements hook_feeds_importer_default().
 */
function drutact_user_import_feeds_importer_default() {
  $export = array();

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'import_users_csv';
  $feeds_importer->config = array(
    'name' => 'Import Users (CSV)',
    'description' => 'Import users from CSV file.',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'csv',
        'direct' => 0,
        'directory' => 'private://feeds/users_csv',
        'allowed_schemes' => array(
          'public' => 'public',
          'private' => 'private',
        ),
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsCSVParser',
      'config' => array(
        'delimiter' => ',',
        'no_headers' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsUserProcessor',
      'config' => array(
        'roles' => array(
          200153887 => 0,
          30037204 => 0,
        ),
        'status' => '1',
        'defuse_mail' => 0,
        'user_roles_create' => 0,
        'mappings' => array(
          0 => array(
            'source' => 'given_name',
            'target' => 'field_full_name:given',
            'unique' => FALSE,
          ),
          1 => array(
            'source' => 'family_name',
            'target' => 'field_full_name:family',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'email',
            'target' => 'mail',
            'unique' => 1,
          ),
          3 => array(
            'source' => 'username',
            'target' => 'name',
            'unique' => 1,
          ),
          4 => array(
            'source' => 'password',
            'target' => 'pass',
            'pass_encryption' => 'none',
          ),
          5 => array(
            'source' => 'encrypted_password',
            'target' => 'pass',
            'pass_encryption' => 'sha512',
          ),
          6 => array(
            'source' => 'roles',
            'target' => 'roles_list',
            'unique' => FALSE,
          ),
          7 => array(
            'source' => 'language',
            'target' => 'language',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '2',
        'update_non_existent' => 'skip',
        'input_format' => 'plain_text',
        'skip_hash_check' => 0,
        'bundle' => 'user',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => 1800,
    'expire_period' => 3600,
    'import_on_create' => TRUE,
    'process_in_background' => FALSE,
  );
  $export['import_users_csv'] = $feeds_importer;

  return $export;
}

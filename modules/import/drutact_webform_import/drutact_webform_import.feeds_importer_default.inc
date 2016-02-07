<?php
/**
 * @file
 * drutact_webform_import.feeds_importer_default.inc
 */

/**
 * Implements hook_feeds_importer_default().
 */
function drutact_webform_import_feeds_importer_default() {
  $export = array();

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'import_webforms_csv';
  $feeds_importer->config = array(
    'name' => 'Import Webforms (CSV)',
    'description' => 'Import webforms from CSV file.',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'csv',
        'direct' => 0,
        'directory' => 'private://feeds/webforms_csv',
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
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'expire' => '-1',
        'author' => 0,
        'authorize' => 0,
        'mappings' => array(
          0 => array(
            'source' => 'id',
            'target' => 'nid',
            'unique' => 1,
          ),
          1 => array(
            'source' => 'language',
            'target' => 'language',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'author',
            'target' => 'user_name',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'date_created',
            'target' => 'created',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'published',
            'target' => 'status',
            'unique' => FALSE,
          ),
          5 => array(
            'source' => 'front_page',
            'target' => 'promote',
            'unique' => FALSE,
          ),
          6 => array(
            'source' => 'sticky',
            'target' => 'sticky',
            'unique' => FALSE,
          ),
          7 => array(
            'source' => 'vignette_image',
            'target' => 'field_image:uri',
            'unique' => FALSE,
          ),
          8 => array(
            'source' => 'title_en',
            'target' => 'title_field:et:en',
            'unique' => FALSE,
          ),
          9 => array(
            'source' => 'title_fr',
            'target' => 'title_field:et:fr',
            'unique' => FALSE,
          ),
          10 => array(
            'source' => 'body_en',
            'target' => 'body:et:en',
            'unique' => FALSE,
          ),
          11 => array(
            'source' => 'body_fr',
            'target' => 'body:et:fr',
            'unique' => FALSE,
          ),
          12 => array(
            'source' => 'tags',
            'target' => 'field_tags',
            'term_search' => '0',
            'autocreate' => 1,
          ),
        ),
        'update_existing' => '2',
        'update_non_existent' => 'skip',
        'input_format' => 'html',
        'skip_hash_check' => 0,
        'bundle' => 'webform',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['import_webforms_csv'] = $feeds_importer;

  return $export;
}

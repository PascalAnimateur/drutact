<?php
/**
 * @file
 * drutact_event_import.feeds_importer_default.inc
 */

/**
 * Implements hook_feeds_importer_default().
 */
function drutact_event_import_feeds_importer_default() {
  $export = array();

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'import_events_csv';
  $feeds_importer->config = array(
    'name' => 'Import Events (CSV)',
    'description' => 'Import events from CSV file.',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'csv',
        'direct' => 0,
        'directory' => 'private://feeds/events_csv',
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
            'source' => 'title',
            'target' => 'title',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'event_date_start',
            'target' => 'field_event_date:start',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'event_date_end',
            'target' => 'field_event_date:end',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'language',
            'target' => 'language',
            'unique' => FALSE,
          ),
          5 => array(
            'source' => 'author',
            'target' => 'user_name',
            'unique' => FALSE,
          ),
          6 => array(
            'source' => 'date_created',
            'target' => 'created',
            'unique' => FALSE,
          ),
          7 => array(
            'source' => 'published',
            'target' => 'status',
            'unique' => FALSE,
          ),
          8 => array(
            'source' => 'front_page',
            'target' => 'promote',
            'unique' => FALSE,
          ),
          9 => array(
            'source' => 'sticky',
            'target' => 'sticky',
            'unique' => FALSE,
          ),
          10 => array(
            'source' => 'vignette_image',
            'target' => 'field_image:uri',
            'unique' => FALSE,
          ),
          11 => array(
            'source' => 'sections',
            'target' => 'field_sections',
            'term_search' => '0',
            'autocreate' => 1,
          ),
          12 => array(
            'source' => 'tags',
            'target' => 'field_tags',
            'term_search' => '0',
            'autocreate' => 1,
          ),
          13 => array(
            'source' => 'body',
            'target' => 'body:et:und',
            'unique' => FALSE,
          ),
          14 => array(
            'source' => 'summary',
            'target' => 'body:summary',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '2',
        'update_non_existent' => 'skip',
        'input_format' => 'html',
        'skip_hash_check' => 0,
        'bundle' => 'event',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['import_events_csv'] = $feeds_importer;

  return $export;
}

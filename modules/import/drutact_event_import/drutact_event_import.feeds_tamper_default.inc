<?php
/**
 * @file
 * drutact_event_import.feeds_tamper_default.inc
 */

/**
 * Implements hook_feeds_tamper_default().
 */
function drutact_event_import_feeds_tamper_default() {
  $export = array();

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'import_events_csv-date_created-strtotime_created';
  $feeds_tamper->importer = 'import_events_csv';
  $feeds_tamper->source = 'date_created';
  $feeds_tamper->plugin_id = 'strtotime';
  $feeds_tamper->settings = array();
  $feeds_tamper->weight = 1;
  $feeds_tamper->description = 'String to Unix timestamp - Created';
  $export['import_events_csv-date_created-strtotime_created'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'import_events_csv-event_date_end-explode_event_date_end';
  $feeds_tamper->importer = 'import_events_csv';
  $feeds_tamper->source = 'event_date_end';
  $feeds_tamper->plugin_id = 'explode';
  $feeds_tamper->settings = array(
    'separator' => '|',
    'limit' => '',
    'real_separator' => '|',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Explode - Event date (end)';
  $export['import_events_csv-event_date_end-explode_event_date_end'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'import_events_csv-event_date_end-strtotime_event_date_end';
  $feeds_tamper->importer = 'import_events_csv';
  $feeds_tamper->source = 'event_date_end';
  $feeds_tamper->plugin_id = 'strtotime';
  $feeds_tamper->settings = '';
  $feeds_tamper->weight = 1;
  $feeds_tamper->description = 'String to Unix timestamp - Event date (end)';
  $export['import_events_csv-event_date_end-strtotime_event_date_end'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'import_events_csv-event_date_start-explode_event_date_start';
  $feeds_tamper->importer = 'import_events_csv';
  $feeds_tamper->source = 'event_date_start';
  $feeds_tamper->plugin_id = 'explode';
  $feeds_tamper->settings = array(
    'separator' => '|',
    'limit' => '',
    'real_separator' => '|',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Explode - Event date (start)';
  $export['import_events_csv-event_date_start-explode_event_date_start'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'import_events_csv-event_date_start-strtotime_event_date_start';
  $feeds_tamper->importer = 'import_events_csv';
  $feeds_tamper->source = 'event_date_start';
  $feeds_tamper->plugin_id = 'strtotime';
  $feeds_tamper->settings = '';
  $feeds_tamper->weight = 1;
  $feeds_tamper->description = 'String to Unix timestamp - Event date (start)';
  $export['import_events_csv-event_date_start-strtotime_event_date_start'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'import_events_csv-sections-explode_sections';
  $feeds_tamper->importer = 'import_events_csv';
  $feeds_tamper->source = 'sections';
  $feeds_tamper->plugin_id = 'explode';
  $feeds_tamper->settings = array(
    'separator' => '|',
    'limit' => '',
    'real_separator' => '|',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Explode - Sections';
  $export['import_events_csv-sections-explode_sections'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'import_events_csv-tags-explode_tags';
  $feeds_tamper->importer = 'import_events_csv';
  $feeds_tamper->source = 'tags';
  $feeds_tamper->plugin_id = 'explode';
  $feeds_tamper->settings = array(
    'separator' => '|',
    'limit' => '',
    'real_separator' => '|',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Explode - Tags';
  $export['import_events_csv-tags-explode_tags'] = $feeds_tamper;

  return $export;
}

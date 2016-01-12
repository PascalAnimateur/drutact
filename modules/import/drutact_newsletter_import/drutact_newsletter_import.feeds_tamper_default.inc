<?php
/**
 * @file
 * drutact_newsletter_import.feeds_tamper_default.inc
 */

/**
 * Implements hook_feeds_tamper_default().
 */
function drutact_newsletter_import_feeds_tamper_default() {
  $export = array();

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'import_newsletter_issues_csv-date_created-strtotime_created';
  $feeds_tamper->importer = 'import_newsletter_issues_csv';
  $feeds_tamper->source = 'date_created';
  $feeds_tamper->plugin_id = 'strtotime';
  $feeds_tamper->settings = '';
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'String to Unix timestamp - Created';
  $export['import_newsletter_issues_csv-date_created-strtotime_created'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'import_newsletter_issues_csv-subscription_lists-explode_subscription_lists';
  $feeds_tamper->importer = 'import_newsletter_issues_csv';
  $feeds_tamper->source = 'subscription_lists';
  $feeds_tamper->plugin_id = 'explode';
  $feeds_tamper->settings = array(
    'separator' => '|',
    'limit' => '',
    'real_separator' => '|',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Explode - Subscription lists';
  $export['import_newsletter_issues_csv-subscription_lists-explode_subscription_lists'] = $feeds_tamper;

  return $export;
}
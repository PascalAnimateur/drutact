<?php
/**
 * @file
 * drutact_newsletter.ultimate_cron.inc
 */

/**
 * Implements hook_default_ultimate_cron_job().
 */
function drutact_newsletter_default_ultimate_cron_job() {
  $export = array();

  $job = new stdClass();
  $job->disabled = FALSE; /* Edit this to true to make a default job disabled initially */
  $job->api_version = 3;
  $job->name = 'simplenews_cron';
  $job->title = 'Process simplenews mail spool';
  $job->settings = array(
    'scheduler' => array(
      'name' => '',
      'crontab' => array(
        'rules' => array(
          0 => '*/2+@ * * * *',
        ),
      ),
    ),
    'launcher' => array(
      'name' => '',
      'serial' => array(),
    ),
    'logger' => array(
      'name' => '',
      'database' => array(),
    ),
    'settings' => array(
      'poorman' => array(),
      'general' => array(),
      'queue' => array(),
    ),
  );
  $export['simplenews_cron'] = $job;

  return $export;
}

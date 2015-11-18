<?php
/**
 * @file
 * DruTACT installation profile.
 */

/**
 * Implements hook_update_projects_alter().
 */
function drutact_update_projects_alter(&$projects)
{
  unset($projects['drutact_admin']);
  unset($projects['drutact_core']);
  unset($projects['drutact_media']);
  unset($projects['drutact_seo']);
  unset($projects['drutact_wysiwyg']);
}

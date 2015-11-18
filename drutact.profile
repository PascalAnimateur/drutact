<?php
/**
 * @file
 * DruTACT installation profile.
 */

/**
 * DruTACT Editor role ID.
 */
define('DRUTACT_EDITOR_RID', 200153887);

/**
 * DruTACT Administrator role ID.
 */
define('DRUTACT_ADMINISTRATOR_RID', 30037204);

/**
 * Implements hook_update_projects_alter().
 */
function drutact_update_projects_alter(&$projects)
{
  unset($projects['drutact_admin']);
  unset($projects['drutact_core']);
  unset($projects['drutact_media']);
  unset($projects['drutact_seo']);
  unset($projects['drutact_user']);
  unset($projects['drutact_wysiwyg']);
}

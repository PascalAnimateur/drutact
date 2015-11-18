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

/**
 * Helper function to set default module permissions.
 *
 * @param $rid_permissions
 * Array containing permissions per-role, for example:
 *   array(
 *     DRUPAL_AUTHENTICATED_RID => array(
 *         'permission system name',
 *       ),
 *     DRUTACT_EDITOR_RID => array(
 *         'permission system name',
 *       ),
 *   )
 */
function _drutact_default_module_permissions($rid_permissions) {
  foreach ($rid_permissions as $rid => $permissions) {
    if (!empty($permissions) && user_role_load($rid)) {
      user_role_change_permissions($rid, array_fill_keys($permissions, TRUE));
    }
  }
}

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
  // Disable checking for updates on all DruTACT modules.
  foreach ($projects as $name => $project) {
    if (strpos($name, 'drutact_') !== FALSE) {
      unset($projects[$name]);
    }
  }
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

/**
 * Helper function to set a module's default weight.
 */
function _drutact_default_module_weight($module, $weight) {
  db_update('system')
    ->fields(array('weight' => $weight))
    ->condition('type', 'module')
    ->condition('name', $module)
    ->execute();
}

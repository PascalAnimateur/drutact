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
 * Helper function to set default content type permissions.
 */
function _drutact_default_content_type_permissions($content_type) {
  // Content type permissions for Editor.
  user_role_change_permissions(DRUTACT_EDITOR_RID, array(
    "create $content_type content" => TRUE,
    "delete any $content_type content" => TRUE,
    "delete own $content_type content" => TRUE,
    "edit any $content_type content" => TRUE,
    "edit own $content_type content" => TRUE,
  ));
  // Content type permissions for Administrator.
  user_role_change_permissions(DRUTACT_ADMINISTRATOR_RID, array(
    "create $content_type content" => TRUE,
    "delete any $content_type content" => TRUE,
    "delete own $content_type content" => TRUE,
    "edit any $content_type content" => TRUE,
    "edit own $content_type content" => TRUE,
  ));
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

/**
 * Helper function to disable an array of views.
 *
 * @param $views
 * Array containing names of views to disable.
 */
function _drutact_disable_views($views) {
  $status = variable_get('views_defaults', array());
  foreach ($views as $view) {
    $status[$view] = TRUE;
  }
  variable_set('views_defaults', $status);
}

<?php
/**
 * @file
 * Code for the DruTACT installation profile.
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
 * Helper function to set default content type permissions.
 */
function _drutact_default_content_type_permissions($content_type) {
  // Content type permissions for authenticated user.
  user_role_change_permissions(DRUPAL_AUTHENTICATED_RID, array(
    "delete own $content_type content" => TRUE,
    "edit own $content_type content" => TRUE,
  ));
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
 * Helper function to set default vocabulary permissions.
 */
function _drutact_default_vocabulary_permissions($vocabulary_name) {
  $vocabulary = taxonomy_vocabulary_machine_name_load($vocabulary_name);
  if (!isset($vocabulary)) {
    return;
  }
  $vid = $vocabulary->vid;
  _drutact_default_module_permissions(array(
    DRUPAL_ANONYMOUS_RID => array(),
    DRUPAL_AUTHENTICATED_RID => array(),
    DRUTACT_EDITOR_RID => array(
      "add terms in $vocabulary_name",
      "delete terms in $vid",
      "edit terms in $vid",
    ),
    DRUTACT_ADMINISTRATOR_RID => array(
      "add terms in $vocabulary_name",
      "delete terms in $vid",
      "edit terms in $vid",
    ),
  ));
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

/**
 * Implements hook_update_projects_alter().
 *
 * Disable updates for sandbox modules.
 */
function drutact_update_projects_alter(&$projects)
{
  // Disable updates for sandbox modules.
  unset($projects['admin_menu_language']);
  unset($projects['multilingual_content_type']);
  unset($projects['multilingual_taxonomy']);
  unset($projects['og_file_entity']);
  unset($projects['og_role_access']);
  unset($projects['roles_simple_translate']);
  unset($projects['top_description']);
}

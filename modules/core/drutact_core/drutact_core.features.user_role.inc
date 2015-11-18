<?php
/**
 * @file
 * drutact_core.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function drutact_core_user_default_roles() {
  $roles = array();

  // Exported role: Administrator.
  $roles['Administrator'] = array(
    'name' => 'Administrator',
    'weight' => 3,
    'machine_name' => 'administrator',
  );

  // Exported role: Editor.
  $roles['Editor'] = array(
    'name' => 'Editor',
    'weight' => 2,
    'machine_name' => 'editor',
  );

  return $roles;
}

<?php
/**
 * @file
 * drutact_group.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function drutact_group_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'group_access'.
  $field_bases['group_access'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'group_access',
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'no_ui' => TRUE,
    'settings' => array(
      'allowed_values' => array(
        0 => 'Public',
        1 => 'Secret',
      ),
      'allowed_values_function' => '',
      'allowed_values_no_localization' => 0,
      'entity_translation_sync' => FALSE,
      'profile2_private' => FALSE,
    ),
    'translatable' => 0,
    'type' => 'list_boolean',
  );

  // Exported field_base: 'group_group'.
  $field_bases['group_group'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'group_group',
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        0 => 'Not a group',
        1 => 'Group',
      ),
      'allowed_values_function' => '',
      'entity_translation_sync' => FALSE,
    ),
    'translatable' => 0,
    'type' => 'list_boolean',
  );

  // Translatables created/updated by the Localize Fields (localize_fields) module.
  t('Public', array(), array('context' => 'field:group_access:allowed_values'));
  t('Secret', array(), array('context' => 'field:group_access:allowed_values'));
  t('Not a group', array(), array('context' => 'field:group_group:allowed_values'));
  t('Group', array(), array('context' => 'field:group_group:allowed_values'));


  return $field_bases;
}

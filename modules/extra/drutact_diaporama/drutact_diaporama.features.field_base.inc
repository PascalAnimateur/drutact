<?php
/**
 * @file
 * drutact_diaporama.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function drutact_diaporama_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_diaporama'.
  $field_bases['field_diaporama'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_diaporama',
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        0 => 'Do not include in diaporama',
        1 => 'Include in diaporama',
      ),
      'allowed_values_function' => '',
      'allowed_values_no_localization' => 0,
      'entity_translation_sync' => FALSE,
      'profile2_private' => FALSE,
    ),
    'translatable' => 0,
    'type' => 'list_boolean',
  );

  // Translatables created/updated by the Localize Fields (localize_fields) module.
  t('Do not include in diaporama', array(), array('context' => 'field:field_diaporama:allowed_values'));
  t('Include in diaporama', array(), array('context' => 'field:field_diaporama:allowed_values'));


  return $field_bases;
}

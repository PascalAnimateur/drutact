<?php
/**
 * @file
 * drutact_diaporama.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function drutact_diaporama_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'field_library-diaporama-field_diaporama'.
  $field_instances['field_library-diaporama-field_diaporama'] = array(
    'bundle' => 'diaporama',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'field_library',
    'field_name' => 'field_diaporama',
    'label' => 'Diaporama',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'display_label' => 0,
      ),
      'type' => 'options_onoff',
      'weight' => -4,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.

  // Translatables created/updated by the Localize Fields (localize_fields) module.
  t('Diaporama', array(), array('context' => 'field_instance:diaporama-field_diaporama:label'));


  return $field_instances;
}

<?php
/**
 * @file
 * drutact_announcement.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function drutact_announcement_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'field_library-announcement-field_announcement'.
  $field_instances['field_library-announcement-field_announcement'] = array(
    'bundle' => 'announcement',
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
        'weight' => 10,
      ),
    ),
    'entity_type' => 'field_library',
    'field_name' => 'field_announcement',
    'label' => 'Include in announcements',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'display_label' => 1,
      ),
      'type' => 'options_onoff',
      'weight' => 10,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.

  // Translatables created/updated by the Localize Fields (localize_fields) module.
  t('Include in announcements', array(), array('context' => 'field_instance:announcement-field_announcement:label'));


  return $field_instances;
}

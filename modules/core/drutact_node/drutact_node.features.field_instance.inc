<?php
/**
 * @file
 * drutact_node.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function drutact_node_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'field_library-node_title-title_field'.
  $field_instances['field_library-node_title-title_field'] = array(
    'bundle' => 'node_title',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => -50,
      ),
    ),
    'entity_type' => 'field_library',
    'field_name' => 'title_field',
    'label' => 'Title',
    'required' => 1,
    'settings' => array(
      'linkit' => array(
        'button_text' => 'Search',
        'enable' => 0,
        'profile' => '',
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => -50,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.

  // Translatables created/updated by the Localize Fields (localize_fields) module.
  t('Title', array(), array('context' => 'field_instance:node_title-title_field:label'));


  return $field_instances;
}

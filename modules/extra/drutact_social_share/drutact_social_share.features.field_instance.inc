<?php
/**
 * @file
 * drutact_social_share.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function drutact_social_share_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'field_library-social_share-field_social_share'.
  $field_instances['field_library-social_share-field_social_share'] = array(
    'bundle' => 'social_share',
    'deleted' => 0,
    'description' => 'Checking this option will display the social sharing icons for this entity.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'share42',
        'settings' => array(),
        'type' => 'field_share42_formatter_default',
        'weight' => 40,
      ),
    ),
    'entity_type' => 'field_library',
    'field_name' => 'field_social_share',
    'label' => 'Social share',
    'required' => 1,
    'settings' => array(
      'description' => '',
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
      'zero_counter' => 1,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'share42',
      'settings' => array(),
      'type' => 'field_share42_widget_default',
      'weight' => 40,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.

  // Translatables created/updated by the Localize Fields (localize_fields) module.
  t('Social share', array(), array('context' => 'field_instance:social_share-field_social_share:label'));
  t('Checking this option will display the social sharing icons for this entity.', array(), array('context' => 'field_instance:social_share-field_social_share:description'));


  return $field_instances;
}

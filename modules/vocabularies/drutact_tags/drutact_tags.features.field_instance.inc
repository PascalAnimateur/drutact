<?php
/**
 * @file
 * drutact_tags.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function drutact_tags_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'field_library-tags-field_tags'.
  $field_instances['field_library-tags-field_tags'] = array(
    'bundle' => 'tags',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 10,
      ),
    ),
    'entity_type' => 'field_library',
    'field_name' => 'field_tags',
    'label' => 'Tags',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'select2widget',
      'settings' => array(
        'select2widgetajax' => array(
          'allow_new' => 1,
          'match_operator' => 'STARTS_WITH',
          'min_char' => 1,
          'separator' => '|',
          'set_level' => 0,
          'width' => '100%',
        ),
      ),
      'type' => 'select2widgetajax',
      'weight' => 10,
    ),
  );

  // Exported field_instance: 'taxonomy_term-tags-description_field'.
  $field_instances['taxonomy_term-tags-description_field'] = array(
    'bundle' => 'tags',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Describe what this tag is about.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'description_field',
    'label' => 'Description',
    'required' => 0,
    'settings' => array(
      'display_summary' => 0,
      'entity_translation_sync' => FALSE,
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
        'rows' => 20,
        'summary_rows' => 5,
      ),
      'type' => 'text_textarea_with_summary',
      'weight' => 0,
    ),
  );

  // Exported field_instance: 'taxonomy_term-tags-name_field'.
  $field_instances['taxonomy_term-tags-name_field'] = array(
    'bundle' => 'tags',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'The name or title of this tag.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => -50,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'name_field',
    'label' => 'Name',
    'required' => 1,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'hide_label' => array(
        'entity' => 0,
        'page' => 0,
      ),
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
  t('Tags', array(), array('context' => 'field_instance:tags-field_tags:label'));
  t('Description', array(), array('context' => 'field_instance:tags-description_field:label'));
  t('Describe what this tag is about.', array(), array('context' => 'field_instance:tags-description_field:description'));
  t('Name', array(), array('context' => 'field_instance:tags-name_field:label'));
  t('The name or title of this tag.', array(), array('context' => 'field_instance:tags-name_field:description'));


  return $field_instances;
}

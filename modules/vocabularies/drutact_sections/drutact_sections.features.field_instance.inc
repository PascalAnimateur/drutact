<?php
/**
 * @file
 * drutact_sections.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function drutact_sections_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'field_library-sections-field_sections'.
  $field_instances['field_library-sections-field_sections'] = array(
    'bundle' => 'sections',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Assign this content to specific section(s) of the site.',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 11,
      ),
    ),
    'entity_type' => 'field_library',
    'field_name' => 'field_sections',
    'label' => 'Section(s)',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'term_reference_tree',
      'settings' => array(
        'cascading_selection' => 0,
        'filter_view' => '',
        'leaves_only' => 1,
        'max_depth' => '',
        'parent_term_id' => '',
        'select_parents' => 0,
        'start_minimized' => 0,
        'token_display' => '',
        'track_list' => 0,
      ),
      'type' => 'term_reference_tree',
      'weight' => 11,
    ),
  );

  // Exported field_instance: 'taxonomy_term-sections-description_field'.
  $field_instances['taxonomy_term-sections-description_field'] = array(
    'bundle' => 'sections',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Describe what this section is about.',
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

  // Exported field_instance: 'taxonomy_term-sections-name_field'.
  $field_instances['taxonomy_term-sections-name_field'] = array(
    'bundle' => 'sections',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'The name or title of this section.',
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
  t('Section(s)', array(), array('context' => 'field_instance:sections-field_sections:label'));
  t('Assign this content to specific section(s) of the site.', array(), array('context' => 'field_instance:sections-field_sections:description'));
  t('Description', array(), array('context' => 'field_instance:sections-description_field:label'));
  t('Describe what this section is about.', array(), array('context' => 'field_instance:sections-description_field:description'));
  t('Name', array(), array('context' => 'field_instance:sections-name_field:label'));
  t('The name or title of this section.', array(), array('context' => 'field_instance:sections-name_field:description'));


  return $field_instances;
}

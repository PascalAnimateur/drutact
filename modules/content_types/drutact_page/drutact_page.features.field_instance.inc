<?php
/**
 * @file
 * drutact_page.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function drutact_page_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-page-body'.
  $field_instances['node-page-body'] = array(
    'bundle' => 'page',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'The body of this page. Use the \'Edit summary\' link above to set a shorter, text-only version that will be used to describe the page when it\'s displayed as a teaser (i.e. in a list on the front page).',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'trim_length' => 600,
        ),
        'type' => 'text_summary_or_trimmed',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'body',
    'label' => 'Body',
    'required' => 0,
    'settings' => array(
      'display_summary' => 1,
      'entity_translation_sync' => FALSE,
      'linkit' => array(
        'button_text' => 'Search',
        'enable' => 0,
        'profile' => '',
      ),
      'text_processing' => 1,
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

  // Exported field_instance: 'node-page-field_image'.
  $field_instances['node-page-field_image'] = array(
    'bundle' => 'page',
    'deleted' => 0,
    'description' => 'Image accompanying the content.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => 'responsive',
        ),
        'type' => 'image',
        'weight' => -5,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'image_link' => 'content',
          'image_style' => 'thumbnail',
        ),
        'type' => 'image',
        'weight' => -5,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_image',
    'label' => 'Image',
    'required' => 0,
    'settings' => array(
      'alt_field' => 0,
      'default_image' => 0,
      'entity_translation_sync' => FALSE,
      'file_directory' => 'images',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'media',
      'settings' => array(
        'allowed_schemes' => array(
          'private' => 0,
          'public' => 'public',
        ),
        'allowed_types' => array(
          'audio' => 0,
          'document' => 0,
          'image' => 'image',
          'video' => 0,
        ),
        'browser_plugins' => array(
          'media_default--media_browser_1' => 0,
          'media_default--media_browser_my_files' => 0,
          'upload' => 0,
        ),
      ),
      'type' => 'media_generic',
      'weight' => -5,
    ),
  );

  // Exported field_instance: 'node-page-field_sections'.
  $field_instances['node-page-field_sections'] = array(
    'bundle' => 'page',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Assign this content to specific section(s) of the site.',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'hierarchical_term_formatter',
        'settings' => array(
          'display' => 'all',
          'link' => 1,
          'separator' => ' » ',
          'wrap' => 'none',
        ),
        'type' => 'hierarchical_term_formatter',
        'weight' => 10,
      ),
      'teaser' => array(
        'label' => 'inline',
        'module' => 'hierarchical_term_formatter',
        'settings' => array(
          'display' => 'all',
          'link' => 1,
          'separator' => ' » ',
          'wrap' => 'none',
        ),
        'type' => 'hierarchical_term_formatter',
        'weight' => 10,
      ),
    ),
    'entity_type' => 'node',
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
        'start_minimized' => 1,
        'token_display' => '',
        'track_list' => 0,
      ),
      'type' => 'term_reference_tree',
      'weight' => 10,
    ),
  );

  // Exported field_instance: 'node-page-field_tags'.
  $field_instances['node-page-field_tags'] = array(
    'bundle' => 'page',
    'deleted' => 0,
    'description' => 'Enter individual keywords to describe this content\'s topic.',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 11,
      ),
      'teaser' => array(
        'label' => 'inline',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 11,
      ),
    ),
    'entity_type' => 'node',
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
      'weight' => 11,
    ),
  );

  // Exported field_instance: 'node-page-title_field'.
  $field_instances['node-page-title_field'] = array(
    'bundle' => 'page',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'The title of this page.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => -50,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => -50,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'title_field',
    'label' => 'Title',
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
  t('Body', array(), array('context' => 'field_instance:page-body:label'));
  t('The body of this page. Use the \'Edit summary\' link above to set a shorter, text-only version that will be used to describe the page when it\'s displayed as a teaser (i.e. in a list on the front page).', array(), array('context' => 'field_instance:page-body:description'));
  t('Image', array(), array('context' => 'field_instance:page-field_image:label'));
  t('Image accompanying the content.', array(), array('context' => 'field_instance:page-field_image:description'));
  t('Section(s)', array(), array('context' => 'field_instance:page-field_sections:label'));
  t('Assign this content to specific section(s) of the site.', array(), array('context' => 'field_instance:page-field_sections:description'));
  t('Tags', array(), array('context' => 'field_instance:page-field_tags:label'));
  t('Enter individual keywords to describe this content\'s topic.', array(), array('context' => 'field_instance:page-field_tags:description'));
  t('Title', array(), array('context' => 'field_instance:page-title_field:label'));
  t('The title of this page.', array(), array('context' => 'field_instance:page-title_field:description'));


  return $field_instances;
}

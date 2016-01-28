<?php
/**
 * @file
 * drutact_group.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function drutact_group_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance:
  // 'field_library-group_content-group_content_access'.
  $field_instances['field_library-group_content-group_content_access'] = array(
    'bundle' => 'group_content',
    'default_value' => array(
      0 => array(
        'value' => 1,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_key',
        'weight' => 21,
      ),
    ),
    'entity_type' => 'field_library',
    'field_name' => 'group_content_access',
    'label' => 'Group content visibility',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 21,
    ),
  );

  // Exported field_instance: 'field_library-group_content-og_group_ref'.
  $field_instances['field_library-group_content-og_group_ref'] = array(
    'bundle' => 'group_content',
    'default_value' => NULL,
    'default_value_function' => 'entityreference_prepopulate_field_default_value',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'entityreference',
        'settings' => array(
          'link' => 1,
        ),
        'type' => 'entityreference_label',
        'weight' => 20,
      ),
    ),
    'entity_type' => 'field_library',
    'field_name' => 'og_group_ref',
    'label' => 'Groups audience',
    'required' => 0,
    'settings' => array(
      'behaviors' => array(
        'og_widget' => array(
          'access_override' => 0,
          'admin' => array(
            'widget_type' => 'select2widgetajax',
          ),
          'default' => array(
            'widget_type' => 'options_buttons',
          ),
          'status' => TRUE,
        ),
        'prepopulate' => array(
          'action' => 'disable',
          'action_on_edit' => 1,
          'fallback' => 'none',
          'providers' => array(
            'og_context' => 0,
            'url' => 1,
          ),
          'skip_perm' => 0,
          'status' => 1,
        ),
      ),
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'og',
      'settings' => array(),
      'type' => 'og_complex',
      'weight' => 20,
    ),
  );

  // Exported field_instance: 'node-group-body'.
  $field_instances['node-group-body'] = array(
    'bundle' => 'group',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'The description of this group. Use the \'Edit summary\' link above to set a shorter, text-only version that will be used to describe the content when it\'s displayed as a teaser (i.e. in a list on the front page).',
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
    'label' => 'Description',
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

  // Exported field_instance: 'node-group-field_image'.
  $field_instances['node-group-field_image'] = array(
    'bundle' => 'group',
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

  // Exported field_instance: 'node-group-field_sections'.
  $field_instances['node-group-field_sections'] = array(
    'bundle' => 'group',
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

  // Exported field_instance: 'node-group-field_tags'.
  $field_instances['node-group-field_tags'] = array(
    'bundle' => 'group',
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
          'separator' => ',',
          'set_level' => 0,
          'width' => '100%',
        ),
      ),
      'type' => 'select2widgetajax',
      'weight' => 11,
    ),
  );

  // Exported field_instance: 'node-group-group_access'.
  $field_instances['node-group-group_access'] = array(
    'bundle' => 'group',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => 'Determine if this group will be visible to everyone (public) or only to its members (secret).',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_key',
        'weight' => 21,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_key',
        'weight' => 21,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'group_access',
    'label' => 'Group visibility',
    'required' => 1,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'view modes' => array(
      'full' => array(
        'label' => 'above',
        'type' => 'options_onoff',
      ),
      'teaser' => array(
        'label' => 'above',
        'type' => 'options_onoff',
      ),
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => -10,
    ),
    'widget_type' => 'options_select',
  );

  // Exported field_instance: 'node-group-group_group'.
  $field_instances['node-group-group_group'] = array(
    'bundle' => 'group',
    'default_value' => array(
      0 => array(
        'value' => 1,
      ),
    ),
    'deleted' => 0,
    'description' => 'Determine if this is an OG group.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 20,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 20,
      ),
    ),
    'display_label' => 1,
    'entity_type' => 'node',
    'field_name' => 'group_group',
    'label' => 'Group',
    'required' => FALSE,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'view modes' => array(
      'full' => array(
        'custom settings' => FALSE,
        'label' => 'Full',
        'type' => 'og_group_subscribe',
      ),
      'teaser' => array(
        'custom settings' => FALSE,
        'label' => 'Teaser',
        'type' => 'og_group_subscribe',
      ),
    ),
    'widget' => array(
      'module' => 'options',
      'settings' => array(
        'display_label' => 0,
        'og_hide' => TRUE,
      ),
      'type' => 'options_onoff',
      'weight' => -11,
    ),
  );

  // Exported field_instance: 'node-group-title_field'.
  $field_instances['node-group-title_field'] = array(
    'bundle' => 'group',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'The title or name of this group.',
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
  t('Group content visibility', array(), array('context' => 'field_instance:group_content-group_content_access:label'));
  t('Groups audience', array(), array('context' => 'field_instance:group_content-og_group_ref:label'));
  t('Description', array(), array('context' => 'field_instance:group-body:label'));
  t('The description of this group. Use the \'Edit summary\' link above to set a shorter, text-only version that will be used to describe the content when it\'s displayed as a teaser (i.e. in a list on the front page).', array(), array('context' => 'field_instance:group-body:description'));
  t('Image', array(), array('context' => 'field_instance:group-field_image:label'));
  t('Image accompanying the content.', array(), array('context' => 'field_instance:group-field_image:description'));
  t('Section(s)', array(), array('context' => 'field_instance:group-field_sections:label'));
  t('Assign this content to specific section(s) of the site.', array(), array('context' => 'field_instance:group-field_sections:description'));
  t('Tags', array(), array('context' => 'field_instance:group-field_tags:label'));
  t('Enter individual keywords to describe this content\'s topic.', array(), array('context' => 'field_instance:group-field_tags:description'));
  t('Group visibility', array(), array('context' => 'field_instance:group-group_access:label'));
  t('Determine if this group will be visible to everyone (public) or only to its members (secret).', array(), array('context' => 'field_instance:group-group_access:description'));
  t('Group', array(), array('context' => 'field_instance:group-group_group:label'));
  t('Determine if this is an OG group.', array(), array('context' => 'field_instance:group-group_group:description'));
  t('Title', array(), array('context' => 'field_instance:group-title_field:label'));
  t('The title or name of this group.', array(), array('context' => 'field_instance:group-title_field:description'));


  return $field_instances;
}

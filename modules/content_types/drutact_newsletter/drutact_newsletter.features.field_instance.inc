<?php
/**
 * @file
 * drutact_newsletter.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function drutact_newsletter_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-simplenews-body'.
  $field_instances['node-simplenews-body'] = array(
    'bundle' => 'simplenews',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'The body of this newsletter issue. Use the \'Edit summary\' link above to set a shorter, text-only version that will be used to describe the content when it\'s displayed as a teaser (i.e. in a list on the front page).',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'newsletter_item' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'trim_length' => 600,
        ),
        'type' => 'text_summary_or_trimmed',
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

  // Exported field_instance: 'node-simplenews-field_newsletter_items'.
  $field_instances['node-simplenews-field_newsletter_items'] = array(
    'bundle' => 'simplenews',
    'default_value' => NULL,
    'default_value_function' => '',
    'deleted' => 0,
    'description' => 'Display content from the site as a teaser list in the newsletter issue.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'entityreference',
        'settings' => array(
          'links' => 1,
          'view_mode' => 'newsletter_item',
        ),
        'type' => 'entityreference_entity_view',
        'weight' => 5,
      ),
      'newsletter_item' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'link' => 1,
        ),
        'type' => 'entityreference_label',
        'weight' => 5,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_newsletter_items',
    'label' => 'Newsletter items',
    'required' => 0,
    'settings' => array(
      'behaviors' => array(
        'prepopulate' => array(
          'status' => 0,
        ),
      ),
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'entityreference',
      'settings' => array(
        'match_operator' => 'CONTAINS',
        'path' => '',
        'size' => 60,
      ),
      'type' => 'entityreference_autocomplete',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'node-simplenews-field_tags'.
  $field_instances['node-simplenews-field_tags'] = array(
    'bundle' => 'simplenews',
    'deleted' => 0,
    'description' => 'Enter individual keywords to describe this content\'s topic.',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 10,
      ),
      'newsletter_item' => array(
        'label' => 'inline',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 10,
      ),
      'teaser' => array(
        'label' => 'inline',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 10,
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
      'weight' => 10,
    ),
  );

  // Exported field_instance: 'node-simplenews-simplenews_handler'.
  $field_instances['node-simplenews-simplenews_handler'] = array(
    'bundle' => 'simplenews',
    'default_value' => array(
      0 => array(
        'value' => 'simplenews_subscription',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 1,
      ),
      'newsletter_item' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'simplenews_handler',
    'label' => 'Recipient Handler',
    'required' => 1,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'node-simplenews-simplenews_handler_settings'.
  $field_instances['node-simplenews-simplenews_handler_settings'] = array(
    'bundle' => 'simplenews',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 2,
      ),
      'newsletter_item' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'simplenews_handler_settings',
    'label' => 'Recipient Handle Settings',
    'required' => 0,
    'settings' => array(
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
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'node-simplenews-simplenews_issue_status'.
  $field_instances['node-simplenews-simplenews_issue_status'] = array(
    'bundle' => 'simplenews',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 3,
      ),
      'email_html' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 1,
      ),
      'email_plain' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 1,
      ),
      'email_textalt' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 1,
      ),
      'newsletter_item' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'simplenews_issue_status',
    'label' => 'Status',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'node-simplenews-simplenews_newsletter'.
  $field_instances['node-simplenews-simplenews_newsletter'] = array(
    'bundle' => 'simplenews',
    'default_value' => array(
      0 => array(
        'target_id' => 1,
      ),
    ),
    'default_value_function' => '',
    'deleted' => 0,
    'description' => 'The subscription lists to which this newsletter issue will be sent.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => -5,
      ),
      'email_html' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'email_plain' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'email_textalt' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'newsletter_item' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => -5,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'simplenews_newsletter',
    'label' => 'Subscription lists',
    'required' => 1,
    'settings' => array(
      'behaviors' => array(
        'prepopulate' => array(
          'status' => 0,
        ),
      ),
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => -5,
    ),
  );

  // Exported field_instance: 'node-simplenews-simplenews_sent_count'.
  $field_instances['node-simplenews-simplenews_sent_count'] = array(
    'bundle' => 'simplenews',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 4,
      ),
      'email_html' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 2,
      ),
      'email_plain' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 2,
      ),
      'email_textalt' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 2,
      ),
      'newsletter_item' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 4,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'simplenews_sent_count',
    'label' => 'Sent subscriber count',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'node-simplenews-title_field'.
  $field_instances['node-simplenews-title_field'] = array(
    'bundle' => 'simplenews',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'The title of this newsletter issue.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => -50,
      ),
      'newsletter_item' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => -10,
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
  t('Body', array(), array('context' => 'field_instance:simplenews-body:label'));
  t('The body of this newsletter issue. Use the \'Edit summary\' link above to set a shorter, text-only version that will be used to describe the content when it\'s displayed as a teaser (i.e. in a list on the front page).', array(), array('context' => 'field_instance:simplenews-body:description'));
  t('Newsletter items', array(), array('context' => 'field_instance:simplenews-field_newsletter_items:label'));
  t('Display content from the site as a teaser list in the newsletter issue.', array(), array('context' => 'field_instance:simplenews-field_newsletter_items:description'));
  t('Tags', array(), array('context' => 'field_instance:simplenews-field_tags:label'));
  t('Enter individual keywords to describe this content\'s topic.', array(), array('context' => 'field_instance:simplenews-field_tags:description'));
  t('Recipient Handler', array(), array('context' => 'field_instance:simplenews-simplenews_handler:label'));
  t('Recipient Handle Settings', array(), array('context' => 'field_instance:simplenews-simplenews_handler_settings:label'));
  t('Status', array(), array('context' => 'field_instance:simplenews-simplenews_issue_status:label'));
  t('Subscription lists', array(), array('context' => 'field_instance:simplenews-simplenews_newsletter:label'));
  t('The subscription lists to which this newsletter issue will be sent.', array(), array('context' => 'field_instance:simplenews-simplenews_newsletter:description'));
  t('Sent subscriber count', array(), array('context' => 'field_instance:simplenews-simplenews_sent_count:label'));
  t('Title', array(), array('context' => 'field_instance:simplenews-title_field:label'));
  t('The title of this newsletter issue.', array(), array('context' => 'field_instance:simplenews-title_field:description'));


  return $field_instances;
}

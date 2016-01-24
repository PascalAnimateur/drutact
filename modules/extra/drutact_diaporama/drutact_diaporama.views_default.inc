<?php
/**
 * @file
 * drutact_diaporama.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function drutact_diaporama_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'diaporama';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Diaporama';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_bootstrap_carousel_plugin_style';
  $handler->display->display_options['style_options']['interval'] = '5000';
  $handler->display->display_options['style_options']['navigation'] = 1;
  $handler->display->display_options['style_options']['indicators'] = 1;
  $handler->display->display_options['style_options']['pause'] = 0;
  $handler->display->display_options['row_plugin'] = 'views_bootstrap_carousel_plugin_rows';
  $handler->display->display_options['row_options']['image'] = 'field_image';
  $handler->display->display_options['row_options']['title'] = 'title_field_et';
  $handler->display->display_options['row_options']['description'] = 'body_et';
  /* Field: Field: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_image']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'diaporama',
    'image_link' => 'content',
  );
  /* Field: Entity translation: Title: translated */
  $handler->display->display_options['fields']['title_field_et']['id'] = 'title_field_et';
  $handler->display->display_options['fields']['title_field_et']['table'] = 'field_data_title_field';
  $handler->display->display_options['fields']['title_field_et']['field'] = 'title_field_et';
  $handler->display->display_options['fields']['title_field_et']['label'] = '';
  $handler->display->display_options['fields']['title_field_et']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_field_et']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title_field_et']['type'] = 'title_linked';
  $handler->display->display_options['fields']['title_field_et']['settings'] = array(
    'title_style' => 'h2',
    'title_link' => 'content',
    'title_class' => '',
  );
  /* Field: Entity translation: Description: translated */
  $handler->display->display_options['fields']['body_et']['id'] = 'body_et';
  $handler->display->display_options['fields']['body_et']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body_et']['field'] = 'body_et';
  $handler->display->display_options['fields']['body_et']['label'] = '';
  $handler->display->display_options['fields']['body_et']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body_et']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['body_et']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body_et']['settings'] = array(
    'trim_length' => '600',
  );
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Field: Image (field_image:fid) */
  $handler->display->display_options['filters']['field_image_fid']['id'] = 'field_image_fid';
  $handler->display->display_options['filters']['field_image_fid']['table'] = 'field_data_field_image';
  $handler->display->display_options['filters']['field_image_fid']['field'] = 'field_image_fid';
  $handler->display->display_options['filters']['field_image_fid']['operator'] = 'not empty';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_1');
  $handler->display->display_options['block_description'] = 'Diaporama';
  $translatables['diaporama'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Block'),
    t('Diaporama'),
  );
  $export['diaporama'] = $view;

  return $export;
}

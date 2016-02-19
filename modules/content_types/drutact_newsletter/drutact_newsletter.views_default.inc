<?php
/**
 * @file
 * drutact_newsletter.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function drutact_newsletter_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'administration_newsletters';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Administration - Newsletters';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'administer nodes';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = 'nid';
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Subscription lists */
  $handler->display->display_options['fields']['simplenews_newsletter']['id'] = 'simplenews_newsletter';
  $handler->display->display_options['fields']['simplenews_newsletter']['table'] = 'field_data_simplenews_newsletter';
  $handler->display->display_options['fields']['simplenews_newsletter']['field'] = 'simplenews_newsletter';
  $handler->display->display_options['fields']['simplenews_newsletter']['label'] = 'subscription_lists';
  $handler->display->display_options['fields']['simplenews_newsletter']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['simplenews_newsletter']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['simplenews_newsletter']['delta_offset'] = '0';
  $handler->display->display_options['fields']['simplenews_newsletter']['separator'] = '|';
  /* Field: Content: Language */
  $handler->display->display_options['fields']['language']['id'] = 'language';
  $handler->display->display_options['fields']['language']['table'] = 'node';
  $handler->display->display_options['fields']['language']['field'] = 'language';
  $handler->display->display_options['fields']['language']['label'] = 'language';
  $handler->display->display_options['fields']['language']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['language']['language_display'] = 'langcode';
  /* Field: User: Username */
  $handler->display->display_options['fields']['username']['id'] = 'username';
  $handler->display->display_options['fields']['username']['table'] = 'users';
  $handler->display->display_options['fields']['username']['field'] = 'username';
  $handler->display->display_options['fields']['username']['relationship'] = 'uid';
  $handler->display->display_options['fields']['username']['label'] = 'author';
  $handler->display->display_options['fields']['username']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['username']['link_to_user'] = FALSE;
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = 'date_created';
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'short';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
  /* Field: Content: Published */
  $handler->display->display_options['fields']['status']['id'] = 'status';
  $handler->display->display_options['fields']['status']['table'] = 'node';
  $handler->display->display_options['fields']['status']['field'] = 'status';
  $handler->display->display_options['fields']['status']['label'] = 'published';
  $handler->display->display_options['fields']['status']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['status']['type'] = 'boolean';
  $handler->display->display_options['fields']['status']['not'] = 0;
  /* Field: Content: Promoted to front page */
  $handler->display->display_options['fields']['promote']['id'] = 'promote';
  $handler->display->display_options['fields']['promote']['table'] = 'node';
  $handler->display->display_options['fields']['promote']['field'] = 'promote';
  $handler->display->display_options['fields']['promote']['label'] = 'front_page';
  $handler->display->display_options['fields']['promote']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['promote']['type'] = 'boolean';
  $handler->display->display_options['fields']['promote']['not'] = 0;
  /* Field: Content: Sticky */
  $handler->display->display_options['fields']['sticky']['id'] = 'sticky';
  $handler->display->display_options['fields']['sticky']['table'] = 'node';
  $handler->display->display_options['fields']['sticky']['field'] = 'sticky';
  $handler->display->display_options['fields']['sticky']['label'] = 'sticky';
  $handler->display->display_options['fields']['sticky']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['sticky']['type'] = 'boolean';
  $handler->display->display_options['fields']['sticky']['not'] = 0;
  /* Field: Entity translation: Description: translated */
  $handler->display->display_options['fields']['body_et']['id'] = 'body_et';
  $handler->display->display_options['fields']['body_et']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body_et']['field'] = 'body_et';
  $handler->display->display_options['fields']['body_et']['label'] = 'body';
  $handler->display->display_options['fields']['body_et']['element_label_colon'] = FALSE;
  /* Field: Entity translation: Description: translated */
  $handler->display->display_options['fields']['body_et_1']['id'] = 'body_et_1';
  $handler->display->display_options['fields']['body_et_1']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body_et_1']['field'] = 'body_et';
  $handler->display->display_options['fields']['body_et_1']['label'] = 'summary';
  $handler->display->display_options['fields']['body_et_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body_et_1']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body_et_1']['settings'] = array(
    'trim_length' => '600',
  );
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'simplenews' => 'simplenews',
  );

  /* Display: Export (CSV) */
  $handler = $view->new_display('views_data_export', 'Export (CSV)', 'export_csv');
  $handler->display->display_options['display_description'] = 'Export newsletter issues to CSV file.';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['style_options']['provide_file'] = 0;
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['style_options']['quote'] = 1;
  $handler->display->display_options['style_options']['trim'] = 1;
  $handler->display->display_options['style_options']['replace_newlines'] = 0;
  $handler->display->display_options['style_options']['newline_token'] = '1';
  $handler->display->display_options['style_options']['header'] = 1;
  $handler->display->display_options['style_options']['keep_html'] = 1;
  $handler->display->display_options['path'] = 'admin/content/simplenews/export_newsletter_issues';
  $translatables['administration_newsletters'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('author'),
    t('nid'),
    t('title'),
    t('subscription_lists'),
    t('language'),
    t('date_created'),
    t('published'),
    t('front_page'),
    t('sticky'),
    t('body'),
    t('summary'),
    t('Export (CSV)'),
    t('Export newsletter issues to CSV file.'),
  );
  $export['administration_newsletters'] = $view;

  return $export;
}

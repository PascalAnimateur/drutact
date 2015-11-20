<?php
/**
 * @file
 * drutact_wysiwyg.features.wysiwyg.inc
 */

/**
 * Implements hook_wysiwyg_default_profiles().
 */
function drutact_wysiwyg_wysiwyg_default_profiles() {
  $profiles = array();

  // Exported profile: html
  $profiles['html'] = array(
    'format' => 'html',
    'editor' => 'ckeditor',
    'settings' => array(
      'default' => 1,
      'user_choose' => 0,
      'show_toggle' => 0,
      'add_to_summaries' => 0,
      'theme' => '',
      'language' => 'en',
      'buttons' => array(
        'default' => array(
          'Bold' => 1,
          'Italic' => 1,
          'Underline' => 1,
          'JustifyLeft' => 1,
          'JustifyCenter' => 1,
          'JustifyRight' => 1,
          'BulletedList' => 1,
          'NumberedList' => 1,
          'Outdent' => 1,
          'Indent' => 1,
          'Link' => 1,
          'Unlink' => 1,
          'Blockquote' => 1,
          'Source' => 1,
          'RemoveFormat' => 1,
          'Format' => 1,
          'Maximize' => 1,
        ),
        'linkit' => array(
          'linkit' => 1,
        ),
        'drupal' => array(
          'media' => 1,
          'break' => 1,
        ),
      ),
      'toolbarLocation' => 'top',
      'resize_enabled' => 1,
      'default_toolbar_grouping' => 1,
      'simple_source_formatting' => 1,
      'acf_mode' => 1,
      'acf_allowed_content' => '',
      'css_setting' => 'self',
      'css_path' => '%b%t/css/style.css',
      'stylesSet' => '',
      'block_formats' => 'p,h2,h3,h4',
      'advanced__active_tab' => 'edit-paste',
      'forcePasteAsPlainText' => 0,
    ),
  );

  return $profiles;
}

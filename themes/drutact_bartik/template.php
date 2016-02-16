<?php

/**
 * Implements hook_preprocess_mimemail_message().
 *
 * Expose base_url variable to Mime Mail message template.
 */
function drutact_bartik_preprocess_mimemail_message(&$variables) {
  // Expose base_url variable to Mime Mail message template.
  global $base_url;
  $variables['base_url'] = $base_url;
}

function drutact_bartik_preprocess_node(&$variables, $hook) {
  $view_mode = $variables['view_mode'];
  $content_type = $variables['type'];
  $variables['theme_hook_suggestions'][] = 'node__' . $view_mode;
  $variables['theme_hook_suggestions'][] = 'node__' . $view_mode . '_' . $content_type;
}

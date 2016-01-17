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

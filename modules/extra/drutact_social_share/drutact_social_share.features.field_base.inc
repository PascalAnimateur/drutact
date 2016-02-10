<?php
/**
 * @file
 * drutact_social_share.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function drutact_social_share_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_social_share'.
  $field_bases['field_social_share'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_social_share',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'share42',
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'profile2_private' => FALSE,
    ),
    'translatable' => 0,
    'type' => 'field_share42',
  );

  return $field_bases;
}

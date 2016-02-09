<?php
/**
 * @file
 * drutact_social_share.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function drutact_social_share_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'share42_enable_i18n_translation_menu_link';
  $strongarm->value = 0;
  $export['share42_enable_i18n_translation_menu_link'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'share42_enable_menu_link_main-menu';
  $strongarm->value = 0;
  $export['share42_enable_menu_link_main-menu'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'share42_enable_menu_link_management';
  $strongarm->value = 0;
  $export['share42_enable_menu_link_management'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'share42_enable_menu_link_navigation';
  $strongarm->value = 0;
  $export['share42_enable_menu_link_navigation'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'share42_enable_menu_link_user-menu';
  $strongarm->value = 0;
  $export['share42_enable_menu_link_user-menu'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'share42_enable_og_membership_og_membership_type_default';
  $strongarm->value = 0;
  $export['share42_enable_og_membership_og_membership_type_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'share42_enable_og_membership_type_og_membership_type';
  $strongarm->value = 0;
  $export['share42_enable_og_membership_type_og_membership_type'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'share42_enable_profile2_type_profile2_type';
  $strongarm->value = 0;
  $export['share42_enable_profile2_type_profile2_type'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'share42_enable_rules_config_rules_config';
  $strongarm->value = 0;
  $export['share42_enable_rules_config_rules_config'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'share42_enable_taxonomy_vocabulary_taxonomy_vocabulary';
  $strongarm->value = 0;
  $export['share42_enable_taxonomy_vocabulary_taxonomy_vocabulary'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'share42_enable_wysiwyg_profile_wysiwyg_profile';
  $strongarm->value = 0;
  $export['share42_enable_wysiwyg_profile_wysiwyg_profile'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'share42_library_path';
  $strongarm->value = 'profiles/drutact/modules/extra/drutact_social_share/share42';
  $export['share42_library_path'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'share42_margin';
  $strongarm->value = '-70';
  $export['share42_margin'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'share42_top1';
  $strongarm->value = '200';
  $export['share42_top1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'share42_top2';
  $strongarm->value = '50';
  $export['share42_top2'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'share42_zero_counter';
  $strongarm->value = 0;
  $export['share42_zero_counter'] = $strongarm;

  return $export;
}

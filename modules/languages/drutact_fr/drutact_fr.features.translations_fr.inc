<?php
/**
 * @file
 * drutact_fr.features.translations_fr.inc
 */

/**
 * Implements hook_translations_fr_defaults().
 */
function drutact_fr_translations_fr_defaults() {
  $translations = array();
  $translatables = array();
  $translations['fr:default']['1243daf593fa297e07ab03bf06d925af'] = array(
    'source' => 'Searching...',
    'context' => '',
    'location' => 'profiles/drutact/modules/languages/drutact_fr/drutact_fr.features.translations_fr.inc:21; profiles/drutact/modules/contrib/select2widget/js/select2widget.js',
    'translation' => 'Recherche en cours...',
    'plid' => 0,
    'plural' => 0,
  );
  $translatables[] = t('Searching...', array(), array('context' => ''));
  $translations['fr:default']['189f63f277cd73395561651753563065'] = array(
    'source' => 'Tags',
    'context' => '',
    'location' => '',
    'translation' => 'Mots-clés',
    'plid' => 0,
    'plural' => 0,
  );
  $translatables[] = t('Tags', array(), array('context' => ''));
  $translations['fr:default']['aa3a7a5806c40ba2714d4df8c8ed8299'] = array(
    'source' => 'Please enter one more character',
    'context' => '',
    'location' => 'profiles/drutact/modules/languages/drutact_fr/drutact_fr.features.translations_fr.inc:39; profiles/drutact/modules/contrib/select2widget/js/select2widget.js',
    'translation' => 'Veuillez saisir un caractère additionnel',
    'plid' => 0,
    'plural' => 0,
  );
  $translatables[] = t('Please enter one more character', array(), array('context' => ''));
  $translations['fr:default']['c5a5240b71e77388d00b62f6cd2f3157'] = array(
    'source' => 'Add Event',
    'context' => '',
    'location' => 'profiles/drutact/modules/content_types/drutact_event/drutact_event.module:17 profiles/drutact/modules/languages/drutact_fr/drutact_fr.features.translations_fr.inc:48',
    'translation' => 'Ajouter Événement',
    'plid' => 0,
    'plural' => 0,
  );
  $translatables[] = t('Add Event', array(), array('context' => ''));
  return $translations;
}

api = 2
core = 7

; Entity translation
projects[entity_translation][version] = 1.x-dev

; Content type / field translation
projects[localize_fields][type] = module
projects[localize_fields][patch][2464629] = https://www.drupal.org/files/issues/localize_fields-delete_test-2464629-1.patch
projects[multilingual_content_type][type] = module
projects[multilingual_content_type][download][type] = git
projects[multilingual_content_type][download][url] = http://git.drupal.org/sandbox/kitikonti/2362485.git
projects[multilingual_content_type][download][branch] = 7.x-1.x

; Taxonomy translation
projects[multilingual_taxonomy][type] = module
projects[multilingual_taxonomy][download][type] = git
projects[multilingual_taxonomy][download][url] = http://git.drupal.org/sandbox/PascalAnimateur/2572273.git
projects[multilingual_taxonomy][download][branch] = 7.x-1.x

; Localization
projects[l10n_client][type] = module
projects[l10n_client][patch][2191771] = https://www.drupal.org/files/issues/l10n_client-browser_is-2191771-17.patch
projects[l10n_update][version] = 1.1
projects[potx][type] = module
projects[potx][patch][2175955] = https://www.drupal.org/files/issues/potx-drush_language-2175955-2.patch
projects[potx_exportables][type] = module

; Internationalization
projects[i18n][type] = module
projects[i18n][patch][1252144] = https://www.drupal.org/files/1252144-80-support-wysiwyg.patch

; Roles translation
projects[roles_simple_translate][type] = module
projects[roles_simple_translate][download][type] = git
projects[roles_simple_translate][download][url] = http://git.drupal.org/sandbox/wangjiaqi/2222171.git
projects[roles_simple_translate][download][branch] = 7.x-1.x
projects[roles_simple_translate][patch][2496557] = https://www.drupal.org/files/issues/roles_simple_translate-english_default_language-2496557-3.patch
projects[roles_simple_translate][patch][2559409] = https://www.drupal.org/files/issues/roles_simple_translate-redirect_after_save.patch

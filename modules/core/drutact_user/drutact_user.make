api = 2
core = 7.x

; Login
projects[logintoboggan][type] = module

; Name field
projects[name][type] = module
projects[name][patch][1788156] = https://www.drupal.org/files/issues/name_title_translation-1788156-12.patch

; Real name
projects[realname][type] = module
projects[realname][patch][1239478] = https://www.drupal.org/files/issues/realname-views-username-field-1239478-93.patch

; Password
projects[genpass][type] = module
projects[simple_pass_reset][type] = module
projects[simple_pass_reset][patch][2208347] = https://www.drupal.org/files/issues/simple_pass_reset-prevent_og_ref_validation-2208347-24.patch

; Profile
projects[profile2][version] = 1.x-dev

; Role delegation
projects[role_delegation][type] = module

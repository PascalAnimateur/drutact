api = 2
core = 7.x

; Login
projects[logintoboggan][type] = module

; Name field
projects[name][type] = module

; Real name
projects[realname][type] = module
projects[realname][patch][1239478] = https://www.drupal.org/files/issues/realname-views-username-field-1239478-79.patch
projects[realname_registration][type] = module
projects[realname_registration][patch][1556512] = https://www.drupal.org/files/issues/realname_registration-name_module_support-1556512-8.patch
projects[realname_registration][patch][2218447] = https://www.drupal.org/files/issues/username-transliteration-2218447-10.patch
projects[realname_registration][patch][2403721] = https://www.drupal.org/files/issues/realname_registration-allow_spaces-2403721-1.patch

; Password
projects[genpass][type] = module
projects[simple_pass_reset][type] = module
projects[simple_pass_reset][patch][2208347] = https://www.drupal.org/files/issues/simple_pass_reset-prevent_og_ref_validation-2208347-24.patch

; Profile
projects[profile2][version] = 1.x-dev

; Role delegation
projects[role_delegation][type] = module

api = 2
core = 7.x

; Add existing components
projects[webform_add_existing][version] = 2.x-dev

; Webform
projects[webform][type] = module
projects[webform][patch][2358425] = https://www.drupal.org/files/issues/webform-fix_illegal_string_offset_0.patch

api = 2
core = 7.x

; Add existing components
projects[webform_add_existing][version] = 2.x-dev

; Charts
projects[webform_charts][type] = module
projects[webform_charts][patch][2347065] = https://www.drupal.org/files/issues/webform_charts-no_inline_types.patch
projects[webform_charts][patch][2454389] = https://www.drupal.org/files/issues/webform_charts-fix_empty_analysis_data-2454389-1.patch

; Import submissions
projects[webform_import][version] = 1.x-dev
projects[webform_import][patch][2151745] = https://www.drupal.org/files/issues/webform_import-fix_undefined_mandatory-2151745-5.patch
projects[webform_import][patch][2420619] = https://www.drupal.org/files/issues/notice_undefined_variable_submitted_key-2420619-2.patch

; Multiple file support
projects[webform_multiple_file][type] = module

; References
projects[webform_references][type] = module
projects[webform_references][patch][2537912] = https://www.drupal.org/files/issues/webform_references-realname_integration-2537912-6.patch

; Scheduler
projects[webform_scheduler][type] = module

; Webform
projects[webform][type] = module
projects[webform][patch][2358425] = https://www.drupal.org/files/issues/webform-fix_illegal_string_offset_0.patch

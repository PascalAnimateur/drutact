api = 2
core = 7.x

; Administration menu
projects[adminimal_admin_menu][type] = module
projects[admin_menu][type] = module

; Module filter
projects[module_filter][type] = module

; Shiny administration theme
projects[shiny][type] = theme
projects[shiny][patch][2362771] = https://www.drupal.org/files/issues/shiny-edit_actions_no_float.patch
projects[shiny][patch][2505485] = https://www.drupal.org/files/issues/shiny-fix_input_form_submit_padding-2505485-2.patch
projects[shiny][patch][2555575] = https://www.drupal.org/files/issues/shiny-fix_ckeditor_border_right-2555575-1.patch
projects[shiny][patch][2568239] = https://www.drupal.org/files/issues/shiny-date_repeat_radio_button-2568239-6.patch

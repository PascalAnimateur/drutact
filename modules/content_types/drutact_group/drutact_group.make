api = 2
core = 7.x

; Default members
projects[og_default_members][type] = module

; File entity
projects[og_file_entity][type] = module
projects[og_file_entity][download][type] = git
projects[og_file_entity][download][url] = http://git.drupal.org/sandbox/jeffschuler/2091417.git
projects[og_file_entity][download][branch] = 7.x-1.x
projects[og_file_entity][patch][2112373] = https://www.drupal.org/files/issues/og_file_entity-add_view_access-2112373.patch

; Manager change
projects[og_manager_change][type] = module
projects[og_manager_change][patch][2159741] = https://www.drupal.org/files/issues/og_manager_change-allow_permission_administer_group-2159741-4.patch

; Organic group
projects[og][type] = module
projects[og][patch][2455625] = https://www.drupal.org/files/issues/og-remove_example-2455625-2.patch
projects[og][patch][2494575] = https://www.drupal.org/files/issues/og-fix_overview-2494575-2.patch
projects[og][patch][1473262] = https://www.drupal.org/files/issues/og-1473262-13-translate-roles.patch

; Role access
projects[og_role_access][type] = module
projects[og_role_access][download][type] = git
projects[og_role_access][download][url] = http://git.drupal.org/sandbox/weekbeforenext/1794706.git
projects[og_role_access][download][branch] = 7.x-2.x

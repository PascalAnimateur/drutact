api = 2
core = 7.x

; HybridAuth Social Login
projects[hybridauth][type] = module
projects[hybridauth][patch][2672152] = https://www.drupal.org/files/issues/hybridauth-rename_user_profile_tab-2672152-2.patch

; HydribAuth library
libraries[hybridauth][download][type] = file
libraries[hybridauth][download][url] = https://codeload.github.com/hybridauth/hybridauth/zip/v2.6.0

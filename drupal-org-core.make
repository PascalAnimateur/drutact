api = 2
core = 7.x

; Drupal 7.43
projects[drupal][version] = 7.43

; Partial word search
projects[drupal][patch][498752] = https://drupal.org/files/search-partial_words_hack-498752-19.patch

; Truncate username above 50 characters instead of 20
projects[drupal][patch][2327267] = https://www.drupal.org/files/issues/username_no_truncate.patch

; Search box auto size
projects[drupal][patch][2456947] = https://www.drupal.org/files/issues/drupal-search_box_size_auto.patch

; User picture filename from user
projects[drupal][patch][2462425] = https://www.drupal.org/files/issues/user-picture_filename_from_user.patch

; Translate user emails using i18n_variable
projects[drupal][patch][1702468] = https://www.drupal.org/files/issues/drupal-i18n_variable_user_mail_text-1702468-7.patch

; Separate administration permissions for users and user settings
projects[drupal][patch][366950] = https://www.drupal.org/files/issues/administer_users_-366950-180.patch

; File URI formatter
projects[drupal][patch][2648580] = https://www.drupal.org/files/issues/drupal-file_formatter_uri.patch

; Auto-expand menu items by default
projects[drupal][patch][2657708] = https://www.drupal.org/files/issues/drupal-menu_auto_expanded-2657708-2.patch

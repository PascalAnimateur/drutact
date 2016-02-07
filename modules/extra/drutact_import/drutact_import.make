api = 2
core = 7.x

; Feeds
projects[feeds][type] = module
projects[feeds][patch][2470876] = https://www.drupal.org/files/issues/feeds-delete_example_features-2470876-9.patch
projects[feeds][patch][608408] = https://www.drupal.org/files/issues/feeds-drush_integration-608408-103.patch
projects[feeds][patch][1376774] = https://www.drupal.org/files/issues/feeds-user_processor_roles-1376774-37.patch
projects[feeds][patch][1611554] = https://www.drupal.org/files/issues/feeds-encrypted_passwords-1611554-27.patch

; Feeds entity translation
projects[feeds_et][download][type] = git
projects[feeds_et][download][branch] = 7.x-1.x
projects[feeds_et][patch][2652146] = https://www.drupal.org/files/issues/feeds_et-2652146-1.patch

; Feeds profile2
projects[feeds_profile2][type] = module
projects[feeds_profile2][patch][2423193] = https://www.drupal.org/files/issues/feeds_profile2_addressfield_generic-2423193-21.patch

; Feeds tamper
projects[feeds_tamper][type] = module
projects[feeds_tamper_string2id][type] = module

; Job scheduler
projects[job_scheduler][type] = module

; Simplepie library
libraries[simplepie][download][type] = file
libraries[simplepie][download][url] = http://simplepie.org/downloads/simplepie_1.3.1.compiled.php
libraries[simplepie][download][filename] = simplepie.compiled.php

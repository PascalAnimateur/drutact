api = 2
core = 7.x

; Bootstrap
projects[bootstrap][type] = theme
projects[bootstrap][patch][2261189] = https://www.drupal.org/files/issues/add_drush_support_for-2261189-15.patch
projects[bootstrap][patch][2495743] = https://www.drupal.org/files/issues/bootstrap-webform_inline_elements-2495743.patch

; Bootstrap library
libraries[bootstrap][download][type] = file
libraries[bootstrap][download][url] = https://github.com/twbs/bootstrap/archive/v3.3.5.zip
libraries[bootstrap][destination] = ../../profiles/drutact/themes/drutact_bootstrap

; Smartmenus library
libraries[smartmenus][download][type] = file
libraries[smartmenus][download][url] = https://github.com/vadikom/smartmenus/archive/master.zip
libraries[smartmenus][destination] = ../../profiles/drutact/themes/drutact_bootstrap
libraries[smartmenus][download][subtree] = smartmenus-master/dist

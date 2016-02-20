api = 2
core = 7.x

; Bootstrap
projects[bootstrap][type] = theme
projects[bootstrap][patch][2495743] = https://www.drupal.org/files/issues/bootstrap-webform_inline_elements-2495743.patch

; Bootstrap Languages
projects[bootstrap_languages][type] = module
projects[bootstrap_languages][download][type] = git
projects[bootstrap_languages][download][url] = https://git.drupal.org/sandbox/PascalAnimateur/2493639.git
projects[bootstrap_languages][download][branch] = 7.x-1.x
libraries[bootstrap-languages][download][type] = file
libraries[bootstrap-languages][download][url] = https://github.com/usrz/bootstrap-languages/archive/master.zip

; Bootstrap library
libraries[bootstrap][download][type] = file
libraries[bootstrap][download][url] = https://github.com/twbs/bootstrap/archive/v3.3.5.zip
libraries[bootstrap][destination] = ../../profiles/drutact/themes/drutact_bootstrap

; Bootstrap Login Modal
projects[bootstrap_login_modal][type] = module
projects[bootstrap_login_modal][patch][2420977] = https://www.drupal.org/files/issues/bootstrap_login_modal-request_new_password-2420977-2.patch

; Panels Bootstrap layouts
projects[panels_bootstrap_layouts][version] = 3.x-dev

; Smartmenus library
libraries[smartmenus][download][type] = file
libraries[smartmenus][download][url] = https://github.com/vadikom/smartmenus/archive/master.zip
libraries[smartmenus][destination] = ../../profiles/drutact/themes/drutact_bootstrap
libraries[smartmenus][download][subtree] = smartmenus-master/dist

; Views Bootstrap
projects[views_bootstrap][version] = 3.x-dev
projects[views_bootstrap][patch][2596633] = https://www.drupal.org/files/issues/views_bootstrap-media_h3_instead_of_h4-2596633-2.patch

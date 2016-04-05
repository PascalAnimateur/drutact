api = 2
core = 7.x

; CKEditor library
libraries[ckeditor][download][type] = file
libraries[ckeditor][download][url] = http://download.cksource.com/CKEditor/CKEditor/CKEditor%204.5.8/ckeditor_4.5.8_full.zip

; CKEditor plugins
libraries[image2][download][type] = file
libraries[image2][download][url] = http://download.ckeditor.com/image2/releases/image2_4.5.8.zip
libraries[image2][destination] = libraries/ckeditor/plugins
libraries[lineutils][download][type] = file
libraries[lineutils][download][url] = http://download.ckeditor.com/lineutils/releases/lineutils_4.5.8.zip
libraries[lineutils][destination] = libraries/ckeditor/plugins
libraries[widget][download][type] = file
libraries[widget][download][url] = http://download.ckeditor.com/widget/releases/widget_4.5.8.zip
libraries[widget][destination] = libraries/ckeditor/plugins

; Linkit
projects[linkit][type] = module
projects[linkit][patch][2395651] = https://www.drupal.org/files/issues/linkit-display_user_picture-2395651-9.patch
projects[linkit][patch][1793896] = https://www.drupal.org/files/issues/linkit-fix_language_prefix-1793896-24.patch
projects[linkit][patch][2652300] = https://www.drupal.org/files/issues/linkit-private_files_direct_link-2652300-2.patch

; Pathologic
projects[pathologic][type] = module
projects[pathologic][patch][2628348] = https://www.drupal.org/files/issues/language_prefix_is_not_2628348_4.patch

; WYSIWYG
projects[wysiwyg][version] = 2.x-dev

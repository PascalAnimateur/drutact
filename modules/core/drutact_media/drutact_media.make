api = 2
core = 7.x

; File entity
projects[file_entity][type] = module
projects[file_entity][patch][2192391] = https://www.drupal.org/files/issues/file_entity-invokation-order-of-hook_file_default_displays-2192391-59.patch
projects[file_entity][patch][2345741] = https://www.drupal.org/files/issues/file_entity-add_permanent_temporary_actions.patch
projects[file_entity][patch][2590227] = https://www.drupal.org/files/issues/file_entity-archive_replace_existing_files-2590227-4.patch
projects[file_entity][patch][2264145] = https://www.drupal.org/files/issues/2264145-create-dir-before-moving-files-13.patch
projects[file_entity][patch][2537982] = https://www.drupal.org/files/issues/2537982-fix-changing-file-scheme.patch
projects[file_entity][patch][2112491] = https://www.drupal.org/files/issues/file_entity-optionnally_keep_original_filename-2112491-15.patch

; ImageMagick
projects[imagemagick][type] = module

; Media
projects[media][type] = module
projects[media][patch][2104193] = https://www.drupal.org/files/issues/media_remove_file_display_alter-2104193-101.patch
projects[media][patch][1268116] = https://www.drupal.org/files/issues/media-fix_missing_placeholder_regex-1268116-153.patch
projects[media][patch][2301883] = https://www.drupal.org/files/issues/media_wysiwyg-fix_html_strip-0.patch

; PDF
projects[pdf][type] = module
projects[pdfpreview][version] = 2.x-dev
projects[pdfpreview][patch][2252841] = https://www.drupal.org/files/issues/pdfpreview-flush_image_cache-2252841-5.patch
projects[pdfpreview][patch][2315257] = https://www.drupal.org/files/issues/add_option_to_link_image_to_pdf_file-2315257-9.patch
projects[pdfpreview][patch][2490766] = https://www.drupal.org/files/issues/pdfpreview-remove_widht_height_values.patch

; PDF.js library
libraries[pdf.js][download][type] = file
libraries[pdf.js][download][url] = https://github.com/mozilla/pdf.js/releases/download/v1.1.469/pdfjs-1.1.469-dist.zip

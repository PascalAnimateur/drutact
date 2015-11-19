api = 2
core = 7.x

; File entity / Media
projects[file_entity][type] = module
projects[file_entity][patch][2192391] = https://www.drupal.org/files/issues/default_file_entities-2192391-51.patch
projects[file_entity][patch][2345741] = https://www.drupal.org/files/issues/file_entity-add_permanent_temporary_actions.patch
projects[file_entity][patch][2590227] = https://www.drupal.org/files/issues/file_entity-archive_replace_existing_files-2590227-4.patch
projects[media][type] = module
projects[media][patch][2104193] = https://www.drupal.org/files/issues/media_remove_file_display_alter-2104193-100.patchf.diff
projects[media][patch][1268116] = https://www.drupal.org/files/issues/media-fix_missing_placeholder_regex-1268116-153.patch
projects[media][patch][2301883] = https://www.drupal.org/files/issues/media_wysiwyg-fix_html_strip-0.patch

; ImageMagick
projects[imagemagick][type] = module

; PDF
projects[pdf][type] = module
projects[pdfpreview][version] = 2.x-dev
projects[pdfpreview][patch][2252841] = https://www.drupal.org/files/issues/pdfpreview-flush_image_cache-2252841-5.patch
projects[pdfpreview][patch][2315257] = https://www.drupal.org/files/issues/add_option_to_link_image_to_pdf_file-2315257-9.patch
projects[pdfpreview][patch][2490766] = https://www.drupal.org/files/issues/pdfpreview-remove_widht_height_values.patch

; PDF.js library
libraries[pdf.js][download][type] = file
libraries[pdf.js][download][url] = https://github.com/mozilla/pdf.js/releases/download/v1.1.469/pdfjs-1.1.469-dist.zip

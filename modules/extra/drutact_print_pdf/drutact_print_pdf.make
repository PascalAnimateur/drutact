api = 2
core = 7.x

; Printer, email and PDF versions
projects[print][type] = module
projects[print][patch][2633626] = https://www.drupal.org/files/issues/print-dompdf_font_dir_not_writeable-2633626.patch

; dompdf with php-font-lib library
libraries[dompdf][download][type] = file
libraries[dompdf][download][url] = https://github.com/dompdf/dompdf/archive/v0.6.2.zip
libraries[php-font-lib][download][type] = file
libraries[php-font-lib][download][url] = https://github.com/PhenX/php-font-lib/archive/0.2.2.zip
libraries[php-font-lib][destination] = libraries/dompdf/lib

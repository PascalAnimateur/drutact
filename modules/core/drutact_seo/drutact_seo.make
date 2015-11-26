api = 2
core = 7.x

; Metatag
projects[metatag][type] = module

; Pathauto
projects[pathauto][type] = module
projects[transliteration][type] = module

; Redirection
projects[globalredirect][type] = module
projects[globalredirect][patch][2385415] = https://www.drupal.org/files/issues/globalredirect-prevent_missing_define-2385415.patch
projects[redirect][type] = module

; XML sitemap
projects[xmlsitemap][type] = module
projects[xmlsitemap][patch][2244449] = https://www.drupal.org/files/issues/xmlsitemap-relative_xsl_url-2244449-19.patch

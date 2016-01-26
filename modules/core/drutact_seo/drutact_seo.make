api = 2
core = 7.x

; Alternate hreflang
projects[hreflang][type] = module

; Metatag
projects[metatag][type] = module

; Pathauto
projects[pathauto][type] = module
projects[pathauto_entity][type] = module
projects[transliteration][type] = module

; Redirection
projects[globalredirect][type] = module
projects[globalredirect][patch][2385415] = https://www.drupal.org/files/issues/globalredirect-prevent_missing_define-2385415.patch
projects[redirect][type] = module

; Sub-pathauto
projects[subpathauto][type] = module
projects[subpathauto][patch][1814516] = https://www.drupal.org/files/issues/subpathauto-not_loading_admin_theme-1814516-18.patch

; XML sitemap
projects[xmlsitemap][type] = module
projects[xmlsitemap][patch][2244449] = https://www.drupal.org/files/issues/xmlsitemap-relative_xsl_url-2244449-19.patch
projects[xmlsitemap][patch][1481798] = https://www.drupal.org/files/issues/add_support_for_entity_translation-1481798-64.patch

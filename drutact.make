api = 2
core = 7.x

; Contrib subdir
defaults[projects][subdir] = "contrib"

; DruTACT Core
includes[] = modules/core/drutact_admin/drutact_admin.make
includes[] = modules/core/drutact_core/drutact_core.make
includes[] = modules/core/drutact_media/drutact_media.make
includes[] = modules/core/drutact_seo/drutact_seo.make
includes[] = modules/core/drutact_wysiwyg/drutact_wysiwyg.make

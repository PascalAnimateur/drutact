api = 2
core = 7.x

; Contrib subdir
defaults[projects][subdir] = "contrib"

; DruTACT Content types
includes[] = modules/content_types/drutact_event/drutact_event.make
includes[] = modules/content_types/drutact_group/drutact_group.make

; DruTACT Core
includes[] = modules/core/drutact_admin/drutact_admin.make
includes[] = modules/core/drutact_core/drutact_core.make
includes[] = modules/core/drutact_email/drutact_email.make
includes[] = modules/core/drutact_l10n/drutact_l10n.make
includes[] = modules/core/drutact_media/drutact_media.make
includes[] = modules/core/drutact_node/drutact_node.make
includes[] = modules/core/drutact_seo/drutact_seo.make
includes[] = modules/core/drutact_user/drutact_user.make
includes[] = modules/core/drutact_wysiwyg/drutact_wysiwyg.make

; DruTACT Environments
includes[] = modules/environments/drutact_dev/drutact_dev.make
includes[] = modules/environments/drutact_prod/drutact_prod.make

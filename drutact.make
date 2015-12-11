api = 2
core = 7.x

; Contrib subdir
defaults[projects][subdir] = "contrib"

; DruTACT Content types
includes[] = modules/content_types/drutact_group/drutact_group.make
includes[] = modules/content_types/drutact_newsletter/drutact_newsletter.make
includes[] = modules/content_types/drutact_webform/drutact_webform.make

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

; DruTACT Extra
includes[] = modules/extra/drutact_charts/drutact_charts.make
includes[] = modules/extra/drutact_disqus/drutact_disqus.make
includes[] = modules/extra/drutact_event_calendar/drutact_event_calendar.make
includes[] = modules/extra/drutact_event_registration/drutact_event_registration.make

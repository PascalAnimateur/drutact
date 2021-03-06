api = 2
core = 7.x

; Contrib subdir
defaults[projects][subdir] = "contrib"

; DruTACT Content types
includes[] = modules/content_types/drutact_group/drutact_group.make
includes[] = modules/content_types/drutact_newsletter/drutact_newsletter.make
includes[] = modules/content_types/drutact_video/drutact_video.make
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
includes[] = modules/extra/drutact_google_analytics/drutact_google_analytics.make
includes[] = modules/extra/drutact_idul_login/drutact_idul_login.make
includes[] = modules/extra/drutact_import/drutact_import.make
includes[] = modules/extra/drutact_masquerade/drutact_masquerade.make
includes[] = modules/extra/drutact_print_pdf/drutact_print_pdf.make
includes[] = modules/extra/drutact_social_login/drutact_social_login.make
includes[] = modules/extra/drutact_social_share/drutact_social_share.make

; DruTACT Vocabularies
includes[] = modules/vocabularies/drutact_tags/drutact_tags.make

; DruTACT Themes
includes[] = themes/drutact_bootstrap/drutact_bootstrap.make

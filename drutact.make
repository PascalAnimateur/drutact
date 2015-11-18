api = 2
core = 7.x

; Contrib subdir
defaults[projects][subdir] = "contrib"

; Contrib modules
projects[adminimal_admin_menu][type] = module
projects[admin_menu][type] = module

; DruTACT Core
includes[] = modules/core/drutact_core/drutact_core.make

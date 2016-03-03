api = 2
core = 7.x

; Drupal 7.x core
includes[] = https://git.tact.fse.ulaval.ca/drupal/drutact/raw/7.x-1.x/drupal-org-core.make

; DruTACT installation profile
projects[drutact][type] = profile
projects[drutact][download][type] = git
projects[drutact][download][url] = git@git.tact.fse.ulaval.ca:drupal/drutact.git
projects[drutact][download][branch] = 7.x-1.x

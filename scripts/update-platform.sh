#!/bin/bash

##### CONFIGURATION #####
if [ -e $(dirname $0)/config.sh ] ; then
  . $(dirname $0)/config.sh
else
  echo -e "[`basename $0`] ${MESSAGE_INDENT}\e[91mERROR:\e[0m DruTACT configuration script not found: \e[36m$(dirname $0)/config.sh\e[0m"
  exit 1
fi

##### UPDATE PLATFORM #####
MESSAGE "Updating platform..."
cd $DRUPAL_ROOT

# Enable maintenance mode on all sites
for site in sites/* ; do
  if [ -e $site/settings.php ] ; then
    cd $site
    MESSAGE "Enabling maintenance mode on $site..."
    drush vset --exact maintenance_mode 1 >> $LOG_FILE 2>&1
    cd ../..
  fi
done

# Rebuild platform
WARNING "About to rebuild platform. All changes to DruTACT and/or contrib modules will be \e[91mLOST\e[0m!"
MESSAGE "Rebuilding DruTACT platform..."
rm profiles/drutact -rf
drush make http://gitlab.tesla/drupal/drutact/raw/7.x-1.x/build-platform.make . --working-copy --concurrency=8 --no-cache >> $LOG_FILE 2>&1

# Perform database updates and disable maintenance mode on all sites
for site in sites/* ; do
  if [ -e $site/settings.php ] ; then
    cd $site

    MESSAGE "Performing database updates in $site..."
    drush updb -y >> $LOG_FILE 2>&1
    if [ $? != 0 ] ; then
      ERROR "Database update \e[91mFAILED\e[0m in $site"
    fi

    MESSAGE "Updating translations in $site..."
    drush potx-import-all -y >> $LOG_FILE 2>&1

    MESSAGE "Disabling maintenance mode on $site..."
    drush vset --exact maintenance_mode 1 >> $LOG_FILE 2>&1

    cd ../..
  fi
done

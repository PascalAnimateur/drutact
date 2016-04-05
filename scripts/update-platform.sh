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

    # Check if all features are in their default state.
    drush fd | grep Overridden
    if [ $? == 0 ] ; then
      ERROR "The above features are not in their default state. Please update or revert them all before updating the platform."
    fi

    MESSAGE "Enabling maintenance mode on $site..."
    drush vset --exact maintenance_mode 1 >> $LOG_FILE 2>&1

    cd ../..
  fi
done

# Rebuild platform
WARNING "About to rebuild platform. All changes to DruTACT and/or contrib modules will be \e[91mLOST\e[0m!"
MESSAGE "Rebuilding DruTACT platform..."
if [ -d profiles/drutact/.git ] ; then
  WORKING_COPY='--working-copy'
fi
rm profiles/drutact -rf
drush make https://git.tact.fse.ulaval.ca/drupal/drutact/raw/7.x-1.x/build-platform.make . $WORKING_COPY --concurrency=8 --no-cache >> $LOG_FILE 2>&1
if [ $? != 0 ] ; then
  ERROR "Drush make failed, please verify DruTACT build-platform.make."
fi

# Perform database updates and disable maintenance mode on all sites
for site in sites/* ; do
  if [ -e $site/settings.php ] ; then
    MESSAGE "Performing updates in $site..."

    cd $site
    INDENT

    drush updb -y >> $LOG_FILE 2>&1
    if [ $? != 0 ] ; then
      ERROR "Database update \e[91mFAILED\e[0m"
    fi

    MESSAGE "Updating translations from code..."
    drush potx-import-all -y >> $LOG_FILE 2>&1

    MESSAGE "Updating translations from drupal.org..."
    drush l10n-update-refresh >> $LOG_FILE 2>&1
    drush l10n-update >> $LOG_FILE 2>&1

    MESSAGE "Reverting all features..."
    drush fra -y >> $LOG_FILE 2>&1

    MESSAGE "Clearing all caches..."
    drush cc all >> $LOG_FILE 2>&1

    MESSAGE "Disabling maintenance mode..."
    drush vset --exact maintenance_mode 0 >> $LOG_FILE 2>&1

    cd ../..
    OUTDENT
  fi
done

MESSAGE "Platform successfully updated."

#!/bin/bash

##### CONFIGURATION #####
if [ -e $(dirname $0)/config.sh ] ; then
  . $(dirname $0)/config.sh
else
  echo -e "[`basename $0`] ${MESSAGE_INDENT}\e[91mERROR:\e[0m DruTACT configuration script not found: \e[36m$(dirname $0)/config.sh\e[0m"
  exit 1
fi

##### EXTRACT TRANSLATIONS #####
cd $DRUPAL_ROOT
for site in sites/* ; do
  if [ -e $site/settings.php ] ; then
    cd $site
    MESSAGE "Extracting translations in $site..."
    INDENT

    MESSAGE "Switching to Development mode..."
    drush tadaa-switch dev >> $LOG_FILE 2>&1

    MESSAGE "Moving contrib libraries / modules / themes out of DruTACT profile..."
    mv ../../profiles/drutact/libraries ../all/libraries
    mv ../../profiles/drutact/modules/contrib ../all/modules
    mv ../../profiles/drutact/themes/contrib ../all/themes
    drush rr >> $LOG_FILE 2>&1
    drush cc drush >> $LOG_FILE 2>&1

    MESSAGE "Localizing fields..."
    drush localize-fields ../../profiles/drutact -y >> $LOG_FILE 2>&1
    drush localize-fields ../../profiles/drutact -y >> $LOG_FILE 2>&1

    MESSAGE "Extracting translations..."
    drush potx single --translations --language=fr --folder=profiles/drutact >> $LOG_FILE 2>&1

    MESSAGE "Moving contrib libraries / modules / themes back into DruTACT profile..."
    mv ../all/libraries ../../profiles/drutact/libraries
    mv ../all/modules/contrib ../../profiles/drutact/modules
    mv ../all/themes/contrib ../../profiles/drutact/themes
    drush rr >> $LOG_FILE 2>&1
    drush cc drush >> $LOG_FILE 2>&1

    MESSAGE "Moving translations into DruTACT profile..."
    mv ../../general.pot ../../profiles/drutact/translations/drutact.fr.po

    OUTDENT
    cd ../..
  fi
done

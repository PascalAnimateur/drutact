#!/bin/bash

##### CONFIGURATION #####
if [ -e $(dirname $0)/config.sh ] ; then
  . $(dirname $0)/config.sh
else
  echo -e "[`basename $0`] ${MESSAGE_INDENT}\e[91mERROR:\e[0m DruTACT configuration script not found: \e[36m$(dirname $0)/config.sh\e[0m"
  exit 1
fi

##### FIX PERMISSIONS #####
MESSAGE "Fixing permissions in Drupal root..."
cd $DRUPAL_ROOT
sudo chown `whoami`:`whoami` . -R
find . -type d -exec chmod u=rwx,g=rx,o=rx '{}' \;
find . -type f -exec chmod u=rw,g=r,o=r '{}' \;
chmod a+x $SCRIPTS_PATH/*.sh
for site in sites/* ; do
  if [ -e $site/settings.php ] ; then
    cd $site
    MESSAGE "Fixing permissions in $site..."
    sudo chmod 755 .
    sudo chown www-data:www-data files/ private/ -R
    sudo chmod u+w files/ private/ -R
    sudo chmod g+w files/ private/ -R
    cd ../..
  fi
done

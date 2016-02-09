#!/bin/bash

##### INCLUSION GUARD #####
if [ ! -n "$DRUTACT_VERSION" ] ; then
  export DRUTACT_VERSION="7.x-1.3-alpha25"
  export SCRIPTS_PATH=`readlink -f $(dirname $0)`
  export DRUTACT_PATH=`readlink -f $(dirname $0)/..`
  export DRUPAL_ROOT=`readlink -f $(dirname $0)/../../..`
  echo -e "\e[36m### DruTACT $DRUTACT_VERSION ###\e[0m"
  echo ""
else
  return
fi

##### LOG FILE #####
LOG_FILE="/dev/null"
# Uncomment the following lines to enable logging:
# LOG_FILE="$SCRIPTS_PATH/log/`basename $0 .sh`.log"
# touch $LOG_FILE

##### MESSAGE / CONFIRM / WARNING / ERROR #####
export MESSAGE_INDENT=""
function INDENT () {
  MESSAGE_INDENT="$MESSAGE_INDENT  "
}
function OUTDENT () {
  MESSAGE_INDENT=${MESSAGE_INDENT::-2}
}
function MESSAGE () {
  echo -e "[`basename $0`] ${MESSAGE_INDENT}$1"
}
function CONFIRM () {
  echo -e "[`basename $0`] ${MESSAGE_INDENT}\e[93mINFO:\e[0m $1"
  if [ "$YES" != "yes" ] ; then
    read -p "[`basename $0`] ${MESSAGE_INDENT}Do you want to continue [y/N]? " -n 1 -r
    if [[ ! $REPLY =~ ^[Yy]$ ]] ; then echo " " ; echo -e " " ; exit 0 ; fi
    echo " "
    #echo " "
  fi
}
function WARNING () {
  echo -e "[`basename $0`] ${MESSAGE_INDENT}\e[93mWARNING:\e[0m $1"
  if [ "$YES" != "yes" ] ; then
    read -p "[`basename $0`] ${MESSAGE_INDENT}Do you want to continue [y/N]? " -n 1 -r
    if [[ ! $REPLY =~ ^[Yy]$ ]] ; then echo " " ; echo -e " " ; exit 0 ; fi
    echo " "
  fi
}
function ERROR () {
  echo -e "[`basename $0`] ${MESSAGE_INDENT}\e[91mERROR:\e[0m $1"
  exit 1
}

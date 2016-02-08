<?php
/**
 * @file
 * drutact_video.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function drutact_video_default_rules_configuration() {
  $items = array();
  $items['rules_drutact_video_automatic_conversion'] = entity_import('rules_config', '{ "rules_drutact_video_automatic_conversion" : {
      "LABEL" : "DruTACT Video - Automatic conversion",
      "PLUGIN" : "rule",
      "OWNER" : "rules",
      "TAGS" : [ "drutact", "video" ],
      "REQUIRES" : [ "rules", "libav" ],
      "USES VARIABLES" : { "video" : { "label" : "Video", "type" : "node" } },
      "IF" : [
        { "entity_is_of_bundle" : {
            "entity" : [ "video" ],
            "type" : "node",
            "bundle" : { "value" : { "video" : "video" } }
          }
        }
      ],
      "DO" : [
        { "libav_action_calculate_duration" : {
            "USING" : { "source_file" : [ "video:field-original-video:file" ] },
            "PROVIDE" : { "duration" : { "video_duration" : "Video duration" } }
          }
        },
        { "data_calc" : {
            "USING" : { "input_1" : [ "video-duration" ], "op" : "min", "input_2" : "2" },
            "PROVIDE" : { "result" : { "time_offset" : "Time offset" } }
          }
        },
        { "libav_action_video_thumbnail" : {
            "USING" : {
              "source_file" : [ "video:field-original-video:file" ],
              "time_offset" : [ "time_offset" ]
            },
            "PROVIDE" : { "video_thumbnail" : { "video_thumbnail" : "Video thumbnail" } }
          }
        },
        { "data_set" : { "data" : [ "video:field-image:file" ], "value" : [ "video-thumbnail" ] } },
        { "libav_action_video_conversion" : {
            "USING" : {
              "source_file" : [ "video:field-original-video:file" ],
              "video_preset" : "mp4"
            },
            "PROVIDE" : { "converted_video_file" : { "converted_video_file" : "Converted video file" } }
          }
        },
        { "data_set" : {
            "data" : [ "video:field-converted-video:file" ],
            "value" : [ "converted-video-file" ]
          }
        },
        { "node_publish" : { "node" : [ "video" ] } },
        { "drupal_message" : {
            "message" : "Video \\u003Ca href=\\u0022[video:url]\\u0022\\u003E[video:title-field]\\u003C\\/a\\u003E was succesfully converted and published.",
            "repeat" : "0"
          }
        }
      ]
    }
  }');
  $items['rules_drutact_video_convert_new_video'] = entity_import('rules_config', '{ "rules_drutact_video_convert_new_video" : {
      "LABEL" : "DruTACT Video - Convert new video",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "drutact", "video" ],
      "REQUIRES" : [ "rules" ],
      "ON" : { "node_insert--video" : { "bundle" : "video" } },
      "DO" : [
        { "component_rules_drutact_video_automatic_conversion" : { "video" : [ "node" ] } }
      ]
    }
  }');
  $items['rules_drutact_video_convert_updated_video'] = entity_import('rules_config', '{ "rules_drutact_video_convert_updated_video" : {
      "LABEL" : "DruTACT Video - Convert updated video",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "drutact", "video" ],
      "REQUIRES" : [ "rules" ],
      "ON" : { "node_update--video" : { "bundle" : "video" } },
      "IF" : [
        { "NOT data_is" : {
            "data" : [ "node-unchanged:field-original-video:file" ],
            "value" : [ "node:field-original-video:file" ]
          }
        }
      ],
      "DO" : [
        { "component_rules_drutact_video_automatic_conversion" : { "video" : [ "node" ] } }
      ]
    }
  }');
  return $items;
}

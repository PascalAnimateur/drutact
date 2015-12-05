<?php
/**
 * @file
 * drutact_charts.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function drutact_charts_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'charts_default_settings';
  $strongarm->value = array(
    'library' => '',
    'type' => 'pie',
    'title' => '',
    'title_position' => 'out',
    'legend_position' => 'right',
    'colors' => array(
      0 => '#2f7ed8',
      1 => '#0d233a',
      2 => '#8bbc21',
      3 => '#910000',
      4 => '#1aadce',
      5 => '#492970',
      6 => '#f28f43',
      7 => '#77a1e5',
      8 => '#c42525',
      9 => '#a6c96a',
    ),
    'background' => '',
    'width' => '',
    'height' => '',
    'xaxis_title' => '',
    'xaxis_labels_rotation' => '0',
    'yaxis_title' => '',
    'yaxis_min' => '',
    'yaxis_max' => '',
    'yaxis_prefix' => '',
    'yaxis_suffix' => '',
    'yaxis_decimal_count' => '',
    'yaxis_labels_rotation' => '0',
  );
  $export['charts_default_settings'] = $strongarm;

  return $export;
}

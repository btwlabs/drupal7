<?php
/**
 * @file
 * row_support.variable.inc
 */

/**
 * Implements hook_default_variable_assets().
 */
function row_support_default_variable_assets() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ds_extras_vd';
  $strongarm->value = 1;
  $export['ds_extras_vd'] = $strongarm;

  return $export;
}
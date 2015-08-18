<?php
/**
 * @file
 * common_support.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function common_support_ds_custom_fields_info() {
  $export = array();

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'clickable_node_title';
  $ds_field->label = 'Clickable Node Title';
  $ds_field->field_type = 5;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'code' => array(
      'value' => '<h2 class="title"><a href="/node/[node:nid]" class="clickable-select">[node:title]</a></h2>',
      'format' => 'full_html',
    ),
    'use_token' => 1,
  );
  $export['clickable_node_title'] = $ds_field;

  return $export;
}

/**
 * Implements hook_ds_view_modes_info().
 */
function common_support_ds_view_modes_info() {
  $export = array();

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'taxonomy_pages';
  $ds_view_mode->label = 'Taxonomy Pages';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['taxonomy_pages'] = $ds_view_mode;

  return $export;
}

<?php
/**
 * @file
 * export.ds.inc
 */

/**
 * Implements hook_ds_custom_fields_info().
 */
function export_ds_custom_fields_info() {
  $export = array();

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'news_article_gallery';
  $ds_field->label = 'News Article Gallery';
  $ds_field->field_type = 3;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = 'news_article|full';
  $ds_field->properties = array();
  $export['news_article_gallery'] = $ds_field;

  return $export;
}

<?php
/**
 * @file
 * story_blocks.variable.inc
 */

/**
 * Implements hook_default_variable_assets().
 */
function story_blocks_default_variable_assets() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_story_block';
  $strongarm->value = 0;
  $export['comment_anonymous_story_block'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_story_block';
  $strongarm->value = 1;
  $export['comment_default_mode_story_block'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_story_block';
  $strongarm->value = '50';
  $export['comment_default_per_page_story_block'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_story_block';
  $strongarm->value = 1;
  $export['comment_form_location_story_block'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_page';
  $strongarm->value = 0;
  $export['comment_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_story_block';
  $strongarm->value = '1';
  $export['comment_preview_story_block'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_story_block';
  $strongarm->value = '0';
  $export['comment_story_block'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_story_block';
  $strongarm->value = 1;
  $export['comment_subject_field_story_block'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ds_extras_switch_view_mode';
  $strongarm->value = 1;
  $export['ds_extras_switch_view_mode'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ds_extras_vd';
  $strongarm->value = 1;
  $export['ds_extras_vd'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__story_block';
  $strongarm->value = array(
    'view_modes' => array(
      'full' => array(
        'custom_settings' => TRUE,
      ),
      'left_bg_image_story_block' => array(
        'custom_settings' => TRUE,
      ),
      'left_non_bg_image_story_block' => array(
        'custom_settings' => TRUE,
      ),
      'right_bg_image_story_block' => array(
        'custom_settings' => TRUE,
      ),
      'right_non_bg_image_story_block' => array(
        'custom_settings' => TRUE,
      ),
      'teaser' => array(
        'custom_settings' => FALSE,
      ),
      'rss' => array(
        'custom_settings' => FALSE,
      ),
      'search_index' => array(
        'custom_settings' => FALSE,
      ),
      'search_result' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
      'revision' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(),
      'display' => array(
        'share_links' => array(
          'default' => array(
            'weight' => '0',
            'visible' => FALSE,
          ),
          'full' => array(
            'weight' => '0',
            'visible' => FALSE,
          ),
          'left_bg_image_story_block' => array(
            'weight' => '0',
            'visible' => FALSE,
          ),
          'left_non_bg_image_story_block' => array(
            'weight' => '0',
            'visible' => FALSE,
          ),
          'right_bg_image_story_block' => array(
            'weight' => '0',
            'visible' => FALSE,
          ),
          'right_non_bg_image_story_block' => array(
            'weight' => '0',
            'visible' => FALSE,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_node__story_block'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_story_block';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_story_block'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_story_block';
  $strongarm->value = '1';
  $export['node_preview_story_block'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_story_block';
  $strongarm->value = 0;
  $export['node_submitted_story_block'] = $strongarm;

  return $export;
}
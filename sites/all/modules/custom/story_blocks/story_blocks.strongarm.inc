<?php
/**
 * @file
 * story_blocks.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function story_blocks_strongarm() {
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
  $strongarm->name = 'ds_classes_regions';
  $strongarm->value = 'l-constrained
node-nid-[node:nid]
clickable
left-copy
right-copy
center-copy
wrapper-bg-image
right-image
left-image
col-bg-image';
  $export['ds_classes_regions'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__story_block';
  $strongarm->value = array(
    'view_modes' => array(
      'full' => array(
        'custom_settings' => TRUE,
      ),
      'left_copy_full_bg_image' => array(
        'custom_settings' => TRUE,
      ),
      'left_copy_full_bg_image_h1' => array(
        'custom_settings' => TRUE,
      ),
      'left_copy_right_bg_image' => array(
        'custom_settings' => TRUE,
      ),
      'left_copy_right_image' => array(
        'custom_settings' => TRUE,
      ),
      'right_copy_full_bg_image' => array(
        'custom_settings' => TRUE,
      ),
      'right_copy_full_bg_image_h1' => array(
        'custom_settings' => TRUE,
      ),
      'right_copy_left_bg_image' => array(
        'custom_settings' => TRUE,
      ),
      'right_copy_left_image' => array(
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
      'center_copy_full_bg_image' => array(
        'custom_settings' => TRUE,
      ),
      'center_copy_bg_image_h1_title' => array(
        'custom_settings' => TRUE,
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
          'left_copy_full_bg_image' => array(
            'weight' => '12',
            'visible' => FALSE,
          ),
          'left_copy_full_bg_image_h1' => array(
            'weight' => '12',
            'visible' => FALSE,
          ),
          'left_copy_right_image' => array(
            'weight' => '10',
            'visible' => FALSE,
          ),
          'right_copy_full_bg_image' => array(
            'weight' => '16',
            'visible' => FALSE,
          ),
          'right_copy_full_bg_image_h1' => array(
            'weight' => '16',
            'visible' => FALSE,
          ),
          'right_copy_left_image' => array(
            'weight' => '16',
            'visible' => FALSE,
          ),
          'left_copy_right_bg_image' => array(
            'weight' => '15',
            'visible' => FALSE,
          ),
          'right_copy_left_bg_image' => array(
            'weight' => '16',
            'visible' => FALSE,
          ),
          'center_copy_full_bg_image' => array(
            'weight' => '16',
            'visible' => FALSE,
          ),
          'center_copy_bg_image_h1_title' => array(
            'weight' => '16',
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

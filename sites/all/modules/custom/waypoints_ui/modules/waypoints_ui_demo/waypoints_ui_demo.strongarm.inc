<?php
/**
 * @file
 * waypoints_ui_demo.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function waypoints_ui_demo_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__page';
  $strongarm->value = array(
    'view_modes' => array(
      'teaser' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
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
      'teaser2' => array(
        'custom_settings' => FALSE,
      ),
      'teaser3' => array(
        'custom_settings' => FALSE,
      ),
      'teaser4' => array(
        'custom_settings' => FALSE,
      ),
      'teaser5' => array(
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
      'form' => array(
        'metatags' => array(
          'weight' => '4',
        ),
        'title' => array(
          'weight' => '0',
        ),
        'path' => array(
          'weight' => '3',
        ),
      ),
      'display' => array(
        'share_links' => array(
          'default' => array(
            'weight' => '0',
            'visible' => FALSE,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_node__page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'waypoints_ui_waypoints';
  $strongarm->value = array(
    0 => array(
      'attach_element' => '.field-name-field-first-image',
      'toggle_class' => 'waypoints-ui-visible',
      'same_element' => 1,
      'toggle_element' => '',
      'toggle_offset' => '50',
      'remove' => 'Remove',
    ),
    1 => array(
      'attach_element' => '.field-name-field-second-image',
      'toggle_class' => 'waypoints-ui-visible',
      'same_element' => 1,
      'toggle_element' => '',
      'toggle_offset' => '-10',
      'remove' => 'Remove',
    ),
    2 => array(
      'attach_element' => '.field-name-field-third-image',
      'toggle_class' => 'waypoints-ui-visible',
      'same_element' => 1,
      'toggle_element' => '',
      'toggle_offset' => '-60',
      'remove' => 'Remove',
    ),
  );
  $export['waypoints_ui_waypoints'] = $strongarm;

  return $export;
}

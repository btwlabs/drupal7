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
  $strongarm->name = 'waypoints_ui_waypoints';
  $strongarm->value = array(
    'waypoint-1' => array(
      'attach_element' => '.field-name-field-images',
      'toggle_class' => 'waypoints-ui-visible',
      'same_element' => 1,
      'toggle_element' => '',
      'toggle_offset' => '40',
      'remove' => 'Remove',
    ),
    'waypoint-2' => array(
      'attach_element' => '.field-name-body',
      'toggle_class' => 'waypoints-ui-visible',
      'same_element' => 1,
      'toggle_element' => '',
      'toggle_offset' => '10',
      'remove' => 'Remove',
    ),
  );
  $export['waypoints_ui_waypoints'] = $strongarm;

  return $export;
}

<?php
/**
 * @file
 * btw_api_v1.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function btw_api_v1_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cors_domains';
  $strongarm->value = array(
    'api/v1/*' => '*|GET,POST|Content-Type',
  );
  $export['cors_domains'] = $strongarm;

  return $export;
}

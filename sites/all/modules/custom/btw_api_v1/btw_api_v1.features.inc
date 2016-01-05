<?php
/**
 * @file
 * btw_api_v1.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function btw_api_v1_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "services" && $api == "services") {
    return array("version" => "3");
  }
}

/**
 * Implements hook_views_api().
 */
function btw_api_v1_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

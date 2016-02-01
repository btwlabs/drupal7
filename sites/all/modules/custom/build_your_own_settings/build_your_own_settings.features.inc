<?php
/**
 * @file
 * build_your_own_settings.features.inc
 */

/**
 * Implements hook_commerce_product_default_types().
 */
function build_your_own_settings_commerce_product_default_types() {
  $items = array(
    'build_your_own' => array(
      'type' => 'build_your_own',
      'name' => 'Build Your Own',
      'description' => 'This product type is used by the system to construct custom products for build your own customers.',
      'help' => '',
      'revision' => 0,
    ),
    'build_your_own_component' => array(
      'type' => 'build_your_own_component',
      'name' => 'Build Your Own Component',
      'description' => 'Create this type of product to add to the options available to users via the Build Your Own feature.',
      'help' => '',
      'revision' => 1,
    ),
  );
  return $items;
}

/**
 * Implements hook_ctools_plugin_api().
 */
function build_your_own_settings_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
}

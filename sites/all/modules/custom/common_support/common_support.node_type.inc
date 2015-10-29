<?php
/**
 * @file common_support.node_type.inc
 */

/**
 * Implements hook_default_node_type_assets().
 */
function common_support_default_node_type_assets() {
  $items = array(
    'placeholder' => array(
      'name' => t('Placeholder'),
      'base' => 'node_content',
      'description' => t('Placeholder node'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}

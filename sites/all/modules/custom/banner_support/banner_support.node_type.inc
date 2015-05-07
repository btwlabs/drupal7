<?php
/**
 * @file
 * banner_support.node.inc
 */

/**
 * Implements hook_node_info().
 */
function banner_support_node_default_node_types() {
  $items = array(
    'banner' => array(
      'name' => t('Banner'),
      'base' => 'node_content',
      'description' => t('Linked image advertising an interior page on the site.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
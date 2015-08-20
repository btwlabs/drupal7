<?php
/**
 * @file story_blocks.node_type.inc
 */

function story_blocks_default_node_type_assets() {
  $items = array(
    'story_block' => array(
      'name' => t('Story Block'),
      'base' => 'node_content',
      'description' => t('Defines a story block node'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}

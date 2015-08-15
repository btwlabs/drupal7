<?php
/**
 * @file row_support.node_type.inc
 */

function row_support_default_node_type_assets() {
  $items = array(
    'row' => array(
      'name' => t('Row'),
      'base' => 'node_content',
      'description' => t('Defines a display row'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}

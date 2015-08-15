<?php
/**
 * @file
 * row_support.entityqueue.inc
 */

/**
 * Implements hook_default_entityqueue_assets().
 */
function row_support_default_entityqueue_assets() {
  $export = array();

  $queue = new EntityQueue();
  $queue->disabled = FALSE; /* Edit this to true to make a default queue disabled initially */
  $queue->api_version = 1;
  $queue->name = 'sample_row_page_queue';
  $queue->label = 'Sample Row Page Queue';
  $queue->language = 'en';
  $queue->handler = 'simple';
  $queue->target_type = 'node';
  $queue->settings = array(
    'target_bundles' => array(
      'page' => 'row',
    ),
    'min_size' => '0',
    'max_size' => '0',
    'act_as_queue' => 0,
  );
  $export['sample_row_page_queue'] = $queue;

  return $export;
}

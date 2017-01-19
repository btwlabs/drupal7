<?php
/**
 * @file
 * story_blocks.entityqueue_default.inc
 */

/**
 * Implements hook_entityqueue_default_queues().
 */
function story_blocks_entityqueue_default_queues() {
  $export = array();

  $queue = new EntityQueue();
  $queue->disabled = FALSE; /* Edit this to true to make a default queue disabled initially */
  $queue->api_version = 1;
  $queue->name = 'sample_story_block_page_queue';
  $queue->label = 'Sample Story Block Page Queue';
  $queue->language = 'en';
  $queue->handler = 'simple';
  $queue->target_type = 'node';
  $queue->settings = array(
    'target_bundles' => array(
      'page' => 'story_block',
    ),
    'min_size' => '0',
    'max_size' => '0',
    'act_as_queue' => 0,
  );
  $export['sample_story_block_page_queue'] = $queue;

  return $export;
}

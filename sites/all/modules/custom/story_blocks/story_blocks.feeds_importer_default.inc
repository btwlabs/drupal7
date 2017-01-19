<?php
/**
 * @file
 * story_blocks.feeds_importer_default.inc
 */

/**
 * Implements hook_feeds_importer_default().
 */
function story_blocks_feeds_importer_default() {
  $export = array();

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'story_block';
  $feeds_importer->config = array(
    'name' => 'story block',
    'description' => 'btw story block importer',
    'fetcher' => array(
      'plugin_key' => 'FeedsHTTPFetcher',
      'config' => array(
        'auto_detect_feeds' => FALSE,
        'use_pubsubhubbub' => FALSE,
        'designated_hub' => '',
        'request_timeout' => NULL,
        'auto_scheme' => 'http',
        'accept_invalid_cert' => FALSE,
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsCSVParser',
      'config' => array(
        'delimiter' => ',',
        'no_headers' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'expire' => '-1',
        'author' => '4',
        'authorize' => 1,
        'mappings' => array(
          0 => array(
            'source' => 'GUID',
            'target' => 'guid',
            'unique' => 1,
          ),
          1 => array(
            'source' => 'Title',
            'target' => 'title',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'Body',
            'target' => 'body',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'Images: URI',
            'target' => 'field_story_block_images:uri',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'Images: Alt',
            'target' => 'field_story_block_images:alt',
            'unique' => FALSE,
          ),
          5 => array(
            'source' => 'Images: Title',
            'target' => 'field_story_block_images:title',
            'unique' => FALSE,
          ),
          6 => array(
            'source' => 'Link: URL',
            'target' => 'field_story_block_link:url',
            'unique' => FALSE,
          ),
          7 => array(
            'source' => 'Link: Title',
            'target' => 'field_story_block_link:title',
            'unique' => FALSE,
          ),
          8 => array(
            'source' => 'Videos: URL',
            'target' => 'field_story_block_videos:video_url',
            'unique' => FALSE,
          ),
          9 => array(
            'source' => 'Videos: description',
            'target' => 'field_story_block_videos:description',
            'unique' => FALSE,
          ),
          10 => array(
            'source' => 'DS view mode',
            'target' => 'ds_view_mode',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '2',
        'update_non_existent' => 'delete',
        'input_format' => 'full_html',
        'skip_hash_check' => 0,
        'bundle' => 'story_block',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['story_block'] = $feeds_importer;

  return $export;
}

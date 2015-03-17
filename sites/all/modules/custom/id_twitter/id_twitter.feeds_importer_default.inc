<?php
/**
 * @file
 * id_twitter.feeds_importer_default.inc
 */

/**
 * Implements hook_feeds_importer_default().
 */
function id_twitter_feeds_importer_default() {
  $export = array();

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'twitter_search';
  $feeds_importer->config = array(
    'name' => 'Twitter Search',
    'description' => 'Pulls tweets from the Twitter search API',
    'fetcher' => array(
      'plugin_key' => 'FeedsTwitterSearchFetcher',
      'config' => array(),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsSocialJSONParser',
      'config' => array(
        'context' => '$.statuses.*',
        'sources' => array(
          'jsonpath_parser:0' => 'id_str',
          'jsonpath_parser:1' => '$.user.name',
          'jsonpath_parser:2' => 'text',
          'jsonpath_parser:3' => '$.user.screen_name',
          'jsonpath_parser:4' => '$.user.name',
          'jsonpath_parser:5' => '$.user.profile_image_url_https',
          'jsonpath_parser:6' => 'created_at',
        ),
        'debug' => array(
          'options' => array(
            'context' => 0,
            'jsonpath_parser:0' => 0,
            'jsonpath_parser:1' => 0,
            'jsonpath_parser:2' => 0,
            'jsonpath_parser:3' => 0,
            'jsonpath_parser:4' => 0,
            'jsonpath_parser:5' => 0,
            'jsonpath_parser:6' => 0,
          ),
        ),
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'content_type' => 'tweet',
        'expire' => '604800',
        'author' => '1',
        'mappings' => array(
          0 => array(
            'source' => 'jsonpath_parser:0',
            'target' => 'guid',
            'unique' => 1,
          ),
          1 => array(
            'source' => 'jsonpath_parser:1',
            'target' => 'title',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'jsonpath_parser:2',
            'target' => 'body',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'jsonpath_parser:3',
            'target' => 'field_tweet_author',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'jsonpath_parser:4',
            'target' => 'field_tweet_author_name',
            'unique' => FALSE,
          ),
          5 => array(
            'source' => 'jsonpath_parser:5',
            'target' => 'field_images_1',
            'unique' => FALSE,
          ),
          6 => array(
            'source' => 'jsonpath_parser:6',
            'target' => 'field_field_date_minute:start',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '0',
        'input_format' => 'tweet',
        'authorize' => TRUE,
        'skip_hash_check' => FALSE,
      ),
    ),
    'content_type' => 'twitter_search',
    'update' => 0,
    'import_period' => '1800',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['twitter_search'] = $feeds_importer;

  return $export;
}

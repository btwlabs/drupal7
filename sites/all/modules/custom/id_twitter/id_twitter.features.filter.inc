<?php
/**
 * @file
 * id_twitter.features.filter.inc
 */

/**
 * Implements hook_filter_default_formats().
 */
function id_twitter_filter_default_formats() {
  $formats = array();

  // Exported format: Tweet.
  $formats['tweet'] = array(
    'format' => 'tweet',
    'name' => 'Tweet',
    'cache' => 1,
    'status' => 1,
    'weight' => -9,
    'filters' => array(
      'filter_autop' => array(
        'weight' => 0,
        'status' => 1,
        'settings' => array(),
      ),
      'filter_url' => array(
        'weight' => 0,
        'status' => 1,
        'settings' => array(
          'filter_url_length' => 72,
        ),
      ),
      'twitter_hashtag' => array(
        'weight' => 0,
        'status' => 1,
        'settings' => array(),
      ),
      'twitter_username' => array(
        'weight' => 0,
        'status' => 1,
        'settings' => array(),
      ),
      'filter_htmlcorrector' => array(
        'weight' => 10,
        'status' => 1,
        'settings' => array(),
      ),
    ),
  );

  return $formats;
}

<?php
/**
 * @file
 * id_twitter.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function id_twitter_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'additional_settings__active_tab_tweet';
  $strongarm->value = 'edit-comment';
  $export['additional_settings__active_tab_tweet'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'additional_settings__active_tab_twitter_search';
  $strongarm->value = 'edit-comment';
  $export['additional_settings__active_tab_twitter_search'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_tweet';
  $strongarm->value = 0;
  $export['comment_anonymous_tweet'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_twitter_search';
  $strongarm->value = 0;
  $export['comment_anonymous_twitter_search'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_tweet';
  $strongarm->value = 1;
  $export['comment_default_mode_tweet'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_twitter_search';
  $strongarm->value = 1;
  $export['comment_default_mode_twitter_search'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_tweet';
  $strongarm->value = '50';
  $export['comment_default_per_page_tweet'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_twitter_search';
  $strongarm->value = '50';
  $export['comment_default_per_page_twitter_search'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_tweet';
  $strongarm->value = 1;
  $export['comment_form_location_tweet'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_twitter_search';
  $strongarm->value = 1;
  $export['comment_form_location_twitter_search'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_tweet';
  $strongarm->value = '1';
  $export['comment_preview_tweet'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_twitter_search';
  $strongarm->value = '1';
  $export['comment_preview_twitter_search'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_tweet';
  $strongarm->value = 1;
  $export['comment_subject_field_tweet'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_twitter_search';
  $strongarm->value = 1;
  $export['comment_subject_field_twitter_search'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_tweet';
  $strongarm->value = '0';
  $export['comment_tweet'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_twitter_search';
  $strongarm->value = '0';
  $export['comment_twitter_search'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__tweet';
  $strongarm->value = array(
    'view_modes' => array(
      'teaser' => array(
        'custom_settings' => FALSE,
      ),
      'admin_popular_content' => array(
        'custom_settings' => FALSE,
      ),
      'updates_carousel' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'rss' => array(
        'custom_settings' => FALSE,
      ),
      'search_index' => array(
        'custom_settings' => FALSE,
      ),
      'search_result' => array(
        'custom_settings' => FALSE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'article_teaser' => array(
        'custom_settings' => FALSE,
      ),
      'views_article_related_nodes' => array(
        'custom_settings' => FALSE,
      ),
      'views_article_video_only' => array(
        'custom_settings' => FALSE,
      ),
      'views_all_user_posts_block' => array(
        'custom_settings' => FALSE,
      ),
      'views_all_user_photos_block' => array(
        'custom_settings' => FALSE,
      ),
      'views_community_welcome_block' => array(
        'custom_settings' => FALSE,
      ),
      'views_dashboard_groups' => array(
        'custom_settings' => FALSE,
      ),
      'views_dashboard_activity' => array(
        'custom_settings' => FALSE,
      ),
      'views_profile_groups' => array(
        'custom_settings' => FALSE,
      ),
      'views_events_popup' => array(
        'custom_settings' => FALSE,
      ),
      'views_store_product_slideshow_single_item_block' => array(
        'custom_settings' => FALSE,
      ),
      'views_store_landing' => array(
        'custom_settings' => FALSE,
      ),
      'views_store_popup' => array(
        'custom_settings' => FALSE,
      ),
      'print' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_node__tweet'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__twitter_search';
  $strongarm->value = array(
    'view_modes' => array(
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'teaser' => array(
        'custom_settings' => FALSE,
      ),
      'rss' => array(
        'custom_settings' => FALSE,
      ),
      'search_index' => array(
        'custom_settings' => FALSE,
      ),
      'search_result' => array(
        'custom_settings' => FALSE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'admin_popular_content' => array(
        'custom_settings' => FALSE,
      ),
      'updates_carousel' => array(
        'custom_settings' => FALSE,
      ),
      'article_teaser' => array(
        'custom_settings' => FALSE,
      ),
      'views_article_related_nodes' => array(
        'custom_settings' => FALSE,
      ),
      'views_article_video_only' => array(
        'custom_settings' => FALSE,
      ),
      'views_all_user_posts_block' => array(
        'custom_settings' => FALSE,
      ),
      'views_all_user_photos_block' => array(
        'custom_settings' => FALSE,
      ),
      'views_community_welcome_block' => array(
        'custom_settings' => FALSE,
      ),
      'views_dashboard_groups' => array(
        'custom_settings' => FALSE,
      ),
      'views_dashboard_activity' => array(
        'custom_settings' => FALSE,
      ),
      'views_profile_groups' => array(
        'custom_settings' => FALSE,
      ),
      'views_events_popup' => array(
        'custom_settings' => FALSE,
      ),
      'views_store_product_slideshow_single_item_block' => array(
        'custom_settings' => FALSE,
      ),
      'views_store_landing' => array(
        'custom_settings' => FALSE,
      ),
      'views_store_popup' => array(
        'custom_settings' => FALSE,
      ),
      'print' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_node__twitter_search'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_tweet';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_tweet'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_twitter_search';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_twitter_search'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_tweet';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_tweet'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_twitter_search';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_twitter_search'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_tweet';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_tweet'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_twitter_search';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_twitter_search'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_tweet';
  $strongarm->value = '0';
  $export['node_preview_tweet'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_twitter_search';
  $strongarm->value = '1';
  $export['node_preview_twitter_search'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_tweet';
  $strongarm->value = 0;
  $export['node_submitted_tweet'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_twitter_search';
  $strongarm->value = 0;
  $export['node_submitted_twitter_search'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'twitter_expire';
  $strongarm->value = '0';
  $export['twitter_expire'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'twitter_import';
  $strongarm->value = 1;
  $export['twitter_import'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'twitter_post_default_format';
  $strongarm->value = 'New post: !title !url-alias';
  $export['twitter_post_default_format'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'twitter_post_types';
  $strongarm->value = array(
    'article' => 'article',
    'post' => 'post',
    'album' => 0,
    'banner' => 0,
    'page' => 0,
    'community_welcome' => 0,
    'event' => 0,
    'event_location' => 0,
    'faq' => 0,
    'media' => 0,
    'meet_greet' => 0,
    'product' => 0,
    'song' => 0,
    'sponsor' => 0,
    'spotlight' => 0,
    'tweet' => 0,
    'twitter_search' => 0,
    'user_group' => 0,
    'webform' => 0,
  );
  $export['twitter_post_types'] = $strongarm;

  return $export;
}

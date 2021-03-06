<?php
/**
 * @file
 * articles_support.variable.inc
 */

/**
 * Implements hook_default_variable_assets().
 */
function articles_support_default_variable_assets() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_news_article';
  $strongarm->value = 0;
  $export['comment_anonymous_news_article'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_news_article';
  $strongarm->value = 1;
  $export['comment_default_mode_news_article'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_news_article';
  $strongarm->value = '50';
  $export['comment_default_per_page_news_article'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_news_article';
  $strongarm->value = 1;
  $export['comment_form_location_news_article'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_news_article';
  $strongarm->value = '1';
  $export['comment_news_article'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_news_article';
  $strongarm->value = '1';
  $export['comment_preview_news_article'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_news_article';
  $strongarm->value = 1;
  $export['comment_subject_field_news_article'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__news_article';
  $strongarm->value = array(
    'view_modes' => array(
      'teaser' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => TRUE,
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
      'token' => array(
        'custom_settings' => FALSE,
      ),
      'revision' => array(
        'custom_settings' => FALSE,
      ),
      'recent_articles' => array(
        'custom_settings' => TRUE,
      ),
      'related_articles' => array(
        'custom_settings' => TRUE,
      ),
      'taxonomy_pages' => array(
        'custom_settings' => TRUE,
      ),
      'left_bg_image_story_block' => array(
        'custom_settings' => FALSE,
      ),
      'left_non_bg_image_story_block' => array(
        'custom_settings' => FALSE,
      ),
      'right_bg_image_story_block' => array(
        'custom_settings' => FALSE,
      ),
      'right_non_bg_image_story_block' => array(
        'custom_settings' => FALSE,
      ),
      'banner_no_body' => array(
        'custom_settings' => FALSE,
      ),
      'banner_with_body' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'metatags' => array(
          'weight' => '7',
        ),
        'title' => array(
          'weight' => '0',
        ),
        'path' => array(
          'weight' => '6',
        ),
        'xmlsitemap' => array(
          'weight' => '7',
        ),
      ),
      'display' => array(
        'gallery' => array(
          'default' => array(
            'weight' => '6',
            'visible' => TRUE,
          ),
          'teaser2' => array(
            'weight' => '1',
            'visible' => FALSE,
          ),
          'teaser' => array(
            'weight' => '6',
            'visible' => FALSE,
          ),
          'full' => array(
            'weight' => '6',
            'visible' => TRUE,
          ),
          'recent_articles' => array(
            'weight' => '6',
            'visible' => TRUE,
          ),
          'related_articles' => array(
            'weight' => '6',
            'visible' => TRUE,
          ),
        ),
        'article_pager' => array(
          'default' => array(
            'weight' => '7',
            'visible' => TRUE,
          ),
          'teaser2' => array(
            'weight' => '3',
            'visible' => FALSE,
          ),
          'teaser' => array(
            'weight' => '3',
            'visible' => FALSE,
          ),
          'full' => array(
            'weight' => '7',
            'visible' => TRUE,
          ),
          'recent_articles' => array(
            'weight' => '7',
            'visible' => TRUE,
          ),
          'related_articles' => array(
            'weight' => '7',
            'visible' => TRUE,
          ),
        ),
        'recent_articles' => array(
          'default' => array(
            'weight' => '8',
            'visible' => TRUE,
          ),
          'teaser' => array(
            'weight' => '4',
            'visible' => FALSE,
          ),
          'full' => array(
            'weight' => '8',
            'visible' => TRUE,
          ),
          'recent_articles' => array(
            'weight' => '8',
            'visible' => TRUE,
          ),
          'related_articles' => array(
            'weight' => '8',
            'visible' => TRUE,
          ),
        ),
        'share_links' => array(
          'default' => array(
            'weight' => '3',
            'visible' => TRUE,
          ),
          'teaser' => array(
            'weight' => '12',
            'visible' => FALSE,
          ),
          'full' => array(
            'weight' => '1',
            'visible' => TRUE,
          ),
          'recent_articles' => array(
            'weight' => '3',
            'visible' => TRUE,
          ),
          'related_articles' => array(
            'weight' => '3',
            'visible' => FALSE,
          ),
        ),
        'teaser_image' => array(
          'teaser' => array(
            'weight' => '2',
            'visible' => TRUE,
          ),
          'default' => array(
            'weight' => '9',
            'visible' => FALSE,
          ),
          'full' => array(
            'weight' => '9',
            'visible' => FALSE,
          ),
          'recent_articles' => array(
            'weight' => '9',
            'visible' => FALSE,
          ),
          'related_articles' => array(
            'weight' => '9',
            'visible' => FALSE,
          ),
        ),
        'title_link' => array(
          'teaser' => array(
            'weight' => '2',
            'visible' => TRUE,
          ),
          'default' => array(
            'weight' => '10',
            'visible' => FALSE,
          ),
          'full' => array(
            'weight' => '10',
            'visible' => FALSE,
          ),
          'recent_articles' => array(
            'weight' => '10',
            'visible' => FALSE,
          ),
          'related_articles' => array(
            'weight' => '10',
            'visible' => FALSE,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_node__news_article'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_news_article';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_news_article'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_news_article';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_news_article'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_news_article';
  $strongarm->value = array(
    0 => 'status',
    1 => 'promote',
  );
  $export['node_options_news_article'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_news_article';
  $strongarm->value = '1';
  $export['node_preview_news_article'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_news_article';
  $strongarm->value = 0;
  $export['node_submitted_news_article'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_news_article_pattern';
  $strongarm->value = 'news/[node:title]';
  $export['pathauto_node_news_article_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'entity_pager_1_entity_id_arg';
  $strongarm->value = '1';
  $export['entity_pager_1_entity_id_arg'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'entity_pager_1_entity_pager_entity_type';
  $strongarm->value = 'node';
  $export['entity_pager_1_entity_pager_entity_type'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'entity_pager_1_entity_pager_view';
  $strongarm->value = 'article_entity_pager';
  $export['entity_pager_1_entity_pager_view'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'entity_pager_1_link_path';
  $strongarm->value = 'articles';
  $export['entity_pager_1_link_path'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'entity_pager_1_link_text';
  $strongarm->value = 'Back to Articles';
  $export['entity_pager_1_link_text'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'entity_pager_1_pager_text_custom';
  $strongarm->value = 0;
  $export['entity_pager_1_pager_text_custom'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'entity_pager_1_pager_text_next';
  $strongarm->value = '';
  $export['entity_pager_1_pager_text_next'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'entity_pager_1_pager_text_previous';
  $strongarm->value = '';
  $export['entity_pager_1_pager_text_previous'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'entity_pager_1_scroll_percent';
  $strongarm->value = '50';
  $export['entity_pager_1_scroll_percent'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'entity_pager_1_use_js';
  $strongarm->value = 0;
  $export['entity_pager_1_use_js'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'entity_pager_1_use_link';
  $strongarm->value = 1;
  $export['entity_pager_1_use_link'] = $strongarm;

  return $export;
}

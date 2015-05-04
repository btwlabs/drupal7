<?php
/**
 * @file
 * articles_support.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function articles_support_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|news_article|default';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'news_article';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'clickable_title_link' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'news_article_gallery' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'recent_articles' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'show_title' => 1,
        'title_wrapper' => 'h2',
        'ctools' => 'a:3:{s:4:"conf";a:3:{s:14:"override_title";i:0;s:19:"override_title_text";s:0:"";s:22:"override_title_heading";s:2:"h2";}s:4:"type";s:5:"block";s:7:"subtype";s:21:"views-articles-recent";}',
        'load_terms' => 0,
        'ft' => array(),
      ),
    ),
  );
  $export['node|news_article|default'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|news_article|full';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'news_article';
  $ds_fieldsetting->view_mode = 'full';
  $ds_fieldsetting->settings = array(
    'recent_articles' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'show_title' => 1,
        'title_wrapper' => 'h2',
        'ctools' => 'a:3:{s:4:"conf";a:3:{s:14:"override_title";i:0;s:19:"override_title_text";s:0:"";s:22:"override_title_heading";s:2:"h2";}s:4:"type";s:5:"block";s:7:"subtype";s:21:"views-articles-recent";}',
        'load_terms' => 0,
      ),
    ),
    'article_entity_pager' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'show_title' => 0,
        'title_wrapper' => 'h2',
        'ctools' => 'a:3:{s:4:"conf";a:3:{s:14:"override_title";i:0;s:19:"override_title_text";s:0:"";s:22:"override_title_heading";s:2:"h2";}s:4:"type";s:5:"block";s:7:"subtype";s:34:"views-article_entity_pager-block_1";}',
        'load_terms' => 0,
      ),
    ),
    'news_article_gallery' => array(
      'weight' => '0',
      'label' => 'above',
      'format' => 'default',
    ),
    'comments' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['node|news_article|full'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|news_article|teaser';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'news_article';
  $ds_fieldsetting->view_mode = 'teaser';
  $ds_fieldsetting->settings = array(
    'clickable_title_link' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'submitted' => array(
      'weight' => '2',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'teaser_image' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['node|news_article|teaser'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_custom_fields_info().
 */
function articles_support_ds_custom_fields_info() {
  $export = array();

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'clickable_title_link';
  $ds_field->label = 'Clickable Title Link';
  $ds_field->field_type = 3;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = 'news_article|*';
  $ds_field->properties = array();
  $export['clickable_title_link'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'news_article_gallery';
  $ds_field->label = 'News Article Gallery';
  $ds_field->field_type = 3;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = 'news_article|full
news_article|default';
  $ds_field->properties = array();
  $export['news_article_gallery'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'recent_articles';
  $ds_field->label = 'Recent Articles';
  $ds_field->field_type = 7;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = 'news_article|full
news_article|default';
  $ds_field->properties = array(
    'default' => array(),
    'settings' => array(
      'show_title' => array(
        'type' => 'checkbox',
      ),
      'title_wrapper' => array(
        'type' => 'textfield',
        'description' => 'Eg: h1, h2, p',
      ),
      'ctools' => array(
        'type' => 'ctools',
      ),
    ),
  );
  $export['recent_articles'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'submitted';
  $ds_field->label = 'Submitted';
  $ds_field->field_type = 3;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = 'news_article|*';
  $ds_field->properties = array();
  $export['submitted'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'teaser_image';
  $ds_field->label = 'Teaser Image';
  $ds_field->field_type = 3;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = 'news_article|*';
  $ds_field->properties = array();
  $export['teaser_image'] = $ds_field;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function articles_support_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|news_article|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'news_article';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'clickable_title_link',
        1 => 'news_article_gallery',
        2 => 'recent_articles',
        3 => 'field_tags',
        4 => 'share_links',
        5 => 'field_article_video',
        6 => 'field_article_images',
        7 => 'field_article_quote',
        8 => 'field_article_body',
      ),
    ),
    'fields' => array(
      'clickable_title_link' => 'ds_content',
      'news_article_gallery' => 'ds_content',
      'recent_articles' => 'ds_content',
      'field_tags' => 'ds_content',
      'share_links' => 'ds_content',
      'field_article_video' => 'ds_content',
      'field_article_images' => 'ds_content',
      'field_article_quote' => 'ds_content',
      'field_article_body' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|news_article|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|news_article|full';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'news_article';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'articles_support_1';
  $ds_layout->settings = array(
    'regions' => array(
      'article_content' => array(
        0 => 'comments',
        1 => 'news_article_gallery',
        2 => 'recent_articles',
        3 => 'article_entity_pager',
        4 => 'field_tags',
        5 => 'share_links',
        6 => 'field_article_video',
        7 => 'field_article_images',
        8 => 'field_article_quote',
        9 => 'field_article_body',
      ),
    ),
    'fields' => array(
      'comments' => 'article_content',
      'news_article_gallery' => 'article_content',
      'recent_articles' => 'article_content',
      'article_entity_pager' => 'article_content',
      'field_tags' => 'article_content',
      'share_links' => 'article_content',
      'field_article_video' => 'article_content',
      'field_article_images' => 'article_content',
      'field_article_quote' => 'article_content',
      'field_article_body' => 'article_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'article_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|news_article|full'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|news_article|teaser';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'news_article';
  $ds_layout->view_mode = 'teaser';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'clickable_title_link',
        1 => 'teaser_image',
        2 => 'submitted',
        3 => 'field_article_body',
      ),
    ),
    'fields' => array(
      'clickable_title_link' => 'ds_content',
      'teaser_image' => 'ds_content',
      'submitted' => 'ds_content',
      'field_article_body' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|news_article|teaser'] = $ds_layout;

  return $export;
}

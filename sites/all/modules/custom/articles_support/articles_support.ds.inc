<?php
/**
 * @file
 * export.ds.inc
 */

/**
 * Implements hook_ds_custom_fields_info().
 */
function articles_support_ds_custom_fields_info() {
  $export = array();

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'article_entity_page';
  $ds_field->label = 'Article Entity Page';
  $ds_field->field_type = 7;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = 'news_article|*';
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
  $export['article_entity_page'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'news_article_gallery';
  $ds_field->label = 'News Article Gallery';
  $ds_field->field_type = 3;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = 'news_article|full';
  $ds_field->properties = array();
  $export['news_article_gallery'] = $ds_field;

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
        0 => 'field_tags',
        1 => 'share_links',
        2 => 'field_article_video',
        3 => 'field_article_images',
        4 => 'field_article_quote',
        5 => 'field_article_body',
        6 => 'recent_articles',
      ),
    ),
    'fields' => array(
      'field_tags' => 'ds_content',
      'share_links' => 'ds_content',
      'field_article_video' => 'ds_content',
      'field_article_images' => 'ds_content',
      'field_article_quote' => 'ds_content',
      'field_article_body' => 'ds_content',
      'recent_articles' => 'ds_content',
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
    'classes' => array(),
    'wrappers' => array(),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => TRUE,
    'layout_link_attribute' => FALSE,
    'layout_link_custom' => '',
    'regions' => array(
      'article_content' => array(
        0 => 'field_tags',
        1 => 'share_links',
        2 => 'field_article_video',
        3 => 'field_article_images',
        4 => 'field_article_quote',
        5 => 'field_article_body',
        6 => 'comments',
      ),
    ),
    'fields' => array(
      'field_tags' => 'article_content',
      'share_links' => 'article_content',
      'field_article_video' => 'article_content',
      'field_article_images' => 'article_content',
      'field_article_quote' => 'article_content',
      'field_article_body' => 'article_content',
      'comments' => 'article_content',
    ),
  );
  $export['node|news_article|full'] = $ds_layout;

  return $export;
}

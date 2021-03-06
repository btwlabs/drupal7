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
  $ds_fieldsetting->id = 'field_collection_item|field_article_quote|default';
  $ds_fieldsetting->entity_type = 'field_collection_item';
  $ds_fieldsetting->bundle = 'field_article_quote';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'field_article_quote_author' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
          'classes' => 'quote-author',
        ),
      ),
    ),
    'field_article_quote_body' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
          'classes' => 'quote-body',
        ),
      ),
    ),
    'field_article_quote_url' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
          'classes' => 'quote-url',
        ),
      ),
    ),
  );
  $export['field_collection_item|field_article_quote|default'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'field_collection_item|field_article_quote|full';
  $ds_fieldsetting->entity_type = 'field_collection_item';
  $ds_fieldsetting->bundle = 'field_article_quote';
  $ds_fieldsetting->view_mode = 'full';
  $ds_fieldsetting->settings = array(
    'field_article_quote_author' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
          'classes' => 'quote quote-author',
        ),
      ),
    ),
    'field_article_quote_body' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
          'classes' => 'quote quote-body',
        ),
      ),
    ),
    'field_article_quote_url' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
          'classes' => 'quote quote-url',
        ),
      ),
    ),
  );
  $export['field_collection_item|field_article_quote|full'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|news_article|default';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'news_article';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'article_hero_image' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'article_pager' => array(
      'weight' => '15',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'show_title' => 0,
        'title_wrapper' => '',
        'ctools' => 'a:3:{s:4:"conf";a:3:{s:14:"override_title";i:0;s:19:"override_title_text";s:0:"";s:22:"override_title_heading";s:2:"h2";}s:4:"type";s:5:"block";s:7:"subtype";s:27:"entity_pager-entity_pager_1";}',
        'load_terms' => 0,
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
        ),
      ),
    ),
    'quote_mobile' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'show_title' => 0,
        'title_wrapper' => '',
        'ctools' => 'a:3:{s:4:"conf";a:10:{s:5:"label";s:6:"hidden";s:9:"formatter";s:23:"field_collection_fields";s:11:"delta_limit";s:1:"0";s:12:"delta_offset";s:1:"0";s:14:"delta_reversed";i:0;s:18:"formatter_settings";a:1:{s:9:"view_mode";s:4:"full";}s:7:"context";s:25:"argument_entity_id:node_1";s:14:"override_title";i:0;s:19:"override_title_text";s:0:"";s:22:"override_title_heading";s:2:"h2";}s:4:"type";s:12:"entity_field";s:7:"subtype";s:24:"node:field_article_quote";}',
        'load_terms' => 0,
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
          'classes' => 'quote',
        ),
      ),
    ),
    'news_article_gallery' => array(
      'weight' => '5',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'recent_articles' => array(
      'weight' => '7',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'show_title' => 1,
        'title_wrapper' => 'h2',
        'ctools' => 'a:3:{s:4:"conf";a:3:{s:14:"override_title";i:0;s:19:"override_title_text";s:0:"";s:22:"override_title_heading";s:2:"h2";}s:4:"type";s:5:"block";s:7:"subtype";s:21:"views-articles-recent";}',
        'load_terms' => 0,
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
        ),
      ),
    ),
    'submitted' => array(
      'weight' => '2',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'field_article_body' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
          'classes' => 'body-container',
        ),
      ),
    ),
    'field_article_images' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
        ),
      ),
    ),
    'field_article_quote' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
          'classes' => 'quote',
        ),
      ),
    ),
    'field_tags' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
        ),
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
    'article_hero_image' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'article_pager' => array(
      'weight' => '15',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'show_title' => 0,
        'title_wrapper' => '',
        'ctools' => 'a:3:{s:4:"conf";a:3:{s:14:"override_title";i:0;s:19:"override_title_text";s:0:"";s:22:"override_title_heading";s:2:"h2";}s:4:"type";s:5:"block";s:7:"subtype";s:27:"entity_pager-entity_pager_1";}',
        'load_terms' => 0,
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
        ),
      ),
    ),
    'quote_mobile' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'show_title' => 0,
        'title_wrapper' => '',
        'ctools' => 'a:3:{s:4:"conf";a:10:{s:5:"label";s:6:"hidden";s:9:"formatter";s:23:"field_collection_fields";s:11:"delta_limit";s:1:"0";s:12:"delta_offset";s:1:"0";s:14:"delta_reversed";i:0;s:18:"formatter_settings";a:1:{s:9:"view_mode";s:4:"full";}s:7:"context";s:25:"argument_entity_id:node_1";s:14:"override_title";i:0;s:19:"override_title_text";s:0:"";s:22:"override_title_heading";s:2:"h2";}s:4:"type";s:12:"entity_field";s:7:"subtype";s:24:"node:field_article_quote";}',
        'load_terms' => 0,
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
          'classes' => 'quote',
        ),
      ),
    ),
    'news_article_gallery' => array(
      'weight' => '5',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'recent_articles' => array(
      'weight' => '7',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'show_title' => 1,
        'title_wrapper' => 'h2',
        'ctools' => 'a:3:{s:4:"conf";a:3:{s:14:"override_title";i:0;s:19:"override_title_text";s:0:"";s:22:"override_title_heading";s:2:"h2";}s:4:"type";s:5:"block";s:7:"subtype";s:21:"views-articles-recent";}',
        'load_terms' => 0,
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
        ),
      ),
    ),
    'submitted' => array(
      'weight' => '2',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'field_article_body' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
          'classes' => 'body-container',
        ),
      ),
    ),
    'field_article_images' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
        ),
      ),
    ),
    'field_article_quote' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
          'classes' => 'quote',
        ),
      ),
    ),
    'field_tags' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
        ),
      ),
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

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|news_article|recent_articles';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'news_article';
  $ds_fieldsetting->view_mode = 'recent_articles';
  $ds_fieldsetting->settings = array(
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
  $export['node|news_article|recent_articles'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|news_article|related_articles';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'news_article';
  $ds_fieldsetting->view_mode = 'related_articles';
  $ds_fieldsetting->settings = array(
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
    'clickable_node_title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['node|news_article|related_articles'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|news_article|taxonomy_pages';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'news_article';
  $ds_fieldsetting->view_mode = 'taxonomy_pages';
  $ds_fieldsetting->settings = array(
    'submitted' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'teaser_image' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'clickable_node_title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['node|news_article|taxonomy_pages'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_custom_fields_info().
 */
function articles_support_ds_custom_fields_info() {
  $export = array();

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'article_hero_image';
  $ds_field->label = 'Article Hero Image';
  $ds_field->field_type = 3;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = 'news_article|default
news_article|full';
  $ds_field->properties = array();
  $export['article_hero_image'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'article_pager';
  $ds_field->label = 'Article Pager';
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
  $export['article_pager'] = $ds_field;

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
  $ds_field->field = 'quote_mobile';
  $ds_field->label = 'Quote Mobile';
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
  $export['quote_mobile'] = $ds_field;

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
  $ds_layout->id = 'field_collection_item|field_article_quote|default';
  $ds_layout->entity_type = 'field_collection_item';
  $ds_layout->bundle = 'field_article_quote';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'common_support_quote_1';
  $ds_layout->settings = array(
    'regions' => array(
      'quote_body' => array(
        0 => 'field_article_quote_body',
      ),
      'quote_author' => array(
        1 => 'field_article_quote_author',
      ),
      'quote_url' => array(
        2 => 'field_article_quote_url',
      ),
    ),
    'fields' => array(
      'field_article_quote_body' => 'quote_body',
      'field_article_quote_author' => 'quote_author',
      'field_article_quote_url' => 'quote_url',
    ),
    'classes' => array(),
    'wrappers' => array(
      'quote_body' => 'div',
      'quote_author' => 'div',
      'quote_url' => 'span',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['field_collection_item|field_article_quote|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'field_collection_item|field_article_quote|full';
  $ds_layout->entity_type = 'field_collection_item';
  $ds_layout->bundle = 'field_article_quote';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'common_support_quote_1';
  $ds_layout->settings = array(
    'regions' => array(
      'quote_body' => array(
        0 => 'field_article_quote_body',
      ),
      'quote_author' => array(
        1 => 'field_article_quote_author',
      ),
      'quote_url' => array(
        2 => 'field_article_quote_url',
      ),
    ),
    'fields' => array(
      'field_article_quote_body' => 'quote_body',
      'field_article_quote_author' => 'quote_author',
      'field_article_quote_url' => 'quote_url',
    ),
    'classes' => array(),
    'wrappers' => array(
      'quote_body' => 'div',
      'quote_author' => 'div',
      'quote_url' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['field_collection_item|field_article_quote|full'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|news_article|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'news_article';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'articles_support_1';
  $ds_layout->settings = array(
    'regions' => array(
      'row_mobile' => array(
        0 => 'quote_mobile',
      ),
      'row1' => array(
        1 => 'article_hero_image',
      ),
      'header' => array(
        2 => 'field_tags',
        3 => 'submitted',
        4 => 'share_links',
      ),
      'row2_col1' => array(
        5 => 'field_article_body',
      ),
      'row3' => array(
        6 => 'news_article_gallery',
      ),
      'row_mobile' => array(
        7 => 'field_article_images',
      ),
      'row_bottom' => array(
        8 => 'recent_articles',
      ),
      'row4' => array(
        9 => 'article_pager',
      ),
      'row2_col2' => array(
        10 => 'field_article_quote',
      ),
    ),
    'fields' => array(
      'quote_mobile' => 'row_mobile',
      'article_hero_image' => 'row1',
      'field_tags' => 'header',
      'submitted' => 'header',
      'share_links' => 'header',
      'field_article_body' => 'row2_col1',
      'news_article_gallery' => 'row3',
      'field_article_images' => 'row_mobile',
      'recent_articles' => 'row_bottom',
      'article_pager' => 'row4',
      'field_article_quote' => 'row2_col2',
    ),
    'classes' => array(),
    'wrappers' => array(
      'header' => 'div',
      'row1' => 'div',
      'row2' => 'div',
      'row2_col1' => 'div',
      'row2_col2' => 'aside',
      'row3' => 'div',
      'row_mobile' => 'div',
      'row4' => 'div',
      'row_bottom' => 'div',
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
      'row1' => array(
        0 => 'article_hero_image',
      ),
      'header' => array(
        1 => 'field_tags',
        3 => 'share_links',
        4 => 'submitted',
      ),
      'row_mobile' => array(
        2 => 'quote_mobile',
      ),
      'row_mobile' => array(
        5 => 'field_article_images',
      ),
      'row2_col2' => array(
        6 => 'field_article_quote',
      ),
      'row3' => array(
        7 => 'news_article_gallery',
      ),
      'row2_col1' => array(
        8 => 'field_article_body',
      ),
      'row_bottom' => array(
        9 => 'recent_articles',
      ),
      'row4' => array(
        10 => 'article_pager',
      ),
    ),
    'fields' => array(
      'article_hero_image' => 'row1',
      'field_tags' => 'header',
      'quote_mobile' => 'row_mobile',
      'share_links' => 'header',
      'submitted' => 'header',
      'field_article_images' => 'row_mobile',
      'field_article_quote' => 'row2_col2',
      'news_article_gallery' => 'row3',
      'field_article_body' => 'row2_col1',
      'recent_articles' => 'row_bottom',
      'article_pager' => 'row4',
    ),
    'classes' => array(),
    'wrappers' => array(
      'header' => 'div',
      'row1' => 'div',
      'row2' => 'div',
      'row2_col1' => 'div',
      'row2_col2' => 'aside',
      'row3' => 'div',
      'row_mobile' => 'div',
      'row4' => 'div',
      'row_bottom' => 'div',
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
  $ds_layout->layout = 'common_support_teaser_1';
  $ds_layout->settings = array(
    'regions' => array(
      'col1' => array(
        0 => 'teaser_image',
      ),
      'col2' => array(
        1 => 'submitted',
        2 => 'field_article_body',
        3 => 'field_tags',
      ),
    ),
    'fields' => array(
      'teaser_image' => 'col1',
      'submitted' => 'col1',
      'field_article_body' => 'col2',
      'field_tags' => 'col2',
    ),
    'classes' => array(),
    'wrappers' => array(
      'col1' => 'div',
      'col2' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|news_article|teaser'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|news_article|recent_articles';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'news_article';
  $ds_layout->view_mode = 'recent_articles';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'teaser_image',
        1 => 'submitted',
      ),
    ),
    'fields' => array(
      'teaser_image' => 'ds_content',
      'submitted' => 'ds_content',
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
  $export['node|news_article|recent_articles'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|news_article|related_articles';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'news_article';
  $ds_layout->view_mode = 'related_articles';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'clickable_node_title',
        1 => 'teaser_image',
        2 => 'submitted',
      ),
    ),
    'fields' => array(
      'clickable_node_title' => 'ds_content',
      'teaser_image' => 'ds_content',
      'submitted' => 'ds_content',
    ),
    'classes' => array(
      'layout_class' => array(
        '' => '',
      ),
    ),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|news_article|related_articles'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|news_article|taxonomy_pages';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'news_article';
  $ds_layout->view_mode = 'taxonomy_pages';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'clickable_node_title',
        1 => 'teaser_image',
        2 => 'submitted',
      ),
    ),
    'fields' => array(
      'clickable_node_title' => 'ds_content',
      'teaser_image' => 'ds_content',
      'submitted' => 'ds_content',
    ),
    'classes' => array(
      'layout_class' => array(
        '' => '',
      ),
    ),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|news_article|taxonomy_pages'] = $ds_layout;

  return $export;
}

/**
 * Implements hook_ds_view_modes_info().
 */
function articles_support_ds_view_modes_info() {
  $export = array();

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'recent_articles';
  $ds_view_mode->label = 'Recent Articles';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['recent_articles'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'related_articles';
  $ds_view_mode->label = 'Related Articles';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['related_articles'] = $ds_view_mode;

  return $export;
}

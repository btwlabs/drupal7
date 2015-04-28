<?php
/**
 * @file
 * articles_support.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function articles_support_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function articles_support_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function articles_support_image_default_styles() {
  $styles = array();

  // Exported image style: article-inline.
  $styles['article-inline'] = array(
    'label' => 'article-inline',
    'effects' => array(
      3 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 1200,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: article-teaser-square.
  $styles['article-teaser-square'] = array(
    'label' => 'article-teaser-square',
    'effects' => array(
      9 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 400,
          'height' => 300,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: article_list_photo.
  $styles['article_list_photo'] = array(
    'effects' => array(
      3 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 240,
          'height' => 220,
          'upscale' => 0,
        ),
        'weight' => -10,
      ),
      5 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 240,
          'height' => 220,
        ),
        'weight' => -9,
      ),
      4 => array(
        'name' => 'image_crop',
        'data' => array(
          'width' => 240,
          'height' => 220,
          'anchor' => 'center-top',
        ),
        'weight' => -8,
      ),
    ),
    'label' => 'article_list_photo',
  );

  // Exported image style: articles_teaser_square_switcher.
  $styles['articles_teaser_square_switcher'] = array(
    'label' => 'articles_teaser_square_switcher',
    'effects' => array(
      12 => array(
        'name' => 'canvasactions_aspect',
        'data' => array(
          'portrait' => 'articles_teaser_square_vert',
          'landscape' => 'article-teaser-square',
          'ratio_adjustment' => 1,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: articles_teaser_square_vert.
  $styles['articles_teaser_square_vert'] = array(
    'label' => 'articles_teaser_square_vert',
    'effects' => array(
      14 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 400,
          'height' => 450,
        ),
        'weight' => -10,
      ),
      11 => array(
        'name' => 'image_crop',
        'data' => array(
          'width' => 400,
          'height' => 300,
          'anchor' => 'center-top',
        ),
        'weight' => -9,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function articles_support_node_info() {
  $items = array(
    'news_article' => array(
      'name' => t('News Article'),
      'base' => 'node_content',
      'description' => t('A news item.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}

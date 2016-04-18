<?php
/**
 * @file
 * story_blocks.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function story_blocks_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  if ($module == "feeds" && $api == "feeds_importer_default") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_entityqueue_api().
 */
function story_blocks_entityqueue_api($module = NULL, $api = NULL) {
  if ($module == "entityqueue" && $api == "entityqueue_default") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function story_blocks_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function story_blocks_image_default_styles() {
  $styles = array();

  // Exported image style: story_block-img-mobile.
  $styles['story_block-img-mobile'] = array(
    'label' => 'story_block-img-mobile',
    'effects' => array(
      6 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 800,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: story_block-img-small.
  $styles['story_block-img-small'] = array(
    'label' => 'story_block-img-small',
    'effects' => array(
      3 => array(
        'name' => 'image_crop',
        'data' => array(
          'width' => 600,
          'height' => 400,
          'anchor' => 'center-center',
        ),
        'weight' => 3,
      ),
    ),
  );

  // Exported image style: story_block-img-small-fp.
  $styles['story_block-img-small-fp'] = array(
    'label' => 'story_block-img-small-fp',
    'effects' => array(
      4 => array(
        'name' => 'focal_point_scale_and_crop',
        'data' => array(
          'width' => 800,
          'height' => 500,
          'focal_point_advanced' => array(
            'shift_x' => '',
            'shift_y' => '',
          ),
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function story_blocks_node_info() {
  $items = array(
    'story_block' => array(
      'name' => t('Story Block'),
      'base' => 'node_content',
      'description' => t('Defines a story block node'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}

<?php
/**
 * @file
 * edgenet_base.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function edgenet_base_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  if ($module == "feeds" && $api == "feeds_importer_default") {
    return array("version" => "1");
  }
  if ($module == "feeds_tamper" && $api == "feeds_tamper_default") {
    return array("version" => "2");
  }
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
function edgenet_base_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function edgenet_base_image_default_styles() {
  $styles = array();

  // Exported image style: card-image.
  $styles['card-image'] = array(
    'label' => 'card-image',
    'effects' => array(
      1 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 430,
          'height' => 230,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: logo_2_1_desaturated.
  $styles['logo_2_1_desaturated'] = array(
    'label' => 'Logo 2:1 desaturated',
    'effects' => array(
      4 => array(
        'name' => 'image_desaturate',
        'data' => array(),
        'weight' => -10,
      ),
      8 => array(
        'name' => 'imagecache_adjustlevels',
        'data' => array(
          'independent_colors' => 0,
          'all_colors' => array(
            'low' => '.5',
            'high' => 1,
          ),
          'per_color' => array(
            'low_red' => 0,
            'high_red' => 1,
            'low_green' => 0,
            'high_green' => 1,
            'low_blue' => 0,
            'high_blue' => 1,
          ),
        ),
        'weight' => -9,
      ),
      5 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 388,
          'height' => 192,
          'upscale' => 1,
        ),
        'weight' => -8,
      ),
      6 => array(
        'name' => 'canvasactions_definecanvas',
        'data' => array(
          'RGB' => array(
            'HEX' => '#FFFFFF',
          ),
          'under' => 1,
          'exact' => array(
            'width' => 400,
            'height' => 200,
            'xpos' => 'center',
            'ypos' => 'center',
          ),
          'relative' => array(
            'leftdiff' => '',
            'rightdiff' => '',
            'topdiff' => '',
            'bottomdiff' => '',
          ),
        ),
        'weight' => -7,
      ),
      7 => array(
        'name' => 'image_crop',
        'data' => array(
          'width' => 400,
          'height' => 200,
          'anchor' => 'center-center',
        ),
        'weight' => -6,
      ),
    ),
  );

  // Exported image style: medium_landscape_crop.
  $styles['medium_landscape_crop'] = array(
    'label' => 'medium landscape crop',
    'effects' => array(
      6 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 460,
          'height' => 360,
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
function edgenet_base_node_info() {
  $items = array(
    'partner' => array(
      'name' => t('Partner'),
      'base' => 'node_content',
      'description' => t('Partners which use products. May contain title, logo, and testimonial. May be related to products and articles.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'product' => array(
      'name' => t('Product'),
      'base' => 'node_content',
      'description' => t('Products are represented on the home page, related to articles, partners. They have node landing pages.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}

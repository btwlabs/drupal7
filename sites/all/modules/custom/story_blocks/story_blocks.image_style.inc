<?php
/**
 * @file story_blocks.image_style.inc
 */


/**
 * Implements hook_default_image_style_assets().
 */
function story_blocks_default_image_style_assets() {
  $styles = array();

  // Exported image style: story_block-img-mobile.
  $styles['story_block-img-mobile'] = array(
    'module' => 'story_blocks',
    'label' => 'story_block-img-mobile',
    'name' => 'story_block-img-mobile',
    'effects' => array(
      10 => array(
        'name' => 'canvasactions_definecanvas',
        'data' => array(
          'RGB' => array(
            'HEX' => '#e2e2e2',
          ),
          'under' => 1,
          'exact' => array(
            'width' => '',
            'height' => '',
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
        'weight' => -10,
      ),
      9 => array(
        'name' => 'focal_point_scale_and_crop',
        'data' => array(
          'width' => 800,
          'height' => 440,
          'focal_point_advanced' => array(
            'shift_x' => '',
            'shift_y' => '',
          ),
        ),
        'weight' => -9,
      ),
      12 => array(
        'name' => 'image_crop',
        'data' => array(
          'width' => 800,
          'height' => 440,
          'anchor' => 'center-center',
        ),
        'weight' => 3,
      ),
    ),
  );

  return $styles;
}

<?php
/**
 * @file
 * story_blocks.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function story_blocks_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|story_block|default';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'story_block';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'mobile_story_block_image' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'show_title' => 0,
        'title_wrapper' => '',
        'ctools' => 'a:3:{s:4:"conf";a:10:{s:5:"label";s:6:"hidden";s:9:"formatter";s:5:"image";s:11:"delta_limit";s:1:"0";s:12:"delta_offset";s:1:"0";s:14:"delta_reversed";i:0;s:18:"formatter_settings";a:2:{s:11:"image_style";s:22:"story_block-img-mobile";s:10:"image_link";s:0:"";}s:7:"context";s:25:"argument_entity_id:node_1";s:14:"override_title";i:0;s:19:"override_title_text";s:0:"";s:22:"override_title_heading";s:2:"h2";}s:4:"type";s:12:"entity_field";s:7:"subtype";s:29:"node:field_story_block_images";}',
        'load_terms' => 0,
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
        ),
      ),
    ),
    'empty_space' => array(
      'weight' => '2',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_reset',
        ),
      ),
    ),
    'title' => array(
      'weight' => '3',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '0',
        'wrapper' => 'h2',
        'class' => 'title',
        'ft' => array(),
      ),
    ),
  );
  $export['node|story_block|default'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|story_block|left_bg_image_story_block';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'story_block';
  $ds_fieldsetting->view_mode = 'left_bg_image_story_block';
  $ds_fieldsetting->settings = array(
    'mobile_story_block_image' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'show_title' => 0,
        'title_wrapper' => '',
        'ctools' => 'a:3:{s:4:"conf";a:10:{s:5:"label";s:6:"hidden";s:9:"formatter";s:5:"image";s:11:"delta_limit";s:1:"0";s:12:"delta_offset";s:1:"0";s:14:"delta_reversed";i:0;s:18:"formatter_settings";a:2:{s:11:"image_style";s:22:"story_block-img-mobile";s:10:"image_link";s:0:"";}s:7:"context";s:25:"argument_entity_id:node_1";s:14:"override_title";i:0;s:19:"override_title_text";s:0:"";s:22:"override_title_heading";s:2:"h2";}s:4:"type";s:12:"entity_field";s:7:"subtype";s:29:"node:field_story_block_images";}',
        'load_terms' => 0,
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
        ),
      ),
    ),
    'title' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '0',
        'wrapper' => 'h2',
        'class' => 'title',
        'ft' => array(),
      ),
    ),
  );
  $export['node|story_block|left_bg_image_story_block'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|story_block|left_non_bg_image_story_block';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'story_block';
  $ds_fieldsetting->view_mode = 'left_non_bg_image_story_block';
  $ds_fieldsetting->settings = array(
    'mobile_story_block_image' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'show_title' => 0,
        'title_wrapper' => '',
        'ctools' => 'a:3:{s:4:"conf";a:10:{s:5:"label";s:6:"hidden";s:9:"formatter";s:5:"image";s:11:"delta_limit";s:1:"0";s:12:"delta_offset";s:1:"0";s:14:"delta_reversed";i:0;s:18:"formatter_settings";a:2:{s:11:"image_style";s:22:"story_block-img-mobile";s:10:"image_link";s:0:"";}s:7:"context";s:25:"argument_entity_id:node_1";s:14:"override_title";i:0;s:19:"override_title_text";s:0:"";s:22:"override_title_heading";s:2:"h2";}s:4:"type";s:12:"entity_field";s:7:"subtype";s:29:"node:field_story_block_images";}',
        'load_terms' => 0,
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
        ),
      ),
    ),
    'title' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'field_story_block_images' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'wow animated fadeInRight ',
          'ow-def-cl' => FALSE,
          'ow-at' => 'data-wow-delay="1s"',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
  );
  $export['node|story_block|left_non_bg_image_story_block'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|story_block|right_bg_image_story_block';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'story_block';
  $ds_fieldsetting->view_mode = 'right_bg_image_story_block';
  $ds_fieldsetting->settings = array(
    'mobile_story_block_image' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'show_title' => 0,
        'title_wrapper' => '',
        'ctools' => 'a:3:{s:4:"conf";a:10:{s:5:"label";s:6:"hidden";s:9:"formatter";s:5:"image";s:11:"delta_limit";s:1:"0";s:12:"delta_offset";s:1:"0";s:14:"delta_reversed";i:0;s:18:"formatter_settings";a:2:{s:11:"image_style";s:22:"story_block-img-mobile";s:10:"image_link";s:0:"";}s:7:"context";s:25:"argument_entity_id:node_1";s:14:"override_title";i:0;s:19:"override_title_text";s:0:"";s:22:"override_title_heading";s:2:"h2";}s:4:"type";s:12:"entity_field";s:7:"subtype";s:29:"node:field_story_block_images";}',
        'load_terms' => 0,
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
        ),
      ),
    ),
    'title' => array(
      'weight' => '3',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['node|story_block|right_bg_image_story_block'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|story_block|right_non_bg_image_story_block';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'story_block';
  $ds_fieldsetting->view_mode = 'right_non_bg_image_story_block';
  $ds_fieldsetting->settings = array(
    'mobile_story_block_image' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'show_title' => 0,
        'title_wrapper' => '',
        'ctools' => 'a:3:{s:4:"conf";a:10:{s:5:"label";s:6:"hidden";s:9:"formatter";s:5:"image";s:11:"delta_limit";s:1:"0";s:12:"delta_offset";s:1:"0";s:14:"delta_reversed";i:0;s:18:"formatter_settings";a:2:{s:11:"image_style";s:22:"story_block-img-mobile";s:10:"image_link";s:0:"";}s:7:"context";s:25:"argument_entity_id:node_1";s:14:"override_title";i:0;s:19:"override_title_text";s:0:"";s:22:"override_title_heading";s:2:"h2";}s:4:"type";s:12:"entity_field";s:7:"subtype";s:29:"node:field_story_block_images";}',
        'load_terms' => 0,
        'ft' => array(),
      ),
    ),
    'title' => array(
      'weight' => '2',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '0',
        'wrapper' => 'h2',
        'class' => 'title',
        'ft' => array(),
      ),
    ),
    'field_story_block_images' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'wow animated fadeInLeftBig',
          'ow-def-cl' => FALSE,
          'ow-at' => 'data-wow-delay="1s"',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
  );
  $export['node|story_block|right_non_bg_image_story_block'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_custom_fields_info().
 */
function story_blocks_ds_custom_fields_info() {
  $export = array();

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'mobile_story_block_image';
  $ds_field->label = 'Mobile Story Block Image';
  $ds_field->field_type = 7;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = 'story_block|*';
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
  $export['mobile_story_block_image'] = $ds_field;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function story_blocks_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|story_block|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'story_block';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'common_support_teaser_1';
  $ds_layout->settings = array(
    'regions' => array(
      'col1' => array(
        0 => 'mobile_story_block_image',
        1 => 'field_story_block_images',
        2 => 'empty_space',
      ),
      'col2' => array(
        3 => 'title',
        4 => 'body',
      ),
    ),
    'fields' => array(
      'mobile_story_block_image' => 'col1',
      'field_story_block_images' => 'col1',
      'empty_space' => 'col1',
      'title' => 'col2',
      'body' => 'col2',
    ),
    'limit' => array(
      'field_story_block_images' => '1',
    ),
    'classes' => array(
      'layout_class' => array(
        'node-nid-[node:nid]' => 'node-nid-[node:nid]',
      ),
    ),
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
  $export['node|story_block|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|story_block|left_bg_image_story_block';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'story_block';
  $ds_layout->view_mode = 'left_bg_image_story_block';
  $ds_layout->layout = 'common_support_teaser_1';
  $ds_layout->settings = array(
    'regions' => array(
      'col1' => array(
        0 => 'mobile_story_block_image',
        1 => 'title',
        2 => 'body',
        3 => 'field_story_block_link',
      ),
      'col2' => array(
        4 => 'field_story_block_videos',
        5 => 'field_story_block_images',
      ),
    ),
    'fields' => array(
      'mobile_story_block_image' => 'col1',
      'title' => 'col1',
      'body' => 'col1',
      'field_story_block_link' => 'col1',
      'field_story_block_videos' => 'col2',
      'field_story_block_images' => 'col2',
    ),
    'limit' => array(
      'field_story_block_images' => '1',
    ),
    'classes' => array(
      'layout_class' => array(
        'node-nid-[node:nid]' => 'node-nid-[node:nid]',
      ),
    ),
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
  $export['node|story_block|left_bg_image_story_block'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|story_block|left_non_bg_image_story_block';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'story_block';
  $ds_layout->view_mode = 'left_non_bg_image_story_block';
  $ds_layout->layout = 'common_support_teaser_1';
  $ds_layout->settings = array(
    'regions' => array(
      'col1' => array(
        0 => 'mobile_story_block_image',
        1 => 'title',
        2 => 'body',
        3 => 'field_story_block_videos',
        4 => 'field_story_block_link',
      ),
      'col2' => array(
        5 => 'field_story_block_images',
      ),
    ),
    'fields' => array(
      'mobile_story_block_image' => 'col1',
      'title' => 'col1',
      'body' => 'col1',
      'field_story_block_videos' => 'col1',
      'field_story_block_link' => 'col1',
      'field_story_block_images' => 'col2',
    ),
    'limit' => array(
      'field_story_block_images' => '1',
    ),
    'classes' => array(
      'layout_class' => array(
        'node-nid-[node:nid]' => 'node-nid-[node:nid]',
      ),
    ),
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
  $export['node|story_block|left_non_bg_image_story_block'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|story_block|right_bg_image_story_block';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'story_block';
  $ds_layout->view_mode = 'right_bg_image_story_block';
  $ds_layout->layout = 'common_support_teaser_1';
  $ds_layout->settings = array(
    'regions' => array(
      'col2' => array(
        3 => 'title',
        4 => 'body',
        5 => 'field_story_block_videos',
        6 => 'field_story_block_link',
      ),
      'col1' => array(
        1 => 'mobile_story_block_image',
        2 => 'field_story_block_images',
      ),
    ),
    'fields' => array(
      'mobile_story_block_image' => 'col1',
      'field_story_block_videos' => 'col1',
      'field_story_block_images' => 'col1',
      'title' => 'col2',
      'body' => 'col2',
      'field_story_block_link' => 'col2',
    ),
    'limit' => array(
      'field_story_block_images' => '1',
    ),
    'classes' => array(
      'layout_class' => array(
        'node-nid-[node:nid]' => 'node-nid-[node:nid]',
      ),
    ),
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
  $export['node|story_block|right_bg_image_story_block'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|story_block|right_non_bg_image_story_block';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'story_block';
  $ds_layout->view_mode = 'right_non_bg_image_story_block';
  $ds_layout->layout = 'common_support_teaser_1';
  $ds_layout->settings = array(
    'regions' => array(
      'col1' => array(
        0 => 'mobile_story_block_image',
        1 => 'field_story_block_images',
      ),
      'col2' => array(
        2 => 'title',
        3 => 'body',
        4 => 'field_story_block_videos',
        5 => 'field_story_block_link',
      ),
    ),
    'fields' => array(
      'mobile_story_block_image' => 'col1',
      'field_story_block_images' => 'col1',
      'title' => 'col2',
      'body' => 'col2',
      'field_story_block_videos' => 'col2',
      'field_story_block_link' => 'col2',
    ),
    'limit' => array(
      'field_story_block_images' => '1',
    ),
    'classes' => array(
      'layout_class' => array(
        'node-nid-[node:nid]' => 'node-nid-[node:nid]',
      ),
    ),
    'wrappers' => array(
      'col1' => 'div',
      'col2' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => 0,
  );
  $export['node|story_block|right_non_bg_image_story_block'] = $ds_layout;

  return $export;
}

/**
 * Implements hook_ds_view_modes_info().
 */
function story_blocks_ds_view_modes_info() {
  $export = array();

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'left_bg_image_story_block';
  $ds_view_mode->label = 'Left Copy BG Image';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['left_bg_image_story_block'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'left_non_bg_image_story_block';
  $ds_view_mode->label = 'Left Copy Right Image';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['left_non_bg_image_story_block'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'right_bg_image_story_block';
  $ds_view_mode->label = 'Right Copy BG Image';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['right_bg_image_story_block'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'right_non_bg_image_story_block';
  $ds_view_mode->label = 'Right Copy Left Image';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['right_non_bg_image_story_block'] = $ds_view_mode;

  return $export;
}

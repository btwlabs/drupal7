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
  $ds_fieldsetting->id = 'node|story_block|center_copy_full_bg_image';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'story_block';
  $ds_fieldsetting->view_mode = 'center_copy_full_bg_image';
  $ds_fieldsetting->settings = array(
    'mobile_story_block_image' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'show_title' => 0,
        'title_wrapper' => '',
        'ctools' => 'a:3:{s:4:"conf";a:10:{s:5:"label";s:6:"hidden";s:9:"formatter";s:5:"image";s:11:"delta_limit";s:1:"1";s:12:"delta_offset";s:1:"0";s:14:"delta_reversed";i:0;s:18:"formatter_settings";a:2:{s:11:"image_style";s:22:"story_block-img-mobile";s:10:"image_link";s:0:"";}s:7:"context";s:25:"argument_entity_id:node_1";s:14:"override_title";i:0;s:19:"override_title_text";s:0:"";s:22:"override_title_heading";s:2:"h2";}s:4:"type";s:12:"entity_field";s:7:"subtype";s:29:"node:field_story_block_images";}',
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
  );
  $export['node|story_block|center_copy_full_bg_image'] = $ds_fieldsetting;

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
        'ctools' => 'a:3:{s:4:"conf";a:10:{s:5:"label";s:6:"hidden";s:9:"formatter";s:5:"image";s:11:"delta_limit";s:1:"1";s:12:"delta_offset";s:1:"0";s:14:"delta_reversed";i:0;s:18:"formatter_settings";a:2:{s:11:"image_style";s:21:"story_block-img-small";s:10:"image_link";s:0:"";}s:7:"context";s:25:"argument_entity_id:node_1";s:14:"override_title";i:0;s:19:"override_title_text";s:0:"";s:22:"override_title_heading";s:2:"h2";}s:4:"type";s:12:"entity_field";s:7:"subtype";s:29:"node:field_story_block_images";}',
        'load_terms' => 0,
        'ft' => array(),
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
  $ds_fieldsetting->id = 'node|story_block|left_copy_full_bg_image';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'story_block';
  $ds_fieldsetting->view_mode = 'left_copy_full_bg_image';
  $ds_fieldsetting->settings = array(
    '_nbsp' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'mobile_story_block_image' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'show_title' => 0,
        'title_wrapper' => '',
        'ctools' => 'a:3:{s:4:"conf";a:10:{s:5:"label";s:6:"hidden";s:9:"formatter";s:5:"image";s:11:"delta_limit";s:1:"1";s:12:"delta_offset";s:1:"0";s:14:"delta_reversed";i:0;s:18:"formatter_settings";a:2:{s:11:"image_style";s:24:"story_block-img-small-fp";s:10:"image_link";s:0:"";}s:7:"context";s:25:"argument_entity_id:node_1";s:14:"override_title";i:0;s:19:"override_title_text";s:0:"";s:22:"override_title_heading";s:2:"h2";}s:4:"type";s:12:"entity_field";s:7:"subtype";s:29:"node:field_story_block_images";}',
        'load_terms' => 0,
        'ft' => array(),
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
  $export['node|story_block|left_copy_full_bg_image'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|story_block|left_copy_full_bg_image_h1';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'story_block';
  $ds_fieldsetting->view_mode = 'left_copy_full_bg_image_h1';
  $ds_fieldsetting->settings = array(
    '_nbsp' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'mobile_story_block_image' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'show_title' => 0,
        'title_wrapper' => '',
        'ctools' => 'a:3:{s:4:"conf";a:10:{s:5:"label";s:6:"hidden";s:9:"formatter";s:5:"image";s:11:"delta_limit";s:1:"1";s:12:"delta_offset";s:1:"0";s:14:"delta_reversed";i:0;s:18:"formatter_settings";a:2:{s:11:"image_style";s:24:"story_block-img-small-fp";s:10:"image_link";s:0:"";}s:7:"context";s:25:"argument_entity_id:node_1";s:14:"override_title";i:0;s:19:"override_title_text";s:0:"";s:22:"override_title_heading";s:2:"h2";}s:4:"type";s:12:"entity_field";s:7:"subtype";s:29:"node:field_story_block_images";}',
        'load_terms' => 0,
        'ft' => array(),
      ),
    ),
    'title' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '0',
        'wrapper' => 'h1',
        'class' => 'title',
        'ft' => array(),
      ),
    ),
  );
  $export['node|story_block|left_copy_full_bg_image_h1'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|story_block|left_copy_right_bg_image';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'story_block';
  $ds_fieldsetting->view_mode = 'left_copy_right_bg_image';
  $ds_fieldsetting->settings = array(
    '_nbsp' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'mobile_story_block_image' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'show_title' => 0,
        'title_wrapper' => '',
        'ctools' => 'a:3:{s:4:"conf";a:10:{s:5:"label";s:6:"hidden";s:9:"formatter";s:5:"image";s:11:"delta_limit";s:1:"1";s:12:"delta_offset";s:1:"0";s:14:"delta_reversed";i:0;s:18:"formatter_settings";a:2:{s:11:"image_style";s:24:"story_block-img-small-fp";s:10:"image_link";s:0:"";}s:7:"context";s:25:"argument_entity_id:node_1";s:14:"override_title";i:0;s:19:"override_title_text";s:0:"";s:22:"override_title_heading";s:2:"h2";}s:4:"type";s:12:"entity_field";s:7:"subtype";s:29:"node:field_story_block_images";}',
        'load_terms' => 0,
        'ft' => array(),
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
  $export['node|story_block|left_copy_right_bg_image'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|story_block|left_copy_right_image';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'story_block';
  $ds_fieldsetting->view_mode = 'left_copy_right_image';
  $ds_fieldsetting->settings = array(
    'mobile_story_block_image' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'show_title' => 0,
        'title_wrapper' => '',
        'ctools' => 'a:3:{s:4:"conf";a:10:{s:5:"label";s:6:"hidden";s:9:"formatter";s:5:"image";s:11:"delta_limit";s:1:"1";s:12:"delta_offset";s:1:"0";s:14:"delta_reversed";i:0;s:18:"formatter_settings";a:2:{s:11:"image_style";s:22:"story_block-img-mobile";s:10:"image_link";s:0:"";}s:7:"context";s:25:"argument_entity_id:node_1";s:14:"override_title";i:0;s:19:"override_title_text";s:0:"";s:22:"override_title_heading";s:2:"h2";}s:4:"type";s:12:"entity_field";s:7:"subtype";s:29:"node:field_story_block_images";}',
        'load_terms' => 0,
        'ft' => array(),
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
  $export['node|story_block|left_copy_right_image'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|story_block|right_copy_full_bg_image';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'story_block';
  $ds_fieldsetting->view_mode = 'right_copy_full_bg_image';
  $ds_fieldsetting->settings = array(
    'mobile_story_block_image' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'show_title' => 0,
        'title_wrapper' => '',
        'ctools' => 'a:3:{s:4:"conf";a:10:{s:5:"label";s:6:"hidden";s:9:"formatter";s:5:"image";s:11:"delta_limit";s:1:"1";s:12:"delta_offset";s:1:"0";s:14:"delta_reversed";i:0;s:18:"formatter_settings";a:2:{s:11:"image_style";s:24:"story_block-img-small-fp";s:10:"image_link";s:0:"";}s:7:"context";s:25:"argument_entity_id:node_1";s:14:"override_title";i:0;s:19:"override_title_text";s:0:"";s:22:"override_title_heading";s:2:"h2";}s:4:"type";s:12:"entity_field";s:7:"subtype";s:29:"node:field_story_block_images";}',
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
  );
  $export['node|story_block|right_copy_full_bg_image'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|story_block|right_copy_full_bg_image_h1';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'story_block';
  $ds_fieldsetting->view_mode = 'right_copy_full_bg_image_h1';
  $ds_fieldsetting->settings = array(
    'mobile_story_block_image' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'show_title' => 0,
        'title_wrapper' => '',
        'ctools' => 'a:3:{s:4:"conf";a:10:{s:5:"label";s:6:"hidden";s:9:"formatter";s:5:"image";s:11:"delta_limit";s:1:"1";s:12:"delta_offset";s:1:"0";s:14:"delta_reversed";i:0;s:18:"formatter_settings";a:2:{s:11:"image_style";s:24:"story_block-img-small-fp";s:10:"image_link";s:0:"";}s:7:"context";s:25:"argument_entity_id:node_1";s:14:"override_title";i:0;s:19:"override_title_text";s:0:"";s:22:"override_title_heading";s:2:"h2";}s:4:"type";s:12:"entity_field";s:7:"subtype";s:29:"node:field_story_block_images";}',
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
        'wrapper' => 'h1',
        'class' => 'title',
        'ft' => array(),
      ),
    ),
  );
  $export['node|story_block|right_copy_full_bg_image_h1'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|story_block|right_copy_left_bg_image';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'story_block';
  $ds_fieldsetting->view_mode = 'right_copy_left_bg_image';
  $ds_fieldsetting->settings = array(
    'mobile_story_block_image' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'show_title' => 0,
        'title_wrapper' => '',
        'ctools' => 'a:3:{s:4:"conf";a:10:{s:5:"label";s:6:"hidden";s:9:"formatter";s:5:"image";s:11:"delta_limit";s:1:"1";s:12:"delta_offset";s:1:"0";s:14:"delta_reversed";i:0;s:18:"formatter_settings";a:2:{s:11:"image_style";s:24:"story_block-img-small-fp";s:10:"image_link";s:0:"";}s:7:"context";s:25:"argument_entity_id:node_1";s:14:"override_title";i:0;s:19:"override_title_text";s:0:"";s:22:"override_title_heading";s:2:"h2";}s:4:"type";s:12:"entity_field";s:7:"subtype";s:29:"node:field_story_block_images";}',
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
  );
  $export['node|story_block|right_copy_left_bg_image'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|story_block|right_copy_left_image';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'story_block';
  $ds_fieldsetting->view_mode = 'right_copy_left_image';
  $ds_fieldsetting->settings = array(
    'mobile_story_block_image' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'show_title' => 0,
        'title_wrapper' => '',
        'ctools' => 'a:3:{s:4:"conf";a:10:{s:5:"label";s:6:"hidden";s:9:"formatter";s:5:"image";s:11:"delta_limit";s:1:"1";s:12:"delta_offset";s:1:"0";s:14:"delta_reversed";i:0;s:18:"formatter_settings";a:2:{s:11:"image_style";s:22:"story_block-img-mobile";s:10:"image_link";s:0:"";}s:7:"context";s:25:"argument_entity_id:node_1";s:14:"override_title";i:0;s:19:"override_title_text";s:0:"";s:22:"override_title_heading";s:2:"h2";}s:4:"type";s:12:"entity_field";s:7:"subtype";s:29:"node:field_story_block_images";}',
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
  );
  $export['node|story_block|right_copy_left_image'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_custom_fields_info().
 */
function story_blocks_ds_custom_fields_info() {
  $export = array();

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = '_nbsp';
  $ds_field->label = '&nbsp';
  $ds_field->field_type = 5;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = 'story_block|*';
  $ds_field->properties = array(
    'code' => array(
      'value' => '&nbsp;',
      'format' => 'full_html',
    ),
    'use_token' => 0,
  );
  $export['_nbsp'] = $ds_field;

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
  $ds_layout->id = 'node|story_block|center_copy_bg_image_h1_title';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'story_block';
  $ds_layout->view_mode = 'center_copy_bg_image_h1_title';
  $ds_layout->layout = 'story_block_one_col';
  $ds_layout->settings = array(
    'regions' => array(
      'col1' => array(
        0 => 'mobile_story_block_image',
        1 => 'field_story_block_images',
        2 => 'title',
        3 => 'body',
        4 => 'field_story_block_link',
        5 => 'field_story_block_videos',
      ),
    ),
    'fields' => array(
      'mobile_story_block_image' => 'col1',
      'field_story_block_images' => 'col1',
      'title' => 'col1',
      'body' => 'col1',
      'field_story_block_link' => 'col1',
      'field_story_block_videos' => 'col1',
    ),
    'limit' => array(
      'field_story_block_images' => '1',
    ),
    'classes' => array(
      'layout_class' => array(
        'node-nid-[node:nid]' => 'node-nid-[node:nid]',
        'center-copy' => 'center-copy',
        'wrapper-bg-image' => 'wrapper-bg-image',
      ),
    ),
    'wrappers' => array(
      'col1' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => 0,
    'hide_page_title' => '0',
    'page_option_title' => '',
  );
  $export['node|story_block|center_copy_bg_image_h1_title'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|story_block|center_copy_full_bg_image';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'story_block';
  $ds_layout->view_mode = 'center_copy_full_bg_image';
  $ds_layout->layout = 'story_block_one_col';
  $ds_layout->settings = array(
    'regions' => array(
      'col1' => array(
        0 => 'mobile_story_block_image',
        1 => 'field_story_block_images',
        2 => 'title',
        3 => 'body',
        4 => 'field_story_block_link',
        5 => 'field_story_block_videos',
      ),
    ),
    'fields' => array(
      'mobile_story_block_image' => 'col1',
      'field_story_block_images' => 'col1',
      'title' => 'col1',
      'body' => 'col1',
      'field_story_block_link' => 'col1',
      'field_story_block_videos' => 'col1',
    ),
    'limit' => array(
      'field_story_block_images' => '1',
    ),
    'classes' => array(
      'layout_class' => array(
        'node-nid-[node:nid]' => 'node-nid-[node:nid]',
        'center-copy' => 'center-copy',
        'wrapper-bg-image' => 'wrapper-bg-image',
      ),
    ),
    'wrappers' => array(
      'col1' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => 0,
    'hide_page_title' => '0',
    'page_option_title' => '',
  );
  $export['node|story_block|center_copy_full_bg_image'] = $ds_layout;

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
      ),
      'col2' => array(
        2 => 'title',
        3 => 'body',
      ),
    ),
    'fields' => array(
      'mobile_story_block_image' => 'col1',
      'field_story_block_images' => 'col1',
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
    'layout_disable_css' => 0,
    'hide_page_title' => '0',
    'page_option_title' => '',
  );
  $export['node|story_block|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|story_block|full';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'story_block';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_story_block_images',
        1 => 'body',
        2 => 'comments',
      ),
    ),
    'fields' => array(
      'field_story_block_images' => 'ds_content',
      'body' => 'ds_content',
      'comments' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => TRUE,
    'layout_link_attribute' => FALSE,
    'layout_link_custom' => '',
    'layout_disable_css' => FALSE,
  );
  $export['node|story_block|full'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|story_block|left_copy_full_bg_image';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'story_block';
  $ds_layout->view_mode = 'left_copy_full_bg_image';
  $ds_layout->layout = 'story_block';
  $ds_layout->settings = array(
    'regions' => array(
      'col2' => array(
        0 => '_nbsp',
        6 => 'field_story_block_images',
      ),
      'col1' => array(
        1 => 'mobile_story_block_image',
        2 => 'title',
        3 => 'body',
        4 => 'field_story_block_link',
        5 => 'field_story_block_videos',
      ),
    ),
    'fields' => array(
      '_nbsp' => 'col2',
      'mobile_story_block_image' => 'col1',
      'title' => 'col1',
      'body' => 'col1',
      'field_story_block_link' => 'col1',
      'field_story_block_videos' => 'col1',
      'field_story_block_images' => 'col2',
    ),
    'limit' => array(
      'field_story_block_images' => '1',
    ),
    'classes' => array(
      'layout_class' => array(
        'node-nid-[node:nid]' => 'node-nid-[node:nid]',
        'left-copy' => 'left-copy',
        'wrapper-bg-image' => 'wrapper-bg-image',
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
    'hide_page_title' => '0',
    'page_option_title' => '',
  );
  $export['node|story_block|left_copy_full_bg_image'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|story_block|left_copy_full_bg_image_h1';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'story_block';
  $ds_layout->view_mode = 'left_copy_full_bg_image_h1';
  $ds_layout->layout = 'story_block';
  $ds_layout->settings = array(
    'regions' => array(
      'col2' => array(
        0 => '_nbsp',
        6 => 'field_story_block_images',
      ),
      'col1' => array(
        1 => 'mobile_story_block_image',
        2 => 'title',
        3 => 'body',
        4 => 'field_story_block_link',
        5 => 'field_story_block_videos',
      ),
    ),
    'fields' => array(
      '_nbsp' => 'col2',
      'mobile_story_block_image' => 'col1',
      'title' => 'col1',
      'body' => 'col1',
      'field_story_block_link' => 'col1',
      'field_story_block_videos' => 'col1',
      'field_story_block_images' => 'col2',
    ),
    'limit' => array(
      'field_story_block_images' => '1',
    ),
    'classes' => array(
      'layout_class' => array(
        'node-nid-[node:nid]' => 'node-nid-[node:nid]',
        'left-copy' => 'left-copy',
        'wrapper-bg-image' => 'wrapper-bg-image',
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
    'hide_page_title' => '0',
    'page_option_title' => '',
  );
  $export['node|story_block|left_copy_full_bg_image_h1'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|story_block|left_copy_right_bg_image';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'story_block';
  $ds_layout->view_mode = 'left_copy_right_bg_image';
  $ds_layout->layout = 'story_block';
  $ds_layout->settings = array(
    'regions' => array(
      'col2' => array(
        0 => '_nbsp',
        6 => 'field_story_block_images',
      ),
      'col1' => array(
        1 => 'mobile_story_block_image',
        2 => 'title',
        3 => 'body',
        4 => 'field_story_block_link',
        5 => 'field_story_block_videos',
      ),
    ),
    'fields' => array(
      '_nbsp' => 'col2',
      'mobile_story_block_image' => 'col1',
      'title' => 'col1',
      'body' => 'col1',
      'field_story_block_link' => 'col1',
      'field_story_block_videos' => 'col1',
      'field_story_block_images' => 'col2',
    ),
    'limit' => array(
      'field_story_block_images' => '1',
    ),
    'classes' => array(
      'layout_class' => array(
        'node-nid-[node:nid]' => 'node-nid-[node:nid]',
        'left-copy' => 'left-copy',
        'col-bg-image' => 'col-bg-image',
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
    'hide_page_title' => '0',
    'page_option_title' => '',
  );
  $export['node|story_block|left_copy_right_bg_image'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|story_block|left_copy_right_image';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'story_block';
  $ds_layout->view_mode = 'left_copy_right_image';
  $ds_layout->layout = 'story_block';
  $ds_layout->settings = array(
    'regions' => array(
      'col1' => array(
        0 => 'mobile_story_block_image',
        1 => 'title',
        2 => 'body',
        3 => 'field_story_block_link',
        4 => 'field_story_block_videos',
      ),
      'col2' => array(
        5 => 'field_story_block_images',
      ),
    ),
    'fields' => array(
      'mobile_story_block_image' => 'col1',
      'title' => 'col1',
      'body' => 'col1',
      'field_story_block_link' => 'col1',
      'field_story_block_videos' => 'col1',
      'field_story_block_images' => 'col2',
    ),
    'limit' => array(
      'field_story_block_images' => '1',
    ),
    'classes' => array(
      'layout_class' => array(
        'node-nid-[node:nid]' => 'node-nid-[node:nid]',
        'left-copy' => 'left-copy',
        'right-image' => 'right-image',
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
  $export['node|story_block|left_copy_right_image'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|story_block|right_copy_full_bg_image';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'story_block';
  $ds_layout->view_mode = 'right_copy_full_bg_image';
  $ds_layout->layout = 'story_block';
  $ds_layout->settings = array(
    'regions' => array(
      'col1' => array(
        0 => 'mobile_story_block_image',
        1 => 'field_story_block_images',
      ),
      'col2' => array(
        2 => 'title',
        3 => 'body',
        4 => 'field_story_block_link',
        5 => 'field_story_block_videos',
      ),
    ),
    'fields' => array(
      'mobile_story_block_image' => 'col1',
      'field_story_block_images' => 'col1',
      'title' => 'col2',
      'body' => 'col2',
      'field_story_block_link' => 'col2',
      'field_story_block_videos' => 'col2',
    ),
    'limit' => array(
      'field_story_block_images' => '1',
    ),
    'classes' => array(
      'layout_class' => array(
        'node-nid-[node:nid]' => 'node-nid-[node:nid]',
        'right-copy' => 'right-copy',
        'wrapper-bg-image' => 'wrapper-bg-image',
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
    'hide_page_title' => '0',
    'page_option_title' => '',
  );
  $export['node|story_block|right_copy_full_bg_image'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|story_block|right_copy_full_bg_image_h1';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'story_block';
  $ds_layout->view_mode = 'right_copy_full_bg_image_h1';
  $ds_layout->layout = 'story_block';
  $ds_layout->settings = array(
    'regions' => array(
      'col1' => array(
        0 => 'mobile_story_block_image',
        1 => 'field_story_block_images',
      ),
      'col2' => array(
        2 => 'title',
        3 => 'body',
        4 => 'field_story_block_link',
        5 => 'field_story_block_videos',
      ),
    ),
    'fields' => array(
      'mobile_story_block_image' => 'col1',
      'field_story_block_images' => 'col1',
      'title' => 'col2',
      'body' => 'col2',
      'field_story_block_link' => 'col2',
      'field_story_block_videos' => 'col2',
    ),
    'limit' => array(
      'field_story_block_images' => '1',
    ),
    'classes' => array(
      'layout_class' => array(
        'node-nid-[node:nid]' => 'node-nid-[node:nid]',
        'right-copy' => 'right-copy',
        'wrapper-bg-image' => 'wrapper-bg-image',
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
    'hide_page_title' => '0',
    'page_option_title' => '',
  );
  $export['node|story_block|right_copy_full_bg_image_h1'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|story_block|right_copy_left_bg_image';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'story_block';
  $ds_layout->view_mode = 'right_copy_left_bg_image';
  $ds_layout->layout = 'story_block';
  $ds_layout->settings = array(
    'regions' => array(
      'col1' => array(
        0 => 'mobile_story_block_image',
        1 => 'field_story_block_images',
      ),
      'col2' => array(
        2 => 'title',
        3 => 'body',
        4 => 'field_story_block_link',
        5 => 'field_story_block_videos',
      ),
    ),
    'fields' => array(
      'mobile_story_block_image' => 'col1',
      'field_story_block_images' => 'col1',
      'title' => 'col2',
      'body' => 'col2',
      'field_story_block_link' => 'col2',
      'field_story_block_videos' => 'col2',
    ),
    'limit' => array(
      'field_story_block_images' => '1',
    ),
    'classes' => array(
      'layout_class' => array(
        'node-nid-[node:nid]' => 'node-nid-[node:nid]',
        'right-copy' => 'right-copy',
        'col-bg-image' => 'col-bg-image',
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
    'hide_page_title' => '0',
    'page_option_title' => '',
  );
  $export['node|story_block|right_copy_left_bg_image'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|story_block|right_copy_left_image';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'story_block';
  $ds_layout->view_mode = 'right_copy_left_image';
  $ds_layout->layout = 'story_block';
  $ds_layout->settings = array(
    'regions' => array(
      'col1' => array(
        0 => 'mobile_story_block_image',
        1 => 'field_story_block_images',
      ),
      'col2' => array(
        2 => 'title',
        3 => 'body',
        4 => 'field_story_block_link',
        5 => 'field_story_block_videos',
      ),
    ),
    'fields' => array(
      'mobile_story_block_image' => 'col1',
      'field_story_block_images' => 'col1',
      'title' => 'col2',
      'body' => 'col2',
      'field_story_block_link' => 'col2',
      'field_story_block_videos' => 'col2',
    ),
    'limit' => array(
      'field_story_block_images' => '1',
    ),
    'classes' => array(
      'layout_class' => array(
        'node-nid-[node:nid]' => 'node-nid-[node:nid]',
        'right-copy' => 'right-copy',
        'left-image' => 'left-image',
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
  $export['node|story_block|right_copy_left_image'] = $ds_layout;

  return $export;
}

/**
 * Implements hook_ds_view_modes_info().
 */
function story_blocks_ds_view_modes_info() {
  $export = array();

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'center_copy_bg_image_h1_title';
  $ds_view_mode->label = 'Center Copy BG Image H1 Title';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['center_copy_bg_image_h1_title'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'center_copy_full_bg_image';
  $ds_view_mode->label = 'Center Copy Full BG Image';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['center_copy_full_bg_image'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'left_copy_full_bg_image';
  $ds_view_mode->label = 'Left Copy BG Image';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['left_copy_full_bg_image'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'left_copy_full_bg_image_h1';
  $ds_view_mode->label = 'Left Copy BG Image H1 Title';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['left_copy_full_bg_image_h1'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'left_copy_right_bg_image';
  $ds_view_mode->label = 'Left Copy Right Background Image';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['left_copy_right_bg_image'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'left_copy_right_image';
  $ds_view_mode->label = 'Left Copy Right Image';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['left_copy_right_image'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'right_copy_full_bg_image';
  $ds_view_mode->label = 'Right Copy BG Image';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['right_copy_full_bg_image'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'right_copy_full_bg_image_h1';
  $ds_view_mode->label = 'Right Copy BG Image H1 Title';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['right_copy_full_bg_image_h1'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'right_copy_left_bg_image';
  $ds_view_mode->label = 'Right Copy Left Background Image';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['right_copy_left_bg_image'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'right_copy_left_image';
  $ds_view_mode->label = 'Right Copy Left Image';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['right_copy_left_image'] = $ds_view_mode;

  return $export;
}

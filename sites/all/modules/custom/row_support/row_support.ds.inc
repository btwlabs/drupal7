<?php
/**
 * @file
 * btw_evermind.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function row_support_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|page|full';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'page';
  $ds_fieldsetting->view_mode = 'full';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '0',
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
  $export['node|page|full'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|row|default';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'row';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
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
    'mobile_row_image' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'show_title' => 0,
        'title_wrapper' => '',
        'ctools' => 'a:3:{s:4:"conf";a:10:{s:5:"label";s:6:"hidden";s:9:"formatter";s:5:"image";s:11:"delta_limit";s:1:"1";s:12:"delta_offset";s:1:"0";s:14:"delta_reversed";i:0;s:18:"formatter_settings";a:2:{s:11:"image_style";s:0:"";s:10:"image_link";s:0:"";}s:7:"context";s:25:"argument_entity_id:node_1";s:14:"override_title";i:0;s:19:"override_title_text";s:0:"";s:22:"override_title_heading";s:2:"h2";}s:4:"type";s:12:"entity_field";s:7:"subtype";s:21:"node:field_row_images";}',
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
  $export['node|row|default'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|row|left_bg_image_row';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'row';
  $ds_fieldsetting->view_mode = 'left_bg_image_row';
  $ds_fieldsetting->settings = array(
    'mobile_row_image' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'show_title' => 0,
        'title_wrapper' => '',
        'ctools' => 'a:3:{s:4:"conf";a:10:{s:5:"label";s:6:"hidden";s:9:"formatter";s:5:"image";s:11:"delta_limit";s:1:"1";s:12:"delta_offset";s:1:"0";s:14:"delta_reversed";i:0;s:18:"formatter_settings";a:2:{s:11:"image_style";s:14:"row-img-mobile";s:10:"image_link";s:0:"";}s:7:"context";s:25:"argument_entity_id:node_1";s:14:"override_title";i:0;s:19:"override_title_text";s:0:"";s:22:"override_title_heading";s:2:"h2";}s:4:"type";s:12:"entity_field";s:7:"subtype";s:21:"node:field_row_images";}',
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
  $export['node|row|left_bg_image_row'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|row|left_non_bg_image_row';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'row';
  $ds_fieldsetting->view_mode = 'left_non_bg_image_row';
  $ds_fieldsetting->settings = array(
    'mobile_row_image' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'show_title' => 0,
        'title_wrapper' => '',
        'ctools' => 'a:3:{s:4:"conf";a:10:{s:5:"label";s:6:"hidden";s:9:"formatter";s:5:"image";s:11:"delta_limit";s:1:"1";s:12:"delta_offset";s:1:"0";s:14:"delta_reversed";i:0;s:18:"formatter_settings";a:2:{s:11:"image_style";s:14:"row-img-mobile";s:10:"image_link";s:0:"";}s:7:"context";s:25:"argument_entity_id:node_1";s:14:"override_title";i:0;s:19:"override_title_text";s:0:"";s:22:"override_title_heading";s:2:"h2";}s:4:"type";s:12:"entity_field";s:7:"subtype";s:21:"node:field_row_images";}',
        'load_terms' => 0,
        'ft' => array(),
      ),
    ),
    'title' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'field_row_images' => array(
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
  $export['node|row|left_non_bg_image_row'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|row|right_bg_image_row';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'row';
  $ds_fieldsetting->view_mode = 'right_bg_image_row';
  $ds_fieldsetting->settings = array(
    'mobile_row_image' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'show_title' => 0,
        'title_wrapper' => '',
        'ctools' => 'a:3:{s:4:"conf";a:10:{s:5:"label";s:6:"hidden";s:9:"formatter";s:5:"image";s:11:"delta_limit";s:1:"1";s:12:"delta_offset";s:1:"0";s:14:"delta_reversed";i:0;s:18:"formatter_settings";a:2:{s:11:"image_style";s:0:"";s:10:"image_link";s:0:"";}s:7:"context";s:25:"argument_entity_id:node_1";s:14:"override_title";i:0;s:19:"override_title_text";s:0:"";s:22:"override_title_heading";s:2:"h2";}s:4:"type";s:12:"entity_field";s:7:"subtype";s:21:"node:field_row_images";}',
        'load_terms' => 0,
        'ft' => array(),
      ),
    ),
    'title' => array(
      'weight' => '3',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['node|row|right_bg_image_row'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|row|right_non_bg_image_row';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'row';
  $ds_fieldsetting->view_mode = 'right_non_bg_image_row';
  $ds_fieldsetting->settings = array(
    'mobile_row_image' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'show_title' => 0,
        'title_wrapper' => '',
        'ctools' => 'a:3:{s:4:"conf";a:10:{s:5:"label";s:6:"hidden";s:9:"formatter";s:5:"image";s:11:"delta_limit";s:1:"1";s:12:"delta_offset";s:1:"0";s:14:"delta_reversed";i:0;s:18:"formatter_settings";a:2:{s:11:"image_style";s:14:"row-img-mobile";s:10:"image_link";s:0:"";}s:7:"context";s:25:"argument_entity_id:node_1";s:14:"override_title";i:0;s:19:"override_title_text";s:0:"";s:22:"override_title_heading";s:2:"h2";}s:4:"type";s:12:"entity_field";s:7:"subtype";s:21:"node:field_row_images";}',
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
    'field_row_images' => array(
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
  $export['node|row|right_non_bg_image_row'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_custom_fields_info().
 */
function row_support_ds_custom_fields_info() {
  $export = array();

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'empty_space';
  $ds_field->label = 'Empty Space';
  $ds_field->field_type = 5;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'code' => array(
      'value' => '&nbsp;',
      'format' => 'full_html',
    ),
    'use_token' => 0,
  );
  $export['empty_space'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'mobile_row_image';
  $ds_field->label = 'Mobile Row Image';
  $ds_field->field_type = 7;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = 'row|*';
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
  $export['mobile_row_image'] = $ds_field;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function row_support_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|page|full';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'page';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'ds_1col_wrapper';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'title',
        1 => 'body',
        2 => 'field_page_images',
      ),
    ),
    'fields' => array(
      'title' => 'ds_content',
      'body' => 'ds_content',
      'field_page_images' => 'ds_content',
    ),
    'limit' => array(
      'field_page_images' => '1',
    ),
    'classes' => array(
      'layout_class' => array(
        '' => '',
      ),
      'ds_content' => array(
        'l-constrained' => 'l-constrained',
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
    'hide_page_title' => '1',
    'page_option_title' => '',
  );
  $export['node|page|full'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|row|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'row';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'common_support_teaser_1';
  $ds_layout->settings = array(
    'regions' => array(
      'col1' => array(
        0 => 'mobile_row_image',
        1 => 'field_row_images',
        2 => 'empty_space',
      ),
      'col2' => array(
        3 => 'title',
        4 => 'body',
      ),
    ),
    'fields' => array(
      'mobile_row_image' => 'col1',
      'field_row_images' => 'col1',
      'empty_space' => 'col1',
      'title' => 'col2',
      'body' => 'col2',
    ),
    'limit' => array(
      'field_row_images' => '1',
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
    'hide_page_title' => '0',
    'page_option_title' => '',
  );
  $export['node|row|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|row|left_bg_image_row';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'row';
  $ds_layout->view_mode = 'left_bg_image_row';
  $ds_layout->layout = 'common_support_teaser_1';
  $ds_layout->settings = array(
    'regions' => array(
      'col1' => array(
        0 => 'mobile_row_image',
        1 => 'title',
        2 => 'field_article_quote',
        3 => 'body',
        4 => 'field_row_link',
      ),
      'col2' => array(
        5 => 'field_row_videos',
        6 => 'field_row_images',
      ),
    ),
    'fields' => array(
      'mobile_row_image' => 'col1',
      'title' => 'col1',
      'field_article_quote' => 'col1',
      'body' => 'col1',
      'field_row_link' => 'col1',
      'field_row_videos' => 'col2',
      'field_row_images' => 'col2',
    ),
    'limit' => array(
      'field_row_images' => '1',
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
    'hide_page_title' => '0',
    'page_option_title' => '',
  );
  $export['node|row|left_bg_image_row'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|row|left_non_bg_image_row';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'row';
  $ds_layout->view_mode = 'left_non_bg_image_row';
  $ds_layout->layout = 'common_support_teaser_1';
  $ds_layout->settings = array(
    'regions' => array(
      'col1' => array(
        0 => 'mobile_row_image',
        1 => 'title',
        2 => 'field_article_quote',
        3 => 'body',
        4 => 'field_row_videos',
        5 => 'field_row_link',
      ),
      'col2' => array(
        6 => 'field_row_images',
      ),
    ),
    'fields' => array(
      'mobile_row_image' => 'col1',
      'title' => 'col1',
      'field_article_quote' => 'col1',
      'body' => 'col1',
      'field_row_videos' => 'col1',
      'field_row_link' => 'col1',
      'field_row_images' => 'col2',
    ),
    'limit' => array(
      'field_row_images' => '1',
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
    'hide_page_title' => '0',
    'page_option_title' => '',
  );
  $export['node|row|left_non_bg_image_row'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|row|one_column_bg_image_row';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'row';
  $ds_layout->view_mode = 'one_column_bg_image_row';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'mobile_row_image',
        1 => 'title',
        2 => 'body',
        3 => 'field_row_images',
      ),
    ),
    'fields' => array(
      'mobile_row_image' => 'ds_content',
      'title' => 'ds_content',
      'body' => 'ds_content',
      'field_row_images' => 'ds_content',
    ),
    'limit' => array(
      'field_row_images' => '1',
    ),
    'classes' => array(
      'layout_class' => array(
        'node-nid-[node:nid]' => 'node-nid-[node:nid]',
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
    'hide_page_title' => '0',
    'page_option_title' => '',
  );
  $export['node|row|one_column_bg_image_row'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|row|right_bg_image_row';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'row';
  $ds_layout->view_mode = 'right_bg_image_row';
  $ds_layout->layout = 'common_support_teaser_1';
  $ds_layout->settings = array(
    'regions' => array(
      'col1' => array(
        0 => 'mobile_row_image',
        1 => 'field_row_videos',
        2 => 'field_row_images',
      ),
      'col2' => array(
        3 => 'title',
        4 => 'field_article_quote',
        5 => 'body',
        6 => 'field_row_link',
      ),
    ),
    'fields' => array(
      'mobile_row_image' => 'col1',
      'field_row_videos' => 'col1',
      'field_row_images' => 'col1',
      'title' => 'col2',
      'field_article_quote' => 'col2',
      'body' => 'col2',
      'field_row_link' => 'col2',
    ),
    'limit' => array(
      'field_row_images' => '1',
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
    'hide_page_title' => '0',
    'page_option_title' => '',
  );
  $export['node|row|right_bg_image_row'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|row|right_non_bg_image_row';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'row';
  $ds_layout->view_mode = 'right_non_bg_image_row';
  $ds_layout->layout = 'common_support_teaser_1';
  $ds_layout->settings = array(
    'regions' => array(
      'col1' => array(
        0 => 'mobile_row_image',
        1 => 'field_row_images',
      ),
      'col2' => array(
        2 => 'title',
        3 => 'field_article_quote',
        4 => 'body',
        5 => 'field_row_link',
        6 => 'field_row_videos',
      ),
    ),
    'fields' => array(
      'mobile_row_image' => 'col1',
      'field_row_images' => 'col1',
      'title' => 'col2',
      'field_article_quote' => 'col2',
      'body' => 'col2',
      'field_row_link' => 'col2',
      'field_row_videos' => 'col2',
    ),
    'limit' => array(
      'field_row_images' => '1',
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
    'hide_page_title' => '0',
    'page_option_title' => '',
  );
  $export['node|row|right_non_bg_image_row'] = $ds_layout;

  return $export;
}

/**
 * Implements hook_ds_view_modes_info().
 */
function btw_evermind_ds_view_modes_info() {
  $export = array();

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'left_bg_image_row';
  $ds_view_mode->label = 'Left Copy BG Image';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['left_bg_image_row'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'left_non_bg_image_row';
  $ds_view_mode->label = 'Left Copy Rt Image';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['left_non_bg_image_row'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'right_bg_image_row';
  $ds_view_mode->label = 'Right Copy BG Image';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['right_bg_image_row'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'right_non_bg_image_row';
  $ds_view_mode->label = 'Right Copy Left Image';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['right_non_bg_image_row'] = $ds_view_mode;

  return $export;
}

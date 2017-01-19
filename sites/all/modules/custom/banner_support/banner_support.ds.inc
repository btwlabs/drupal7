<?php
/**
 * @file
 * banner_support.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function banner_support_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|banner|bnr_lg_hidden_small_with_bdy';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'banner';
  $ds_fieldsetting->view_mode = 'bnr_lg_hidden_small_with_bdy';
  $ds_fieldsetting->settings = array(
    'banner_link_copy' => array(
      'weight' => '15',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'show_title' => 0,
        'title_wrapper' => '',
        'ctools' => 'a:3:{s:4:"conf";a:10:{s:5:"label";s:6:"hidden";s:9:"formatter";s:12:"link_default";s:11:"delta_limit";i:0;s:12:"delta_offset";s:1:"0";s:14:"delta_reversed";b:0;s:18:"formatter_settings";a:0:{}s:7:"context";s:25:"argument_entity_id:node_1";s:14:"override_title";i:0;s:19:"override_title_text";s:0:"";s:22:"override_title_heading";s:2:"h2";}s:4:"type";s:12:"entity_field";s:7:"subtype";s:22:"node:field_banner_link";}',
        'load_terms' => 0,
        'ft' => array(),
      ),
    ),
  );
  $export['node|banner|bnr_lg_hidden_small_with_bdy'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|banner|bnr_lg_hidden_sml_img_only';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'banner';
  $ds_fieldsetting->view_mode = 'bnr_lg_hidden_sml_img_only';
  $ds_fieldsetting->settings = array(
    'linked_small_format_image' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['node|banner|bnr_lg_hidden_sml_img_only'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|banner|bnr_lg_img_only_sml_hidden';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'banner';
  $ds_fieldsetting->view_mode = 'bnr_lg_img_only_sml_hidden';
  $ds_fieldsetting->settings = array(
    'linked_large_format_image' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['node|banner|bnr_lg_img_only_sml_hidden'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|banner|bnr_lg_img_only_sml_img_only';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'banner';
  $ds_fieldsetting->view_mode = 'bnr_lg_img_only_sml_img_only';
  $ds_fieldsetting->settings = array(
    'linked_large_format_image' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'linked_small_format_image' => array(
      'weight' => '2',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['node|banner|bnr_lg_img_only_sml_img_only'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|banner|bnr_lg_img_only_sml_with_bdy';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'banner';
  $ds_fieldsetting->view_mode = 'bnr_lg_img_only_sml_with_bdy';
  $ds_fieldsetting->settings = array(
    'banner_link_copy' => array(
      'weight' => '4',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'show_title' => 0,
        'title_wrapper' => '',
        'ctools' => 'a:3:{s:4:"conf";a:10:{s:5:"label";s:6:"hidden";s:9:"formatter";s:12:"link_default";s:11:"delta_limit";i:0;s:12:"delta_offset";s:1:"0";s:14:"delta_reversed";b:0;s:18:"formatter_settings";a:0:{}s:7:"context";s:25:"argument_entity_id:node_1";s:14:"override_title";i:0;s:19:"override_title_text";s:0:"";s:22:"override_title_heading";s:2:"h2";}s:4:"type";s:12:"entity_field";s:7:"subtype";s:22:"node:field_banner_link";}',
        'load_terms' => 0,
        'ft' => array(),
      ),
    ),
    'linked_large_format_image' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['node|banner|bnr_lg_img_only_sml_with_bdy'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|banner|bnr_lg_with_bdy_sml_img_only';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'banner';
  $ds_fieldsetting->view_mode = 'bnr_lg_with_bdy_sml_img_only';
  $ds_fieldsetting->settings = array(
    'linked_small_format_image' => array(
      'weight' => '3',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['node|banner|bnr_lg_with_bdy_sml_img_only'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|banner|bnr_lg_with_bdy_sml_with_bdy';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'banner';
  $ds_fieldsetting->view_mode = 'bnr_lg_with_bdy_sml_with_bdy';
  $ds_fieldsetting->settings = array(
    'banner_link_copy' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'show_title' => 0,
        'title_wrapper' => '',
        'ctools' => 'a:3:{s:4:"conf";a:10:{s:5:"label";s:6:"hidden";s:9:"formatter";s:12:"link_default";s:11:"delta_limit";i:0;s:12:"delta_offset";s:1:"0";s:14:"delta_reversed";b:0;s:18:"formatter_settings";a:0:{}s:7:"context";s:25:"argument_entity_id:node_1";s:14:"override_title";i:0;s:19:"override_title_text";s:0:"";s:22:"override_title_heading";s:2:"h2";}s:4:"type";s:12:"entity_field";s:7:"subtype";s:22:"node:field_banner_link";}',
        'load_terms' => 0,
        'ft' => array(),
      ),
    ),
  );
  $export['node|banner|bnr_lg_with_bdy_sml_with_bdy'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_custom_fields_info().
 */
function banner_support_ds_custom_fields_info() {
  $export = array();

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'banner_link_copy';
  $ds_field->label = 'Banner Link Copy';
  $ds_field->field_type = 7;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = 'banner|*';
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
  $export['banner_link_copy'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'linked_large_format_image';
  $ds_field->label = 'Linked Large Format Image';
  $ds_field->field_type = 3;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = 'banner|*';
  $ds_field->properties = array();
  $export['linked_large_format_image'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'linked_small_format_image';
  $ds_field->label = 'Linked Small Format Image';
  $ds_field->field_type = 3;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = 'banner|*';
  $ds_field->properties = array();
  $export['linked_small_format_image'] = $ds_field;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function banner_support_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|banner|bnr_lg_hidden_small_with_bdy';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'banner';
  $ds_layout->view_mode = 'bnr_lg_hidden_small_with_bdy';
  $ds_layout->layout = 'banner_support_1';
  $ds_layout->settings = array(
    'regions' => array(
      'small_format' => array(
        0 => 'group_small_row_1',
        1 => 'group_small_row_2',
        2 => 'field_banner_small_image',
        3 => 'field_small_body',
        4 => 'banner_link_copy',
      ),
    ),
    'fields' => array(
      'group_small_row_1' => 'small_format',
      'group_small_row_2' => 'small_format',
      'field_banner_small_image' => 'small_format',
      'field_small_body' => 'small_format',
      'banner_link_copy' => 'small_format',
    ),
    'classes' => array(
      'layout_class' => array(
        '' => '',
      ),
    ),
    'wrappers' => array(
      'large_format' => 'div',
      'small_format' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => 0,
  );
  $export['node|banner|bnr_lg_hidden_small_with_bdy'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|banner|bnr_lg_hidden_sml_hidden';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'banner';
  $ds_layout->view_mode = 'bnr_lg_hidden_sml_hidden';
  $ds_layout->layout = 'banner_support_1';
  $ds_layout->settings = array(
    'regions' => array(),
    'fields' => array(),
    'classes' => array(),
    'wrappers' => array(),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => TRUE,
    'layout_link_attribute' => FALSE,
    'layout_link_custom' => '',
    'layout_disable_css' => 0,
  );
  $export['node|banner|bnr_lg_hidden_sml_hidden'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|banner|bnr_lg_hidden_sml_img_only';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'banner';
  $ds_layout->view_mode = 'bnr_lg_hidden_sml_img_only';
  $ds_layout->layout = 'banner_support_1';
  $ds_layout->settings = array(
    'regions' => array(
      'small_format' => array(
        0 => 'group_small_row_1',
        1 => 'linked_small_format_image',
      ),
    ),
    'fields' => array(
      'group_small_row_1' => 'small_format',
      'linked_small_format_image' => 'small_format',
    ),
    'classes' => array(
      'layout_class' => array(
        '' => '',
      ),
    ),
    'wrappers' => array(
      'large_format' => 'div',
      'small_format' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => 0,
  );
  $export['node|banner|bnr_lg_hidden_sml_img_only'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|banner|bnr_lg_img_only_sml_hidden';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'banner';
  $ds_layout->view_mode = 'bnr_lg_img_only_sml_hidden';
  $ds_layout->layout = 'banner_support_1';
  $ds_layout->settings = array(
    'regions' => array(
      'large_format' => array(
        0 => 'group_large_row_1',
        1 => 'linked_large_format_image',
      ),
    ),
    'fields' => array(
      'group_large_row_1' => 'large_format',
      'linked_large_format_image' => 'large_format',
    ),
    'classes' => array(
      'layout_class' => array(
        '' => '',
      ),
    ),
    'wrappers' => array(
      'large_format' => 'div',
      'small_format' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => 0,
  );
  $export['node|banner|bnr_lg_img_only_sml_hidden'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|banner|bnr_lg_img_only_sml_img_only';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'banner';
  $ds_layout->view_mode = 'bnr_lg_img_only_sml_img_only';
  $ds_layout->layout = 'banner_support_1';
  $ds_layout->settings = array(
    'regions' => array(
      'large_format' => array(
        0 => 'group_large_row_1',
        2 => 'linked_large_format_image',
      ),
      'small_format' => array(
        1 => 'group_small_row_1',
        3 => 'linked_small_format_image',
      ),
    ),
    'fields' => array(
      'group_large_row_1' => 'large_format',
      'group_small_row_1' => 'small_format',
      'linked_large_format_image' => 'large_format',
      'linked_small_format_image' => 'small_format',
    ),
    'classes' => array(
      'layout_class' => array(
        '' => '',
      ),
    ),
    'wrappers' => array(
      'large_format' => 'div',
      'small_format' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => 0,
  );
  $export['node|banner|bnr_lg_img_only_sml_img_only'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|banner|bnr_lg_img_only_sml_with_bdy';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'banner';
  $ds_layout->view_mode = 'bnr_lg_img_only_sml_with_bdy';
  $ds_layout->layout = 'banner_support_1';
  $ds_layout->settings = array(
    'regions' => array(
      'large_format' => array(
        0 => 'group_large_row_1',
        1 => 'linked_large_format_image',
      ),
      'small_format' => array(
        2 => 'group_small_row_1',
        3 => 'field_banner_small_image',
        4 => 'field_small_body',
        5 => 'group_small_row_2',
        6 => 'banner_link_copy',
      ),
    ),
    'fields' => array(
      'group_large_row_1' => 'large_format',
      'linked_large_format_image' => 'large_format',
      'group_small_row_1' => 'small_format',
      'field_banner_small_image' => 'small_format',
      'field_small_body' => 'small_format',
      'group_small_row_2' => 'small_format',
      'banner_link_copy' => 'small_format',
    ),
    'classes' => array(
      'layout_class' => array(
        '' => '',
      ),
    ),
    'wrappers' => array(
      'large_format' => 'div',
      'small_format' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => 0,
  );
  $export['node|banner|bnr_lg_img_only_sml_with_bdy'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|banner|bnr_lg_with_bdy_sml_hidden';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'banner';
  $ds_layout->view_mode = 'bnr_lg_with_bdy_sml_hidden';
  $ds_layout->layout = 'banner_support_1';
  $ds_layout->settings = array(
    'regions' => array(
      'large_format' => array(
        0 => 'field_large_body',
        1 => 'field_banner_link',
        2 => 'field_banner_large_image',
        3 => 'group_large_row_1',
        4 => 'group_large_row_2',
      ),
    ),
    'fields' => array(
      'field_large_body' => 'large_format',
      'field_banner_link' => 'large_format',
      'field_banner_large_image' => 'large_format',
      'group_large_row_1' => 'large_format',
      'group_large_row_2' => 'large_format',
    ),
    'classes' => array(
      'layout_class' => array(
        '' => '',
      ),
    ),
    'wrappers' => array(
      'large_format' => 'div',
      'small_format' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => 0,
  );
  $export['node|banner|bnr_lg_with_bdy_sml_hidden'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|banner|bnr_lg_with_bdy_sml_img_only';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'banner';
  $ds_layout->view_mode = 'bnr_lg_with_bdy_sml_img_only';
  $ds_layout->layout = 'banner_support_1';
  $ds_layout->settings = array(
    'regions' => array(
      'large_format' => array(
        0 => 'field_banner_large_image',
        1 => 'field_large_body',
        2 => 'group_large_row_1',
        3 => 'group_large_row_2',
        4 => 'field_banner_link',
      ),
      'small_format' => array(
        5 => 'group_small_row_1',
        6 => 'linked_small_format_image',
      ),
    ),
    'fields' => array(
      'field_banner_large_image' => 'large_format',
      'field_large_body' => 'large_format',
      'group_large_row_1' => 'large_format',
      'group_large_row_2' => 'large_format',
      'field_banner_link' => 'large_format',
      'group_small_row_1' => 'small_format',
      'linked_small_format_image' => 'small_format',
    ),
    'classes' => array(
      'layout_class' => array(
        '' => '',
      ),
    ),
    'wrappers' => array(
      'large_format' => 'div',
      'small_format' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => 0,
  );
  $export['node|banner|bnr_lg_with_bdy_sml_img_only'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|banner|bnr_lg_with_bdy_sml_with_bdy';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'banner';
  $ds_layout->view_mode = 'bnr_lg_with_bdy_sml_with_bdy';
  $ds_layout->layout = 'banner_support_1';
  $ds_layout->settings = array(
    'regions' => array(
      'large_format' => array(
        0 => 'group_large_row_1',
        2 => 'field_large_body',
        3 => 'group_large_row_2',
        4 => 'field_banner_link',
        7 => 'field_banner_large_image',
      ),
      'small_format' => array(
        1 => 'field_small_body',
        5 => 'field_banner_small_image',
        6 => 'banner_link_copy',
        8 => 'group_small_row_1',
        9 => 'group_small_row_2',
      ),
    ),
    'fields' => array(
      'group_large_row_1' => 'large_format',
      'field_small_body' => 'small_format',
      'field_large_body' => 'large_format',
      'group_large_row_2' => 'large_format',
      'field_banner_link' => 'large_format',
      'field_banner_small_image' => 'small_format',
      'banner_link_copy' => 'small_format',
      'field_banner_large_image' => 'large_format',
      'group_small_row_1' => 'small_format',
      'group_small_row_2' => 'small_format',
    ),
    'classes' => array(
      'layout_class' => array(
        '' => '',
      ),
    ),
    'wrappers' => array(
      'large_format' => 'div',
      'small_format' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => 0,
  );
  $export['node|banner|bnr_lg_with_bdy_sml_with_bdy'] = $ds_layout;

  return $export;
}

/**
 * Implements hook_ds_view_modes_info().
 */
function banner_support_ds_view_modes_info() {
  $export = array();

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'bnr_lg_hidden_small_with_bdy';
  $ds_view_mode->label = 'BNR Lg Hidden + Small With Bdy';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['bnr_lg_hidden_small_with_bdy'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'bnr_lg_hidden_sml_hidden';
  $ds_view_mode->label = 'BNR Lg Hidden + Sml Hidden';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['bnr_lg_hidden_sml_hidden'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'bnr_lg_hidden_sml_img_only';
  $ds_view_mode->label = 'BNR Lg Hidden + Sml Img Only';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['bnr_lg_hidden_sml_img_only'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'bnr_lg_img_only_sml_hidden';
  $ds_view_mode->label = 'BNR Lg Img Only + Sml Hidden';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['bnr_lg_img_only_sml_hidden'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'bnr_lg_img_only_sml_img_only';
  $ds_view_mode->label = 'BNR Lg Img Only + Sml Img Only';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['bnr_lg_img_only_sml_img_only'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'bnr_lg_img_only_sml_with_bdy';
  $ds_view_mode->label = 'BNR Lg Img Only + Sml With Bdy';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['bnr_lg_img_only_sml_with_bdy'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'bnr_lg_with_bdy_sml_hidden';
  $ds_view_mode->label = 'BNR Lg With Bdy + Sml Hidden';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['bnr_lg_with_bdy_sml_hidden'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'bnr_lg_with_bdy_sml_img_only';
  $ds_view_mode->label = 'BNR Lg With Bdy + Sml Img Only';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['bnr_lg_with_bdy_sml_img_only'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'bnr_lg_with_bdy_sml_with_bdy';
  $ds_view_mode->label = 'BNR Lg With Bdy + Sml With Bdy';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['bnr_lg_with_bdy_sml_with_bdy'] = $ds_view_mode;

  return $export;
}

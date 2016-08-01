<?php
/**
 * @file
 * banner_support.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function banner_support_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_large_format|node|banner|form';
  $field_group->group_name = 'group_large_format';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'banner';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Large Format',
    'weight' => '4',
    'children' => array(
      0 => 'field_banner_large_image',
      1 => 'field_large_body',
      2 => 'field_large_options',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Large Format',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-large-format field-group-fieldset',
        'description' => 'Image and display options for banners to be shown on large format devices',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $field_groups['group_large_format|node|banner|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_large_row_1|node|banner|bnr_lg_hidden_sml_img_only';
  $field_group->group_name = 'group_large_row_1';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'banner';
  $field_group->mode = 'bnr_lg_hidden_sml_img_only';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Large Row 1',
    'weight' => '14',
    'children' => array(),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Large Row 1',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'row row-1 large-row-1 field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_large_row_1|node|banner|bnr_lg_hidden_sml_img_only'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_large_row_1|node|banner|bnr_lg_img_only_sml_hidden';
  $field_group->group_name = 'group_large_row_1';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'banner';
  $field_group->mode = 'bnr_lg_img_only_sml_hidden';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Large Row 1',
    'weight' => '0',
    'children' => array(
      0 => 'linked_large_format_image',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Large Row 1',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'row row-1 large-row-1 field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_large_row_1|node|banner|bnr_lg_img_only_sml_hidden'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_large_row_1|node|banner|bnr_lg_img_only_sml_img_only';
  $field_group->group_name = 'group_large_row_1';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'banner';
  $field_group->mode = 'bnr_lg_img_only_sml_img_only';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Large Row 1',
    'weight' => '0',
    'children' => array(
      0 => 'linked_large_format_image',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Large Row 1',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'row row-1 large-row-1 field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_large_row_1|node|banner|bnr_lg_img_only_sml_img_only'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_large_row_1|node|banner|bnr_lg_img_only_sml_with_bdy';
  $field_group->group_name = 'group_large_row_1';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'banner';
  $field_group->mode = 'bnr_lg_img_only_sml_with_bdy';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Large Row 1',
    'weight' => '0',
    'children' => array(
      0 => 'linked_large_format_image',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Large Row 1',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'row row-1 large-row-1 field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_large_row_1|node|banner|bnr_lg_img_only_sml_with_bdy'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_large_row_1|node|banner|bnr_lg_with_bdy_sml_hidden';
  $field_group->group_name = 'group_large_row_1';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'banner';
  $field_group->mode = 'bnr_lg_with_bdy_sml_hidden';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Large Row 1',
    'weight' => '4',
    'children' => array(
      0 => 'field_banner_large_image',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Large Row 1',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'row row-1 large-row-1 field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_large_row_1|node|banner|bnr_lg_with_bdy_sml_hidden'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_large_row_1|node|banner|bnr_lg_with_bdy_sml_img_only';
  $field_group->group_name = 'group_large_row_1';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'banner';
  $field_group->mode = 'bnr_lg_with_bdy_sml_img_only';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Large Row 1',
    'weight' => '0',
    'children' => array(
      0 => 'field_banner_large_image',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Large Row 1',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'row row-1 large-row-1 field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_large_row_1|node|banner|bnr_lg_with_bdy_sml_img_only'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_large_row_1|node|banner|bnr_lg_with_bdy_sml_with_bdy';
  $field_group->group_name = 'group_large_row_1';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'banner';
  $field_group->mode = 'bnr_lg_with_bdy_sml_with_bdy';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Large Row 1',
    'weight' => '0',
    'children' => array(
      0 => 'field_banner_large_image',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Large Row 1',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'row row-1 large-row-1 field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_large_row_1|node|banner|bnr_lg_with_bdy_sml_with_bdy'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_large_row_1|node|banner|default';
  $field_group->group_name = 'group_large_row_1';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'banner';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Large Row 1',
    'weight' => '15',
    'children' => array(),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Large Row 1',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'row row-1 large-row-1 field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_large_row_1|node|banner|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_large_row_2|node|banner|bnr_lg_hidden_sml_img_only';
  $field_group->group_name = 'group_large_row_2';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'banner';
  $field_group->mode = 'bnr_lg_hidden_sml_img_only';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Large Row 2',
    'weight' => '15',
    'children' => array(),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Large Row 2',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'row row-2 large-row-2 field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_large_row_2|node|banner|bnr_lg_hidden_sml_img_only'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_large_row_2|node|banner|bnr_lg_img_only_sml_img_only';
  $field_group->group_name = 'group_large_row_2';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'banner';
  $field_group->mode = 'bnr_lg_img_only_sml_img_only';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Large Row 2',
    'weight' => '16',
    'children' => array(),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Large Row 2',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'row row-2 large-row-2 field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_large_row_2|node|banner|bnr_lg_img_only_sml_img_only'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_large_row_2|node|banner|bnr_lg_img_only_sml_with_bdy';
  $field_group->group_name = 'group_large_row_2';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'banner';
  $field_group->mode = 'bnr_lg_img_only_sml_with_bdy';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Large Row 2',
    'weight' => '16',
    'children' => array(),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Large Row 2',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'row row-2 large-row-2 field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_large_row_2|node|banner|bnr_lg_img_only_sml_with_bdy'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_large_row_2|node|banner|bnr_lg_with_bdy_sml_hidden';
  $field_group->group_name = 'group_large_row_2';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'banner';
  $field_group->mode = 'bnr_lg_with_bdy_sml_hidden';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Large Row 2',
    'weight' => '5',
    'children' => array(
      0 => 'field_banner_link',
      1 => 'field_large_body',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Large Row 2',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'row row-2 large-row-2 field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_large_row_2|node|banner|bnr_lg_with_bdy_sml_hidden'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_large_row_2|node|banner|bnr_lg_with_bdy_sml_img_only';
  $field_group->group_name = 'group_large_row_2';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'banner';
  $field_group->mode = 'bnr_lg_with_bdy_sml_img_only';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Large Row 2',
    'weight' => '1',
    'children' => array(
      0 => 'field_banner_link',
      1 => 'field_large_body',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Large Row 2',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'row row-2 large-row-2 field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_large_row_2|node|banner|bnr_lg_with_bdy_sml_img_only'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_large_row_2|node|banner|bnr_lg_with_bdy_sml_with_bdy';
  $field_group->group_name = 'group_large_row_2';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'banner';
  $field_group->mode = 'bnr_lg_with_bdy_sml_with_bdy';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Large Row 2',
    'weight' => '1',
    'children' => array(
      0 => 'field_banner_link',
      1 => 'field_large_body',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Large Row 2',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'row row-2 large-row-2 field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_large_row_2|node|banner|bnr_lg_with_bdy_sml_with_bdy'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_large_row_2|node|banner|default';
  $field_group->group_name = 'group_large_row_2';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'banner';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Large Row 2',
    'weight' => '15',
    'children' => array(),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Large Row 2',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'row row-2 large-row-2 field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_large_row_2|node|banner|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_small_format|node|banner|form';
  $field_group->group_name = 'group_small_format';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'banner';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Small Format',
    'weight' => '5',
    'children' => array(
      0 => 'field_banner_small_image',
      1 => 'field_small_body',
      2 => 'field_small_options',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Small Format',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-small-format field-group-fieldset',
        'description' => 'Image and display options for banners to be shown on small format devices such as smartphones and some small tablets',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $field_groups['group_small_format|node|banner|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_small_row_1|node|banner|bnr_lg_hidden_small_with_bdy';
  $field_group->group_name = 'group_small_row_1';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'banner';
  $field_group->mode = 'bnr_lg_hidden_small_with_bdy';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Small Row 1',
    'weight' => '0',
    'children' => array(
      0 => 'field_banner_small_image',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Small Row 1',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'row row-1 small-row-1 field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_small_row_1|node|banner|bnr_lg_hidden_small_with_bdy'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_small_row_1|node|banner|bnr_lg_hidden_sml_img_only';
  $field_group->group_name = 'group_small_row_1';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'banner';
  $field_group->mode = 'bnr_lg_hidden_sml_img_only';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Small Row 1',
    'weight' => '0',
    'children' => array(
      0 => 'linked_small_format_image',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Small Row 1',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'row row-1 small-row-1 field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_small_row_1|node|banner|bnr_lg_hidden_sml_img_only'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_small_row_1|node|banner|bnr_lg_img_only_sml_img_only';
  $field_group->group_name = 'group_small_row_1';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'banner';
  $field_group->mode = 'bnr_lg_img_only_sml_img_only';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Small Row 1',
    'weight' => '1',
    'children' => array(
      0 => 'linked_small_format_image',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Small Row 1',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'row row-1 small-row-1 field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_small_row_1|node|banner|bnr_lg_img_only_sml_img_only'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_small_row_1|node|banner|bnr_lg_img_only_sml_with_bdy';
  $field_group->group_name = 'group_small_row_1';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'banner';
  $field_group->mode = 'bnr_lg_img_only_sml_with_bdy';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Small Row 1',
    'weight' => '2',
    'children' => array(
      0 => 'field_banner_small_image',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Small Row 1',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'row row-1 small-row-1 field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_small_row_1|node|banner|bnr_lg_img_only_sml_with_bdy'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_small_row_1|node|banner|bnr_lg_with_bdy_sml_img_only';
  $field_group->group_name = 'group_small_row_1';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'banner';
  $field_group->mode = 'bnr_lg_with_bdy_sml_img_only';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Small Row 1',
    'weight' => '2',
    'children' => array(
      0 => 'linked_small_format_image',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Small Row 1',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'row row-1 small-row-1 field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_small_row_1|node|banner|bnr_lg_with_bdy_sml_img_only'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_small_row_1|node|banner|bnr_lg_with_bdy_sml_with_bdy';
  $field_group->group_name = 'group_small_row_1';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'banner';
  $field_group->mode = 'bnr_lg_with_bdy_sml_with_bdy';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Small Row 1',
    'weight' => '4',
    'children' => array(
      0 => 'field_banner_small_image',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Small Row 1',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'row row-1 small-row-1 field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_small_row_1|node|banner|bnr_lg_with_bdy_sml_with_bdy'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_small_row_1|node|banner|default';
  $field_group->group_name = 'group_small_row_1';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'banner';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Small Row 1',
    'weight' => '15',
    'children' => array(),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Small Row 1',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'row row-1 small-row-1 field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_small_row_1|node|banner|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_small_row_2|node|banner|bnr_lg_hidden_small_with_bdy';
  $field_group->group_name = 'group_small_row_2';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'banner';
  $field_group->mode = 'bnr_lg_hidden_small_with_bdy';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Small Row 2',
    'weight' => '1',
    'children' => array(
      0 => 'field_small_body',
      1 => 'banner_link_copy',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Small Row 2',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'row row-2 small-row-2 field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_small_row_2|node|banner|bnr_lg_hidden_small_with_bdy'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_small_row_2|node|banner|bnr_lg_hidden_sml_img_only';
  $field_group->group_name = 'group_small_row_2';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'banner';
  $field_group->mode = 'bnr_lg_hidden_sml_img_only';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Small Row 2',
    'weight' => '16',
    'children' => array(),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Small Row 2',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'row row-2 small-row-2 field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_small_row_2|node|banner|bnr_lg_hidden_sml_img_only'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_small_row_2|node|banner|bnr_lg_img_only_sml_img_only';
  $field_group->group_name = 'group_small_row_2';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'banner';
  $field_group->mode = 'bnr_lg_img_only_sml_img_only';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Small Row 2',
    'weight' => '15',
    'children' => array(),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Small Row 2',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'row row-2 small-row-2 field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_small_row_2|node|banner|bnr_lg_img_only_sml_img_only'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_small_row_2|node|banner|bnr_lg_img_only_sml_with_bdy';
  $field_group->group_name = 'group_small_row_2';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'banner';
  $field_group->mode = 'bnr_lg_img_only_sml_with_bdy';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Small Row 2',
    'weight' => '3',
    'children' => array(
      0 => 'field_small_body',
      1 => 'banner_link_copy',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Small Row 2',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'row row-2 small-row-2 field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_small_row_2|node|banner|bnr_lg_img_only_sml_with_bdy'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_small_row_2|node|banner|bnr_lg_with_bdy_sml_img_only';
  $field_group->group_name = 'group_small_row_2';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'banner';
  $field_group->mode = 'bnr_lg_with_bdy_sml_img_only';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Small Row 2',
    'weight' => '18',
    'children' => array(),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Small Row 2',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'row row-2 small-row-2 field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_small_row_2|node|banner|bnr_lg_with_bdy_sml_img_only'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_small_row_2|node|banner|bnr_lg_with_bdy_sml_with_bdy';
  $field_group->group_name = 'group_small_row_2';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'banner';
  $field_group->mode = 'bnr_lg_with_bdy_sml_with_bdy';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Small Row 2',
    'weight' => '5',
    'children' => array(
      0 => 'field_small_body',
      1 => 'banner_link_copy',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Small Row 2',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'row row-2 small-row-2 field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_small_row_2|node|banner|bnr_lg_with_bdy_sml_with_bdy'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_small_row_2|node|banner|default';
  $field_group->group_name = 'group_small_row_2';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'banner';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Small Row 2',
    'weight' => '15',
    'children' => array(),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Small Row 2',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'row row-2 small-row-2 field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_small_row_2|node|banner|default'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Large Format');
  t('Large Row 1');
  t('Large Row 2');
  t('Small Format');
  t('Small Row 1');
  t('Small Row 2');

  return $field_groups;
}

<?php
/**
 * @file
 * edgenet_base.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function edgenet_base_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_feature_item_1|field_collection_item|field_product_feature_row|default';
  $field_group->group_name = 'group_feature_item_1';
  $field_group->entity_type = 'field_collection_item';
  $field_group->bundle = 'field_product_feature_row';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_teaser_grid_row';
  $field_group->data = array(
    'label' => 'Feature Item 1',
    'weight' => '1',
    'children' => array(
      0 => 'field_icon_class_1',
      1 => 'field_product_feature_title_1',
      2 => 'field_product_feature_body_1',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Feature Item 1',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'teaser-grid-item',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_feature_item_1|field_collection_item|field_product_feature_row|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_feature_item_1|field_collection_item|field_product_feature_row|form';
  $field_group->group_name = 'group_feature_item_1';
  $field_group->entity_type = 'field_collection_item';
  $field_group->bundle = 'field_product_feature_row';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Feature Item 1',
    'weight' => '1',
    'children' => array(
      0 => 'field_icon_class_1',
      1 => 'field_product_feature_title_1',
      2 => 'field_product_feature_body_1',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-feature-item-1 field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_feature_item_1|field_collection_item|field_product_feature_row|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_feature_item_2|field_collection_item|field_product_feature_row|default';
  $field_group->group_name = 'group_feature_item_2';
  $field_group->entity_type = 'field_collection_item';
  $field_group->bundle = 'field_product_feature_row';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_teaser_grid_row';
  $field_group->data = array(
    'label' => 'Feature Item 2',
    'weight' => '2',
    'children' => array(
      0 => 'field_icon_class_2',
      1 => 'field_product_feature_title_2',
      2 => 'field_product_feature_body_2',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Feature Item 2',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'teaser-grid-item',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_feature_item_2|field_collection_item|field_product_feature_row|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_feature_item_2|field_collection_item|field_product_feature_row|form';
  $field_group->group_name = 'group_feature_item_2';
  $field_group->entity_type = 'field_collection_item';
  $field_group->bundle = 'field_product_feature_row';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Feature Item 2',
    'weight' => '2',
    'children' => array(
      0 => 'field_icon_class_2',
      1 => 'field_product_feature_title_2',
      2 => 'field_product_feature_body_2',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-feature-item-2 field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_feature_item_2|field_collection_item|field_product_feature_row|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_features_content_inner|node|product|default';
  $field_group->group_name = 'group_features_content_inner';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'product';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_section_wrapper3';
  $field_group->data = array(
    'label' => 'Features Content Inner',
    'weight' => '13',
    'children' => array(
      0 => 'group_teaser_grid',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Features Content Inner',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'l-constrained',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_features_content_inner|node|product|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_news_section_inner|node|product|default';
  $field_group->group_name = 'group_news_section_inner';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'product';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_section_wrapper5';
  $field_group->data = array(
    'label' => 'News Section Inner',
    'weight' => '21',
    'children' => array(
      0 => 'associated_news',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'News Section Inner',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'l-constrained',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_news_section_inner|node|product|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_page_content_inner_1|node|product|default';
  $field_group->group_name = 'group_page_content_inner_1';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'product';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_section_wrapper2';
  $field_group->data = array(
    'label' => 'Page Content Inner1',
    'weight' => '15',
    'children' => array(
      0 => 'field_product_page_content',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Page Content Inner1',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'l-constrained',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_page_content_inner_1|node|product|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_page_content|node|product|form';
  $field_group->group_name = 'group_page_content';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'product';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Page Content',
    'weight' => '3',
    'children' => array(
      0 => 'body',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-page-content field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_page_content|node|product|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_partner_testimonial|node|partner|form';
  $field_group->group_name = 'group_partner_testimonial';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'partner';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Testimonial',
    'weight' => '4',
    'children' => array(
      0 => 'field_partner_testimonee',
      1 => 'field_partner_testimonial',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-partner-testimonial field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_partner_testimonial|node|partner|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_partners_section_inner|node|product|default';
  $field_group->group_name = 'group_partners_section_inner';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'product';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_section_wrapper4';
  $field_group->data = array(
    'label' => 'Partners Section Inner',
    'weight' => '7',
    'children' => array(
      0 => 'associated_partners',
      1 => 'associated_partners_sort',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Partners Section Inner',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'l-constrained',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_partners_section_inner|node|product|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_product_header|node|product|form';
  $field_group->group_name = 'group_product_header';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'product';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Header',
    'weight' => '1',
    'children' => array(
      0 => 'field_image',
      1 => 'field_short_description',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-product-header field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_product_header|node|product|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_section_title_2|node|product|default';
  $field_group->group_name = 'group_section_title_2';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'product';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_section_wrapper4';
  $field_group->data = array(
    'label' => 'section title2',
    'weight' => '5',
    'children' => array(
      0 => 'section_4_title',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'section title2',
      'instance_settings' => array(
        'classes' => 'section-title',
        'element' => 'h2',
        'show_label' => '0',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $export['group_section_title_2|node|product|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_section_title_3|node|product|default';
  $field_group->group_name = 'group_section_title_3';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'product';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_section_wrapper5';
  $field_group->data = array(
    'label' => 'section title3',
    'weight' => '19',
    'children' => array(
      0 => 'section_5_title',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'section title3',
      'instance_settings' => array(
        'classes' => 'section-title',
        'element' => 'h2',
        'show_label' => '0',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $export['group_section_title_3|node|product|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_section_title|node|product|default';
  $field_group->group_name = 'group_section_title';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'product';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_section_wrapper3';
  $field_group->data = array(
    'label' => 'section title',
    'weight' => '11',
    'children' => array(
      0 => 'section_3_title',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'section title',
      'instance_settings' => array(
        'classes' => 'section-title',
        'element' => 'h2',
        'show_label' => '0',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $export['group_section_title|node|product|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_section_wrapper1|node|product|default';
  $field_group->group_name = 'group_section_wrapper1';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'product';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Section Wrapper1',
    'weight' => '0',
    'children' => array(
      0 => 'field_product_header',
    ),
    'format_type' => 'html5',
    'format_settings' => array(
      'label' => 'Section Wrapper1',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'product-section-1',
        'wrapper' => 'section',
      ),
    ),
  );
  $export['group_section_wrapper1|node|product|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_section_wrapper2|node|product|default';
  $field_group->group_name = 'group_section_wrapper2';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'product';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Section Wrapper2',
    'weight' => '1',
    'children' => array(
      0 => 'group_page_content_inner_1',
    ),
    'format_type' => 'html5',
    'format_settings' => array(
      'label' => 'Section Wrapper2',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'product-section-2',
        'wrapper' => 'section',
      ),
    ),
  );
  $export['group_section_wrapper2|node|product|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_section_wrapper3|node|product|default';
  $field_group->group_name = 'group_section_wrapper3';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'product';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Section Wrapper3',
    'weight' => '2',
    'children' => array(
      0 => 'group_section_title',
      1 => 'group_features_content_inner',
    ),
    'format_type' => 'html5',
    'format_settings' => array(
      'label' => 'Section Wrapper3',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'product-section-3',
        'wrapper' => 'section',
      ),
    ),
  );
  $export['group_section_wrapper3|node|product|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_section_wrapper4|node|product|default';
  $field_group->group_name = 'group_section_wrapper4';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'product';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Section Wrapper4',
    'weight' => '3',
    'children' => array(
      0 => 'group_section_title_2',
      1 => 'group_partners_section_inner',
    ),
    'format_type' => 'html5',
    'format_settings' => array(
      'label' => 'Section Wrapper4',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'product-section-4',
        'wrapper' => 'section',
      ),
    ),
  );
  $export['group_section_wrapper4|node|product|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_section_wrapper5|node|product|default';
  $field_group->group_name = 'group_section_wrapper5';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'product';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Section Wrapper5',
    'weight' => '4',
    'children' => array(
      0 => 'group_section_title_3',
      1 => 'group_news_section_inner',
    ),
    'format_type' => 'html5',
    'format_settings' => array(
      'label' => 'Section Wrapper5',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'product-section-5',
        'wrapper' => 'section',
      ),
    ),
  );
  $export['group_section_wrapper5|node|product|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_teaser_grid_row|field_collection_item|field_product_feature_row|default';
  $field_group->group_name = 'group_teaser_grid_row';
  $field_group->entity_type = 'field_collection_item';
  $field_group->bundle = 'field_product_feature_row';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Teaser Grid Row',
    'weight' => '0',
    'children' => array(
      0 => 'group_feature_item_1',
      1 => 'group_feature_item_2',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Teaser Grid Row',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'teaser-grid-row field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_teaser_grid_row|field_collection_item|field_product_feature_row|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_teaser_grid|field_collection_item|field_product_features|default';
  $field_group->group_name = 'group_teaser_grid';
  $field_group->entity_type = 'field_collection_item';
  $field_group->bundle = 'field_product_features';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Teaser Grid',
    'weight' => '0',
    'children' => array(
      0 => 'field_product_feature_icon_class',
      1 => 'field_product_feature_title',
      2 => 'field_product_feature_body',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Teaser Grid',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-teaser-grid field-group-div teaser-grid',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_teaser_grid|field_collection_item|field_product_features|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_teaser_grid|node|product|default';
  $field_group->group_name = 'group_teaser_grid';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'product';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_features_content_inner';
  $field_group->data = array(
    'label' => 'Teaser Grid',
    'weight' => '13',
    'children' => array(
      0 => 'field_product_feature_row',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Teaser Grid',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'teaser-grid field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_teaser_grid|node|product|default'] = $field_group;

  return $export;
}

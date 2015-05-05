<?php
/**
 * @file
 * articles_support.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function articles_support_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_title_wrapper|node|news_article|teaser2';
  $field_group->group_name = 'group_title_wrapper';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'news_article';
  $field_group->mode = 'teaser2';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'title wrapper',
    'weight' => '2',
    'children' => array(
      0 => 'clickable_title_link',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'title wrapper',
      'instance_settings' => array(
        'classes' => '',
        'element' => 'h3',
        'show_label' => '0',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $export['group_title_wrapper|node|news_article|teaser2'] = $field_group;

  return $export;
}

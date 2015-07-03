<?php
/**
 * @file
 * common_support.views.inc
 */

/**
 * Implements hook_views_plugins().
 */
function common_support_views_plugins() {
  $plugins = array();
  $plugins['style']['common_support_plugin_style_teaser_list'] = array(
    'title' => t('Teaser list style'),
    'handler' => 'common_support_plugin_style_teaser_list',
    'help' => t('Format the display with list classes'),
    'theme' => 'common_support_style_teaser_list',
    'theme file' => 'common_support.theme.inc',
    'theme path' => drupal_get_path('module', 'common_support') . '/theme',
    'uses options' => TRUE,
    'uses row plugin' => TRUE,
    'uses fields' => TRUE,
    'uses grouping' => TRUE,
    'even empty' => TRUE,
    'type' => 'normal',
  );
  $plugins['style']['common_support_plugin_style_teaser_grid'] = array(
    'title' => t('Teaser grid style'),
    'handler' => 'common_support_plugin_style_teaser_grid',
    'help' => t('Format the display with grid classes'),
    'theme' => 'common_support_style_teaser_grid',
    'theme file' => 'common_support.theme.inc',
    'theme path' => drupal_get_path('module', 'common_support') . '/theme',
    'uses options' => TRUE,
    'uses row plugin' => TRUE,
    'uses fields' => TRUE,
    'uses grouping' => TRUE,
    'even empty' => TRUE,
    'type' => 'normal',
  );
  return $plugins;
}

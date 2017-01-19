<?php
/**
 * @file
 * story_blocks.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function story_blocks_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'sample_display_story_blocks_page';
  $view->description = 'A sample implementation of story blocks using an entityqueue and view mode per page';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Sample Story Blocks Page';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'ds';
  $handler->display->display_options['row_options']['load_comments'] = 0;
  $handler->display->display_options['row_options']['alternating'] = 0;
  $handler->display->display_options['row_options']['grouping'] = 0;
  $handler->display->display_options['row_options']['advanced'] = 0;
  $handler->display->display_options['row_options']['delta_fieldset']['delta_fields'] = array();
  $handler->display->display_options['row_options']['grouping_fieldset']['group_field'] = 'node|entityqueue_relationship';
  $handler->display->display_options['row_options']['default_fieldset']['view_mode'] = 'full';
  $handler->display->display_options['row_options']['switch_fieldset']['switch'] = TRUE;
  /* Relationship: Sample Story Block Page Queue */
  $handler->display->display_options['relationships']['entityqueue_relationship']['id'] = 'entityqueue_relationship';
  $handler->display->display_options['relationships']['entityqueue_relationship']['table'] = 'node';
  $handler->display->display_options['relationships']['entityqueue_relationship']['field'] = 'entityqueue_relationship';
  $handler->display->display_options['relationships']['entityqueue_relationship']['ui_name'] = 'Sample Story Block Page Queue';
  $handler->display->display_options['relationships']['entityqueue_relationship']['label'] = 'Sample Story Block Page Queue';
  $handler->display->display_options['relationships']['entityqueue_relationship']['limit'] = 1;
  $handler->display->display_options['relationships']['entityqueue_relationship']['queues'] = array(
    'sample_story_block_page_queue' => 'sample_story_block_page_queue',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Entityqueue: Content Queue Position */
  $handler->display->display_options['sorts']['entityqueue_relationship']['id'] = 'entityqueue_relationship';
  $handler->display->display_options['sorts']['entityqueue_relationship']['table'] = 'node';
  $handler->display->display_options['sorts']['entityqueue_relationship']['field'] = 'entityqueue_relationship';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'story_block' => 'story_block',
  );
  /* Filter criterion: Entityqueue: Content In Queue */
  $handler->display->display_options['filters']['entityqueue_relationship']['id'] = 'entityqueue_relationship';
  $handler->display->display_options['filters']['entityqueue_relationship']['table'] = 'node';
  $handler->display->display_options['filters']['entityqueue_relationship']['field'] = 'entityqueue_relationship';
  $handler->display->display_options['filters']['entityqueue_relationship']['value'] = '1';

  /* Display: Row 1 */
  $handler = $view->new_display('block', 'Row 1', 'row1');
  $handler->display->display_options['block_description'] = 'Sample Story Block Page-Row 1';

  /* Display: Row 2 */
  $handler = $view->new_display('block', 'Row 2', 'row2');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '1';
  $handler->display->display_options['block_description'] = 'Sample Story Block Page-Row 2';

  /* Display: Row 3 */
  $handler = $view->new_display('block', 'Row 3', 'row3');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '2';
  $handler->display->display_options['block_description'] = 'Sample Story Block Page-Row 3';
  $export['sample_display_story_blocks_page'] = $view;

  return $export;
}

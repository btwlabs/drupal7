<?php
/**
 * @file
 * Preprocess code for the gear content type.
 */

switch($vars['view_mode']) {
  case 'full':
    $arg1 = $vars['node']->nid;
    $arg2 = $node->field_gear_types['und'][0]['tid'];
   
    // Related gear view.
    $vars['content']['related_gear'] = array(
      '#theme' => 'fantorrent_view',
      '#view' => 'gear_gallery',
      '#display' => 'related_gear',
      '#args' => array($arg1, $arg2),
    );

    // Gear Types 'menu' view.
    $vars['content']['types'] = array(
      '#theme' => 'fantorrent_view',
      '#view' => 'gear_gallery',
      '#display' => 'gear_types_block',
      '#args' => array($arg1, $arg2),
    );
    
    fantorrent_view_check($vars['content']['types']);

    // Add node pager.
    $vars['content']['gear_pager'] = array(
      '#theme' => 'fantorrent_embed_block',
      '#module' => 'entity_pager',
      '#delta' => 'entity_pager_6',
    );
   
    break;
}
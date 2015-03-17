<?php
/**
 * @file
 * Preprocess code for the song content type.
 */

switch($vars['view_mode']) {
        
  case 'full':
    // Song entity pager.
    $vars['content']['song_pager'] = array(
      '#theme' => 'fantorrent_embed_block',
      '#module' => 'entity_pager',
      '#delta' => 'entity_pager_1',
    );
    //back to river link
    $vars['content']['more_songs_link'] = array(
      '#theme' => 'link',
      '#text' => 'All Songs',
      '#path' => drupal_get_path_alias('music/songs'),
      '#options' => array(
        'html' => TRUE,
        'attributes' => array(
          'title' => t('See all songs'),
          'class' => array('back-to-river-link'),
        ),
      ),
    );

    // Song albums view.
    $vars['content']['song_albums'] = array(
      '#theme' => 'fantorrent_view',
      '#view' => 'discography',
      '#display' => 'song_albums',
      '#args' => array($vars['node']->nid),
    );
    fantorrent_view_check($vars['content']['song_albums']);

    // Song videos view.
    $vars['content']['song_videos'] = array(
      '#theme' => 'fantorrent_view',
      '#view' => 'discography',
      '#display' => 'song_videos',
      '#args' => array($vars['node']->nid),
    );
    fantorrent_view_check($vars['content']['song_videos']);

    // Song performances view.
    $vars['content']['song_performances'] = array(
      '#theme' => 'fantorrent_view',
      '#view' => 'discography',
      '#display' => 'song_performed',
      '#args' => array($vars['node']->nid),
    );
    fantorrent_view_check($vars['content']['song_performances']);

    // Song related product view.
    $vars['content']['song_products'] = array(
      '#theme' => 'fantorrent_view',
      '#view' => 'related_products',
      '#display' => 'related_products_songs',
      '#args' => array($vars['node']->nid),
    );
    fantorrent_view_check($vars['content']['song_products']);
    
    // Song gear view.
    $vars['content']['song_gear'] = array(
      '#theme' => 'fantorrent_view',
      '#view' => 'gear',
      '#display' => 'song_related_gear',
      '#args' => array($vars['node']->nid),
    );
    fantorrent_view_check($vars['content']['song_gear']);

    break;          
}
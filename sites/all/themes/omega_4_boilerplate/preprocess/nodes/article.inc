<?php
/**
 * @file
 * Preprocess code for the article content type.
 */

switch($vars['view_mode']) {
  
  case 'full' :
    
    //subnav
    $vars['content']['subnav'] = array(
      '#theme' => 'fantorrent_embed_block',
      '#module' => 'menu_block',
      '#delta' => variable_get('fantorrent_article_subnav_item', '2'),
    );
    
    //pull in build album node if referenced
    if (!empty($vars['field_albums_ref'])) { 
      $vars['album'] = (isset($vars['field_albums_ref'][LANGUAGE_NONE][0]['nid'])) ?
        node_view(node_load($vars['field_albums_ref'][LANGUAGE_NONE][0]['nid']), 'teaser') :
        node_view(node_load($vars['field_albums_ref'][0]['nid']), 'teaser'); 
    }      
    
    //node pager block
    if (module_exists('entity_pager')) {
      $vars['content']['article_pager'] = array(
        '#theme' => 'fantorrent_embed_block',
        '#module' => 'entity_pager',
        '#delta' => 'entity_pager_4',
      );
    }
    
    // Article gallary
    // Only want to show if more than 1 item, so have to check.
    $gallery = views_get_view('articles');
    $gallery->set_display('gallery');
    $data = $gallery->preview('gallery', array($vars['node']->nid));
    //count images + videos
    if ($gallery->result) {
      $items = count($gallery->result[0]->field_field_images_1) + count($gallery->result[0]->field_field_embed_video);
      foreach($gallery->result[0]->field_field_images_1 as $item) {
        $items++;
      }
      foreach($gallery->result[0]->field_field_embed_video as $item) {
        $items++;
      }
      if ($items > 1) {
        $vars['content']['gallery'] = array(
          '#theme' => 'fantorrent_block_wrapper',
          '#data' => theme('show_hide', array('element' => $data, 'height' => 190)),
          '#title' => $gallery->get_title(),
        );
      }
    }
    
    if (isset($vars['node']->field_fantorrent_articles_term[LANGUAGE_NONE][0]['taxonomy_term'])) {
      $vars['content']['article_type_tid'] = array(
        '#value' => $vars['node']->field_fantorrent_articles_term[LANGUAGE_NONE][0]['taxonomy_term']->tid
      );
      $vars['content']['article_type_name'] = array(
        '#value' => $vars['node']->field_fantorrent_articles_term[LANGUAGE_NONE][0]['taxonomy_term']->name,
        '#markup' => t($vars['node']->field_fantorrent_articles_term[LANGUAGE_NONE][0]['taxonomy_term']->name),
      );
    }
    elseif (isset($vars['node']->field_fantorrent_articles_term[LANGUAGE_NONE][0]['tid'])) {
      $vars['content']['article_type_tid'] = array(
        '#value' => $vars['node']->field_fantorrent_articles_term[LANGUAGE_NONE][0]['tid'],
      );
      $term = taxonomy_term_load($vars['content']['article_type_tid']['#value']);
      $vars['content']['article_type_name'] = array(
        '#value' => $term->name,
        '#markup' => t($term->name)
      );
    }

    $vars['content']['recent_articles'] = array(
      '#theme' => 'fantorrent_view',
      '#view' => 'articles',
      '#display' => 'recent',
      '#args' => array($vars['node']->nid),
    );
    fantorrent_view_check($vars['content']['recent_articles']);

    $vars['content']['articles_by_type'] = array(
      '#theme' => 'fantorrent_view',
      '#view' => 'articles',
      '#display' => 'recent_type',
      '#args' => array($vars['content']['article_type_name']['#value'], $vars['node']->nid),
    );
    fantorrent_view_check($vars['content']['articles_by_type']);

    $vars['content']['recent_blogs'] = array(
      '#theme' => 'fantorrent_view',
      '#view' => 'articles',
      '#display' => 'blog_author',
      '#args' => array($vars['node']->uid),
    );
    fantorrent_view_check($vars['content']['recent_blogs']);

     // Songs associated with the article.
    if (!empty($vars['node']->field_song_ref)) {
      $vars['content']['article_songs'] = array(
        '#theme' => 'fantorrent_view',
        '#view' => 'articles',
        '#display' => 'article_songs',
        '#args' => array($vars['node']->nid),
      );
      fantorrent_view_check($vars['content']['article_songs']);
    }
    
    /**
     * Create a render array of related nodes and albums etc.
     * Cant just do this in a views display because of limitations
     * of views/entity views integration and the fact that we use
     * 2 different node relationship fields.
     * Have to construct from 2 different displays.
     */
    // Nodes associated with the article.
    $nodes = views_get_view('articles');
    $nodes->preview('article_nodes', array($vars['node']->nid));
    // Albums associated with the article
    $albums = views_get_view('articles');
    $albums->preview('article_albums', array($vars['node']->nid));
    $related_nodes = array_merge($nodes->result, $albums->result);
    $data = array();
    foreach($related_nodes as $related_node) {
      $data[$related_node->nid] = node_view(node_load($related_node->nid), 'views_article_related_nodes');
      $data[$related_node->nid]['#prefix'] = '<div class="teaser-list-row reactive">';
      $data[$related_node->nid]['#suffix'] = '</div>';
    }
 if(!empty($data)) {
     $vars['content']['related_nodes'] = array(
      '#theme' => 'fantorrent_block_wrapper',
      '#title' => $nodes->get_title(),
      '#data' => $data,
      '#prefix' => '<div class="teaser-list">',
      '#suffix' => '</div>',
    );
 }
  break;
  
case 'teaser':

  //if there is an article video, use that
  if (!empty($vars['field_embed_video'])) {
    $vars['content']['image'] = $vars['content']['field_embed_video'][0];
  }
  elseif (!empty($vars['field_images_1'])) { //else if there's a image, use that
    $vars['content']['image'] = $vars['content']['field_images_1'][0];
  }
  elseif (!empty($vars['field_albums_ref'])) { //if there's a referenced album image, use that
    $album = node_view(node_load($vars['field_albums_ref'][LANGUAGE_NONE][0]['nid']), 'article_teaser');
    if (!empty($album['field_images_1'])) {
      $vars['content']['image'] = array(
        '#theme' => 'link',
        '#path' => 'node/' . $vars['node']->nid,
        '#text' => render($album['field_images_1'][0]),
        '#options' => array(
          'html' => TRUE,
          'attributes' => array(),
        ),
      );
    }
  }
  else { //use the author's profile image
    $teaser_author_image = $vars['content']['author_image'];
    $teaser_author_image['#image_style'] = 'articles_teaser_square_switcher';
    $teaser_author_image['#theme'] = 'image_formatter';
    $teaser_author_image['#path'] = array(
      'path' => 'node/' . $vars['node']->nid,
      'options' => array(
        'entity_type' => 'node',
        'entity' => $vars['node'],
       )
     );
    unset($teaser_author_image['#display_settings'], $teaser_author_image['#node'], $teaser_author_image['#field']);
    $vars['content']['image'] = array(
      '#theme' => 'link',
      '#path' => 'node/' . $vars['node']->nid,
      '#text' => render($teaser_author_image),
      '#options' => array(
        'html' => TRUE,
        'attributes' => array(),
      ),
    );
  }
  // Link to node as title.
  $vars['content']['title_link'] = array(
    '#theme' => 'link',
    '#path' => 'node/' . $vars['node']->nid,
    '#text' => filter_xss($vars['node']->title),
    '#options' => array(
      'html' => FALSE,
      'attributes' => array(
        'class' => array(
          'clickable-select',
        ),
      ),
    ),
  );
    break;
  case 'updates_carousel':
    $vars['content']['more_link'] = array(
      '#theme' => 'link',
      '#path' => 'node/' . $vars['node']->nid,
      '#text' => t('View'),
      '#options' => array(
        'html' => FALSE,
        'attributes' => array(
          'class' => array('homepage-updates-link', 'clickable-select'),
          'title' => $vars['title'],
        ),
      ),
    );
    break;
}
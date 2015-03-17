<?php
/**
 * @file
 * Preprocess code for the album content type.
 */

switch($vars['view_mode']) {

  case 'full':
    // Inject a class into the purchase options to represent
    // the # of items available to purchase.
    $vars['content']['purchase_options_class'] = array(
      '#markup' => 'purchase-options',
    );
    // Album entity pager.
    $vars['content']['album_pager'] = array(
      '#theme' => 'fantorrent_embed_block',
      '#module' => 'entity_pager',  
      '#delta' => 'entity_pager_2',
    );
    if(!empty($vars['node']->field_product_reference[LANGUAGE_NONE])) {
      // Buy Link
      $vars['content']['buy_link'] = array(
        '#theme' => 'link',
        '#path' => current_path(),
        '#text' => t('Buy Now'),
        '#options' => array(
          'html' => TRUE,
          'attributes' => array(
            'title' => t('Goto the purchase options for this album'),
            'class' => array(
              'button',
              'album-buy-link',
            ),
          ),
          'fragment' => 'purchase-options',
        ),
      );
    }

    //songlist view
    $vars['content']['song_list_view'] = array(
      '#theme' => 'fantorrent_view',
      '#view' => 'discography',  
      '#display' => 'album_tracks_media',
      '#args' => array($vars['node']->nid, $vars['node']->nid),
      '#post_render' => array('fantorrent_postrender'), 
    );
    fantorrent_view_check($vars['content']['song_list_view']);

    //album reviews view
    $vars['content']['album_reviews_view'] = array(
      '#theme' => 'fantorrent_view',
      '#view' => 'discography',
      '#display' => 'album_reviews',  
      '#args' => array($vars['node']->nid),
    );
    fantorrent_view_check($vars['content']['album_reviews_view']);
   
    //Discography grid view
    $vars['content']['discography_view'] = array(
      '#theme' => 'fantorrent_view',
      '#view' => 'discography',
      '#display' => 'grid',
    );
    fantorrent_view_check($vars['content']['discography_view']);
      
    //Discography grid view
    $vars['content']['store_view'] = array(
      '#theme' => 'fantorrent_view',
      '#view' => 'related_products',
      '#display' => 'related_products',
      '#args' => array(
        $vars['node']->nid,  
      ),
    );  
    fantorrent_view_check($vars['content']['store_view']);

    // Album videos
    // Combine results from the 2 views displays (one for each reference field).
    $album_videos = views_get_view('discography');
    $album_videos->set_display('album_videos');
    $album_videos->preview('album_videos', array($vars['nid']));
    $album_vid_song = views_get_view('discography');
    $album_vid_song->set_display('album_vid_song');
    $album_vid_song->preview('album_vid_song', array($vars['nid']));
    $results = array_merge($album_videos->result, $album_vid_song->result);
    // Extract out the embed video render arrays and wrap with needed wrappers.
    $data = array();
    foreach($results as $key => $result) {
      $result_node = node_view(node_load($result->nid), 'views-article-video-only');
      $elements = (isset($result_node['field_embed_video'])) ? $result_node['field_embed_video'] : array();
      $children = element_children($elements);
      foreach($children as $element) {
        $data[$result->nid . '_' . $element] = $result_node['field_embed_video'][$element];
        $data[$result->nid . '_' . $element]['#prefix'] = '<div class="teaser-grid-row reactive">';
        $data[$result->nid . '_' . $element]['#suffix'] = '</div>';
      }
    }

    // Wrap video arrays in a block wrapper, only
    // if there are results.
    if (!empty($data)) {
      $vars['content']['album_videos'] = array(
        '#theme' => 'fantorrent_block_wrapper',
        '#title' => $album_videos->get_title(),
        '#data' => $data,    
        '#prefix' => '<div class="teaser-grid">',
        '#suffix' => '</div>',
      );
    }

  break;
         
  case 'views_store_landing':
    $vars['content']['image_link'] = array(
      '#theme' => 'link',
      '#path' => 'node/' . $vars['node']->nid,
      '#text' => render($vars['content']['field_images_1'][0]),
      '#options' => array(
        'html' => TRUE,
        'query' => array(
          'vid'=>'store_landing',
          'did'=>'popup',
    	  'nid'=>$vars['node']->nid,
    	  'position'=>'top',
    	  'dom' => 'static',
    	  'throbber_pos' => 'none',
          'destination' => 'store',
        ),
        'attributes' => array(
          'class'=>array('vpop-click-ajax', 'ajax'),
        ),
      ),
      '#prefix' => '<div class="omega-narrow-up">',
      '#suffix' => '</div>',
    );
    $vars['content']['image_node_link'] = array(
      '#theme' => 'link',
      '#path' => 'node/' . $vars['node']->nid,
      '#text' => render($vars['content']['field_images_1'][0]),
      '#options' => array(
        'html' => TRUE,
        'attributes' => array(
          'title' => t('View this Product'),
        ),
      ),
      '#prefix' => '<div class="omega-mobile-only">',
      '#suffix' => '</div>',
    );

    break;
  case 'views_store_popup':
    
    $vars['content']['comment_count'] = array(
      '#prefix' => '<div class="comment-count">Comments <span class="comment-count-number">',
      '#markup' => $vars['comment_count'],
      '#suffix' => '</span></div>',
    );

    $vars['content']['more_link'] = array(
      '#theme' => 'link',
      '#path' => 'node/' . $vars['node']->nid,
      '#text' => t('More Info'),
      '#options' => array(
      	'html' => FALSE,
        'attributes' => array(
          'class' => array('button'),
          'title' => t('View all information about this album'),
        ),
      ),
    );
    break;
  case 'teaser':
    if(!empty($vars['node']->field_product_reference[LANGUAGE_NONE])) {
      // Buy Link
      $vars['content']['buy_link'] = array(
        '#theme' => 'link',
        '#path' => 'node/' . $vars['node']->nid,
        '#text' => t('Buy Now'),
        '#options' => array(
          'html' => TRUE,
          'attributes' => array(
            'title' => t('Goto the purchase options for this album'),
            'class' => array(
              'button',
              'album-buy-link',
            ),
          ),
          'fragment' => 'purchase-options',
        ),
      );
    }

    //songlist view
    $vars['content']['song_list_view'] = array(
      '#theme' => 'fantorrent_view',
      '#view' => 'discography',
      '#display' => 'album_tracks',  
      '#args' => array($vars['node']->nid, $vars['node']->nid),
    );
    fantorrent_view_check($vars['content']['song_list_view']);
          
    $vars['content']['more_info_link'] = array(
      '#theme' => 'link',  
      '#text' => t('More Info'),
      '#path' => 'node/' . $vars['node']->nid,
      '#options' => array(
        'html' => FALSE,
        'attributes' => array(),
      ),
    );
    
    if (isset($vars['content']['field_date_hour'])) {
      $vars['content']['release_date'] = array(
        '#theme' => 'fantorrent_date',  
        '#label' => t('Release date'),
        '#format' => 'F j, Y',
        '#date_string' => $vars['content']['field_date_hour']['#items'][0]['value'],
      );
    }
 
    break;
  case 'views_article_related_nodes':
    $vars['content']['title_link'] = array(
      '#theme' => 'link',
      '#text' => t($vars['node']->title),
      '#path' => 'node/' . $vars['node']->nid,
      '#options' => array(
        'html' => FALSE,
        'attributes' => array(
          'title' => 'View this album',
          'class' => 'related-album-title-link',
        ),
      ),
    );
    $buy = (!empty($vars['node']->field_product_reference)) ? array(
      '#theme' => 'link',
      '#text' => t('buy'),
      '#path' => 'node/' . $vars['node']->nid,
      '#options' => array(
        'html' => FALSE,
        'attributes' => array (
          'class' => array("related-node-{$vars['node']->type}-buy-link"),
        ),
        'fragment' => 'purchase-options',
      ),
    ) : null;
    $view = array(
      '#theme' => 'link',
      '#text' => t('more info'),
      '#path' => 'node/' . $vars['node']->nid,
      '#options' => array(
        'html' => FALSE,
        'attributes' => array (
          'class' => array("related-node-{$vars['node']->type}-view-link"),
        ),
      ),
    );
    $vars['content']['related_node_links'] = array(
      'view' => $view,
      'buy' => $buy,
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

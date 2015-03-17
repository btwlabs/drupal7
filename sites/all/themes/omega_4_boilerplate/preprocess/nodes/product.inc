<?php
/**
 * @file
 * Preprocess code for the product content type.
 */

// For some reason product status field is rendered differently in a view compared to field api.
$vars['content']['product_status'] = (isset($vars['content']['field_product_status'][0]['#title'])) ?
  array(
    '#markup' => $vars['content']['field_product_status'][0]['#title'],
  ) :
  array(
    '#markup' => (isset($vars['content']['field_product_status'][0]['#markup'])) ? $vars['content']['field_product_status'][0]['#markup'] : '',
  );

switch($vars['view_mode']) {
  case 'full':   
    // Related products view.
    $vars['content']['related_products'] = array(
      '#theme' => 'fantorrent_view',
      '#view' => 'store_landing',
      '#display' => 'related_products',
      '#args' => array($vars['node']->nid),
    );

    // Top downloaded shows list.
    $vars['content']['dl_shows_list'] = array(
      '#theme' => 'fantorrent_view',
      '#view' => 'store_landing',
      '#display' => 'dl_shows_list',
      '#args' => array($vars['node']->nid),
    );
    fantorrent_view_check($vars['content']['dl_shows_list']);
    
    // Departments 'menu' view.
    $vars['content']['departments'] = array(
      '#theme' => 'fantorrent_view',
      '#view' => 'store_departments',
      '#display' => 'block',
      '#args' => array($vars['node']->nid),
    );
    fantorrent_view_check($vars['content']['departments']);

    if (isset($vars['content']['field_product_department'])) {
      $product_tags = array();
      foreach($vars['content']['field_product_department']['#items'] as $key => $item) {
        $product_tags[] = array(
          '#theme' => 'link',
          '#text' => t($item['taxonomy_term']->name),
          '#path' => variable_get('fantorrent_store_landing_path', 'store'),
          '#options' => array(
            'html' => FALSE,
            'attributes' => array(
            	'class'=>array('product-tag-item')
            ),
            'query' => array(
            	'department_id'=>$item['tid'],
            ),
          ),
        );
      }
    }
    if (!empty($product_tags)) {
      $vars['content']['product_tags'] = array(
        'items' => $product_tags,
      );
    }

    // Add node pager.
    $vars['content']['product_pager'] = array(
      '#theme' => 'fantorrent_embed_block',
      '#module' => 'entity_pager',
      '#delta' => 'entity_pager_3',
    );
   
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

    // For some reason product status field is rendered differently in a view compared to field api.
    $vars['product_status'] = (isset($vars['content']['field_product_status'][0]['#title'])) ? $vars['content']['field_product_status'][0]['#title'] :
    ((isset($vars['content']['field_product_status'][0]['#markup'])) ? $vars['content']['field_product_status'][0]['#markup'] : '');

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
          'title' => t('View all information about this product'),
        ),
      ),
    );
    break;

  case 'views_article_related_nodes':
    $buy = (!empty($vars['node']->field_product_reference)) ? array(
      '#theme' => 'link',
      '#text' => t('buy'),
      '#path' => 'node/' . $vars['node']->nid,
      '#options' => array(
        'html' => FALSE,
        'attributes' => array (
          'class' => array("related-node-{$vars['node']->type}-buy-link"),
        ),
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
    $vars['content']['title_link'] = array(
      '#theme' => 'link',
      '#text' => t($vars['node']->title),
      '#path' => 'node/' . $vars['node']->nid,
      '#options' => array(
        'html' => FALSE,
        'attributes' => array(
          'title' => 'View this product',
          'class' => array('related-product-title-link'),
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
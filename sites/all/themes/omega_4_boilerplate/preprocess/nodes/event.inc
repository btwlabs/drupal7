<?php
/**
 * @file
 * Preprocess code for the event content type.
 */

$tours = fantorrent_events_support_get_event_groupings($vars['node']);
if (isset($tours['tids'])) {
  $tours = array_keys($tours['tids']);
}
  
//get tour name if exists
if (isset($tours[0])) : $vars['content']['tour'] = array(
	'#markup' => $tours[0]
); endif;

// Location related stuff.
if (isset($vars['content']['field_location_ref']['#items'])) {

  //formatted location vars
  
  $event_location = node_load($vars['content']['field_location_ref']['#items'][0]['nid']);
  $event_location_array = node_view($event_location);
  if (isset($event_location->field_address[LANGUAGE_NONE][0])) {
    $vars['content']['location_address'] = array(
      '#theme' => 'fantorrent_address',
      '#addressfield' => $event_location->field_address[LANGUAGE_NONE][0],
      '#format' => 'city, state country(non-us)',
    );
  }
  
  $vars['content']['location_title'] = array(
    '#markup' => $event_location->title,
  );
  
  $vars['content']['full_location_address'] = $event_location_array['field_address'];
  
  //Check to see if field_links_1 is set.  
  
  if(isset($event_location_array['field_links_1'])) {
    $vars['content']['location_venue_link'] = $event_location_array['field_links_1'];
  };
  
  //Check to see if field_links_2 is set. 

  if(isset($event_location_array['field_links_2'])) {
   $vars['content']['location_map_link'] = $event_location_array['field_links_2'];
  };
  
}

if ($vars['view_mode'] == 'print') {
  $location_name = $vars['node']->field_location_ref[LANGUAGE_NONE][0]['node']->title . '<br />' ;
  $address_field_array = $vars['node']->field_location_ref[LANGUAGE_NONE][0]['node']->field_address[LANGUAGE_NONE][0];
  $vars['location'] = $location_name . $address_field_array['thoroughfare'] . '<br />' . $address_field_array['locality'] . ', ' . $address_field_array['administrative_area'] . ' ' . $address_field_array['postal_code'];
}

//**********************
// Legacy specific vars
//**********************
$legacy = (isset($vars['field_event_legacy_on'][0])) ? $vars['field_event_legacy_on'][0]['value'] : $vars['field_event_legacy_on'][LANGUAGE_NONE][0]['value'];
if ($legacy == 1) {
  
  switch($vars['view_mode']) {

    case 'full':

      // Inject a class into the purchase options to represent
      // the # of items available to purchase.
      $vars['content']['purchase_options_class'] = array(
        '#markup' => 'purchase-options',
      );

    if(!empty($vars['node']->field_legacy_product_reference[LANGUAGE_NONE])) {
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
                'legacy-buy-link',
              ),
            ),
            'fragment' => 'Buy',
          ),
        );
      }
 
      //user legacy full template
      $vars['theme_hook_suggestions'][] = 'node__event_legacy__full';

      //node pager block
      if (module_exists('entity_pager')) {
        $vars['content']['legacy_pager'] = array(
          '#theme' => 'fantorrent_embed_block',  
          '#module' => 'entity_pager',
          '#delta' => 'entity_pager_5',
        );
      }
    
      //community-feeds block
      if (module_exists('fantorrent_community_support')) {
        $vars['content']['community_feeds'] = array(
          '#theme' => 'fantorrent_embed_block',
          '#module' => 'quicktabs',
          '#delta' => 'community_feeds',
        );
	
	    $vars['content']['i_was_there'] = drupal_get_form('i_was_there_form');

      //group members view
      $vars['content']['group_members'] = array(
        '#theme' => 'fantorrent_view',
        '#view' => 'i_was_there',
        '#display' => 'i_was_there',
      );
      fantorrent_view_check($vars['content']['group_members']);

        //community log in block
        $vars['community_login_block'] = (user_is_anonymous()) ? _ft_embed_block('fantorrent_community_support', 'community_anon_login_block') : null;
      }

      //events support stuff
      if (module_exists('fantorrent_events_support')) {
        //tour page link
        $vars['content']['tour_page_link'] = array(
          '#theme' => 'link',
          '#text' => t('All Legacy Tour Dates'),
          '#path' => drupal_get_path_alias('legacy'),
          '#options' => array(
          	'attributes' => array(
          	  'title'=>t('See all past tour dates'), 
              'class'=>array('legacy-all-tour-dates-link back-to-river-link')
            ), 
            'html'=>true
          ),
        );
      
        //concert photo view
        $vars['content']['concert_photo'] = array(
          '#theme' => 'fantorrent_view',
          '#view' => 'event_assets',
          '#display' => 'concert_photo',
          '#args' => array($vars['node']->nid),
        );
        fantorrent_view_check($vars['content']['concert_photo']);

        //official photos & videos view
        $vars['content']['official_pv'] = array(
          '#theme' => 'fantorrent_view',
          '#view' => 'event_assets',
          '#display' => 'official',
          '#args' => array($vars['node']->nid),
        );
        fantorrent_view_check($vars['content']['official_pv']);
        $vars['content']['official_photos_videos'] = array(
          '#theme' => 'show_hide',
          '#element' => render($vars['content']['official_pv']),
          '#height' => 229,
        );
        //meetgreet photos
        $vars['content']['meetgreet_p'] = array(
          '#theme' => 'fantorrent_view',
          '#view' => 'event_assets',
          '#display' => 'meetgreet',
          '#args' => array($vars['node']->nid),
        );
        fantorrent_view_check($vars['content']['meetgreet_p']);
        $vars['content']['meetgreet_photos'] = array(
          '#theme' => 'show_hide',
          '#element' => render($vars['content']['meetgreet_p']),
          '#height' => 229,
        );
        
        //related products
        //get the tour for this event
        $tour = NULL;
        if (isset($tours[0])) {
          $tour = $tours[0];
        }
        $vars['content']['related_products'] = array(
          '#theme' => 'fantorrent_view',
          '#view' => 'event_assets',
          '#display' => 'related_products',
          '#args' => array($tour),
        );
        fantorrent_view_check($vars['content']['related_products']);
    
        //count posts attached to current group
	$post_count = fantorrent_community_count_legacy_posts($vars['node']->nid);
	if($post_count == 1) {
	  $post_text = 'Post';
	} else {
	  $post_text = 'Posts';
	}
        $vars['content']['comments_count_link'] = array(
          '#theme' => 'link',
          '#text' => t($post_count .' '. $post_text),
          '#path' => current_path(),
          '#options' => array(
            'html' => FALSE,
            'attributes' => array(
              'title' => t('View posts on this event'),
            ),
            'fragment' => 'node-posts-container',
          ),
        );
        
        //list of song node reference links for this legacy
        $vars['content']['song_list'] = array(
          '#theme' => 'fantorrent_view',
          '#view' => 'event_assets',
          '#display' => 'songlist',
          '#args' => array($vars['node']->nid)
        );
        fantorrent_view_check($vars['content']['song_list']);
      }
      
      
      //event date icon
      if (isset($vars['content']['field_date_hour']['#items'][0])) {
        $vars['content']['eventdateicon'] = array(
          '#theme' => 'fantorrent_dateblock',
          '#date_string' => $vars['content']['field_date_hour']['#items'][0]['value'],
        );
      }
    
      //links******
      //commerce stuff, the add to cart form
      //is as a vpop fade popup..specified in the
      //legacy tpl
      /*if (module_exists('fantorrent_events_legacy_download')) {
        $vars['content']['buy_show_link'] = array(
          '#theme' => 'link',
          '#text' => t('Buy Show'),
          '#path' => current_path(),
          '#options' => array(
            'html' => FALSE,
            'attributes' => array(
              'class' => array('vpop-click-fade', 'ajax'),
            ),
            'query' => array('fade_id'=>'legacy-buy-show-form', 'position'=>'left'),
          ),
        );
      
        // Buy box close link
        $vars['content']['buy_show_close_link'] = array(
          '#theme' => 'link',
          '#text' => t('Close'),
          '#path' => current_path(),
          '#options' => array(
            'html' => FALSE,
            'attributes' => array(
              'class' => array('views-popup-close', 'ajax'),
            ),
          ),
        );    
      }*/

      //player stuff
      if (module_exists('sm_player')) {
        //list of song stub sounds for sm player to utilize as a playlist
        $vars['content']['track_list'] = array(
          '#theme' => 'fantorrent_view',
          '#view' => 'event_assets',
          '#display' => 'playlist',
          '#args' => array($vars['node']->nid),
        );
        fantorrent_view_check($vars['content']['track_list']);

        $vars['content']['sm_player'] = array(
          '#theme' => 'fantorrent_embed_block',
          '#module' => 'sm_player',
          '#delta' => 'sm_player_1',
        );
      }
  
    break;  
      
    case 'views_article_related_nodes':

      // Use either the official image or default image.
      if (isset ($vars['content']['field_images_2'])) {
        $image = render($vars['content']['field_images_2'][0]);
      }
      else {
        $field_info = field_info_instance('node', 'field_images_2', 'event');
        $image = theme('ft_styled_image', array('fid'=>$field_info['settings']['default_image'], 'style'=>'article_teaser_square'));
      }
      $vars['content']['event_image'] = array(
        '#theme' => 'link',
        '#text' => $image,
        '#path' => 'node/' . $vars['node']->nid,
        '#options' => array(
          'html' => TRUE,
          'attributes' => array(
          ),
        ),
      );

      $buy = (!empty($vars['node']->field_legacy_download_reference)) ? array(
        '#theme' => 'link',
        '#text' => t('download'),
        '#path' => 'node/' . $vars['node']->nid,
        '#options' => array(
          'html' => FALSE,
          'attributes' => array (
            'class' => array("related-node-{$vars['node']->type}-download-link"),
            'title' => t('Download this legacy event'),
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
            'title' => t('View this legacy event'),
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
            'title' => 'View this past event',
            'class' => 'related-event-title-link',
          ),
        ),
      );
      $vars['legacy_on'] = TRUE;
    break;
  } // VIEW MODE SWITCH.
}
else {//*****not legacy
  
  switch($vars['view_mode']) {
    
    case 'full':
      
      //upcoming event related prodcts
      $tour = NULL;
        if (isset($tours[0])) {
          $tour = $tours[0];
        }
        $vars['content']['related_products'] = array(
          '#theme' => 'fantorrent_view',
          '#view' => 'event_assets',
          '#display' => 'related_products',
          '#args' => array($tour),
        );
        fantorrent_view_check($vars['content']['related_products']);
      
      //post form
      $vars['content']['post_form'] = array(
          '#theme' => 'fantorrent_embed_block',
          '#module' => 'fantorrent_community_ct',
          '#delta' => 'community_post_form',
      );

      //set the title as the tid title (tour name)
      if (isset($tours[0])) : $vars['title'] = $tours[0]; endif;
      
      //prepare other dates
      $vars['content']['event_date_time'] = array(
        '#markup' => 'Time: ' . format_date(strtotime($vars['content']['field_date_hour']['#items'][0]['value']), 'time'),
      );

      //add a block of upcoming events for the event node page
      $vars['content']['upcoming'] = array(
        '#theme' => 'fantorrent_view',
        '#view' => 'events',
        '#display' => 'upcoming_long',
      );
      fantorrent_view_check($vars['content']['upcoming']);
      
      if (isset($vars['content']['fb_event_wall'])) {
        $vars['content']['fb_event_wall'] = array(
          '#theme' => 'show_hide',
          '#element' => render($vars['content']['fb_event_wall']),
          '#height' => 200,
        );
      }
	  
	  $vars['content']['back'] = array(
		  '#theme' => 'link',
		  '#text' => t('back to tour page'),
		  '#path' => 'tour',
		  '#options' => array(
		    'html' => FALSE,
		    'attributes' => array(
		      'class' => array('homepage-updates-link', 'clickable-select', 'button'),
		      'title' => 'Back to tour page',
			),
		  ),
		);
      break;
  
    case 'views_article_related_nodes':
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
      );
      $vars['legacy_on'] = FALSE;

      $vars['content']['title_link'] = array(
        '#theme' => 'link',
        '#text' => t($vars['content']['title']),
        '#path' => 'node/' . $vars['node']->nid,
        '#options' => array(
          'html' => FALSE,
          'attributes' => array(
            'title' => 'View this event',
            'class' => array('related-event-title-link'),
          ),
        ),
      );
      break;

    case 'updates_carousel':
      $vars['content']['event_date'] = array(
        '#markup' => date('M d, Y', strtotime($vars['node']->field_date_hour[LANGUAGE_NONE][0]['value'])),
      );
      $vars['content']['venue_name'] = array(
        '#markup' => $event_location->title,
      );
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
}
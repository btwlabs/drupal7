<?php
/**
 * @file
 * Theme preprocess code for page.
 * 
 */

/**
 * Implements hook_alpha_preprocess_page.
 * 
 * @param array $vars
 */
function omega_4_boilerplate_preprocess_page(&$vars) {
  
  //***************************
  // COMMUNITY RELATED CODE
  //***************************
  
  //inject css and js on community grid page
  if (arg(0) == variable_get('fantorrent_community_users_grid_page_url', 'community-users')) {
    drupal_add_css(drupal_get_path('module', 'fantorrent_community_support') . '/css/fantorrent_community_support.css', array('every_page' => false));
    drupal_add_js(drupal_get_path('module', 'fantorrent_community_support') . '/js/fantorrent_community_support.js', array('every_page' => false));
    drupal_add_js(drupal_get_path('module', 'flag') . '/theme/flag.js', array('every_page' => false));
    //load image style to set user grid image width & height in drupal settings
    $style = image_style_load('community_user_list_grid');
    if (!empty($style['effects'])) {
      $ieid = array_keys($style['effects']);
      $effect = image_effect_load($ieid[0], 'community_user_list_grid');
      if (!empty($effect)) {
        drupal_add_js(array('userGridImageWidth' => (int)$effect['data']['width'], 'userGridImageHeight' => (int)$effect['data']['width']), 'setting');
      }
      else {
        drupal_add_js(array('userGridImageWidth' => 60, 'userGridImageHeight' => 60), 'setting');
      }
    }
  }
  
  //if were on a user profile page we should inject the community support js and css
  if ( ((arg(0) == 'user') && (is_numeric(arg(1))) && ((is_null(arg(2))))) || ((arg(0) == 'user') && (user_is_logged_in()))) {
    $settings = array(
        'fantorrentCommunity' => array(
          'idCommunityCommentLimit' => (string) variable_get('fantorrent_community_feed_view_comment_limit', 3),
        ),
    );
    drupal_add_js(drupal_get_path('module', 'fantorrent_community_support') . '/js/fantorrent_community_support.js');
    drupal_add_js($settings, 'setting');
    drupal_add_css(drupal_get_path('module', 'fantorrent_community_support') . '/css/fantorrent_community_support.css');
  }
  
  //Hide the title on Instagram posts
  if(isset($vars['node']) && ($vars['node']->type == 'instagram_post')){
    $vars['title_hidden'] = TRUE;
  }
}  
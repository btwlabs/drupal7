<?php
/**
 * @file
 * Preprocess code for the post content type.
 */

global $user;
$site_name = variable_get('site_name');
/**
 * FB Share link stuff.
 * We need to add the image on as a get param to any fb share link href
 * this way the page gets scraped on like and it will all work.
 */
// Grab the fid for this node if it exists.
$fid = (isset($vars['node']->field_images_1[LANGUAGE_NONE][0]['fid'])) ? $vars['node']->field_images_1[LANGUAGE_NONE][0]['fid'] : 0;
// If there was a fid then create the url attributes array appropriately.
$query = ($fid) ?
  array('absolute' => TRUE, 'query' => array('fb_preview_fid' => $fid, 'fb_preview_title' => urlencode(t("Check out this post on $site_name!")))) :
  array('absolute' => TRUE, 'query' => array('fb_preview_fid' => $fid, 'fb_preview_title' => urlencode(t("Check out this post on $site_name!"))));
$fb_href = url(drupal_get_path_alias('node/' . $vars['nid']), $query);

//back to dashboard link
if (module_exists('fantorrent_user_dashboard') && (user_is_logged_in())) {
  $vars['content']['back_to_community_link'] = array(
    '#theme' => 'link',
    '#text' => t('Back to Community'),
    '#path' => drupal_get_path_alias('community'),
    '#options' => array(
      'html' => FALSE,
      'attributes' => array(
        'title' => t('Go back to the community page'),
        'class' => array('button', 'back-to-community-link'),
      ),
    ),
  );
}

//Share Link
$vars['content']['share_link'] = array(
  '#theme' => 'link',
  '#path' => 'node/' . $vars['node']->nid,
  '#text' => t('Share'),
  '#options' => array(
    'html' => TRUE,
    'attributes' => array(
      'title' => t('Share this post'),
      'class' => array(
        'button',
        'post-share',
      ),
    ),
  )
);

// Like Link
$vars['content']['like_link'] = (user_is_logged_in()) ?
  array(
   '#markup' => flag_create_link('like', $vars['node']->nid),
  ) :
  array(
    '#theme' => 'ft_anon_login_link',
    '#link_text' => t('Like'),
    '#link_title' => t('Like this post'),
  );

// Report link
$vars['content']['report_link'] = (user_is_logged_in()) ?
  array(
   '#markup' => flag_create_link('report', $vars['node']->nid),
  ) :
  array(
    '#theme' => 'ft_anon_login_link',
    '#link_text' => t('Report'),
    '#link_title' => t('Report this post as offensive'),
  );

// Comment Link
$vars['content']['comment_link'] = array(
  '#theme' => 'ft_node_comment_link',
  '#nid' => $vars['node']->nid,
);

// Comment Form
$vars['content']['comment_form'] = array(
  '#theme' => 'ft_node_comment_form',
  '#nid' => $vars['node']->nid,
);

// Post comments
$vars['content']['post_comments'] = array(
  '#theme' => 'fantorrent_view',
  '#view' => 'node_comments',
  '#display' => 'block',
  '#args' => array($vars['node']->nid),
);
fantorrent_view_check($vars['content']['post_comments']);

// Comments expand link
$vars['content']['comments_expand_link'] = array(
  '#theme' => 'link',
  '#text' => t('Show all comments...'),
  '#path' => drupal_get_path_alias('community'),
  '#options' => array(
    'attributes' => array(
      'class' => array ('community-post-comments-toggle'), 
      'id' => 'community-post-nid-' . $vars['node']->nid,
    ),
    'html' => TRUE,
    'fragment' =>'expand',
  ),
);

if ($vars['node']->field_boolean_2['und'][0]['value'] && ($vars['uid'] == $user->uid)) {
  $vars['content']['share_links_post'] = array(
    '#theme' => 'share_links',
    '#link_href' => $fb_href,
    '#nid' => $vars['node']->nid,
    '#count' => FALSE,
    '#fb_scrape' => TRUE,
  );
}

//dsm($vars['node']->field_post_anywhere_uri, 'post_uri');
//Post Anywhere URI
$post_anywhere_uri = $vars['node']->field_post_anywhere_uri;

if(!empty($post_anywhere_uri)){
  $post_link_text = $vars['node']->field_post_anywhere_uri['und'][0]['title'];
  $post_link_uri = $vars['node']->field_post_anywhere_uri['und'][0]['url'];
  $vars['content']['post_anywhere_link'] = array(
    '#theme' => 'link',
    '#text' => t($post_link_text),
    '#path' => url(drupal_get_path_alias($post_link_uri), array('absolute' => TRUE)),
    '#options' => array(
      'attributes' => array(
        'class' => array ('community-post-anywhere-link'), 
        'id' => 'community-post-nid-' . $vars['node']->nid,
      ),
      'html' => TRUE,
    ),
  );
}

//view mode specific vars
switch ($vars['view_mode']) {

  case 'views_dashboard_activity' :
    //number of new comments
    $vars['content']['new_comments'] = array(
      '#theme' => 'fantorrent_view',
      '#view' => 'dash_nodes',
      '#display' => 'new_commnets',
      '#args' => array($vars['node']->nid),
    );

    //number of new likes
    $vars['content']['new_likes'] = array(
      '#theme' => 'fantorrent_view',
      '#view' => 'dash_nodes',
      '#display' => 'new_likes',
      '#args' => array($vars['node']->nid),
    );

    break;
    
  case 'views_dashboard_groups' :
    //formatted image as clickable link
    if (isset($vars['content']['field_images_1'][0])) {
      $vars['content']['image'] = array(
        '#theme' => 'link',
        '#text'=> render($vars['content']['field_images_1'][0]),
        '#path' => 'node/' . $vars['node']->nid,
        '#options' => array(
          'html' => true, 
          'attributes' => array(
            'class' => array('clickable-select'),
            'title' => t('View posts from this group'),
          ), 
          'fragment' => 'comments'
        ),
      );
    }

    //number of new updates
    $vars['content']['updates'] = array(
      '#theme' => 'fantorrent_view',
      '#view' => 'dash_nodes',
      '#display' => 'num_updates',
      '#args' => array($vars['node']->nid),
    );

    break;

  //*******Full Mode
  case 'full' :
    $vars['content']['share_links_nocount'] = array(
      '#theme' => 'share_links',
      '#nid' => $vars['node']->nid,
      '#count' => FALSE,
      '#link_href' => $fb_href,
      '#fb_scrape' => TRUE,
    );
    break;
  case 'updates_carousel':
    // More link.
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
    // Posted Date.    
    $vars['content']['posted_date_ago'] = array(
      '#theme' => 'fantorrent_date',
      '#date_string' => $vars['created'],
      '#format' => 'ago',
      '#label' => t('Posted'),
    );
    break;
}

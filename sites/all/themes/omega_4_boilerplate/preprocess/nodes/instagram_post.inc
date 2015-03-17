<?php
/**
 * @file
 * Preprocess code for the instagram post content type.
 */

//set session path variable
$_SESSION['current_path'] = current_path();

//back to dashboard link
if (module_exists('fantorrent_user_dashboard') && (user_is_logged_in())) {
  $vars['content']['dashboard_link'] = array(
    '#theme' => 'link',
    '#text' => t('Back to Dashboard'),
    '#path' => drupal_get_path_alias('user-dashboard'),
    '#options' => array(
      'html' => FALSE,
      'attributes' => array(
        'title' => t('View your dashboard'),
        'class' => array('button', 'dashboard-link'),
      ),
    ),
  );
}

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

// Create inline list of links from group audience...avoid lot's of divs.
$links = NULL;
if (isset($vars['content']['group_audience']['#items'])) {
  foreach($vars['content']['group_audience']['#items'] as $key => $field) {
    $links .= '<span class="group-link">' . l(t($vars['content']['group_audience'][$key]['#title']), $vars['content']['group_audience'][$key]['#href']) . '</span>';
    $links .= ($key == (count($vars['content']['group_audience']['#items']) - 2) ? ' & ' : ((($key + 1) < count($vars['content']['group_audience']['#items'])) ? ', ' : ''));
  }
}
$vars['content']['group_links'] = array(
  '#markup' => $links,
);

// set share links for posts that user elected to share
global $user;
if ($vars['node']->field_boolean_2[LANGUAGE_NONE][0]['value'] == true && ($vars['uid'] == $user->uid)) {
  $vars['content']['share_links_post'] = array(
    '#theme' => 'share_links',
    '#path' => url(drupal_get_path_alias('node/' . $vars['nid']), array('absolute' => TRUE)),
    '#nid' => $vars['node']->nid,
    '#count' => FALSE,
    '#email' => FALSE,
    '#print' => FALSE,
    '#count' => FALSE,
  );
}

//Display Instagram author and link to Instagram feed.
$author = $vars['field_instagram_author'][0]['safe_value'];
$vars['content']['instagram_author'] = array(
  '#theme' => 'link',
  '#text' => $author,
  '#path' => 'http://instagram.com/' . $author,
  '#options' => array(
    'html' => TRUE,
    'attributes' => array(
      'title' => t('View user\'s Instagram feed.'),
      'target' => 'blank',
    ),
  ),
);

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
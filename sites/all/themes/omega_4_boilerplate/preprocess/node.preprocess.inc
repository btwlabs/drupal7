<?php
/**
 * @file
 * Theme preprocess code for nodes.
 */

/**
 * Implements hook_alpha_preprocess_node.
 * 
 * @param array $vars
 */
function omega_4_boilerplate_preprocess_node(&$vars) {

  // Include the base theme.inc file in case it is not loaded (eg views).
  module_load_include('inc', 'fantorrent_base', 'theme/theme');

  $preprocess_dir = drupal_get_path('theme', 'omega_4_boilerplate') . '/preprocess';
  $nodes_dir = $preprocess_dir . '/nodes';
  
  $node = $vars['node'];
  
  // All node types
  // Any type
  global $user;
  if (!($user->uid == $vars['node']->uid)) {
    $vars['content']['user_contact_links'] = array(
      '#theme' => 'fantorrent_user_contact_links',
      '#uid' => $vars['node']->uid,
    );
  }
  
  // Custom node date formatting
  $vars['date_day'] = format_date($node->created, 'custom', 'j');
  $vars['date_month'] = format_date($node->created, 'custom', 'M');
  $vars['date_year'] = format_date($node->created, 'custom', 'Y');
  
  // Add theme hook suggestions for nodes based on view mode.
  $vars['theme_hook_suggestions'][] = 'node__' . $vars['type'] . '__' . $vars['view_mode'];
  
  //tag the node as viewed, if it's not full mode and nid exists ***MOVING TO BASE MODULE 12/30/2012
  /*$modes = module_invoke_all('history_exclude_modes');
  if ((!(in_array($vars['view_mode'], $modes))) && (isset($vars['node']->nid))) {
    node_tag_new($vars['node']);
  }*/
  
  // Grab node author and profile variables, including user image/default image.
  $vars['author'] = user_load($vars['node']->uid);
  if (module_exists('id_profile')) {
    $vars['author_profile'] = profile2_load_by_user($vars['author'], 'main');
    if (is_object($vars['author_profile'])) {
      $vars['author_profile_array'] = $vars['author_profile']->buildContent($vars['view_mode']);
    }
    if (isset($vars['author_profile_array']['field_images_1'][0])) {  
      $vars['content']['author_image'] = $vars['author_profile_array']['field_images_1'][0];
    }
    else{ //show default image
      $field_info = field_info_instance('profile2', 'field_images_1', 'main');
      $vars['content']['author_image'] = array(
        '#theme' => 'ft_styled_image',
        '#fid' => $field_info['settings']['default_image'],
        '#style' => 'user_profile_icon_post',
      );
    }

    // Get display name.
    if (!empty($vars['author_profile_array']['field_text_4'][0]['#markup'])) {
      $author = $vars['author_profile_array']['field_text_4'][0]['#markup'];
    }
    else {
      $author = $vars['name'];
    }
    $vars['content']['author_display_name'] = array(
      '#theme' => 'link',
      '#text' => $author,
      '#path' => (drupal_get_path_alias('user/' . $vars['author']->uid)),
      '#options' => array(
        'html' => TRUE,
        'attributes' => array(
          'title' => t('View user\'s profile.'),
        ),
      ),
    );
  }

  // Create share links for full view modes and any nodes.
 
    $vars['content']['share_links_horizontal'] = array(
      '#theme' => 'share_links',
      '#path' => url(drupal_get_path_alias('node/' . $vars['nid']), 
        array('absolute' => TRUE)),
      '#nid' => $vars['node']->nid,
      '#direction' => 'horizontal',
    );
  
  
    $vars['content']['share_links_vertical'] = array(
      '#theme' => 'share_links',
      '#path' => url(drupal_get_path_alias('node/' . $vars['nid']), 
        array('absolute' => TRUE)),
      '#nid' => $vars['node']->nid,
      '#direction' => 'vertical',
    );
  
  
    $vars['content']['share_links_nocount'] = array(
      '#theme' => 'share_links',
      '#path' => url(drupal_get_path_alias('node/' . $vars['nid']), 
        array('absolute' => TRUE)),
      '#nid' => $vars['node']->nid,
      '#count' => FALSE,
    );
  

  // Get # of likes.    
  $flag=flag_get_flag('like');
  $like_count = $flag->get_count($vars['node']->nid);
  $vars['content']['like_count'] = ($like_count > 0) ?
    array(
      '#theme' => 'link',
      '#text' => check_plain($like_count),
      '#path' => 'node/' . $node->nid,
      '#options' => array(
        'html' => false,
        'attributes' => array(
          'title' => t('See who likes this post'),
          'class' => array('view-likes-link'),
        ),
      ),
    ) :
    array (
      '#markup' => check_plain($like_count),
    );

  // Add delete link if user has access.
  if (node_access('delete', $vars['node'])) {
    $vars['content']['delete_link'] = array(
      '#theme' => 'link',
      '#text' => t('delete'),
      '#path' => 'node/' . $vars['node']->nid . '/delete',
      '#options' => array(
        'html' => FALSE,
        'attributes' => array(
          'title' => t('Delete this post'),
          'class' => array('community-post-delete-post-link'),
        ),
        'query' => array(
          drupal_get_destination()
        ),
      ),
    );
  }

  // Add Edit Link.
  if (node_access('update', $vars['node'])) {
    $vars['content']['edit_link'] = array(
      '#theme' => 'link',
      '#text' => t('edit'),
      '#path' => 'node/' . $vars['node']->nid . '/edit',
      '#options' => array(
        'html' => FALSE,
        'attributes' => array(
          'title' => t('Edit this post'),
          'class' => array('admin-link', 'edit-post-link'),
        ),
        'query' => array(
          drupal_get_destination()
        ),
      ),
    );
  }

  // Add post date in ..ago format.
  $vars['content']['posted_date_ago'] = array(
    '#theme' => 'fantorrent_date',
    '#date_string' => $vars['node']->created,
    '#format' => 'ago',
  );

  // Add a default message for anon users if there are no comments -- AND comments are not closed.
  if ((empty($vars['content']['comments'])) && $node->comment > 1) {
    $vars['content']['comments'] = array(
      '#markup' => '<h2 class="title"></h2><div class="anon-no-comments-wrapper">Sorry, you must ' . l(t('Log-in'), 'user') . ' or ' . l(t('Register'), 'user/register') . ' to post comments.</div>',
    );
  }


    // Display post submission information (when CT option to do so is selected).
    // Drupal default will print the author's username and the date in a default format.
    // Here we use the author's fullname from their profile (if they have one), using 'author_display_name' created in omega_4_boilerplate_preprocess_node()
    // and a custom date format.
    if (variable_get('node_submitted_' . $node->type, TRUE)) {

      $vars['date'] = array(
      '#theme' => 'fantorrent_date',
      '#date_string' => $vars['created'],
      '#format' => 'F d, Y',
    );

      $vars['content']['posted_date'] = $vars['date'];
      $vars['display_submitted'] = TRUE;

      // We'll prepopulate a default variable value, but it may be reformatted in boilerplate and/or theme pre-processing (preprocess-node.inc)
      $vars['content']['submitted'] = t('posted by !username on !datetime', array('!username' => render($vars['content']['author_display_name']), '!datetime' => render($vars['content']['posted_date'])));
  }
  else {
    $vars['display_submitted'] = FALSE;
    $vars['content']['submitted'] = '';
    $vars['user_picture'] = '';
  }

  //community post anywhere form
  $vars['content']['post_form'] = array(
  '#theme' => 'fantorrent_embed_block',
  '#module' => 'fantorrent_community_ct',
  '#delta' => 'community_post_form',
  );

    //put a link to join the community if not logged in (replace the post_form)
  if(user_is_anonymous()) {
    unset($vars['content']['post_form']);
    $vars['content']['post_form']['#markup'] = 'Sorry, you must be logged-in to comment. Please ' . theme('ft_anon_login_link', array('link_text' => 'login or sign-up', 'link_title' => t('Go to the login/registration page'))) . ' and post your comment!';
  }

  //node posts view
  $str = $_GET['q'];
  $vars['content']['node_posts'] = array(
  '#theme' => 'fantorrent_view',
  '#view' => 'community_feed',
  '#display' => 'node_specific_post',
  '#args' => array($str),
  );
//  fantorrent_view_check($vars['content']['node_posts']);
//  $view_test = views_get_view_result('community_feed', 'node_specific_post', array($str));
//  if (empty($view_test)) $vars['content']['node_posts'] = NULL;


  //********************************************
  // NODE TYPES
  //********************************************
  
  switch($vars['type']) {

    case 'album':
      include($nodes_dir . '/album.inc');
      break;

    case 'media':
      include($nodes_dir . '/media.inc');
      break;

    case 'song':
      include($nodes_dir . '/song.inc');
      break;
      
    case 'article':
      include($nodes_dir . '/article.inc');
      break;
     
    case 'post':
      include($nodes_dir . '/post.inc');
      break;
      
    case 'event':
      include($nodes_dir . '/event.inc');
      break;
      
    case 'product':
      include($nodes_dir . '/product.inc');
      break;
    
    case 'gear':
      include($nodes_dir . '/gear.inc');
      break;
			
		case 'personalized_product':
			include($nodes_dir . '/product.inc');
			break;
	}
}
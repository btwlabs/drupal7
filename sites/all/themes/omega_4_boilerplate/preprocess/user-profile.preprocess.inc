<?php
/**
 * @file
 * Theme preprocess code for the user profile.
 */

/**
 * Implements hook_alpha_preprocess_user_profile.
 * 
 * @param array $vars
 */
function omega_4_boilerplate_preprocess_user_profile(&$vars) {
  global $user;
  $uid = $vars['elements']['#account']->uid;
  $account = user_load($uid);
  // Links.
  $vars['dashboard_link'] = ($user->uid == $uid) ?  l(t('My Dashboard'), drupal_get_path_alias('user-dashboard'), array('attributes'=>array('class'=>array('omega-narrow-up'))))  .  
    l(t('My Dashboard'), drupal_get_path_alias('user-dashboard-m'), array('attributes'=>array('class'=>array('omega-mobile-only')))): '';
  $vars['profile_edit_link'] = (user_access('administer users')) ? l(t('Edit User Account'), 'user/' . $account->uid . '/edit', array('attributes' => array('class' => array('edit-button', 'omega-narrow-up')))) : '';  
  if (module_exists('masquerade')) {
    $masquerade_url = 'masquerade/switch/' . $account->uid;
    $vars['masquerade_link'] = (user_access('masquerade as user') && (!($user->uid == $account->uid))) ? l(t('Switch to ' . $account->name), $masquerade_url, array('query' => array('token' => drupal_get_token($masquerade_url)))) : '';
  }
  
  // Profile complete percent.
  $profile_obj = profile2_load_by_user($uid);
  $vars['profile_progress'] = array();
  $vars['profile_array'] = array();
  if (is_object($profile_obj['main'])) {
    $vars['profile_array'] = $profile_obj['main']->buildContent();
    $vars['profile_progress'] = (module_exists('pcp') && ($user->uid == $uid)) ? _ft_embed_block('pcp', 'pcp_profile2_main') : NULL;
  }
  // User community posts.
  $posts = views_get_view('community_feed');
  $posts->set_display('user');
  $data = $posts->preview('user', array($uid));
  if (!empty($posts->result)) {
    $vars['user_posts'] = '<h2 class="title">' . $posts->get_title() . '</h2>' . $data;
  }

  // User statistics.
  $default_values = module_invoke_all('pcp_default_field_values');
  if (!empty($vars['profile_array'])) {
    $default_value = $vars['profile_array']['field_address']['#items'][0] == $default_values['profile2']['main']['field_address']['value'];
    $vars['location'] = (!$default_value) ? $profile_obj['main']->field_address[LANGUAGE_NONE][0]['locality'] . 
        	', ' . $profile_obj['main']->field_address[LANGUAGE_NONE][0]['administrative_area'] : NULL;
  }
  $vars['member_since'] = 'Member since ' . date('M Y', $account->created);
  global $user;
  if (!($user->uid == $uid)) {
    $vars['user_contact_links'] = theme('fantorrent_user_contact_links', array('uid'=>$uid));
  }
  $vars['questionaire'] = (module_exists('fantorrent_community_questionnaire')) ? _ft_embed_block('fantorrent_community_questionnaire', 'questionnaire_display') : NULL;
  $vars['num_posts'] = fantorrent_community_support_num_user_posts($uid);
  $vars['num_comments'] = fantorrent_community_support_num_user_comments($uid);
  $vars['num_followers'] = fantorrent_community_support_num_user_followers($uid);
  $vars['num_points'] = (isset($profile_obj->field_user_points)) ? render($vars['profile_array']['user_points']) : NULL;
  $vars['rank'] = (isset($profile_obj->field_user_rank)) ? render($vars['profile_array']['user_rank']) : NULL;
    
  // User groups view.
  /*$groups = views_get_view('user_groups');
  $groups->set_display('groups');
  $data = $groups->preview('groups', array($uid));
  if (!empty($groups->result)) {
    $vars['user_groups'] = '<h2 class="title">' . $groups->get_title() . '</h2>' . $data;
  }*/
  
  // Followers view.
  $followers = views_get_view('community_followers');
  $followers->set_display('followers');
  $data = $followers->preview('followers', array($uid));
  $vars['user_followers'] = '<h2 class="title">' . $followers->get_title() . '</h2>' . $data;
  
  
  // Fan Club Member Date
  //dsm($account);
  if (array_search('fan club member', $account->roles)) {
    if (isset($account->field_field_date_minute[LANGUAGE_NONE][0]['value'])) {
      $vars['fan_club_start'] = date('M d, Y', strtotime($account->field_field_date_minute[LANGUAGE_NONE][0]['value'])); 
      $vars['fan_club_end'] = date('M d, Y', strtotime($account->field_date_day[LANGUAGE_NONE][0]['value']));
    }
  }
}
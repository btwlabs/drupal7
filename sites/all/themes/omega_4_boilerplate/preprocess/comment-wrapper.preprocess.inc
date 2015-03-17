<?php
/**
 * @file 
 * Theme preprocess code for comment wrappers.
 * 
 */

/**
 * Implements hook_preprocess_comment_wrapper.
 * 
 * @param array $vars
 */
function omega_4_boilerplate_preprocess_comment_wrapper(&$vars) {
  //comments display
  $comments = views_get_view('node_comments');
  $comments->set_display('block');
  $data = $comments->preview('block', array($vars['node']->nid));
  if($comments->result) {
    unset ($vars['content']['comments']);
    /**
     * must put the view output in a renderable array for
     * the comment-wrapper tpl to render, 
     * and wrap the output in a .comment so that the theme
     * js that does the fancy tabs can see there's comments
     */
    $vars['content']['comments'] = array(
      '#theme' => 'fantorrent_view',
      '#prefix' => '<div class="comment">',
      '#suffix' => '</div>',
      '#view' => 'node_comments',
      '#display' => 'block',
      '#args' => array($vars['node']->nid),
    );
    fantorrent_view_check($vars['content']['comments']);
  }
  //put a link to join the community if not logged in (replace the comment_form)
  if(user_is_anonymous()) {
    unset($vars['content']['comment_form']);
    $vars['content']['comment_form']['#markup'] = 'Sorry, you must be logged-in to comment. Please ' . theme('ft_anon_login_link', array('link_text' => 'login or sign-up', 'link_title' => t('Go to the login/registration page'))) . ' and post your comment!';
  }
}
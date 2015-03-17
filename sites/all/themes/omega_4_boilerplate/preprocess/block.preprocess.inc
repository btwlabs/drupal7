<?php
/**
 * @file
 * Theme preprocess code for blocks.
 */


/**
 * Implements hook_alpha_preprocess_block.
 * Adds a second menu for mobile only.
 * 
 * @param array $vars
 */
function omega_4_boilerplate_preprocess_block(&$vars) {
	//dsm($vars['block']);
  //rewrite the content of the main menu
//  if (($vars['block']->module == 'menu_block' && $vars['block']->info == "Main Menu - mobile only")) {
//    $content .= '<div class="omega-mobile-only">';
//    $content .= theme('show_hide', array('element' => $vars['content'], 'height' => 0, 'more_text' => 'Open Menu', 'less_text' => 'Close Menu'));
//    $content .= '</div>';
//    $vars['content'] = $content;
//  }

// show & hide user menu with toggle button and display only when logged in
    if (($vars['block']->module == 'menu' && $vars['block']->info == "User Menu Links")) {
    //$content .= '<div class="omega-mobile-only">';
    global $user;
	if(user_is_logged_in()) {
    $content .= theme('show_hide', array('element' => $vars['content'], 'height' => 0, 'more_text' => 'Open Menu', 'less_text' => 'Close Menu'));
    }
    //$content .= '</div>';
    $vars['content'] = $content;
  }
}
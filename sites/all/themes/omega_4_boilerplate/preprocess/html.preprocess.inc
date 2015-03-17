<?php
/**
 * @file
 * Theme preprocess code for the html tpl.
 * 
 */

/**
 * Implements hook_alpha_preprocess_html
 * @param array $vars
 */
function omega_4_boilerplate_preprocess_html(&$vars) {
  
  //add anon login box to the drupal settings object
  $settings = array(
    'fantorrentBase' => array(
      'anonLoginBox' => theme('ft_anon_login_box')
    ),
  );
  drupal_add_js($settings, 'setting');
  
  $vars['page']['page_bottom']['fantorrent_base_plusone'] = array(
    '#type' => 'markup',
    '#markup' => '<script type="text/javascript" src="https://apis.google.com/js/plusone.js"></script><script type="text/javascript">gapi.plusone.go();</script>',
  );
  //fb javascript sdk code
  $vars['fb_sdk'] = '<div id="fb-root"></div>
                    <script>
                      window.fbAsyncInit = function() {
                        FB.init({
                          appId      : \'322889334418402\', // App ID
                          channelUrl : \'//' . $_SERVER['SERVER_NAME'].$_SERVER['REQUEST_URI'] . '/channel.html\', // Channel File
                          status     : true, // check login status
                          cookie     : true, // enable cookies to allow the server to access the session
                          xfbml      : true  // parse XFBML
                        });
                    
                        // Additional initialization code here
                      };
                    
                      // Load the SDK Asynchronously
                      (function(d){
                         var js, id = \'facebook-jssdk\', ref = d.getElementsByTagName(\'script\')[0];
                         if (d.getElementById(id)) {return;}
                         js = d.createElement(\'script\'); js.id = id; js.async = true;
                         js.src = "//connect.facebook.net/en_US/all.js";
                         ref.parentNode.insertBefore(js, ref);
                       }(document));
                    </script>';
  
  
  
  /**
   * if fb_preview_fid is in the get params then set the proper
   * facebook metas for specifying the preview image using this fid
   */
  $url_parts = drupal_parse_url($_SERVER['REQUEST_URI']);
  // Check for a fb_preview_id in get params and use that.
  if (isset($_GET['fb_preview_fid'])) {
    $image = (array)file_load($_GET['fb_preview_fid']);
  }
  // Add appropriate image based on content type, or default.
  elseif (!empty($vars['page']['content']['content']['content']['system_main']['nodes'])) {
    $nids = element_children($vars['page']['content']['content']['content']['system_main']['nodes']);
    $node = $vars['page']['content']['content']['content']['system_main']['nodes'][$nids[0]]['#node'];
    switch ($node->type) {
      case 'article':
        $image = get_article_teaser_image($node);
        $image = $image['#item'];
        break;
      case 'event':
        if (event_is_legacy($node)) {
          $image = (isset($node->field_images_2[LANGUAGE_NONE][0])) ? $node->field_images_2[LANGUAGE_NONE][0] : null;
        }
        break;
      default:
        $image = (isset($node->field_images_1[LANGUAGE_NONE][0])) ? $node->field_images_1[LANGUAGE_NONE][0] : null;
    }
  }
  // Set the og image with what was set above.
  $og_image = (isset($image)) ? $image['uri'] : variable_get('boilerplate_og_image_uri', NULL);
  if ($url = image_style_url(variable_get('fantorrent_fb_preview_image_style', 'fb_preview'), $og_image)) {
    $vars['fb'] = theme('opengraph_meta_tags', array(
        'image'=>$url,
        'title'=>(isset($_GET['fb_preview_title'])) ? check_plain(urldecode($_GET['fb_preview_title'])) : $vars['head_title'],
        'description' => '',
        'type'=>'website',
        'url' => url(current_path(), array('absolute'=>true)),
        'site_name' => $vars['head_title'],
      )
    );
  }
}
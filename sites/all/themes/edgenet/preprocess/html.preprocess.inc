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
function edgenet_preprocess_html(&$vars) {
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
}
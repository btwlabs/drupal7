<?php
/**
 * @file
 * id_twitter.views.inc
 */


/**
 * Implements hook_views_data().
 */
function id_twitter_views_data() {
  $data['id_twitter']['table']['group'] = t('ID - Twitter');
  $data['id_twitter']['table']['join'] = array(
    // #global is a special flag which let's a table appear all the time.
    '#global' => array(),
  );

  $data['id_twitter']['id_tweeter_text'] = array(
    'title' => t('Text'),
    'help' => t('Use text.'),
    'area' => array(
      'handler' => 'views_handler_id_tweeter_text',
    ),
  );

  return $data;
}

<?php
/**
 * @file
 * id_twitter.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function id_twitter_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'twitter';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'twitter';
  $view->human_name = 'Twitter';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['css_class'] = 'clickable';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['content'] = 'No Tweets at this time.';
  $handler->display->display_options['empty']['area']['format'] = 'full_html';
  /* Relationship: User: Profile */
  $handler->display->display_options['relationships']['profile']['id'] = 'profile';
  $handler->display->display_options['relationships']['profile']['table'] = 'users';
  $handler->display->display_options['relationships']['profile']['field'] = 'profile';
  /* Field: User: Uid */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'users';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['label'] = '';
  $handler->display->display_options['fields']['uid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['uid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['uid']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['uid']['link_to_user'] = FALSE;
  /* Field: Twitter: Created time */
  $handler->display->display_options['fields']['created_time']['id'] = 'created_time';
  $handler->display->display_options['fields']['created_time']['table'] = 'twitter';
  $handler->display->display_options['fields']['created_time']['field'] = 'created_time';
  $handler->display->display_options['fields']['created_time']['label'] = '';
  $handler->display->display_options['fields']['created_time']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created_time']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['created_time']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['created_time']['date_format'] = 'custom';
  $handler->display->display_options['fields']['created_time']['custom_date_format'] = 'm/d';
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_user_full_name']['id'] = 'field_user_full_name';
  $handler->display->display_options['fields']['field_user_full_name']['table'] = 'field_data_field_user_full_name';
  $handler->display->display_options['fields']['field_user_full_name']['field'] = 'field_user_full_name';
  $handler->display->display_options['fields']['field_user_full_name']['relationship'] = 'profile';
  $handler->display->display_options['fields']['field_user_full_name']['label'] = '';
  $handler->display->display_options['fields']['field_user_full_name']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_user_full_name']['alter']['path'] = 'user/[uid]';
  $handler->display->display_options['fields']['field_user_full_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_user_full_name']['hide_alter_empty'] = FALSE;
  /* Field: Twitter: Login name */
  $handler->display->display_options['fields']['screen_name']['id'] = 'screen_name';
  $handler->display->display_options['fields']['screen_name']['table'] = 'twitter';
  $handler->display->display_options['fields']['screen_name']['field'] = 'screen_name';
  $handler->display->display_options['fields']['screen_name']['label'] = '';
  $handler->display->display_options['fields']['screen_name']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['screen_name']['alter']['path'] = 'http://twitter.com/[screen_name]';
  $handler->display->display_options['fields']['screen_name']['alter']['prefix'] = '(';
  $handler->display->display_options['fields']['screen_name']['alter']['suffix'] = ')';
  $handler->display->display_options['fields']['screen_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['screen_name']['hide_alter_empty'] = FALSE;
  /* Field: Twitter: Message text */
  $handler->display->display_options['fields']['text']['id'] = 'text';
  $handler->display->display_options['fields']['text']['table'] = 'twitter';
  $handler->display->display_options['fields']['text']['field'] = 'text';
  $handler->display->display_options['fields']['text']['label'] = '';
  $handler->display->display_options['fields']['text']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['text']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['text']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['text']['link_urls'] = 1;
  $handler->display->display_options['fields']['text']['link_usernames'] = 1;
  $handler->display->display_options['fields']['text']['link_hashtags'] = 0;
  /* Field: Twitter: Created time */
  $handler->display->display_options['fields']['created_time_1']['id'] = 'created_time_1';
  $handler->display->display_options['fields']['created_time_1']['table'] = 'twitter';
  $handler->display->display_options['fields']['created_time_1']['field'] = 'created_time';
  $handler->display->display_options['fields']['created_time_1']['label'] = 'Posted';
  $handler->display->display_options['fields']['created_time_1']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['created_time_1']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['created_time_1']['date_format'] = 'time ago';
  /* Sort criterion: Twitter: Created time */
  $handler->display->display_options['sorts']['created_time']['id'] = 'created_time';
  $handler->display->display_options['sorts']['created_time']['table'] = 'twitter';
  $handler->display->display_options['sorts']['created_time']['field'] = 'created_time';
  $handler->display->display_options['sorts']['created_time']['order'] = 'DESC';

  /* Display: block */
  $handler = $view->new_display('block', 'block', 'block');
  $handler->display->display_options['block_description'] = 'Twitter: Block';

  /* Display: Author */
  $handler = $view->new_display('block', 'Author', 'author');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'clickable';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Twitter Author */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'users';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['ui_name'] = 'Twitter Author';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uid']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['uid']['title'] = '%1\'s Tweets';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'user';
  $handler->display->display_options['arguments']['uid']['default_argument_options']['user'] = FALSE;
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['block_description'] = 'Twitter: By Author';

  /* Display: One */
  $handler = $view->new_display('block', 'One', 'one');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['block_description'] = 'Twitter: One At A Time';
  $export['twitter'] = $view;

  $view = new view();
  $view->name = 'twitter_feed';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Twitter Feed';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Tweets';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['view_mode'] = 'views_all_user_posts_block';
  $handler->display->display_options['row_options']['links'] = FALSE;
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['content'] = '<a href="https://twitter.com/share" class="twitter-share-button" data-text="Hanging out in the <?php print variable_get(\'site_name\', \'White Label\'); ?> community" data-size="large" data-count="none" data-url="<?php global $base_url; $url=shurly_shorten($base_url . \'/\' . drupal_get_path_alias(current_path()), NULL, user_load(1)); print $url[\'shortUrl\']; ?>">Tweet</a>
<script>!function(d,s,id){var js,fjs=d.getElementsByTagName(s)[0];if (!d.getElementById(id)){js=d.createElement(s);js.id=id;js.src="//platform.twitter.com/widgets.js";fjs.parentNode.insertBefore(js,fjs);}}(document,"script","twitter-wjs");</script>';
  $handler->display->display_options['footer']['area']['format'] = 'php_code';
  /* Footer: ID - Twitter: Text */
  $handler->display->display_options['footer']['id_tweeter_text']['id'] = 'id_tweeter_text';
  $handler->display->display_options['footer']['id_tweeter_text']['table'] = 'id_twitter';
  $handler->display->display_options['footer']['id_tweeter_text']['field'] = 'id_tweeter_text';
  $handler->display->display_options['footer']['id_tweeter_text']['content'] = '<a href="https://twitter.com/share" class="twitter-share-button" data-text="Hanging out in the [site_name] community" data-size="large" data-count="none" data-url="[shortUrl]">Tweet</a>
<script>!function(d,s,id){var js,fjs=d.getElementsByTagName(s)[0];if (!d.getElementById(id)){js=d.createElement(s);js.id=id;js.src="//platform.twitter.com/widgets.js";fjs.parentNode.insertBefore(js,fjs);}}(document,"script","twitter-wjs");</script>';
  $handler->display->display_options['footer']['id_tweeter_text']['format'] = 'full_html';
  $handler->display->display_options['footer']['id_tweeter_text']['tokenize'] = TRUE;
  /* Field: Field: Images */
  $handler->display->display_options['fields']['field_images_1']['id'] = 'field_images_1';
  $handler->display->display_options['fields']['field_images_1']['table'] = 'field_data_field_images_1';
  $handler->display->display_options['fields']['field_images_1']['field'] = 'field_images_1';
  $handler->display->display_options['fields']['field_images_1']['label'] = '';
  $handler->display->display_options['fields']['field_images_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_images_1']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_images_1']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Content: Author Name */
  $handler->display->display_options['fields']['field_tweet_author_name']['id'] = 'field_tweet_author_name';
  $handler->display->display_options['fields']['field_tweet_author_name']['table'] = 'field_data_field_tweet_author_name';
  $handler->display->display_options['fields']['field_tweet_author_name']['field'] = 'field_tweet_author_name';
  $handler->display->display_options['fields']['field_tweet_author_name']['label'] = '';
  $handler->display->display_options['fields']['field_tweet_author_name']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_tweet_author_name']['element_label_colon'] = FALSE;
  /* Field: Content: Author */
  $handler->display->display_options['fields']['field_tweet_author']['id'] = 'field_tweet_author';
  $handler->display->display_options['fields']['field_tweet_author']['table'] = 'field_data_field_tweet_author';
  $handler->display->display_options['fields']['field_tweet_author']['field'] = 'field_tweet_author';
  $handler->display->display_options['fields']['field_tweet_author']['label'] = '';
  $handler->display->display_options['fields']['field_tweet_author']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_tweet_author']['element_label_colon'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* Sort criterion: Field: Fan Club Date (field_field_date_minute) */
  $handler->display->display_options['sorts']['field_field_date_minute_value']['id'] = 'field_field_date_minute_value';
  $handler->display->display_options['sorts']['field_field_date_minute_value']['table'] = 'field_data_field_field_date_minute';
  $handler->display->display_options['sorts']['field_field_date_minute_value']['field'] = 'field_field_date_minute_value';
  $handler->display->display_options['sorts']['field_field_date_minute_value']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'tweet' => 'tweet',
  );

  /* Display: 10Block */
  $handler = $view->new_display('block', '10Block', '10_block');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['block_description'] = 'Twitter Feed: 10Block';

  /* Display: 5Block */
  $handler = $view->new_display('block', '5Block', '5_block');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['block_description'] = 'Twitter Feed: 5Block';

  /* Display: 1Block */
  $handler = $view->new_display('block', '1Block', '1_block');
  $handler->display->display_options['display_comment'] = 'This view utilizes a field layout template that matches all displays. views-view-fields--twitter-feed.tpl.php';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['block_description'] = 'Twitter Feed: 1Block';
  $export['twitter_feed'] = $view;

  return $export;
}

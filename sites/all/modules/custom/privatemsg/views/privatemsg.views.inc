<?php
/**
 * @file
 * Provide views data and handlers for privatemsg.module
 */

/**
 * Implements hook_views_data().
 */
function privatemsg_views_data() {
  $data['users']['privatemsg_link'] = array(
    'group' => t('Privatemsg'),
    'real field' => 'uid',
    'title' => t('Send message'),
    'field' => array(
      'title' => t('Send Privatemsg link'),
      'help' => t('Displays a link to send a private message to a user.'),
      'handler' => 'views_handler_field_privatemsg_link',
    ),
  );

  //*****PRIVATE MESSAGE TABLE
  $data['pm_message']['table']['group'] = t('Privatemsg');

  $data['pm_message']['table']['base'] = array(
    'field' => 'mid',
    'title' => t('Privatemsg Message'),
    'defaults' => array(
      'field' => 'privatemsg_body',
    ),
  );

  $data['pm_message']['table']['entity type'] = 'privatemsg_message';

  $data['pm_message']['table']['join'] = array(
    'users' => array(
      'handler' => 'views_join',
      'left_table' => 'users',
      'left_field' => 'uid',
      'field' => 'author',
    ),
    'pm_index' => array(
      'handler' => 'views_join',
      'left_table' => 'pm_index',
      'left_field' => 'mid',
      'field' => 'mid',
    ),
  );

  $data['pm_message']['privatemsg_id'] = array(
    'group' => t('Privatemsg'),
    'real field' => 'mid',
    'title' => t('The privatemsg message ID'),
    'field' => array(
      'title' => t('The ID of the privatemsg'),
      'help' => t('Displays the id of the privatemsg.'),
      'handler' => 'views_handler_field_numeric',
    ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
    'relationship' => array(
      'base' => 'pm_index',
      'title' => t('The privatemsg Thread ID'),
      'field' => 'mid',
      'handler' => 'views_handler_relationship',
      'label' => t('Threading'),
      'help' => t('Relate the message to threading info'),
    ),
  );

  $data['pm_message']['privatemsg_author'] = array(
    'group' => t('Privatemsg'),
    'real field' => 'author',
    'title' => t('Message Author'),
    'field' => array(
      'title' => t('Message Author'),
      'help' => t('The UID of the privatemsg author.'),
      'handler' => 'views_handler_field_numeric',
    ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
    'relationship' => array(
      'base' => 'users',
      'field' => 'author',
      'handler' => 'views_handler_relationship',
      'label' => t('Privatemsg Sender'),
      'help' => t('Relate to the user who sent the privatemsg'),
    ),
  );

  $data['pm_message']['privatemsg_subject'] = array(
    'group' => t('Privatemsg'),
    'real field' => 'subject',
    'title' => t('The subject of the privatemsg'),
    'field' => array(
      'title' => t('Subject'),
      'help' => t('Displays the text subject of the privatemsg.'),
      'handler' => 'views_handler_field_pm_markup',
      'format' => 'full_html',
    ),
   'filter' => array(
      'handler' => 'views_handler_filter_string',
    ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
  );
  $data['pm_message']['privatemsg_body'] = array(
    'group' => t('Privatemsg'),
    'real field' => 'body',
    'title' => t('The body of the privatemsg'),
    'field' => array(
      'title' => t('Message'),
      'help' => t('Displays the text of the body of the privatemsg.'),
      'handler' => 'views_handler_field_pm_markup',
      'format' => 'full_html',
    ),
   'filter' => array(
      'handler' => 'views_handler_filter_string',
    ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
  );

  $data['pm_message']['privatemsg_senddate'] = array(
    'group' => t('Privatemsg'),
    'real field' => 'timestamp',
    'title' => t('Send Date'),
    'field' => array(
      'title' => t('Privatemsg Send Date'),
      'help' => t('Displays the date that the privatemsg was sent.'),
      'handler' => 'views_handler_field_date',
    ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
    'argument' => array(
      'handler' => 'views_handler_argument_date',
    ),
  );

  //****PRIVATE MESSAGES INDEX TABLE
  $data['pm_index']['table']['group'] = t('Privatemsg');

  $data['pm_index']['table']['base'] = array(
    'field' => 'mid',
    'title' => t('Privatemsg Threading Index'),
    'defaults' => array(
      'field' => 'privatemsg_thread',
    ),
  );

  $data['pm_index']['table']['entity type'] = 'privatemsg_message';

  $data['pm_index']['thread_id'] = array(
    'group' => t('Privatemsg'),
    'real field' => 'thread_id',
    'title' => t('The Privatemsg thread id'),
    'field' => array(
      'title' => t('Link to Thread'),
      'help' => t('A link to the privatemsg thread'),
      'handler' => 'views_handler_field_pm_thread_link',
    ),
  );
  $data['pm_index']['privatemsg_recipient'] = array(
    'group' => t('Privatemsg'),
    'real field' => 'recipient',
    'title' => t('Recipient'),
    'field' => array(
      'title' => t('Privatemsg Recipient'),
      'help' => t('The UID of the privatemsg recipient'),
      'handler' => 'views_handler_field_numeric',
    ),
    'argument' => array(
      'title' => t('Privatemsg Recipient'),
      'help' => t('Filter according to the recipient uid'),
      'handler' => 'views_handler_argument_user_uid',
    ),
  );
  $data['pm_index']['privatemsg_is_new'] = array(
    'group' => t('Privatemsg'),
    'real field' => 'is_new',
    'title' => t('Privatemsg Is New'),
    'field' => array(
      'title' => t('Has Been Read'),
      'help' => t('Whether the privatemsg has been read'),
      'handler' => 'views_handler_field_pm_new',
    ),
    'filter' => array(
      'title' => t('Has Been Read'),
      'help' => t('Filter to privatemsgs that have/have not been read'),
      'handler' => 'views_handler_filter_boolean_operator',
    ),
  );
  return $data;
}


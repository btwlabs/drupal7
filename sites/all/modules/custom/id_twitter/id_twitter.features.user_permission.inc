<?php
/**
 * @file
 * id_twitter.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function id_twitter_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'add authenticated twitter accounts'.
  $permissions['add authenticated twitter accounts'] = array(
    'name' => 'add authenticated twitter accounts',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'twitter',
  );

  // Exported permission: 'add twitter accounts'.
  $permissions['add twitter accounts'] = array(
    'name' => 'add twitter accounts',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'twitter',
  );

  // Exported permission: 'administer twitter accounts'.
  $permissions['administer twitter accounts'] = array(
    'name' => 'administer twitter accounts',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'twitter',
  );

  // Exported permission: 'clear twitter_search feeds'.
  $permissions['clear twitter_search feeds'] = array(
    'name' => 'clear twitter_search feeds',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'feeds',
  );

  // Exported permission: 'create tweet content'.
  $permissions['create tweet content'] = array(
    'name' => 'create tweet content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create twitter_search content'.
  $permissions['create twitter_search content'] = array(
    'name' => 'create twitter_search content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any tweet content'.
  $permissions['delete any tweet content'] = array(
    'name' => 'delete any tweet content',
    'roles' => array(
      'Advanced Site Manager' => 'Advanced Site Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any twitter_search content'.
  $permissions['delete any twitter_search content'] = array(
    'name' => 'delete any twitter_search content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own tweet content'.
  $permissions['delete own tweet content'] = array(
    'name' => 'delete own tweet content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own twitter_search content'.
  $permissions['delete own twitter_search content'] = array(
    'name' => 'delete own twitter_search content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any tweet content'.
  $permissions['edit any tweet content'] = array(
    'name' => 'edit any tweet content',
    'roles' => array(
      'Advanced Site Manager' => 'Advanced Site Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any twitter_search content'.
  $permissions['edit any twitter_search content'] = array(
    'name' => 'edit any twitter_search content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own tweet content'.
  $permissions['edit own tweet content'] = array(
    'name' => 'edit own tweet content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own twitter_search content'.
  $permissions['edit own twitter_search content'] = array(
    'name' => 'edit own twitter_search content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'enter tweet revision log entry'.
  $permissions['enter tweet revision log entry'] = array(
    'name' => 'enter tweet revision log entry',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'enter twitter_search revision log entry'.
  $permissions['enter twitter_search revision log entry'] = array(
    'name' => 'enter twitter_search revision log entry',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'import twitter_search feeds'.
  $permissions['import twitter_search feeds'] = array(
    'name' => 'import twitter_search feeds',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'feeds',
  );

  // Exported permission: 'override tweet authored by option'.
  $permissions['override tweet authored by option'] = array(
    'name' => 'override tweet authored by option',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override tweet authored on option'.
  $permissions['override tweet authored on option'] = array(
    'name' => 'override tweet authored on option',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override tweet promote to front page option'.
  $permissions['override tweet promote to front page option'] = array(
    'name' => 'override tweet promote to front page option',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override tweet published option'.
  $permissions['override tweet published option'] = array(
    'name' => 'override tweet published option',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override tweet revision option'.
  $permissions['override tweet revision option'] = array(
    'name' => 'override tweet revision option',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override tweet sticky option'.
  $permissions['override tweet sticky option'] = array(
    'name' => 'override tweet sticky option',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override twitter_search authored by option'.
  $permissions['override twitter_search authored by option'] = array(
    'name' => 'override twitter_search authored by option',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override twitter_search authored on option'.
  $permissions['override twitter_search authored on option'] = array(
    'name' => 'override twitter_search authored on option',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override twitter_search promote to front page option'.
  $permissions['override twitter_search promote to front page option'] = array(
    'name' => 'override twitter_search promote to front page option',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override twitter_search published option'.
  $permissions['override twitter_search published option'] = array(
    'name' => 'override twitter_search published option',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override twitter_search revision option'.
  $permissions['override twitter_search revision option'] = array(
    'name' => 'override twitter_search revision option',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override twitter_search sticky option'.
  $permissions['override twitter_search sticky option'] = array(
    'name' => 'override twitter_search sticky option',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'post to twitter'.
  $permissions['post to twitter'] = array(
    'name' => 'post to twitter',
    'roles' => array(
      'Basic Site Manager' => 'Basic Site Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'twitter_post',
  );

  // Exported permission: 'use text format tweet'.
  $permissions['use text format tweet'] = array(
    'name' => 'use text format tweet',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'filter',
  );

  return $permissions;
}

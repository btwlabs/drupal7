<?php
/**
 * @file
 * Enables modules and site configuration for a standard site installation.
 */

/**
 * Implements hook_form_FORM_ID_alter() for install_configure_form().
 *
 * Allows the profile to alter the site configuration form.
 */
function btw_form_install_configure_form_alter(&$form, $form_state) {
  // Pre-populate the site name with the server name.
  $form['site_information']['site_name']['#default_value'] = $_SERVER['SERVER_NAME'];
}

// Implements hook_install_tasks().
function btw_install_tasks() {
  $tasks = array(
    'btw_create_users' => array(
      'display_name' => st('Create Admin Users'),
      'type' => 'normal',
    ),
  );
  return $tasks;
}

/**
 * Creates the default admin users.
 */
function btw_create_users($install_state) {
  // Get roles.
  $roles = user_roles();
  $roles = array_flip($roles);
  // Get include to hash passwords.
  include_once('includes/password.inc');
  $users = array();
  $users[0] = new stdClass();
  $users[0]->name = 'btwted';
  $users[0]->pass = user_hash_password('le-word-de-pass');
  $users[0]->mail = 'ted@bythewaylabs.com';
  $users[0]->status = 1;
  $users[0]->timezone = variable_get('date_default_timezone', 'America/Chicago');
  $users[0]->init = 'ted@bythewaylabs.com';
  $users[0]->roles = array(DRUPAL_AUTHENTICATED_RID => DRUPAL_AUTHENTICATED_RID, $roles['administrator'] => $roles['administrator']);

  $users[1] = new stdClass();
  $users[1]->name = 'btwdennis';
  $users[1]->pass = user_hash_password('le-word-de-pass');
  $users[1]->mail = 'dennis@bythewaylabs.com';
  $users[1]->status = 1;
  $users[1]->timezone = variable_get('date_default_timezone', 'America/Chicago');
  $users[1]->init = 'dennis@bythewaylabs.com';
  $users[1]->roles = array(DRUPAL_AUTHENTICATED_RID => DRUPAL_AUTHENTICATED_RID, $roles['administrator'] => $roles['administrator']);

  $users[2] = new stdClass();
  $users[2]->name = 'btwjon';
  $users[2]->pass = user_hash_password('le-word-de-pass');
  $users[2]->mail = 'jon@bythewaylabs.com';
  $users[2]->status = 1;
  $users[2]->timezone = variable_get('date_default_timezone', 'America/Chicago');
  $users[2]->init = 'jon@bythewaylabs.com';
  $users[2]->roles = array(DRUPAL_AUTHENTICATED_RID => DRUPAL_AUTHENTICATED_RID, $roles['administrator'] => $roles['administrator']);

  //SAVE USERS
  foreach($users as $user) {
    // Initial user insert.
    user_save($user);
  }
}

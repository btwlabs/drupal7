<?php
/**
 * @file common_support_importers.inc
 */

/**
 * Imports homeboxes from a features-style export file.
 * @param array $export
 *   Homebox export array.
 * @return bool
 *   TRUE on success, FALSE if failure.
 */
function common_support_import_homebox($export = array()) {
  if (empty($export)) {
    return FALSE;
  }
  foreach($export as $page) {
    if (homebox_save_page($page)) {
      continue;
    }
    else {
      return FALSE;
    }
  }
  return TRUE;
}

/**
 * Imports nodes from a features-style export.
 * @param array $export
 *   Array of nodes.
 * @return bool
 *   TRUE on success, FALSE on failure.
 */
function common_support_import_node_types($module = 'common_support', $export = array()) {
  if (empty($export)) {
    return FALSE;
  }
  foreach($export as $type_name => $type) {
    // @todo look for existing node type.
    $new_type = (object)$type;
    $new_type = node_type_set_defaults($new_type);
    $new_type->module = $module;
    $new_type->type = $type_name;
    // Needed for https://www.drupal.org/node/2465159.
    $new_type->custom = 1;
    $new_type->locked = 0;
    if (node_type_save($new_type)) {
      continue;
    }
    else {
      return FALSE;
    }
  }
  return TRUE;
}

/**
 * Imports commerce_product_type from a features-style export.
 * @param array $export
 *   Array of commerce products.
 * @return bool
 *   TRUE on success, FALSE on failure.
 */
function common_support_import_commerce_product($export = array()) {
  if (empty($export)) {
    return FALSE;
  }
  foreach($export as $type) {
    // @todo look for existing commerce_product type.
    if (commerce_product_ui_product_type_save($type)) {
      continue;
    }
    else {
      return FALSE;
    }
  }
  return TRUE;
}

/**
 * Imports field_bases from a features-style export.
 * @param array $export
 *   Array of field_bases.
 * @return bool
 *   Returns TRUE on success, FALSE on failure.
 */
function common_support_import_field_bases($export = array()) {
  if (empty($export)) {
    return FALSE;
  }
  foreach($export as $field_base) {
    // @todo look for existing field base.
    if (field_create_field($field_base)) {
      continue;
    }
    else {
      return FALSE;
    }
  }
  return TRUE;
}

/**
 * Imports field_instances from a features-style export.
 * @param array $export
 *   Array of field_instances.
 * @return bool
 *   TRUE on success, FALSE on failure.
 */
function common_support_import_field_instances($export = array()) {
  if (empty($export)) {
    return FALSE;
  }
  foreach($export as $field_instance) {
    //@todo look for existing field instances.
    if (field_create_instance($field_instance)) {
      continue;
    }
    else {
      return FALSE;
    }
  }
  return TRUE;
}

/**
 * Imports taxonomy vocabularies from a features-style export.
 * @param array $export
 *   Array of taxonomy vocabularies.
 * @return bool
 *   TRUE on success, FALSE on failure.
 */
function common_support_import_taxonomy_vocabularies($export = array()) {
  if (empty($export)) {
    return FALSE;
  }
  foreach($export as $vocabulary) {
    //@todo look for existing.
    if (taxonomy_vocabulary_save($vocabulary)) {
      continue;
    }
    else {
      return FALSE;
    }
  }
  return TRUE;
}

/**
 * Imports user roles from a features-style export.
 * @param array $export
 *   Array of user roles.
 * @return bool
 *   TRUE on success, FALSE on failure.
 */
function common_support_import_user_roles($export = array()) {
  if (empty($export)) {
    return FALSE;
  }
  foreach($export as $user_role) {
    //@todo look for existing.
    $role = (object)$user_role;
    $role->is_new = TRUE;
    if (user_role_save($role)) {
      continue;
    }
    else {
      return FALSE;
    }
  }
  return TRUE;
}

/**
 * Imports user_permissions from a features-style import.
 * @param array $export
 *   Array of user permissions.
 * @return bool
 *   TRUE on success, FALSE on failure.
 */
function common_support_import_user_permissions($export = array()) {
  if (empty($export)) {
    return FALSE;
  }
  // @todo could probably do this more elegantly with some array manipulations.
  foreach($export as $user_permission) {
    foreach($user_permission['roles'] as $role_name) {
      //@todo look for existing.
      $role = user_role_load_by_name($role_name);
      $permission = array(
        $user_permission['name'] => TRUE,
      );
      if(user_role_change_permissions($role->rid, $permission)) {
        continue;
      }
      else {
        return FALSE;
      }
    }
    return TRUE;
  }
}

/**
 * Imports variables from a strongarm (features)-style import.
 * @param array $export
 *   Array of variables.
 * @return bool
 *   TRUE on success, FALSE on failure.
 */
function common_support_import_variables($export = array()) {
  if (empty($export)) {
    return FALSE;
  }
  $return = TRUE;
  foreach($export as $variable) {
    //@todo look for existing.
    try {
      variable_set($variable->name, $variable->value);
    }
    catch(Exception $e) {
      watchdog('common_support_import_variables', $e->getMessage());
      $return = FALSE;
    }
  }
  return $return;
}

/**
 * Imports image styles from a (features)-style import.
 * @param array $export
 *   Array of image styles.
 * @return bool
 *   TRUE on success, FALSE on failure.
 */
function common_support_import_image_style($export = array()) {
  if (empty($export)) {
    return FALSE;
  }
  foreach($export as $style) {
    //@todo look for existing.
    if(image_default_style_save($style)) {
      continue;
    }
    else {
      return FALSE;
    }
  }
  return TRUE;
}

/**
 * Imports nodequeues from a (features)-style import.
 * @param array $export
 *   Array of nodequeues.
 * @return bool
 *   TRUE on success, FALSE on failure.
 */
function common_support_import_nodequeues($export = array()) {
  if (empty($export)) {
    return FALSE;
  }
  foreach($export as $nodequeue) {
    //@todo look for existing.
    // Assign the existing qid if a nodequeue with the same name already exists.
    $map = common_support_nodequeue_get_qid_map();
    if (isset($map[$nodequeue['name']])) {
      $nodequeue['qid'] = $map[$nodequeue['name']];
    }
    // Clear the qid if it is a new nodequeue.
    else {
      unset($nodequeue['qid']);
    }
    if(common_support_nodequeue_save_queue((array) $nodequeue)) {
      continue;
    }
    else {
      return FALSE;
    }
  }
  return TRUE;
}
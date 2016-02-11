<?php
/**
 * @file
 * Hooks provided by this module.
 */

/**
 * @addtogroup hooks
 * @{
 */

/**
 * Acts on entity being loaded from the database.
 *
 * This hook is invoked during $example_task loading, which is handled by
 * entity_load(), via the EntityCRUDController.
 *
 * @param array $entities
 *   An array of $example_task entities being loaded, keyed by id.
 *
 * @see hook_entity_load()
 */
function hook_entity_load(array $entities) {
  $result = db_query('SELECT fields FROM {table} WHERE id IN(:ids)', array(':ids' => array_keys($entities)));
  foreach ($result as $record) {
    $entities[$record->id]->title = $record->title;
  }
}

/**
 * Responds when a entity is inserted.
 *
 * This hook is invoked after the entity is inserted into the database.
 *
 * @param EntityName $entity_name
 *   The $entity_name that is being inserted.
 *
 * @see hook_entity_insert()
 */
function hook_entity_insert(EntityName $entity_name) {
  db_insert('entity_name')
    ->fields(array(
      'id' => entity_id('entity_name',$entity_name),
      'extra' => print_r($entity_name, TRUE),
    ))
    ->execute();
}

/**
 * Acts on an entity being inserted or updated.
 *
 * This hook is invoked before the entity is saved to the database.
 *
 * @param EntityName $entity_name
 *   The $entity_name that is being inserted or updated.
 *
 * @see hook_entity_presave()
 */
function hook_fentity_presave(EntityName $entity_name) {
  $entity_name->name = 'title';
}

/**
 * Responds to a $entity_name being updated.
 *
 * This hook is invoked after the $entity_name has been updated in the database.
 *
 * @param EntityName $entity_name
 *   The $entity_name that is being updated.
 *
 * @see hook_entity_update()
 */
function hook_fantorrent_cool_keys_group_update(EntityName $entity_name) {
  db_update('entity_name')
    ->fields(array('extra' => print_r($entity_name, TRUE)))
    ->condition('id', entity_id('entity_name', $entity_name))
    ->execute();
}

/**
 * Responds to $entity_name deletion.
 *
 * This hook is invoked after the $entity_name has been removed from the database.
 *
 * @param EntityName $entity_name
 *   The $entity_name that is being deleted.
 *
 * @see hook_entity_delete()
 */
function hook_fantorrent_cool_keys_group_delete(EntityName $entity_name) {
  db_delete('entity_name')
    ->condition('id', entity_id('entity_name', $entity_name))
    ->execute();
}
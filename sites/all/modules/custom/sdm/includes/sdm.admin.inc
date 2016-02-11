<?php
/**
 * @file
 * sdm.admin.inc
 *
 * Replace sdm_entity with the actual entity name.
 */

/**
 * Group delete form.
 */
function sdm_entity_form_delete_confirm($form, &$form_state, $sdm_entity) {
  $form_state['sdm_entity'] = $sdm_entity;
  // Always provide entity id in the same form key as in the entity edit form.
  $form['sdm_entity_id'] = array('#type' => 'value', '#value' => entity_id('sdm_entity' , $sdm_entity));
  return confirm_form($form,
    t('Are you sure you want to delete the structured data markup entity %title?', array('%title' => entity_label('sdm_entity', $sdm_entity))),
    t('This action cannot be undone.'),
    t('Delete'),
    t('Cancel')
  );
}

/**
 * Group delete form submit handler.
 */
function sdm_entity_form_delete_confirm_submit($form, &$form_state) {
  $sdm_entity = $form_state['sdm_entity'];
  sdm_entity_delete($sdm_entity);

  watchdog('sdm_entity', '@sdm_entity: deleted %title.', array('@sdm_entity' => $sdm_entity->sdm_entity_id, '%title' => $sdm_entity->label));
  drupal_set_message(t('@sdm_entity %title has been deleted.', array('@sdm_entity' => $sdm_entity->sdm_entity_id, '%title' => $sdm_entity->label)));

  $form_state['redirect'] = '/admin/structure/sdm';
}

/**
 * Structured Data Markup Entity Form.
 */
function sdm_entity_form($form, &$form_state, $sdm_entity = NULL) {
  
}

/**
 * Structured Data Markup Entity submit handler.
 */
function sdm_entity_form_submit(&$form, &$form_state) {
  
}

/**
 * Callback for the cancel link on Structured Data Markup Entity forms.
 */
function sdm_entity_form_cancel() {
  drupal_goto('admin/structure/sdm');
}

/**
 * Form to delete a Structured Data Markup Entity.
 * @param array $form
 * @param array $form_state
 * @param stdClass $sdm_entity
 */
function sdm_entity_delete_form($form, &$form_state, $sdm_entity) {

}

/**
 * Submit callback for deleting a Structured Data Markup Entity.
 * @param array $form
 * @param array $form_state
 */
function sdm_entity_delete_form_submit(&$form, &$form_state) {

}
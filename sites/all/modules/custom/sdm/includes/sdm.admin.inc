<?php
/**
 * @file
 * sdm.admin.inc
 *
 * Replace sdm_data with the actual entity name.
 */

/**
 * Group delete form.
 */
function sdm_data_form_delete_confirm($form, &$form_state, $sdm_data) {
  $form_state['sdm_data'] = $sdm_data;
  // Always provide entity id in the same form key as in the entity edit form.
  $form['sdm_data_id'] = array('#type' => 'value', '#value' => entity_id('sdm_data' , $sdm_data));
  return confirm_form($form,
    t('Are you sure you want to delete the structured data markup entity %title?', array('%title' => entity_label('sdm_data', $sdm_data))),
    t('This action cannot be undone.'),
    t('Delete'),
    t('Cancel')
  );
}

/**
 * Group delete form submit handler.
 */
function sdm_data_form_delete_confirm_submit($form, &$form_state) {
  $sdm_data = $form_state['sdm_data'];
  sdm_data_delete($sdm_data);

  watchdog('sdm_data', '@sdm_data: deleted %title.', array('@sdm_data' => $sdm_data->sdm_data_id, '%title' => $sdm_data->label));
  drupal_set_message(t('@sdm_data %title has been deleted.', array('@sdm_data' => $sdm_data->sdm_data_id, '%title' => $sdm_data->label)));

  $form_state['redirect'] = '/admin/structure/sdm';
}

/**
 * Structured Data Markup Entity Form.
 */
function sdm_data_form($form, &$form_state, $sdm_data = NULL) {
  
}

/**
 * Structured Data Markup Entity submit handler.
 */
function sdm_data_form_submit(&$form, &$form_state) {
  
}

/**
 * Callback for the cancel link on Structured Data Markup Entity forms.
 */
function sdm_data_form_cancel() {
  drupal_goto('admin/structure/sdm');
}

/**
 * Form to delete a Structured Data Markup Entity.
 * @param array $form
 * @param array $form_state
 * @param stdClass $sdm_data
 */
function sdm_data_delete_form($form, &$form_state, $sdm_data) {

}

/**
 * Submit callback for deleting a Structured Data Markup Entity.
 * @param array $form
 * @param array $form_state
 */
function sdm_data_delete_form_submit(&$form, &$form_state) {

}
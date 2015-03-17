<?php
/**
 * Render a field as a numeric value
 *
 * Definition terms:
 * - float: If true this field contains a decimal value. If unset this field
 *          will be assumed to be integer.
 *
 * @ingroup views_field_handlers
 */
class views_handler_field_pm_thread_link extends views_handler_field {
  function construct() {
    parent::construct();
  }

  function option_definition() {
    $options = parent::option_definition();
    $options['link_text'] = array('default' => t('View Thread'), 'translatable' => TRUE);
    return $options;
  }

  function options_form(&$form, &$form_state) {
    parent::options_form($form, $form_state);
    $form['link_text'] = array(
      '#type' => 'textfield',
      '#title' => t('Link Text'),
      '#description' => t('The text to show in the link'),
      '#default_value' => isset($this->options['link_text']) ? $this->options['link_text'] : '',
    );
  }

  function render($values) {
    $value = $this->get_value($values);
    if(privatemsg_user_access()) {
      $data = l($this->options['link_text'], 'messages/view/' . $value);
      return $data;
    }
  }
}

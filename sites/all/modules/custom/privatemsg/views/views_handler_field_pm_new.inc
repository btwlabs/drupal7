<?php

/**
 * A handler to display whether a pm message is new
 *
 * @ingroup privatemsg
 */
class views_handler_field_pm_new extends views_handler_field_field {
  function construct() {
    parent::construct();
  }
  function option_definition() {
    $options = parent::option_definition();
    $options['new_text'] = array('default' => 'New!', 'translatable' => true);
    $options['not'] = array('definition bool' => 'reverse');

    return $options;
  }

  function options_form(&$form, &$form_state) {
    $form['new_text'] = array(
      '#type' => 'textfield',
      '#title' => t('New Text'),
      '#description' => t('Text to show if the message has not been read'),
      '#default_value' => (isset($this->options['new_text'])) ? $this->options['new_text'] : '',
    );
    $form['not'] = array(
      '#type' => 'checkbox',
      '#title' => t('Reverse'),
      '#description' => t('If checked, true will be displayed as false.'),
      '#default_value' => $this->options['not'],
    );
    parent::options_form($form, $form_state);
  }

  function render($values) {
    $value = $this->get_value($values);
    if (!empty($this->options['not'])) {
      $value = !$value;
    }

    return ($value == 0) ? $this->options['new_text'] : '';
  }
}

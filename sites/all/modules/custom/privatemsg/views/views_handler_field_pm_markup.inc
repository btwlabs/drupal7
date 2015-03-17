<?php

/**
 * @file
 * Definition of views_handler_field_pm_markup.
 */

/**
 * A handler to run a field through check_markup, using a companion
 * format field, and with token replacement.
 *
 * - format: (REQUIRED) Either a string format id to use for this field or an
 *           array('field' => {$field}) where $field is the field in this table
 *           used to control the format such as the 'format' field in the node,
 *           which goes with the 'body' field.
 *
 * @ingroup views_field_handlers
 */
class views_handler_field_pm_markup extends views_handler_field_markup {
  /**
   * Constructor; calls to base object constructor.
   */
  function construct() {
    parent::construct();
  }

  function option_definition() {
    $options = parent::option_definition();
    $options['pmid'] = array('default' => '');
    return $options;
  }

  function options_form(&$form, &$form_state) {
    parent::options_form($form, $form_state);
    $form['pmid'] = array(
      '#type' => 'textfield',
      '#title' => t('ID of the Current Privatemsg (REQUIRED for token replacement)'),
      '#description' => t('Enter the replacement-pattern (SEE THEM BELOW) for the field corresponding to the privatemsg id. If this field is not set correctly, then token replacement will not work for the private msg'),
      '#default_value' => $this->options['pmid'],
    );
  }

  function render($values) {
    $value = $this->get_value($values);
    if (is_array($this->format)) {
      $format = $this->get_value($values, 'format');
    }
    else {
      $format = $this->format;
    }
    if ($value) {
      // Only can do token replacement if there is an mid field
      // exposed.
      $pmid = $this->tokenize_value($this->options['pmid']);
      if ($privatemsg = privatemsg_message_load($pmid)) {
        $value = privatemsg_token_replace($value, array('privatemsg_message' => $privatemsg));
      }
      $value = str_replace('<!--break-->', '', $value);
      return check_markup($value, $format, '');
    }
  }
}

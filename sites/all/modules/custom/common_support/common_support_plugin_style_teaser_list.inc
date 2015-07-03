<?php

/**
 * @file
 * Contains the common support teaser list style plugin.
 */

/**
 * Style plugin to render each item in an unordered list with list classes.
 */
class common_support_plugin_style_teaser_list extends views_plugin_style {
  /**
   * Set default options
   */
  function option_definition() {
    $options = parent::option_definition();

    $options['class'] = array('default' => '');
    $options['wrapper_class'] = array('default' => 'item-list');

    return $options;
  }

  /**
   * Render the given style.
   */
  function options_form(&$form, &$form_state) {
    parent::options_form($form, $form_state);
    $form['wrapper_class'] = array(
      '#title' => t('Additional wrapper classes'),
      '#description' => t('Additional classes to provide on the wrapper, outside the list.'),
      '#type' => 'textfield',
      '#size' => '30',
      '#default_value' => $this->options['wrapper_class'],
    );
    $form['class'] = array(
      '#title' => t('Additional list-item class'),
      '#description' => t('Additional classes to provide on the list element itself.'),
      '#type' => 'textfield',
      '#size' => '30',
      '#default_value' => $this->options['class'],
    );
  }
}

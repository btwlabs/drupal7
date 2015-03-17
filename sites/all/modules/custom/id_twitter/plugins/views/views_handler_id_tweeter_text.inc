<?php

/**
 * @file
 * Definition of views_handler_id_tweeter_text.
 */

/**
 * Views area text custom handler.
 *
 * @ingroup views_area_handlers
 */
class views_handler_id_tweeter_text extends views_handler_area_text {

  function option_definition() {
    $options = parent::option_definition();
    return $options;
  }

  function options_form(&$form, &$form_state) {
    parent::options_form($form, $form_state);
    $options = array();
    $options[t('Tokens')]['[site_name]'] = t('Site name');
    $options[t('Tokens')]['[shortUrl]'] = t('Short Url');

    $output = '<p>' . t('The following tokens are available. If you would like to have the characters \'[\' and \']\' please use the html entity codes \'%5B\' or  \'%5D\' or they will get replaced with empty space.' . '</p>');
    foreach (array_keys($options) as $type) {
      if (!empty($options[$type])) {
        $items = array();
        foreach ($options[$type] as $key => $value) {
          $items[] = $key . ' == ' . check_plain($value);
        }
        $output .= theme('item_list',
          array(
            'items' => $items,
            'type' => $type
          ));
      }
    }

    $form['token_help']['#value'] = $output;
  }


  function render($empty = FALSE) {
    $format = isset($this->options['format']) ? $this->options['format'] : filter_default_format();
    if (!$empty || !empty($this->options['empty'])) {
      return $this->render_textarea($this->options['content'], $format);
    }
    return '';
  }

  /**
   * Render a text area, using the proper format.
   */
  function render_textarea($value, $format) {
    if ($value) {
      if ($this->options['tokenize']) {
        $value = $this->_tokenize_value($value);
      }
      return check_markup($value, $format, '', FALSE);
    }
  }

  function _tokenize_value($value) {
    global $base_url;

    $url = shurly_shorten($base_url . '/' . drupal_get_path_alias(current_path()), NULL, user_load(1));
    $tokens = array(
      '[site_name]' => variable_get('site_name', 'White Label'),
      '[shortUrl]' => $url['shortUrl'],
    );
    $value = strtr($value, $tokens);

    return $value;
  }

}

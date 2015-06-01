<?php
/**
 * @file
 * theme.inc
 * Throw preprocess and theme function in this file.
 */

/**
 * Preprocess variables for Le Gate gate theme.
 */
function template_preprocess_le_gate_gate(&$vars) {
  $instructions = variable_get('le_gate_instructions', array('format' => 'filtered_html', 'value' => 'You know what to do...DO IT!'));
  $vars['content']['instructions'] = array(
    '#type' => 'markup',
    '#markup' => $instructions['value'],
  );
  $type = variable_get('le_gate_type', 'buttons');
  switch($type) {
    case 'buttons':
      $vars['content']['buttons'] = array(
        '#type' => 'container',
        '#attributes' => array(
          'class' => 'le-gate-buttons-wrapper',
        ),
      );
      $vars['content']['buttons']['button1'] = array(
        '#theme' => 'link',
        '#path' => variable_get('le_gate_button_1_path', ''),
        '#text' => variable_get('le_gate_button_1_text', 'Yes'),
        '#options' => array(
          'html' => TRUE,
          'attributes' => array(
            'class' => array('le-gate-button-1-link'),
          ),
          //'query' => array('le_gate_redirect' => $redirect_path1),
        ),
      );
      $vars['content']['buttons']['button2'] = array(
        '#theme' => 'link',
        '#path' => variable_get('le_gate_button_2_path', ''),
        '#text' => variable_get('le_gate_button_2_text', 'No'),
        '#options' => array(
          'html' => TRUE,
          'attributes' => array(
            'class' => array('le-gate-button-2-link'),
          ),
        ),
      );
      $cookie_button = variable_get('le_gate_buttons_cookie', 'button1');
      if ($cookie_button == 'button1') {
        $vars['content']['buttons']['button1']['#path'] = LE_GATE_COOKIE_PATH;
        $vars['content']['buttons']['button1']['#options']['query']['le_gate_redirect'] = variable_get('le_gate_button_1_path', '');
      }
      else {
        $vars['content']['buttons']['button2']['#path'] = LE_GATE_COOKIE_PATH;
        $vars['content']['buttons']['button2']['#options']['query']['le_gate_redirect'] = variable_get('le_gate_button_2_path', '');
      }
      break;
    case 'date':
      /*$vars['content']['date'] = array(
        '#type' => 'markup',
        '#markup' => drupal_get_form('le_gate_date_form'),
      );*/
      $vars['content']['date'] = drupal_get_form('le_gate_date_form');
      break;
  }
}

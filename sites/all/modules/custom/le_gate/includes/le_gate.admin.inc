<?php
/**
 * @file
 * le_gate.admin.inc
 *
 * Replace le_gate_entity with the actual entity name.
 */

/**
 * Settings form for le gate.
 */
function le_gate_settings_form($form, &$form_state) {
  // Skip Admin Pages?
  $form['le_gate_skip_admin'] = array(
    '#type' => 'checkbox',
    '#title' => t('Skip Admin?'),
    '#description' => t('If checked then gate will not be set on admin pages (recommended)'),
    '#default_value' => variable_get('le_gate_skip_admin', 1),
  );
  // Page Title.
  $form['le_gate_page_title'] = array(
    '#type' => 'textfield',
    '#title' => t('Page Title'),
    '#description' => t('Configure the title for the gate page'),
    '#default_value' => variable_get('le_gate_page_title', t('Le Gate')),
  );
  // Instructions Text.
  $instructions = variable_get('le_gate_instructions', array('format' => 'filtered_html', 'value' => t('Click yes or no!!')));
  $form['le_gate_instructions'] = array(
    '#type' => 'text_format',
    '#title' => t('Instructions'),
    '#description' => t('Enter what le gate instructions should be'),
    '#default_value' => $instructions['value'],
    '#format' => $instructions['format'],
  );
  $form['le_gate_paths'] = array(
    '#type' => 'textarea',
    '#title' => t('Pages'),
    '#description' => t('Indicate which paths to throw Le Gate in front of. Leave blank for all paths, use ~ to indicate paths to exclude. Use ~ alone to exclude all paths'),
    '#default_value' => variable_get('le_gate_paths'),
  );
  $form['le_gate_message'] = array(
    '#type' => 'textfield',
    '#title' => t('No Pass Message'),
    '#description' => t('Enter a message to be shown to the user if they don\'t pass the gate.'),
    '#default_value' => variable_get('le_gate_message', t('Sorry but you did not pass.')),
  );
  $type = variable_get('le_gate_type', 'buttons');
  $form['le_gate_type'] = array(
    '#type' => 'select',
    '#title' => t('Gate Type'),
    '#description' => t('Select which gate type to use. Two-Button will display 2 configurable buttons (yes/no). Date will present a date select which will pass Le Gate on configurable dates.'),
    '#options' => array('buttons' => t('Buttons'), 'date' => t('Date')),
    '#default_value' => $type,
  );
  // BUTTONS.
  $form['le_gate_type_buttons_options'] = array(
    '#type' => 'fieldset',
    '#title' => t('Buttons Settings'),
    '#states' => array(
      // Hide if buttons not selected,
      'invisible' => array(
        ':input[name="le_gate_type"]' => array('value' => 'date'),
      ),
    ),
  );
  $form['le_gate_type_buttons_options']['le_gate_buttons_cookie'] = array(
    '#type' => 'radios',
    '#title' => t('Cookie Button'),
    '#description' => t('Select which button should set Le gate cookie'),
    '#options' => array(
      'button1' => t('Button 1'),
      'button2' => t('Button 2'),
    ),
    '#default_value' => variable_get('le_gate_buttons_cookie', 'button1'),
  );
  $form['le_gate_type_buttons_options']['button1'] = array(
    '#type' => 'fieldset',
    '#title' => t('Button 1'),
  );
  $form['le_gate_type_buttons_options']['button1']['le_gate_button_1_path'] = array(
    '#type' => 'textfield',
    '#title' => t('Button 1 Path'),
    '#description' => t('Enter the path to redirect to after clicking the first button. Leave blank to stay on the requested page.'),
    '#default_value' => variable_get('le_gate_button_1_path', ''),
  );
  $form['le_gate_type_buttons_options']['button1']['le_gate_button_1_text'] = array(
    '#type' => 'textfield',
    '#title' => t('Button 1 Text'),
    '#description' => t('Enter the text for button 1'),
    '#default_value' => variable_get('le_gate_button_1_text', 'Yes'),
  );
  $form['le_gate_type_buttons_options']['button2'] = array(
    '#type' => 'fieldset',
    '#title' => t('Button 2'),
  );
  $form['le_gate_type_buttons_options']['button2']['le_gate_button_2_path'] = array(
    '#type' => 'textfield',
    '#title' => t('Button 2 Path'),
    '#description' => t('Enter the path to redirect to after clicking the second button. Leave blank to stay on the requested page.'),
    '#default_value' => variable_get('le_gate_button_2_path', ''),
  );
  $form['le_gate_type_buttons_options']['button2']['le_gate_button_2_text'] = array(
    '#type' => 'textfield',
    '#title' => t('Button 2 Text'),
    '#description' => t('Enter the text for button 2'),
    '#default_value' => variable_get('le_gate_button_2_text', 'No'),
  );
  // Date type.
  $form['le_gate_type_date_options'] = array(
    '#type' => 'fieldset',
    '#title' => t('Date Settings'),
    '#states' => array(
      // Hide if buttons not selected,
      'invisible' => array(
        ':input[name="le_gate_type"]' => array('value' => 'buttons'),
      ),
    ),
  );
  $form['le_gate_type_date_options']['le_gate_date_type'] = array(
    '#type' => 'radios',
    '#title' => t('Date Comparison'),
    '#description' => t('Choose which kind of date comparison to make'),
    '#options' => array('before' => t('Before a Date'), 'after' => t('After a Date'), 'between' => t('Between 2 Dates')),
    '#default_value' => variable_get('le_gate_date_type', 'before'),
  );
  $form['le_gate_type_date_options']['le_gate_date_redirect'] = array(
    '#type' => 'textfield',
    '#title' => t('Redirect'),
    '#description' => t('Enter a url to redirect to after successfully passing the gate. Leave blank to stay on the same page requested.'),
    '#default_value' => variable_get('le_gate_date_redirect', ''),
  );
  $form['le_gate_type_date_options']['le_gate_date_1'] = array(
    '#type' => 'date',
    '#title' => t('Date 1'),
    '#description' => t('Select the before/after or first between date (if between is chosen)'),
    '#default_value' => variable_get('le_gate_date_1'),
  );
  $form['le_gate_type_date_options']['le_gate_date_2'] = array(
    '#type' => 'date',
    '#title' => t('Date 2'),
    '#description' => t('Select the second between date. Cookie will be set if the user selects a date between Date 1 and Date 2'),
    '#default_value' => variable_get('le_gate_date_2'),
    '#states' => array(
      'visible' => array(
        ':input[name="le_gate_date_type"]' => array('value' => 'between'),
      )
    )
  );
  return system_settings_form($form);
}

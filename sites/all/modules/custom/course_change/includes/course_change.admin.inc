<?php
/**
 * @file
 * course_change.admin.inc
 *
 * Replace course_change_entity with the actual entity name.
 */


/**
 * Settings form.
 * @todo do something clever with multiple waypoints here.
 */
function course_change_settings_form($form, $form_state) {
  $form['course_change_waypoint_1'] = array(
    '#type' => 'fieldset',
    '#title' => t('Waypoint #1'),
    '#collapsible' => FALSE,
    '#collapsed' => FALSE,
  );
  $form['course_change_waypoint_1']['course_change_waypoint_1_attach_element'] = array(
    '#type' => 'textfield',
    '#title' => t('#1 Waypoint Element Selector'),
    '#description' => t('Enter the DOM selector on which a waypoint will be set.'),
    '#default_value' => variable_get('course_change_waypoint_1_attach_element', ''),
    '#attributes' => array(
      'placeholder' => t("e.g. 'body', or 'div.whatever'"),
    ),
  );
  $form['course_change_waypoint_1']['course_change_waypoint_1_toggle_class'] = array(
    '#type' => 'textfield',
    '#title' => t('#1 Toggle Class'),
    '#description' => t('Enter the name of a class that will toggle on the toggle element.'),
    '#default_value' => variable_get('course_change_waypoint_1_toggle_class', ''),
    '#attributes' => array(
      'placeholder' => t("e.g. 'myclass', 'goo', or 'whatever'"),
    ),
  );
  $form['course_change_waypoint_1']['course_change_waypoint_1_same_element'] = array(
    '#type' => 'checkbox',
    '#title' => t('Toggle on same waypoint element?'),
    '#description' => t('If checked then the configured class will toggle on the same element the waypoint is attached to.'),
    '#default_value' => variable_get('course_change_waypoint_1_same_element', 1),
  );
  $form['course_change_waypoint_1']['course_change_waypoint_1_toggle_element'] = array(
    '#type' => 'textfield',
    '#title' => t('#1 Toggle Element Selector'),
    '#description' => t('Enter the DOM selector that will toggle on the toggle class.'),
    '#default_value' => variable_get('course_change_waypoint_1_toggle_element', ''),
    '#attributes' => array(
      'placeholder' => t("e.g. 'body', or 'div.whatever'"),
    ),
    '#states' => array(
      'invisible' => array(
        ':input[name="course_change_waypoint_1_same_element"]' => array('checked' => TRUE),
      ),
    ),
  );
  $form['course_change_waypoint_1']['course_change_waypoint_1_toggle_offset'] = array(
    '#type' => 'textfield',
    '#title' => t('#1 Toggle Offset'),
    '#description' => t('Enter the percentage of the viewport that the toggle element must pass to trigger the waypoint. Defaults to 0% (top of the view port).'),
    '#default_value' => variable_get('course_change_waypoint_1_toggle_offset', 0),
    '#element_validate' => array('element_validate_number'),
    '#field_suffix' => '%',
  );

  $form['course_change_waypoint_2'] = array(
    '#type' => 'fieldset',
    '#title' => t('Waypoint #2'),
    '#collapsible' => FALSE,
    '#collapsed' => FALSE,
  );
  $form['course_change_waypoint_2']['course_change_waypoint_2_attach_element'] = array(
    '#type' => 'textfield',
    '#title' => t('#2 Waypoint Element Selector'),
    '#description' => t('Enter the DOM selector on which a waypoint will be set.'),
    '#default_value' => variable_get('course_change_waypoint_2_attach_element', ''),
    '#attributes' => array(
      'placeholder' => t("e.g. 'body', or 'div.whatever'"),
    ),
  );
  $form['course_change_waypoint_2']['course_change_waypoint_2_toggle_class'] = array(
    '#type' => 'textfield',
    '#title' => t('#2 Toggle Class'),
    '#description' => t('Enter the name of a class that will toggle on the toggle element.'),
    '#default_value' => variable_get('course_change_waypoint_2_toggle_class', ''),
    '#attributes' => array(
      'placeholder' => t("e.g. 'myclass', 'goo', or 'whatever'"),
    ),
  );
  $form['course_change_waypoint_2']['course_change_waypoint_2_same_element'] = array(
    '#type' => 'checkbox',
    '#title' => t('Toggle on same waypoint element?'),
    '#description' => t('If checked then the configured class will toggle on the same element the waypoint is attached to.'),
    '#default_value' => variable_get('course_change_waypoint_2_same_element', 1),
  );
  $form['course_change_waypoint_2']['course_change_waypoint_2_toggle_element'] = array(
    '#type' => 'textfield',
    '#title' => t('#2 Toggle Element Selector'),
    '#description' => t('Enter the DOM selector that will toggle on the toggle class.'),
    '#default_value' => variable_get('course_change_waypoint_2_toggle_element', ''),
    '#attributes' => array(
      'placeholder' => t("e.g. 'body', or 'div.whatever'"),
    ),
    '#states' => array(
      'invisible' => array(
        ':input[name="course_change_waypoint_2_same_element"]' => array('checked' => TRUE),
      ),
    ),
  );
  $form['course_change_waypoint_2']['course_change_waypoint_2_toggle_offset'] = array(
    '#type' => 'textfield',
    '#title' => t('#2 Toggle Offset'),
    '#description' => t('Enter the percentage of the viewport that the toggle element must pass to trigger the waypoint. Defaults to 0% (top of the view port).'),
    '#default_value' => variable_get('course_change_waypoint_2_toggle_offset', 0),
    '#element_validate' => array('element_validate_number'),
    '#field_suffix' => '%',
  );

  $form['course_change_waypoint_3'] = array(
    '#type' => 'fieldset',
    '#title' => t('Waypoint #3'),
    '#collapsible' => FALSE,
    '#collapsed' => FALSE,
  );
  $form['course_change_waypoint_3']['course_change_waypoint_3_attach_element'] = array(
    '#type' => 'textfield',
    '#title' => t('#3 Waypoint Element Selector'),
    '#description' => t('Enter the DOM selector on which a waypoint will be set.'),
    '#default_value' => variable_get('course_change_waypoint_3_attach_element', ''),
    '#attributes' => array(
      'placeholder' => t("e.g. 'body', or 'div.whatever'"),
    ),
  );
  $form['course_change_waypoint_3']['course_change_waypoint_3_toggle_class'] = array(
    '#type' => 'textfield',
    '#title' => t('#3 Toggle Class'),
    '#description' => t('Enter the name of a class that will toggle on the toggle element.'),
    '#default_value' => variable_get('course_change_waypoint_3_toggle_class', ''),
    '#attributes' => array(
      'placeholder' => t("e.g. 'myclass', 'goo', or 'whatever'"),
    ),
  );
  $form['course_change_waypoint_3']['course_change_waypoint_3_same_element'] = array(
    '#type' => 'checkbox',
    '#title' => t('Toggle on same waypoint element?'),
    '#description' => t('If checked then the configured class will toggle on the same element the waypoint is attached to.'),
    '#default_value' => variable_get('course_change_waypoint_3_same_element', 1),
  );
  $form['course_change_waypoint_3']['course_change_waypoint_3_toggle_element'] = array(
    '#type' => 'textfield',
    '#title' => t('#3 Toggle Element Selector'),
    '#description' => t('Enter the DOM selector that will toggle on the toggle class.'),
    '#default_value' => variable_get('course_change_waypoint_3_toggle_element', ''),
    '#attributes' => array(
      'placeholder' => t("e.g. 'body', or 'div.whatever'"),
    ),
    '#states' => array(
      'invisible' => array(
        ':input[name="course_change_waypoint_3_same_element"]' => array('checked' => TRUE),
      ),
    ),
  );
  $form['course_change_waypoint_3']['course_change_waypoint_3_toggle_offset'] = array(
    '#type' => 'textfield',
    '#title' => t('#3 Toggle Offset'),
    '#description' => t('Enter the percentage of the viewport that the toggle element must pass to trigger the waypoint. Defaults to 0% (top of the view port).'),
    '#default_value' => variable_get('course_change_waypoint_3_toggle_offset', 0),
    '#element_validate' => array('element_validate_number'),
    '#field_suffix' => '%',
  );

  return system_settings_form($form);
}
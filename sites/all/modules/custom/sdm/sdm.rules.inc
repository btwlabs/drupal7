<?php
/**
 * @file
 * sdm.rules.inc
 */

/**
 * Rules integration access callback.
 */
function sdm_rules_access($type, $name) {
  $access = TRUE;
  // Code here will determine if $access == TRUE/FALSE;
  return $access;
}

/**
 * Implements hook_rules_event_info().
 */
function sdm_rules_event_info() {
  $events = array();
  /**
   * Create a rules event info array.
   * Common format:
   * $events['my_event_machine_name'] = array(
   *   'label' => t('My Event'),
   *   'group' => t('My Module Group'),
   *   'variables' => array( [an array of variables this event will provide to rules]
   *     'variable1' => array(
   *       'label' => t('Variable #1'),
   *       'description' => t('Description of Variable #1),
   *       'type' => 'text'/'formatted_text'/'integer' ..., [see hook_rules_data_info()]
   *       'options list' => array('option1', 'option2', ...),
   *       'handler' => 'my_variable_load_handler', [allows you to load the variable in a custom function]
   *     ),
   *     ...
   *   ),
   * );
   */
  return $events;
}

/**
 * Implements hook_rules_condition_info().
 */
function sdm_rules_condition_info() {
  $conditions = array();
  /**
   * Create a rules condition info array.
   * Common format:
   * See hook_rules_action_info below. Implements all of the
   * key-value pairs in that hook, except cannot provide any
   * variables.
   */
  return $conditions;
}

/**
 * Implements hook_rules_action_info().
 */
function sdm_rules_action_info() {
  $actions = array();
  /**
   * Create a rules action info array.
   * Common format:
   * $action['my_rule_action_machine_name'] = array(
   *   'label' => t('My Rule Action'),
   *   'group' => t('My Module Group'),
   *   'parameter' => array(
   *     'my_parameter1' => array(
   *       'label' => t('My Parameter #1'),
   *       'type' => 'text'/'formatted_text'/'integer' ..., [see hook_rules_data_info()]
   *       'options list' => array('option1', 'option2', ...),
   *       'default value' => 'value',
   *       'restriction' => 'selector'/'input', [selector to force data selection, input to force input only]
   *     ),
   *   ),
   *   'provides' => array(
   *     'my_provided_variable1' => array(
   *       'label' => t('My Provided Variable #1'),
   *       'type' => 'text'/'formatted_text'/'integer' ..., [see hook_rules_data_info()]
   *     ),
   *   ),
   *   'callbacks' => array(
   *     'execute' => 'my_rule_action_machine_name_execute',
   *   ),
   * );
   */
  return $actions;
}
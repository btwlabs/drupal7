<?php
/**
 * @file
 * common_support.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function common_support_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'default_ol';
  $context->description = '';
  $context->tag = 'Sitewide & Default';
  $context->conditions = array(
    'default' => array(
      'values' => array(
        'context_condition_default' => 'context_condition_default',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'blockify-blockify-page-title' => array(
          'module' => 'blockify',
          'delta' => 'blockify-page-title',
          'region' => 'content_1',
          'weight' => '-10',
        ),
        'system-main' => array(
          'module' => 'system',
          'delta' => 'main',
          'region' => 'content_1',
          'weight' => '-9',
        ),
      ),
      'layout' => 'unconstrained-1',
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Sitewide & Default');
  $export['default_ol'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'sitewide_blocks';
  $context->description = '';
  $context->tag = 'Sitewide & Default';
  $context->conditions = array(
    'sitewide' => array(
      'values' => array(
        1 => 1,
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(),
    ),
  );
  $context->condition_mode = 0;

// Translatables
// Included for use with string extractors like potx.
  t('Sitewide & Default');
  $export['sitewide_blocks'] = $context;

  return $export;
}

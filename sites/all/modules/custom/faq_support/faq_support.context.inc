<?php
/**
 * @file
 * faq_support.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function faq_support_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'faq_page';
  $context->description = 'Attaches FAQ block to FAQ page';
  $context->tag = 'Node Types & Pages';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'faq' => 'faq',
        'frequently-asked-questions' => 'frequently-asked-questions',
        'about-us/frequently-asked-questions/' => 'about-us/frequently-asked-questions/',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-faqs-block_1' => array(
          'module' => 'views',
          'delta' => 'faqs-block_1',
          'region' => 'content_1',
          'weight' => '-8',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Attaches FAQ block to FAQ page');
  t('Node Types & Pages');
  $export['faq_page'] = $context;

  return $export;
}

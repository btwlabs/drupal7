<?php
/**
 * @file
 * story_blocks.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function story_blocks_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'sample_story_block_frontpage_context';
  $context->description = 'A sample implementation of display story blocks on the front page';
  $context->tag = '';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '<front>' => '<front>',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-sample_display_story_block_page-row1' => array(
          'module' => 'views',
          'delta' => 'sample_display_story_block_page-row1',
          'region' => 'content',
          'weight' => '-10',
        ),
        'views-sample_display_story_block_page-row2' => array(
          'module' => 'views',
          'delta' => 'sample_display_story_block_page-row2',
          'region' => 'content',
          'weight' => '-9',
        ),
        'views-sample_display_story_block_page-row3' => array(
          'module' => 'views',
          'delta' => 'sample_display_story_block_page-row3',
          'region' => 'content',
          'weight' => '-8',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('A sample implementation of display story blocks on the front page');
  $export['sample_story_block_frontpage_context'] = $context;

  return $export;
}
<?php
/**
 * @file
 * edgenet_base.feeds_importer_default.inc
 */

/**
 * Implements hook_feeds_importer_default().
 */
function edgenet_base_feeds_importer_default() {
  $export = array();

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'partner_import';
  $feeds_importer->config = array(
    'name' => 'partner import',
    'description' => 'edgenet partner import',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'txt csv tsv xml opml',
        'direct' => FALSE,
        'directory' => 'public://feeds',
        'allowed_schemes' => array(
          0 => 'public',
        ),
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsCSVParser',
      'config' => array(
        'delimiter' => ',',
        'no_headers' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'expire' => '-1',
        'author' => '3',
        'authorize' => 1,
        'mappings' => array(
          0 => array(
            'source' => 'Partner',
            'target' => 'title',
            'unique' => 1,
          ),
          1 => array(
            'source' => 'product',
            'target' => 'field_product_reference:label',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'logo',
            'target' => 'field_image',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'Quote',
            'target' => 'field_partner_testimonial',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'Quoted',
            'target' => 'field_partner_testimonee',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '2',
        'input_format' => 'plain_text',
        'skip_hash_check' => 0,
        'bundle' => 'partner',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['partner_import'] = $feeds_importer;

  return $export;
}

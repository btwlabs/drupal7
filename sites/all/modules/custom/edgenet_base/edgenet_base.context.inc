<?php
/**
 * @file
 * edgenet_base.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function edgenet_base_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'edgenet_about';
  $context->description = 'Edgenet about page';
  $context->tag = 'edgenet';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'about' => 'about',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-employees-block_1' => array(
          'module' => 'views',
          'delta' => 'employees-block_1',
          'region' => 'content',
          'weight' => '1',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Edgenet about page');
  t('edgenet');
  $export['edgenet_about'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'edgenet_contact';
  $context->description = 'edgenet contact page';
  $context->tag = 'edgenet';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'contact' => 'contact',
        'careers' => 'careers',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'block-7' => array(
          'module' => 'block',
          'delta' => '7',
          'region' => 'sidebar',
          'weight' => '-10',
        ),
      ),
      'layout' => 'sidebar',
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('edgenet');
  t('edgenet contact page');
  $export['edgenet_contact'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'edgenet_home';
  $context->description = 'home page context';
  $context->tag = 'edgenet';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '<front>' => '<front>',
        'home' => 'home',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'block-8' => array(
          'module' => 'block',
          'delta' => '8',
          'region' => 'content_1',
          'weight' => '-10',
        ),
        'block-1' => array(
          'module' => 'block',
          'delta' => '1',
          'region' => 'content_1',
          'weight' => '-9',
        ),
        'views-rotating_banner_images-block' => array(
          'module' => 'views',
          'delta' => 'rotating_banner_images-block',
          'region' => 'content_2',
          'weight' => '-10',
        ),
        'block-2' => array(
          'module' => 'block',
          'delta' => '2',
          'region' => 'content_3',
          'weight' => '-10',
        ),
        'block-5' => array(
          'module' => 'block',
          'delta' => '5',
          'region' => 'content_3',
          'weight' => '-9',
        ),
        'views-products-home_page_block2' => array(
          'module' => 'views',
          'delta' => 'products-home_page_block2',
          'region' => 'content_4',
          'weight' => '-10',
        ),
        'views-products-home_page_sort' => array(
          'module' => 'views',
          'delta' => 'products-home_page_sort',
          'region' => 'content_4',
          'weight' => '-9',
        ),
        'block-3' => array(
          'module' => 'block',
          'delta' => '3',
          'region' => 'content_5',
          'weight' => '-10',
        ),
        'views-partners-block_1' => array(
          'module' => 'views',
          'delta' => 'partners-block_1',
          'region' => 'content_6',
          'weight' => '-10',
        ),
        'views-home_page_articles-block' => array(
          'module' => 'views',
          'delta' => 'home_page_articles-block',
          'region' => 'content_7',
          'weight' => '-10',
        ),
        'block-6' => array(
          'module' => 'block',
          'delta' => '6',
          'region' => 'content_8',
          'weight' => '-10',
        ),
        'webform-client-block-35' => array(
          'module' => 'webform',
          'delta' => 'client-block-35',
          'region' => 'content_8',
          'weight' => '-9',
        ),
      ),
      'layout' => 'home',
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('edgenet');
  t('home page context');
  $export['edgenet_home'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'edgenet_products';
  $context->description = 'custom context for products pages';
  $context->tag = 'edgenet';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'products' => 'products',
        'product-content-cloud' => 'product-content-cloud',
        'product-sales-configurator' => 'product-sales-configurator',
        'outdoor-projects' => 'outdoor-projects',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'webform-client-block-35' => array(
          'module' => 'webform',
          'delta' => 'client-block-35',
          'region' => 'pre_footer',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('custom context for products pages');
  t('edgenet');
  $export['edgenet_products'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'edgenet_sitewide';
  $context->description = 'Sitewide contexts - custom';
  $context->tag = 'edgenet';
  $context->conditions = array(
    'sitewide' => array(
      'values' => array(
        1 => 1,
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'menu-menu-mobile-menu' => array(
          'module' => 'menu',
          'delta' => 'menu-mobile-menu',
          'region' => 'mobile_nav',
          'weight' => '-10',
        ),
        'menu-menu-supplier-menu' => array(
          'module' => 'menu',
          'delta' => 'menu-supplier-menu',
          'region' => 'pre_header',
          'weight' => '-10',
        ),
        'system-main-menu' => array(
          'module' => 'system',
          'delta' => 'main-menu',
          'region' => 'header',
          'weight' => '-10',
        ),
        'menu-menu-footer-links' => array(
          'module' => 'menu',
          'delta' => 'menu-footer-links',
          'region' => 'footer_1',
          'weight' => '-10',
        ),
        'block-4' => array(
          'module' => 'block',
          'delta' => '4',
          'region' => 'footer_1',
          'weight' => '-9',
        ),
        'menu-menu-social-menu' => array(
          'module' => 'menu',
          'delta' => 'menu-social-menu',
          'region' => 'footer_2',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Sitewide contexts - custom');
  t('edgenet');
  $export['edgenet_sitewide'] = $context;

  return $export;
}

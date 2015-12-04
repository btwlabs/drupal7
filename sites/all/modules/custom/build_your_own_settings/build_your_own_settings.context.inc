<?php
/**
 * @file
 * build_your_own_settings.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function build_your_own_settings_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'build-your-own-updesk';
  $context->description = '';
  $context->tag = 'Placeholder Pages';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'node/1536' => 'node/1536',
        'build-your-own-updesk' => 'build-your-own-updesk',
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
        'block-7' => array(
          'module' => 'block',
          'delta' => '7',
          'region' => 'content_1',
          'weight' => '-9',
        ),
      ),
      'layout' => 'constrained-1',
    ),
    'css_path' => array(
      'sites/all/libraries/responsive_tabs' => array(),
      'build-your-own' => array(
        'build-your-own/app/main-page/main-page.css' => 'build-your-own/app/main-page/main-page.css',
      ),
    ),
    'js_path' => array(
      'sites/all/libraries/responsive_tabs' => array(),
      'sites/all/modules/custom/updesk_custom_settings' => array(),
      'build-your-own' => array(
        'build-your-own/app/dependencies/spin.min.js' => 'build-your-own/app/dependencies/spin.min.js',
        'build-your-own/app/main-page/main-page.js' => 'build-your-own/app/main-page/main-page.js',
        'build-your-own/app/dependencies/angular-animate.js' => 'build-your-own/app/dependencies/angular-animate.js',
        'build-your-own/app/dependencies/angular-resource.js' => 'build-your-own/app/dependencies/angular-resource.js',
        'build-your-own/app/dependencies/angular-route.js' => 'build-your-own/app/dependencies/angular-route.js',
        'build-your-own/app/dependencies/promise-tracker.js' => 'build-your-own/app/dependencies/promise-tracker.js',
        'build-your-own/app/dependencies/angular.min.js' => 'build-your-own/app/dependencies/angular.min.js',
        'build-your-own/app/components/options/options.js' => 'build-your-own/app/components/options/options.js',
        'build-your-own/app/components/selections/selections.js' => 'build-your-own/app/components/selections/selections.js',
        'build-your-own/app/components/add2cart/add2cart.js' => 'build-your-own/app/components/add2cart/add2cart.js',
        'build-your-own/app/components/price/price.js' => 'build-your-own/app/components/price/price.js',
        'build-your-own/app/components/perspectives/perspectives.js' => 'build-your-own/app/components/perspectives/perspectives.js',
        'build-your-own/app/app.js' => 'build-your-own/app/app.js',
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Placeholder Pages');
  $export['build-your-own-updesk'] = $context;

  return $export;
}

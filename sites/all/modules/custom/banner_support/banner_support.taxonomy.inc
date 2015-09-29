<?php
/**
 * @file
 * taco3.features.taxonomy.inc
 */

/**
 * Implements hook_default_taxonomy_assets().
 */
function banner_support_default_taxonomy_assets() {
  return array(
    'banner_location' => array(
      'name' => 'Banner Location',
      'machine_name' => 'banner_location',
      'description' => 'Provides a way to differentiate between banners located here and there on the site',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
      'rdf_mapping' => array(
        'rdftype' => array(
          0 => 'skos:ConceptScheme',
        ),
        'name' => array(
          'predicates' => array(
            0 => 'dc:title',
          ),
        ),
        'description' => array(
          'predicates' => array(
            0 => 'rdfs:comment',
          ),
        ),
      ),
    ),
  );
}

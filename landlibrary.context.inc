<?php
/**
 * @file
 * landlibrary.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function landlibrary_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'library-menu-context';
  $context->description = 'Contextually display landlibrary section header menu';
  $context->tag = 'landlibrary';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'library' => 'library',
        'library-reuse' => 'library-reuse',
        'library/sources' => 'library/sources',
        'library/search' => 'library/search',
        'contribute' => 'contribute',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'menu-menu-landlibrary-menu' => array(
          'module' => 'menu',
          'delta' => 'menu-landlibrary-menu',
          'region' => 'section_header',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Contextually display landlibrary section header menu');
  t('landlibrary');
  $export['library-menu-context'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'library-search-context';
  $context->description = 'Contextually display landlibrary search facets';
  $context->tag = 'landlibrary';
  $context->conditions = array(
    'views' => array(
      'values' => array(
        'library_search' => 'library_search',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'facetapi-CRdQRormX5m0TmvMwBibDQWpnh31AZ14' => array(
          'module' => 'facetapi',
          'delta' => 'CRdQRormX5m0TmvMwBibDQWpnh31AZ14',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
        'facetapi-sGPQQ1B148RLu0IoCr75LiqZz48vxg1I' => array(
          'module' => 'facetapi',
          'delta' => 'sGPQQ1B148RLu0IoCr75LiqZz48vxg1I',
          'region' => 'sidebar_second',
          'weight' => '-9',
        ),
        'facetapi-VrQlBtNE3PiCSSnjjuhuvXyG8jnhPg4l' => array(
          'module' => 'facetapi',
          'delta' => 'VrQlBtNE3PiCSSnjjuhuvXyG8jnhPg4l',
          'region' => 'sidebar_second',
          'weight' => '-8',
        ),
        'facetapi-X8TIn4QOMeINnCUfrMQtdvqDrVVN1Od9' => array(
          'module' => 'facetapi',
          'delta' => 'X8TIn4QOMeINnCUfrMQtdvqDrVVN1Od9',
          'region' => 'sidebar_second',
          'weight' => '-7',
        ),
        'facetapi-evqALzz1JolJTkZXhv3VPvzx676EjPS9' => array(
          'module' => 'facetapi',
          'delta' => 'evqALzz1JolJTkZXhv3VPvzx676EjPS9',
          'region' => 'sidebar_second',
          'weight' => '-6',
        ),
        'facetapi-a8EHLK1OBU0rmHSgoBhtwYKGP9A1P13Z' => array(
          'module' => 'facetapi',
          'delta' => 'a8EHLK1OBU0rmHSgoBhtwYKGP9A1P13Z',
          'region' => 'sidebar_second',
          'weight' => '-5',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Contextually display landlibrary search facets');
  t('landlibrary');
  $export['library-search-context'] = $context;

  return $export;
}

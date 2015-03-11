<?php
/**
 * @file
 * landlibrary.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function landlibrary_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-consult-the-library.
  $menus['menu-consult-the-library'] = array(
    'menu_name' => 'menu-consult-the-library',
    'title' => 'Consult the Library',
    'description' => 'The Land Library will be the authoritative virtual repository of land-related information, including peer-reviewed publications, policies, maps, and multimedia content.',
    'language' => 'und',
    'i18n_mode' => 0,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Consult the Library');
  t('The Land Library will be the authoritative virtual repository of land-related information, including peer-reviewed publications, policies, maps, and multimedia content.');


  return $menus;
}

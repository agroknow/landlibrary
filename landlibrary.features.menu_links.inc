<?php
/**
 * @file
 * landlibrary.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function landlibrary_menu_default_menu_links() {
  $landlibrary_menu_items = array(
	  'search' => 'search',
	  'browse' => 'browse',
  );
  $items['library:<front>'] = array(
    'title'		=> 'Home',
    'menu_name'		=> 'landlibrary-menu',
    'type'              => MENU_NORMAL_ITEM,
    'access callback'	=> TRUE,
    'page callback'	=> 'drupal_goto',
    'page arguments'    => array('<front>'),
  );
  $translatables['library'][] = t('Home');
  $i=0;
  foreach ($landlibrary_menu_items as $k => $s) {
    $items['debate/' . $s] = array(
      'title'           => ucfirst(str_replace('_', ' ', $s)),
      'menu_name'       => 'menu-landlibrary-menu',
      'access callback' => TRUE,
      'weight'          => $i++,
      'page callback'   => 'views_page',
      'page arguments'  => array('library', 'page', 1),
    );
    //$translatables['debate'][] = t($items['debate/' . $s]['title']);
  }


  return $menu_links;
}

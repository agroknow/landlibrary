<?php
/**
 * @file
 * landlibrary.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function landlibrary_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "apachesolr" && $api == "apachesolr_environments") {
    return array("version" => "1");
  }
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  if ($module == "elysia_cron" && $api == "default_elysia_cron_rules") {
    return array("version" => "1");
  }
  if ($module == "facetapi" && $api == "facetapi_defaults") {
    return array("version" => "1");
  }
  if ($module == "feeds" && $api == "feeds_importer_default") {
    return array("version" => "1");
  }
  if ($module == "feeds_tamper" && $api == "feeds_tamper_default") {
    return array("version" => "2");
  }
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function landlibrary_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function landlibrary_node_info() {
  $items = array(
    'agris_clone2' => array(
      'name' => t('agris creator preimporter'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'agris_conference_' => array(
      'name' => t('agris conference'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'agris_file_upload_feed' => array(
      'name' => t('Agris file upload feed'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'agris_publisher_file' => array(
      'name' => t('Agris Publisher file'),
      'base' => 'node_content',
      'description' => t('Agris Publisher file preimporter in order to be ingested later all agris content resource'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'agris_publisher_file_feeds' => array(
      'name' => t('Agris Publisher file feeds'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'general_feed' => array(
      'name' => t('general feed'),
      'base' => 'node_content',
      'description' => t('This content type support the fetching feed content in order to be processed and mapped to fields of a preferd-target content type.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'ifpri_batch_file' => array(
      'name' => t('ifpri batch file'),
      'base' => 'node_content',
      'description' => t('A fetcher for IFPRI importer'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'ifpri_file_upload' => array(
      'name' => t('ifpri file upload'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'ifpri_ingestion' => array(
      'name' => t('Ifpri ingestion'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'landlibrary_resource' => array(
      'name' => t('LandLibrary Resource'),
      'base' => 'node_content',
      'description' => t('The main LandLibrary resource which can be a country report, a peer-reviewed publication, a policy document, an analytical study, a map, a high quality blog post, a video or other multimedia content.'),
      'has_title' => '1',
      'title_label' => t('Node Title'),
      'help' => '',
    ),
    'person' => array(
      'name' => t('Person'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'subject_browse' => array(
      'name' => t('Subject Browse'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}

/**
 * Implements hook_view_mode_page_pattern_default().
 */
function landlibrary_view_mode_page_pattern_default() {
  $vmp_config = array();

  $vmp_config[] = array(
    0 => array(
      'content_type' => 'landlibrary_resource',
      'view_mode' => 'default',
      'url_pattern' => '',
      'entity_type' => 'node',
      'show_title' => 0,
      'title' => '',
    ),
  );
  $vmp_config[] = array(
    0 => array(
      'content_type' => 'organization',
      'view_mode' => 'default',
      'url_pattern' => '',
      'entity_type' => 'node',
      'show_title' => 0,
      'title' => '',
    ),
  );
  $vmp_config[] = array(
    0 => array(
      'content_type' => 'organization',
      'view_mode' => 'library_source',
      'url_pattern' => 'content/%/library_source',
      'entity_type' => 'node',
      'show_title' => 1,
      'title' => '[node:title]',
    ),
  );
  return $vmp_config;
}

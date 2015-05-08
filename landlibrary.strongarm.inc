<?php
/**
 * @file
 * landlibrary.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function landlibrary_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'additional_settings__active_tab_agris_clone2';
  $strongarm->value = 'edit-auto-nodetitle';
  $export['additional_settings__active_tab_agris_clone2'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'additional_settings__active_tab_agris_conference_';
  $strongarm->value = 'edit-workflow';
  $export['additional_settings__active_tab_agris_conference_'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'additional_settings__active_tab_agris_file_upload_feed';
  $strongarm->value = 'edit-workflow';
  $export['additional_settings__active_tab_agris_file_upload_feed'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'additional_settings__active_tab_agris_publisher_file';
  $strongarm->value = 'edit-auto-nodetitle';
  $export['additional_settings__active_tab_agris_publisher_file'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'additional_settings__active_tab_agris_publisher_file_feeds';
  $strongarm->value = 'edit-auto-nodetitle';
  $export['additional_settings__active_tab_agris_publisher_file_feeds'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'additional_settings__active_tab_general_feed';
  $strongarm->value = 'edit-workflow';
  $export['additional_settings__active_tab_general_feed'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'additional_settings__active_tab_ifpri_batch_file';
  $strongarm->value = 'edit-workflow';
  $export['additional_settings__active_tab_ifpri_batch_file'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'additional_settings__active_tab_ifpri_file_upload';
  $strongarm->value = 'edit-workflow';
  $export['additional_settings__active_tab_ifpri_file_upload'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'additional_settings__active_tab_ifpri_ingestion';
  $strongarm->value = 'edit-workflow';
  $export['additional_settings__active_tab_ifpri_ingestion'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'additional_settings__active_tab_landlibrary_resource';
  $strongarm->value = 'edit-auto-nodetitle';
  $export['additional_settings__active_tab_landlibrary_resource'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'additional_settings__active_tab_organization';
  $strongarm->value = 'edit-workflow';
  $export['additional_settings__active_tab_organization'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'additional_settings__active_tab_person';
  $strongarm->value = 'edit-comment';
  $export['additional_settings__active_tab_person'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'additional_settings__active_tab_subject_browse';
  $strongarm->value = 'edit-workflow';
  $export['additional_settings__active_tab_subject_browse'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'additional_settings__active_tab_subject_browse_item';
  $strongarm->value = 'edit-workflow';
  $export['additional_settings__active_tab_subject_browse_item'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'admin_theme';
  $strongarm->value = 'seven';
  $export['admin_theme'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ant_agris_clone2';
  $strongarm->value = '0';
  $export['ant_agris_clone2'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ant_agris_conference_';
  $strongarm->value = '0';
  $export['ant_agris_conference_'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ant_agris_file_upload_feed';
  $strongarm->value = '0';
  $export['ant_agris_file_upload_feed'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ant_agris_publisher_file';
  $strongarm->value = '0';
  $export['ant_agris_publisher_file'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ant_agris_publisher_file_feeds';
  $strongarm->value = '0';
  $export['ant_agris_publisher_file_feeds'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ant_general_feed';
  $strongarm->value = '0';
  $export['ant_general_feed'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ant_ifpri_batch_file';
  $strongarm->value = '0';
  $export['ant_ifpri_batch_file'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ant_ifpri_file_upload';
  $strongarm->value = '0';
  $export['ant_ifpri_file_upload'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ant_ifpri_ingestion';
  $strongarm->value = '0';
  $export['ant_ifpri_ingestion'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ant_landlibrary_resource';
  $strongarm->value = '0';
  $export['ant_landlibrary_resource'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ant_organization';
  $strongarm->value = '0';
  $export['ant_organization'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ant_pattern_agris_clone2';
  $strongarm->value = '';
  $export['ant_pattern_agris_clone2'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ant_pattern_agris_conference_';
  $strongarm->value = '';
  $export['ant_pattern_agris_conference_'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ant_pattern_agris_file_upload_feed';
  $strongarm->value = '';
  $export['ant_pattern_agris_file_upload_feed'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ant_pattern_agris_publisher_file';
  $strongarm->value = '';
  $export['ant_pattern_agris_publisher_file'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ant_pattern_agris_publisher_file_feeds';
  $strongarm->value = '';
  $export['ant_pattern_agris_publisher_file_feeds'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ant_pattern_general_feed';
  $strongarm->value = '';
  $export['ant_pattern_general_feed'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ant_pattern_ifpri_batch_file';
  $strongarm->value = '';
  $export['ant_pattern_ifpri_batch_file'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ant_pattern_ifpri_file_upload';
  $strongarm->value = '';
  $export['ant_pattern_ifpri_file_upload'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ant_pattern_ifpri_ingestion';
  $strongarm->value = '';
  $export['ant_pattern_ifpri_ingestion'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ant_pattern_landlibrary_resource';
  $strongarm->value = '[node:field_doc_title]';
  $export['ant_pattern_landlibrary_resource'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ant_pattern_organization';
  $strongarm->value = '';
  $export['ant_pattern_organization'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ant_pattern_person';
  $strongarm->value = '';
  $export['ant_pattern_person'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ant_pattern_subject_browse';
  $strongarm->value = '';
  $export['ant_pattern_subject_browse'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ant_pattern_subject_browse_item';
  $strongarm->value = '';
  $export['ant_pattern_subject_browse_item'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ant_person';
  $strongarm->value = '0';
  $export['ant_person'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ant_php_agris_clone2';
  $strongarm->value = 0;
  $export['ant_php_agris_clone2'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ant_php_agris_conference_';
  $strongarm->value = 0;
  $export['ant_php_agris_conference_'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ant_php_agris_file_upload_feed';
  $strongarm->value = 0;
  $export['ant_php_agris_file_upload_feed'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ant_php_agris_publisher_file';
  $strongarm->value = 0;
  $export['ant_php_agris_publisher_file'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ant_php_agris_publisher_file_feeds';
  $strongarm->value = 0;
  $export['ant_php_agris_publisher_file_feeds'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ant_php_general_feed';
  $strongarm->value = 0;
  $export['ant_php_general_feed'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ant_php_ifpri_batch_file';
  $strongarm->value = 0;
  $export['ant_php_ifpri_batch_file'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ant_php_ifpri_file_upload';
  $strongarm->value = 0;
  $export['ant_php_ifpri_file_upload'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ant_php_ifpri_ingestion';
  $strongarm->value = 0;
  $export['ant_php_ifpri_ingestion'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ant_php_landlibrary_resource';
  $strongarm->value = 0;
  $export['ant_php_landlibrary_resource'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ant_php_organization';
  $strongarm->value = 0;
  $export['ant_php_organization'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ant_php_person';
  $strongarm->value = 0;
  $export['ant_php_person'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ant_php_subject_browse';
  $strongarm->value = 0;
  $export['ant_php_subject_browse'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ant_php_subject_browse_item';
  $strongarm->value = 0;
  $export['ant_php_subject_browse_item'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ant_subject_browse';
  $strongarm->value = '0';
  $export['ant_subject_browse'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ant_subject_browse_item';
  $strongarm->value = '0';
  $export['ant_subject_browse_item'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'apachesolr_default_environment';
  $strongarm->value = 'solr';
  $export['apachesolr_default_environment'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'apachesolr_search_mlt_blocks';
  $strongarm->value = array(
    'mlt-001' => array(
      'name' => 'More like this',
      'num_results' => '5',
      'mlt_fl' => array(
        'label' => 'label',
        'taxonomy_names' => 'taxonomy_names',
      ),
      'mlt_env_id' => 'solr',
      'mlt_mintf' => '1',
      'mlt_mindf' => '1',
      'mlt_minwl' => '3',
      'mlt_maxwl' => '15',
      'mlt_maxqt' => '20',
      'mlt_type_filters' => array(),
      'mlt_custom_filters' => '',
      'delta' => 'mlt-001',
    ),
  );
  $export['apachesolr_search_mlt_blocks'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'apachesolr_site_hash';
  $strongarm->value = 'fdaebq';
  $export['apachesolr_site_hash'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_fao_docs_feed';
  $strongarm->value = 0;
  $export['comment_anonymous_fao_docs_feed'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_fao_preimport_authors';
  $strongarm->value = 0;
  $export['comment_anonymous_fao_preimport_authors'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_fao_publications_feed';
  $strongarm->value = 0;
  $export['comment_anonymous_fao_publications_feed'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_page';
  $strongarm->value = 0;
  $export['comment_anonymous_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_fao_docs_feed';
  $strongarm->value = 1;
  $export['comment_default_mode_fao_docs_feed'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_fao_preimport_authors';
  $strongarm->value = 1;
  $export['comment_default_mode_fao_preimport_authors'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_fao_publications_feed';
  $strongarm->value = 1;
  $export['comment_default_mode_fao_publications_feed'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_page';
  $strongarm->value = 0;
  $export['comment_default_mode_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_fao_docs_feed';
  $strongarm->value = '50';
  $export['comment_default_per_page_fao_docs_feed'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_fao_preimport_authors';
  $strongarm->value = '50';
  $export['comment_default_per_page_fao_preimport_authors'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_fao_publications_feed';
  $strongarm->value = '50';
  $export['comment_default_per_page_fao_publications_feed'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_page';
  $strongarm->value = '50';
  $export['comment_default_per_page_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_fao_docs_feed';
  $strongarm->value = '2';
  $export['comment_fao_docs_feed'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_fao_preimport_authors';
  $strongarm->value = '2';
  $export['comment_fao_preimport_authors'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_fao_publications_feed';
  $strongarm->value = '2';
  $export['comment_fao_publications_feed'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_fao_docs_feed';
  $strongarm->value = 1;
  $export['comment_form_location_fao_docs_feed'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_fao_preimport_authors';
  $strongarm->value = 1;
  $export['comment_form_location_fao_preimport_authors'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_fao_publications_feed';
  $strongarm->value = 1;
  $export['comment_form_location_fao_publications_feed'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_page';
  $strongarm->value = 1;
  $export['comment_form_location_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_page';
  $strongarm->value = '1';
  $export['comment_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_fao_docs_feed';
  $strongarm->value = '1';
  $export['comment_preview_fao_docs_feed'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_fao_preimport_authors';
  $strongarm->value = '1';
  $export['comment_preview_fao_preimport_authors'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_fao_publications_feed';
  $strongarm->value = '1';
  $export['comment_preview_fao_publications_feed'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_page';
  $strongarm->value = '1';
  $export['comment_preview_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_fao_docs_feed';
  $strongarm->value = 1;
  $export['comment_subject_field_fao_docs_feed'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_fao_preimport_authors';
  $strongarm->value = 1;
  $export['comment_subject_field_fao_preimport_authors'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_fao_publications_feed';
  $strongarm->value = 1;
  $export['comment_subject_field_fao_publications_feed'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_landlibrary_resource';
  $strongarm->value = 1;
  $export['comment_subject_field_landlibrary_resource'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_page';
  $strongarm->value = 0;
  $export['comment_subject_field_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'context_block_rebuild_needed';
  $strongarm->value = TRUE;
  $export['context_block_rebuild_needed'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cron_key';
  $strongarm->value = '-eBZw9qC7ECXzjmM-QPU8EFEKOtB1PEOaN7m9vsGOfM';
  $export['cron_key'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cron_last';
  $strongarm->value = 1431097549;
  $export['cron_last'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cron_safe_threshold';
  $strongarm->value = '3600';
  $export['cron_safe_threshold'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'css_js_query_string';
  $strongarm->value = 'no19ou';
  $export['css_js_query_string'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ctools_last_cron';
  $strongarm->value = 1431068956;
  $export['ctools_last_cron'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_api_version';
  $strongarm->value = '7.2';
  $export['date_api_version'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_default_timezone';
  $strongarm->value = 'Europe/Rome';
  $export['date_default_timezone'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_views_day_format_without_year';
  $strongarm->value = 'l, F j';
  $export['date_views_day_format_without_year'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_views_day_format_with_year';
  $strongarm->value = 'l, F j, Y';
  $export['date_views_day_format_with_year'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_views_month_format_without_year';
  $strongarm->value = 'F';
  $export['date_views_month_format_without_year'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_views_month_format_with_year';
  $strongarm->value = 'F Y';
  $export['date_views_month_format_with_year'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_views_week_format_without_year';
  $strongarm->value = 'F j';
  $export['date_views_week_format_without_year'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_views_week_format_with_year';
  $strongarm->value = 'F j, Y';
  $export['date_views_week_format_with_year'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'dblog_row_limit';
  $strongarm->value = '1000';
  $export['dblog_row_limit'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'default_feeds_importer';
  $strongarm->value = array(
    'agris_conference_preimporter' => FALSE,
    'agris_dump_file_upload_importer' => TRUE,
    'agris_filter' => FALSE,
    'agris_organization_preimporter' => FALSE,
    'clone2_agris_file' => FALSE,
    'countries_taxonomy_iso_and_external_uris_importer' => FALSE,
    'ifpri_batch_file_importer' => FALSE,
    'ifpri_creator_preimporter' => FALSE,
    'oai_pmh_importer' => FALSE,
    'rss_usaid_commentary_importer' => FALSE,
    'rss_usaid_issue_briefs_importer_' => FALSE,
    'node' => FALSE,
    'user' => FALSE,
    'feed' => FALSE,
    'opml' => FALSE,
    'clone_agris_file' => TRUE,
  );
  $export['default_feeds_importer'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'default_feeds_tamper';
  $strongarm->value = array(
    'ifpri_ingestion-xpathparser_6-implode' => TRUE,
    'ifpri_ingestion-xpathparser_8-html_entity_decode' => FALSE,
    'ifpri_ingestion-xpathparser_3-html_entity_decode' => FALSE,
    'ifpri_ingestion-xpathparser_6-find_replace' => TRUE,
    'ifpri_ingestion-xpathparser_6-implode_questionmark' => TRUE,
    'ifpri_ingestion-xpathparser_6-explode' => FALSE,
    'ifpri_ingestion-xpathparser_6-reduce_to_single_element' => TRUE,
    'ifpri_ingestion-xpathparser_14-reduce_to_single_element' => TRUE,
    'ifpri_set_p15738coll3-xpathparser_14-reduce_to_single_element' => FALSE,
    'ifpri_set_p15738coll3-xpathparser_6-efq_finder' => TRUE,
    'ifpri_set_p15738coll3-xpathparser_6-reduce_to_single_element' => FALSE,
    'ifpri_ingestion-xpathparser_6-reduce_to_single_element1' => TRUE,
    'agris-xpathparser_0-strip_tags' => FALSE,
    'agris-xpathparser_0-html_entity_decode' => FALSE,
    'agris-xpathparser_1-html_entity_decode' => FALSE,
    'agris-xpathparser_1-strip_tags' => FALSE,
    'agris-xpathparser_2-strip_tags' => FALSE,
    'agris-xpathparser_0-find_replace_regex' => FALSE,
    'agris-xpathparser_1-find_replace_regex' => FALSE,
    'agris-xpathparser_2-find_replace_regex' => FALSE,
    'agris-xpathparser_3-strip_tags' => FALSE,
    'agris-xpathparser_3-html_entity_decode' => FALSE,
    'agris-xpathparser_4-strip_tags' => FALSE,
    'agris-xpathparser_4-html_entity_decode' => FALSE,
    'agris-xpathparser_4-find_replace_regex' => FALSE,
    'agris-xpathparser_5-hash' => TRUE,
    'ifpri_ingestion-xpathparser_9-strip_tags' => FALSE,
    'ifpri_ingestion-xpathparser_9-html_entity_decode' => FALSE,
    'ifpri_ingestion-xpathparser_12-strip_tags' => TRUE,
    'ifpri_ingestion-xpathparser_11-strip_tags' => TRUE,
    'agris-xpathparser_13-required' => TRUE,
    'ifpri_ingestion-xpathparser_0-html_entity_decode' => FALSE,
    'ifpri_ingestion-xpathparser_1-html_entity_decode' => FALSE,
    'ifpri_ingestion-xpathparser_12-strip_tags12' => FALSE,
    'ifpri_ingestion-xpathparser_21-explode' => TRUE,
    'ifpri_ingestion-xpathparser_21-implode' => TRUE,
    'ifpri_ingestion-xpathparser_22-explode' => TRUE,
    'ifpri_ingestion-xpathparser_23-sprintf' => FALSE,
    'agris-xpathparser_18-strip_tags' => FALSE,
    'agris-xpathparser_18-find_replace_regex' => FALSE,
    'agris-xpathparser_18-explode' => FALSE,
    'agris-xpathparser_15-sprintf' => FALSE,
    'agris_filter-xpathparser_0-strip_tags' => TRUE,
    'agris_filter-xpathparser_0-html_entity_decode' => TRUE,
    'agris_filter-xpathparser_0-find_replace_regex' => TRUE,
    'agris_filter-xpathparser_1-strip_tags' => TRUE,
    'agris_filter-xpathparser_1-html_entity_decode' => TRUE,
    'agris_filter-xpathparser_1-find_replace_regex' => TRUE,
    'agris_filter-xpathparser_3-html_entity_decode' => FALSE,
    'agris_filter-xpathparser_2-find_replace_regex' => TRUE,
    'agris_filter-xpathparser_2-strip_tags' => TRUE,
    'agris_filter-xpathparser_3-strip_tags' => FALSE,
    'agris_filter-xpathparser_4-find_replace_regex' => TRUE,
    'agris_filter-xpathparser_4-strip_tags' => TRUE,
    'agris_filter-xpathparser_7-sprintf' => TRUE,
    'agris_filter-xpathparser_9-strip_tags' => TRUE,
    'agris_filter-xpathparser_9-find_replace_regex' => TRUE,
    'agris_filter-xpathparser_9-explode' => FALSE,
    'clone_agris_file-xpathparser_9-strip_tags' => FALSE,
    'clone_agris_file-xpathparser_0-strip_tags' => FALSE,
    'clone_agris_file-xpathparser_0-html_entity_decode' => FALSE,
    'clone_agris_file-xpathparser_1-strip_tags' => FALSE,
    'clone_agris_file-xpathparser_1-html_entity_decode' => FALSE,
    'clone_agris_file-xpathparser_9-string2id' => FALSE,
    'clone2_agris_file-xpathparser_0-strip_tags' => TRUE,
    'clone2_agris_file-xpathparser_0-html_entity_decode' => FALSE,
    'clone2_agris_file-xpathparser_1-strip_tags' => TRUE,
    'clone2_agris_file-xpathparser_2-strip_tags' => FALSE,
    'clone2_agris_file-xpathparser_3-hash' => FALSE,
    'clone2_agris_file-xpathparser_3-strip_tags' => TRUE,
    'clone2_agris_file-xpathparser_2-hash' => TRUE,
    'clone2_agris_file-xpathparser_5-strip_tags' => TRUE,
    'clone_agris_file-xpathparser_8-find_replace_regex' => FALSE,
    'clone2_agris_file-xpathparser_1-explode' => TRUE,
    'clone2_agris_file-xpathparser_5-explode' => TRUE,
    'clone2_agris_file-xpathparser_1-reduce_to_single_element' => TRUE,
    'clone2_agris_file-xpathparser_5-reduce_to_single_element' => TRUE,
    'clone2_agris_file-xpathparser_1-find_replace' => FALSE,
    'clone_agris_file-xpathparser_10-strip_tags' => FALSE,
    'clone_agris_file-xpathparser_10-string2id' => FALSE,
    'agris_organization_preimporter-xpathparser_0-strip_tags' => TRUE,
    'agris_organization_preimporter-xpathparser_0-html_entity_decode' => TRUE,
    'agris_organization_preimporter-xpathparser_0-find_replace' => TRUE,
    'agris_organization_preimporter-xpathparser_1-strip_tags' => FALSE,
    'agris_organization_preimporter-xpathparser_1-html_entity_decode' => FALSE,
    'agris_organization_preimporter-xpathparser_0-copy' => TRUE,
    'agris_organization_preimporter-xpathparser_1-copy' => TRUE,
    'agris_organization_preimporter-xpathparser_1-required' => TRUE,
    'agris_organization_preimporter-xpathparser_1-rewrite' => TRUE,
    'agris_organization_preimporter-xpathparser_0-rewrite' => TRUE,
    'agris_organization_preimporter-xpathparser_0-find_replace_regex' => TRUE,
    'agris_organization_preimporter-xpathparser_0-strip_tags2' => TRUE,
    'agris_organization_preimporter-xpathparser_0-find_replaces' => TRUE,
    'agris_organization_preimporter-xpathparser_1-find_replace' => FALSE,
    'agris_organization_preimporter-xpathparser_1-find_replaces' => FALSE,
    'agris_filter-xpathparser_0-find_replace' => TRUE,
    'agris_filter-xpathparser_1-find_replace' => FALSE,
    'agris_filter-xpathparser_2-find_replace' => FALSE,
    'agris_filter-xpathparser_3-find_replace' => FALSE,
    'agris_filter-xpathparser_4-find_replace' => TRUE,
    'agris_filter-xpathparser_5-find_replace' => FALSE,
    'agris_filter-xpathparser_5-find_replaces' => FALSE,
    'agris_filter-xpathparser_6-find_replace' => FALSE,
    'agris_filter-xpathparser_6-find_replaces' => FALSE,
    'agris_filter-xpathparser_7-find_replace' => TRUE,
    'agris_filter-xpathparser_7-find_replaces' => TRUE,
    'agris_filter-xpathparser_8-find_replace' => FALSE,
    'agris_filter-xpathparser_8-find_replaces' => FALSE,
    'agris_filter-xpathparser_9-find_replace' => FALSE,
    'agris_filter-xpathparser_9-find_replaces' => FALSE,
    'agris_filter-xpathparser_10-find_replace' => FALSE,
    'agris_filter-xpathparser_10-find_replaces' => FALSE,
    'agris_filter-xpathparser_0-find_replaces' => TRUE,
    'agris_filter-xpathparser_1-find_replaces' => FALSE,
    'agris_filter-xpathparser_2-find_replaces' => FALSE,
    'agris_filter-xpathparser_3-find_replaces' => FALSE,
    'agris_filter-xpathparser_4-find_replaces' => TRUE,
    'agris_filter-xpathparser_6-html_entity_decode' => FALSE,
    'agris_filter-xpathparser_2-html_entity_decode' => FALSE,
    'agris_filter-xpathparser_8-html_entity_decode' => FALSE,
    'agris_filter-xpathparser_4-html_entity_decode' => TRUE,
    'agris_filter-xpathparser_5-html_entity_decode' => FALSE,
    'agris_filter-xpathparser_9-html_entity_decode' => FALSE,
    'agris_filter-xpathparser_10-html_entity_decode' => TRUE,
    'clone2_agris_file-xpathparser_0-find_replace' => TRUE,
    'clone2_agris_file-xpathparser_0-find_replaces' => FALSE,
    'clone2_agris_file-xpathparser_5-find_replace' => FALSE,
    'clone2_agris_file-xpathparser_1-find_replacea' => FALSE,
    'clone2_agris_file-xpathparser_5-find_replaces' => FALSE,
    'clone2_agris_file-xpathparser_1-find_replaces' => FALSE,
    'clone2_agris_file-xpathparser_5-html_entity_decode' => FALSE,
    'clone2_agris_file-xpathparser_1-html_entity_decode' => FALSE,
    'agris_filter-xpathparser_11-find_replace' => TRUE,
    'agris_filter-xpathparser_11-find_replaces' => TRUE,
    'agris_filter-xpathparser_11-html_entity_decode' => TRUE,
    'agris_conference_preimporter-xpathparser_0-find_replace' => FALSE,
    'agris_conference_preimporter-xpathparser_0-find_replaces' => FALSE,
    'agris_conference_preimporter-xpathparser_0-html_entity_decode' => FALSE,
    'agris_filter-xpathparser_4-default_value' => FALSE,
    'clone2_agris_file-xpathparser_0-implode' => FALSE,
    'clone2_agris_file-xpathparser_1-implode' => FALSE,
    'clone2_agris_file-xpathparser_5-implode' => FALSE,
    'clone2_agris_file-xpathparser_0-truncate_text' => FALSE,
    'clone2_agris_file-xpathparser_1-truncate_text' => FALSE,
    'agris_filter-xpathparser_11-implode' => TRUE,
    'agris_filter-xpathparser_11-truncate_text' => TRUE,
    'clone2_agris_file-xpathparser_5-truncate_text' => FALSE,
    'agris_conference_preimporter-xpathparser_0-truncate_text' => FALSE,
    'agris_filter-parent_taxonomy_languages-copy' => TRUE,
    'agris_filter-xpathparser_12-default_value' => FALSE,
    'ifpri_ingestion-xpathparser_26-default_value' => FALSE,
    'ifpri_batch_file_importer-xpathparser_0-html_entity_decode' => FALSE,
    'ifpri_batch_file_importer-xpathparser_1-html_entity_decode' => FALSE,
    'ifpri_batch_file_importer-xpathparser_5-explode' => FALSE,
    'ifpri_batch_file_importer-xpathparser_15-default_value' => FALSE,
    'ifpri_batch_file_importer-xpathparser_6-html_entity_decode' => FALSE,
    'ifpri_batch_file_importer-xpathparser_16-sprintf' => FALSE,
    'ifpri_creator_preimporter-xpathparser_0-find_replace' => TRUE,
    'ifpri_creator_preimporter-xpathparser_1-find_replace' => TRUE,
    'agris_filter-xpathparser_14-find_replace' => FALSE,
    'agris_filter-xpathparser_14-find_replace1' => FALSE,
    'agris_filter-xpathparser_15-find_replace' => TRUE,
    'agris_filter-xpathparser_15-find_replace1' => TRUE,
    'agris_filter-xpathparser_12-default_valuefao' => TRUE,
    'agris_filter-xpathparser_2-explode' => FALSE,
    'agris_filter-xpathparser_2-array_filter' => FALSE,
    'agris_filter-xpathparser_6-array_filter' => FALSE,
    'ifpri_creator_preimporter-xpathparser_0-explode' => FALSE,
    'ifpri_creator_preimporter-xpathparser_1-explode' => TRUE,
    'agris_filter-xpathparser_2-php_code' => TRUE,
    'agris_filter-xpathparser_2-find_replace1' => TRUE,
    'agris_filter-xpathparser_4-required' => FALSE,
    'agris_filter-xpathparser_3-required' => FALSE,
    'ifpri_creator_preimporter-xpathparser_0-reduce_to_single_element' => TRUE,
    'ifpri_creator_preimporter-xpathparser_0-keyword_filter' => FALSE,
    'ifpri_batch_file_importer-xpathparser_6-keyword_filter' => TRUE,
    'ifpri_batch_file_importer-xpathparser_6-required' => FALSE,
    'ifpri_batch_file_importer-xpathparser_7-strip_tags' => FALSE,
    'ifpri_batch_file_importer-xpathparser_7-html_entity_decode' => FALSE,
    'ifpri_creator_preimporter2-xpathparser_0-explode' => FALSE,
    'ifpri_creator_preimporter2-xpathparser_0-reduce_to_single_element' => FALSE,
    'ifpri_creator_preimporter2-xpathparser_0-keyword_filter' => TRUE,
    'ifpri_creator_preimporter2-xpathparser_0-find_replace' => FALSE,
    'ifpri_creator_preimporter2-xpathparser_2-find_replace' => FALSE,
    'ifpri_batch_file_importer-xpathparser_13-keyword_filter' => TRUE,
    'ifpri_batch_file_importer-xpathparser_14-keyword_filter' => TRUE,
    'ifpri_batch_file_importer-xpathparser_19-required' => FALSE,
    'ifpri_creator_preimporter2-xpathparser_2-find_replace1' => FALSE,
    'ifpri_creator_preimporter2-xpathparser_2-find_replace3' => FALSE,
    'ifpri_creator_preimporter2-xpathparser_2-explode' => FALSE,
    'ifpri_creator_preimporter2-xpathparser_2-reduce_to_single_element' => FALSE,
    'ifpri_batch_file_importer-xpathparser_7-required' => FALSE,
    'ifpri_batch_file_importer-xpathparser_12-explode' => FALSE,
    'ifpri_batch_file_importer-xpathparser_12-reduce_to_single_element' => FALSE,
    'ifpri_batch_file_importer-xpathparser_20-explode' => FALSE,
    'ifpri_batch_file_importer-xpathparser_20-reduce_to_single_element' => TRUE,
    'ifpri_batch_file_importer-xpathparser_4-find_replace' => FALSE,
    'ifpri_batch_file_importer-xpathparser_4-explode' => FALSE,
    'ifpri_batch_file_importer-xpathparser_4-reduce_to_single_element' => FALSE,
    'legacy_ll_crawler-xpathparser_9-strip_tags' => FALSE,
    'legacy_ll_crawler-xpathparser_9-html_entity_decode' => FALSE,
    'legacy_ll_crawler-xpathparser_4-strip_tags' => FALSE,
    'legacy_ll_crawler-xpathparser_5-find_replace' => FALSE,
    'legacy_ll_crawler-xpathparser_6-find_replace' => FALSE,
    'legacy_ll_crawler-xpathparser_5-html_entity_decode' => FALSE,
    'legacy_ll_crawler-xpathparser_6-html_entity_decode' => FALSE,
    'legacy_ll_crawler-xpathparser_8-html_entity_encode' => FALSE,
    'legacy_ll_crawler-xpathparser_3-strip_tags' => FALSE,
    'legacy_ll_crawler-xpathparser_3-html_entity_decode' => FALSE,
    'legacy_ll_crawler-xpathparser_4-html_entity_decode' => FALSE,
    'legacy_ll_crawler-xpathparser_7-html_entity_decode' => FALSE,
    'legacy_ll_crawler-xpathparser_8-html_entity_decode' => FALSE,
    'legacy_ll_crawler-xpathparser_11-html_entity_decode' => FALSE,
    'legacy_ll_crawler-xpathparser_11-strtotime' => FALSE,
    'ifpri_batch_file_importer-xpathparser_21-strip_tags' => FALSE,
    'ifpri_batch_file_importer-xpathparser_21-html_entity_decode' => FALSE,
    'ifpri_batch_file_importer-xpathparser_21-required' => FALSE,
    'ingest_from_oai_data_source-language-required' => FALSE,
    'ingest_from_oai_data_source-description-required' => FALSE,
    'ingest_from_oai_data_source-title-required' => FALSE,
    'agris_filter-xpathparser_17-required' => FALSE,
    'agris_filter-xpathparser_16-required' => TRUE,
    'rss_usaid_issue_briefs_importer_-description-required' => FALSE,
    'rss_usaid_issue_briefs_importer_-description-strip_tags' => FALSE,
    'rss_usaid_issue_briefs_importer_-description-html_entity_decode' => FALSE,
    'rss_usaid_issue_briefs_importer_-blank_source_3-default_value' => FALSE,
    'rss_usaid_issue_briefs_importer_-blank_source_1-default_value' => FALSE,
    'rss_usaid_issue_briefs_importer_-blank_source_2-default_value' => FALSE,
    'rss_usaid_issue_briefs_importer_-guid-explode' => FALSE,
    'rss_usaid_issue_briefs_importer_-guid-reduce_to_single_element' => FALSE,
    'rss_usaid_commentary_importer-description-strip_tags' => FALSE,
    'rss_usaid_commentary_importer-description-html_entity_decode' => FALSE,
    'rss_usaid_commentary_importer-title-required' => FALSE,
    'rss_usaid_commentary_importer-title-strip_tags' => FALSE,
    'rss_usaid_commentary_importer-guid-explode' => FALSE,
    'rss_usaid_commentary_importer-guid-reduce_to_single_element' => FALSE,
    'rss_usaid_commentary_importer-blank_source_1-default_value' => FALSE,
    'rss_usaid_commentary_importer-blank_source_3-default_value' => FALSE,
    'rss_usaid_commentary_importer-description-required' => FALSE,
    'rss_usaid_commentary_importer-url-required' => FALSE,
    'rss_usaid_commentary_importer-blank_source_2-default_value' => FALSE,
    'ifpri_creator_preimporter-xpathparser_0-find_replace1' => FALSE,
    'ifpri_creator_preimporter-xpathparser_0-find_replace3' => FALSE,
    'ifpri_creator_preimporter-xpathparser_1-reduce_to_single_element' => TRUE,
    'agris_conference_preimporter-xpathparser_0-find_replace2' => FALSE,
    'agris_conference_preimporter-xpathparser_1-string2id' => FALSE,
    'clone2_agris_file-xpathparser_0-find_replacew' => TRUE,
    'clone2_agris_file-xpathparser_1-find_replaceq' => FALSE,
    'clone2_agris_file-xpathparser_0-explode' => TRUE,
    'clone2_agris_file-xpathparser_0-reduce_to_single_element' => TRUE,
    'clone2_agris_file-xpathparser_5-find_replacef' => FALSE,
    'agris_organization_preimporter-xpathparser_1-explode' => TRUE,
    'agris_organization_preimporter-xpathparser_1-reduce_to_single_element' => TRUE,
    'agris_organization_preimporter-xpathparser_1-find_replacew' => FALSE,
    'agris_organization_preimporter-xpathparser_2-string2id' => FALSE,
    'agris_filter-xpathparser_13-default_value' => TRUE,
    'agris_filter-xpathparser_18-strip_tags' => TRUE,
    'agris_filter-xpathparser_18-find_replace' => FALSE,
    'agris_filter-xpathparser_18-find_replacef' => FALSE,
    'agris_filter-xpathparser_18-reduce_to_single_element' => FALSE,
    'ifpri_batch_file_importer-xpathparser_6-strip_tags' => FALSE,
    'ifpri_batch_file_importer-xpathparser_20-strip_tags' => FALSE,
    'ifpri_batch_file_importer-xpathparser_7-default_value' => FALSE,
    'ifpri_batch_file_importer-xpathparser_21-default_value' => FALSE,
    'ifpri_batch_file_importer-xpathparser_1-required' => FALSE,
    'ifpri_batch_file_importer-xpathparser_0-required' => FALSE,
    'ifpri_batch_file_importer-xpathparser_8-hash' => TRUE,
    'ifpri_batch_file_importer-xpathparser_19-explode' => FALSE,
    'ifpri_batch_file_importer-xpathparser_22-explode' => FALSE,
    'ifpri_batch_file_importer-xpathparser_8-explode' => FALSE,
    'ifpri_batch_file_importer-xpathparser_8-reduce_to_single_element' => FALSE,
    'ifpri_batch_file_importer-xpathparser_2-find_replace' => FALSE,
    'ifpri_batch_file_importer-xpathparser_3-find_replace' => FALSE,
    'ifpri_batch_file_importer-xpathparser_11-find_replace' => TRUE,
    'ifpri_batch_file_importer-xpathparser_23-explode' => FALSE,
    'agris_filter-xpathparser_16-default_value' => FALSE,
    'agris_filter-xpathparser_19-truncate_text' => FALSE,
    'agris_filter-xpathparser_19-find_replace' => FALSE,
    'agris_filter-xpathparser_19-find_replaceg' => FALSE,
    'agris_filter-xpathparser_19-html_entity_decode' => FALSE,
    'clone2_agris_file-xpathparser_1-agris_creators' => FALSE,
    'agris_filter-xpathparser_20-find_replace' => FALSE,
    'agris_filter-xpathparser_20-find_replacer' => FALSE,
    'agris_filter-xpathparser_20-html_entity_decode' => FALSE,
    'agris_filter-xpathparser_21-copy' => FALSE,
    'agris_filter-xpathparser_20-truncate_text' => FALSE,
    'agris_filter-xpathparser_22-find_replace' => FALSE,
    'agris_filter-xpathparser_22-find_replacef' => FALSE,
    'agris_filter-xpathparser_23-find_replace' => FALSE,
    'agris_filter-xpathparser_23-find_replacev' => FALSE,
    'agris_filter-xpathparser_23-find_replacevv' => FALSE,
    'agris_filter-xpathparser_23-find_replacefff' => FALSE,
    'agris_filter-xpathparser_25-find_replace' => FALSE,
    'agris_filter-xpathparser_25-find_replacegg' => FALSE,
    'agris_filter-xpathparser_27-find_replace' => FALSE,
    'agris_filter-xpathparser_27-find_replacegg0' => FALSE,
    'agris_filter-xpathparser_26-find_replace' => FALSE,
    'agris_filter-xpathparser_26-find_replace3' => FALSE,
    'agris_filter-xpathparser_28-find_replace' => FALSE,
    'agris_filter-xpathparser_28-find_replaceg12' => FALSE,
    'agris_filter-xpathparser_27-sprintf' => FALSE,
    'agris_filter-xpathparser_22-check_if_contains' => FALSE,
    'clone2_agris_file-xpathparser_1-find_replace_regex' => FALSE,
    'clone2_agris_file-xpathparser_5-find_replace_regex' => FALSE,
    'agris_filter-xpathparser_9-find_replace_regexw' => FALSE,
    'agris_dump_file_upload_importer-xpathparser_0-find_replace' => FALSE,
    'agris_dump_file_upload_importer-xpathparser_0-find_replacee' => FALSE,
    'agris_dump_file_upload_importer-xpathparser_1-copy' => FALSE,
    'agris_dump_file_upload_importer-xpathparser_2-find_replace' => FALSE,
    'agris_dump_file_upload_importer-xpathparser_2-find_replacef' => FALSE,
    'agris_dump_file_upload_importer-xpathparser_0-html_entity_decode' => FALSE,
    'agris_dump_file_upload_importer-xpathparser_2-html_entity_decode' => FALSE,
    'agris_dump_file_upload_importer-xpathparser_3-find_replace' => FALSE,
    'agris_dump_file_upload_importer-xpathparser_3-find_replacef' => FALSE,
    'agris_dump_file_upload_importer-xpathparser_3-html_entity_decode' => FALSE,
    'agris_dump_file_upload_importer-xpathparser_2-strip_tags' => FALSE,
    'agris_dump_file_upload_importer-xpathparser_3-required' => FALSE,
    'agris_dump_file_upload_importer-xpathparser_4-default_value' => FALSE,
    'agris_dump_file_upload_importer-xpathparser_5-find_replace' => FALSE,
    'agris_dump_file_upload_importer-xpathparser_5-find_replaceff' => FALSE,
    'agris_dump_file_upload_importer-xpathparser_5-html_entity_decode' => FALSE,
    'agris_dump_file_upload_importer-xpathparser_6-find_replace' => FALSE,
    'agris_dump_file_upload_importer-xpathparser_6-find_replaceff4' => FALSE,
    'agris_dump_file_upload_importer-xpathparser_7-find_replace' => FALSE,
    'agris_dump_file_upload_importer-xpathparser_7-find_replacef1' => FALSE,
    'agris_dump_file_upload_importer-xpathparser_7-html_entity_decode' => FALSE,
    'agris_dump_file_upload_importer-xpathparser_8-find_replace' => FALSE,
    'agris_dump_file_upload_importer-xpathparser_8-2find_replace' => FALSE,
    'agris_dump_file_upload_importer-xpathparser_8-html_entity_decode' => FALSE,
    'agris_dump_file_upload_importer-xpathparser_9-find_replace' => FALSE,
    'agris_dump_file_upload_importer-xpathparser_9-find_replacet' => FALSE,
    'agris_dump_file_upload_importer-xpathparser_9-html_entity_decode' => FALSE,
    'agris_dump_file_upload_importer-xpathparser_10-default_value' => FALSE,
    'agris_dump_file_upload_importer-xpathparser_11-find_replace' => FALSE,
    'agris_dump_file_upload_importer-xpathparser_11-find_replace7' => FALSE,
    'agris_dump_file_upload_importer-xpathparser_12-default_value' => FALSE,
    'agris_dump_file_upload_importer-xpathparser_13-required' => FALSE,
    'agris_dump_file_upload_importer-xpathparser_15-find_replace' => FALSE,
    'agris_dump_file_upload_importer-xpathparser_15-find_replace3' => FALSE,
    'agris_dump_file_upload_importer-xpathparser_15-truncate_text' => FALSE,
    'agris_dump_file_upload_importer-xpathparser_16-find_replace' => FALSE,
    'agris_dump_file_upload_importer-xpathparser_16-find_replacer' => FALSE,
    'agris_dump_file_upload_importer-xpathparser_17-find_replace' => FALSE,
    'agris_dump_file_upload_importer-xpathparser_17-find_replacer' => FALSE,
    'clone2_agris_file-xpathparser_1-reduce_to_single_element_bynum' => TRUE,
    'clone2_agris_file-xpathparser_5-reduce_to_single_element_bynum' => TRUE,
    'rss_usaid_commentary_importer-blank_source_4-default_value' => FALSE,
    'rss_usaid_issue_briefs_importer_-blank_source_4-default_value' => FALSE,
    'ifpri_creator_preimporter-xpathparser_0-create_mul_nodes' => FALSE,
    'ifpri_batch_file_importer-xpathparser_14-array_order' => FALSE,
    'ifpri_batch_file_importer-xpathparser_13-array_order' => FALSE,
    'ifpri_batch_file_importer-xpathparser_13-reduce_to_single_element_bynum' => FALSE,
    'ifpri_batch_file_importer-xpathparser_14-reduce_to_single_element_bynum' => FALSE,
    'ifpri_creator_preimporter-xpathparser_0-reduce_to_single_element_bynum' => TRUE,
    'ifpri_creator_preimporter-xpathparser_1-copy' => TRUE,
    'ifpri_batch_file_importer-xpathparser_13-required' => FALSE,
    'ifpri_batch_file_importer-xpathparser_5-keyword_filter' => TRUE,
    'clone2_agris_file-xpathparser_1-trim' => FALSE,
    'clone2_agris_file-xpathparser_5-trim' => FALSE,
    'clone2_agris_file-xpathparser_1-find_replacecomma' => FALSE,
    'clone2_agris_file-xpathparser_5-find_replace12' => FALSE,
    'clone2_agris_file-xpathparser_1-html_entity_encode' => TRUE,
    'clone2_agris_file-xpathparser_5-html_entity_encode' => TRUE,
    'clone2_agris_file-xpathparser_1-create_mul_nodes' => TRUE,
    'ifpri_batch_file_importer-xpathparser_13-explode' => FALSE,
    'ifpri_batch_file_importer-xpathparser_14-explode' => FALSE,
    'ifpri_batch_file_importer-xpathparser_8-array_order' => FALSE,
    'ifpri_batch_file_importer-xpathparser_20-trim_array' => TRUE,
    'ifpri_batch_file_importer-xpathparser_20-trim' => FALSE,
    'landcoalition_rss_import-guid-explode' => FALSE,
    'landcoalition_rss_import-guid-reduce_to_single_element' => FALSE,
    'landcoalition_rss_import-description-html_entity_decode' => FALSE,
    'landcoalition_rss_import-description-strip_tags' => FALSE,
    'landcoalition_rss_import-title-strip_tags' => FALSE,
    'landcoalition_rss_import-blank_source_1-default_value' => FALSE,
    'landcoalition_events_rss_import-description-strip_tags' => FALSE,
    'landcoalition_events_rss_import-description-html_entity_decode' => FALSE,
    'agris_organization_preimporter-xpathparser_1-find_replace1' => FALSE,
    'clone2_agris_file-xpathparser_1-find_replace4' => FALSE,
    'clone2_agris_file-xpathparser_5-find_replaceq' => FALSE,
    'agris_conference_preimporter-xpathparser_0-find_replacef' => FALSE,
    'agris_filter-xpathparser_18-find_replace2' => FALSE,
    'agris_filter-xpathparser_19-find_replacer' => FALSE,
    'agris_filter-xpathparser_20-find_replacere' => FALSE,
    'agris_filter-xpathparser_22-find_replaceree' => FALSE,
    'agris_filter-xpathparser_25-find_replaceff' => FALSE,
    'agris_filter-xpathparser_27-find_replacefffff' => FALSE,
    'agris_filter-xpathparser_28-find_replace12' => FALSE,
    'agris_filter-xpathparser_1-find_replace_regexr' => FALSE,
    'agris_filter-xpathparser_10-strip_tags' => FALSE,
    'agris_filter-xpathparser_10-html_entity_encode' => TRUE,
    'agris_filter-xpathparser_10-trim' => FALSE,
    'agris_filter-xpathparser_10-find_replace_regex' => FALSE,
    'agris_filter-xpathparser_6-trim' => FALSE,
    'agris_filter-xpathparser_2-trim' => FALSE,
    'agris_conference_preimporter-xpathparser_0-trim' => FALSE,
    'agris_filter-xpathparser_19-trim' => FALSE,
    'agris_filter-xpathparser_1-trim' => FALSE,
    'agris_filter-xpathparser_8-trim' => FALSE,
    'agris_filter-xpathparser_3-trim' => FALSE,
    'agris_filter-xpathparser_5-trim' => FALSE,
    'agris_filter-xpathparser_9-trim' => FALSE,
    'agris_filter-xpathparser_14-trim' => FALSE,
    'agris_filter-xpathparser_28-trim' => FALSE,
    'agris_filter-xpathparser_27-trim' => FALSE,
    'agris_filter-xpathparser_22-trim' => FALSE,
    'agris_filter-xpathparser_12-trim' => FALSE,
    'agris_filter-xpathparser_18-trim' => FALSE,
    'agris_filter-xpathparser_25-trim' => FALSE,
    'agris_filter-xpathparser_20-trim' => FALSE,
    'agris_filter-xpathparser_9-find_replace_regexr' => FALSE,
    'agris_filter-xpathparser_17-trim' => FALSE,
    'ifpri_creator_preimporter-xpathparser_0-find_replace2' => FALSE,
    'ifpri_batch_file_importer-xpathparser_13-reduce_to_single_element' => FALSE,
    'ifpri_batch_file_importer-xpathparser_13-reduce_to_single_element12' => FALSE,
    'ifpri_batch_file_importer-xpathparser_8-reduce_to_single_element_bynum' => FALSE,
    'ifpri_batch_file_importer-xpathparser_8-required' => FALSE,
    'ifpri_batch_file_importer-xpathparser_4-reduce_to_single_element_bynum' => FALSE,
    'rss_usaid_commentary_importer-guid-required' => FALSE,
    'landcoalition_rss_import-blank_source_2-default_value' => FALSE,
    'landcoalition_rss_import-blank_source_3-default_value' => FALSE,
    'landcoalition_rss_import-blank_source_4-default_value' => FALSE,
    'fao_authors_preimporter_-xpathparser_0-find_replace' => FALSE,
    'fao_authors_preimporter_-xpathparser_0-find_replacee' => FALSE,
    'fao_authors_preimporter_-xpathparser_0-find_replace12' => FALSE,
    'fao_authors_preimporter_-xpathparser_0-explode' => FALSE,
    'fao_authors_preimporter_-xpathparser_0-trim' => FALSE,
    'fao_authors_preimporter_-xpathparser_0-create_mul_nodes' => FALSE,
    'fao_importer-xpathparser_0-strip_tags' => FALSE,
    'fao_importer-xpathparser_0-find_replace_regex' => FALSE,
    'fao_importer-xpathparser_0-reduce_to_single_element' => FALSE,
    'fao_importer-xpathparser_0-trim' => FALSE,
    'fao_importer-xpathparser_1-strip_tags' => FALSE,
    'fao_importer-xpathparser_1-trim' => FALSE,
    'fao_importer-xpathparser_1-html_entity_decode' => FALSE,
    'fao_importer-xpathparser_1-required' => FALSE,
    'fao_importer-xpathparser_2-timetodate' => FALSE,
    'fao_importer-xpathparser_3-find_replace' => FALSE,
    'fao_importer-xpathparser_6-trim' => FALSE,
    'fao_importer-xpathparser_9-default_value' => FALSE,
    'fao_importer-xpathparser_10-find_replace' => FALSE,
    'fao_importer-xpathparser_10-find_replace11' => FALSE,
    'fao_importer-xpathparser_10-find_replacefff' => FALSE,
    'fao_importer-xpathparser_10-explode' => FALSE,
    'fao_importer-xpathparser_10-trim' => FALSE,
    'fao_importer-xpathparser_12-rewrite' => FALSE,
    'fao_importer-xpathparser_12-trim' => FALSE,
    'fao_importer-xpathparser_14-default_value' => FALSE,
    'fao_pub_importer-xpathparser_0-strip_tags' => FALSE,
    'fao_pub_importer-xpathparser_0-find_replace_regex' => FALSE,
    'fao_pub_importer-xpathparser_0-truncate_text' => FALSE,
    'fao_pub_importer-xpathparser_0-reduce_to_single_element' => FALSE,
    'fao_pub_importer-xpathparser_0-trim' => FALSE,
    'fao_pub_importer-xpathparser_1-strip_tags' => FALSE,
    'fao_pub_importer-xpathparser_1-trim' => FALSE,
    'fao_pub_importer-xpathparser_1-required' => FALSE,
    'fao_pub_importer-xpathparser_2-timetodate' => FALSE,
    'fao_pub_importer-xpathparser_3-find_replace' => FALSE,
    'fao_pub_importer-xpathparser_6-trim' => FALSE,
    'fao_pub_importer-xpathparser_9-default_value' => FALSE,
    'fao_pub_importer-xpathparser_10-find_replace' => FALSE,
    'fao_pub_importer-xpathparser_10-find_replaceff' => FALSE,
    'fao_pub_importer-xpathparser_10-find_replaced' => FALSE,
    'fao_pub_importer-xpathparser_10-explode' => FALSE,
    'fao_pub_importer-xpathparser_10-trim' => FALSE,
    'fao_pub_importer-xpathparser_14-default_value' => FALSE,
    'fao_importer-xpathparser_19-default_value' => FALSE,
    'fao_pub_importer-xpathparser_19-default_value' => FALSE,
  );
  $export['default_feeds_tamper'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'default_field_group';
  $strongarm->value = array(
    'group_about|node|debate|form' => FALSE,
    'group_status|node|debate|form' => FALSE,
    'group_st|node|debate|form' => TRUE,
    'group_st_extra|node|debate|form' => TRUE,
    'group_opt|node|news|form' => FALSE,
    'group_about|node|event|form' => FALSE,
    'group_details|node|event|form' => FALSE,
    'group_about|node|organization|form' => FALSE,
  );
  $export['default_field_group'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'drupal_http_request_fails';
  $strongarm->value = FALSE;
  $export['drupal_http_request_fails'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'drupal_private_key';
  $strongarm->value = 'B5NWEfxu6-WzZzsK1ZuVTBuDQIX_88XYvZmJhV_7QVI';
  $export['drupal_private_key'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'elysia_cron_last_context';
  $strongarm->value = 'default';
  $export['elysia_cron_last_context'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'elysia_cron_last_run';
  $strongarm->value = 1431097510;
  $export['elysia_cron_last_run'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'elysia_cron_version';
  $strongarm->value = 20111020;
  $export['elysia_cron_version'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'entityreference:base-tables';
  $strongarm->value = array(
    'node' => array(
      0 => 'node',
      1 => 'nid',
    ),
    'taxonomy_term' => array(
      0 => 'taxonomy_term_data',
      1 => 'tid',
    ),
    'comment' => array(
      0 => 'comment',
      1 => 'cid',
    ),
    'i18n_translation' => array(
      0 => 'i18n_translation_set',
      1 => 'tsid',
    ),
    'mailchimp_signup' => array(
      0 => 'mailchimp_signup',
      1 => 'mcs_id',
    ),
    'search_api_server' => array(
      0 => 'search_api_server',
      1 => 'id',
    ),
    'search_api_index' => array(
      0 => 'search_api_index',
      1 => 'id',
    ),
    'file' => array(
      0 => 'file_managed',
      1 => 'fid',
    ),
    'taxonomy_vocabulary' => array(
      0 => 'taxonomy_vocabulary',
      1 => 'vid',
    ),
    'user' => array(
      0 => 'users',
      1 => 'uid',
    ),
    'rules_config' => array(
      0 => 'rules_config',
      1 => 'id',
    ),
  );
  $export['entityreference:base-tables'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'error_level';
  $strongarm->value = '2';
  $export['error_level'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'facetapi:block_cache:apachesolr@solr';
  $strongarm->value = -1;
  $export['facetapi:block_cache:apachesolr@solr'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_admin_menu_links_menus';
  $strongarm->value = array(
    'menu-consult-the-library' => 'menu-consult-the-library',
    'landdebate-menu' => 'landdebate-menu',
    'devel' => 'devel',
    'features' => 'features',
    'landbook-menu' => 'landbook-menu',
    'main-menu' => 'main-menu',
    'management' => 'management',
    'navigation' => 'navigation',
    'user-menu' => 'user-menu',
    'menu-landlibrary-menu' => 0,
    'user-signin' => 0,
    'menu-lpf' => 0,
  );
  $export['features_admin_menu_links_menus'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_admin_show_component_apachesolr_environment';
  $strongarm->value = 1;
  $export['features_admin_show_component_apachesolr_environment'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_admin_show_component_apachesolr_search_page';
  $strongarm->value = 1;
  $export['features_admin_show_component_apachesolr_search_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_admin_show_component_ckeditor_profile';
  $strongarm->value = 1;
  $export['features_admin_show_component_ckeditor_profile'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_admin_show_component_context';
  $strongarm->value = 1;
  $export['features_admin_show_component_context'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_admin_show_component_ctools';
  $strongarm->value = 1;
  $export['features_admin_show_component_ctools'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_admin_show_component_dependencies';
  $strongarm->value = 1;
  $export['features_admin_show_component_dependencies'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_admin_show_component_ds_fields';
  $strongarm->value = 1;
  $export['features_admin_show_component_ds_fields'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_admin_show_component_ds_field_settings';
  $strongarm->value = 1;
  $export['features_admin_show_component_ds_field_settings'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_admin_show_component_ds_layout_settings';
  $strongarm->value = 1;
  $export['features_admin_show_component_ds_layout_settings'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_admin_show_component_ds_vd';
  $strongarm->value = 1;
  $export['features_admin_show_component_ds_vd'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_admin_show_component_ds_view_modes';
  $strongarm->value = 1;
  $export['features_admin_show_component_ds_view_modes'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_admin_show_component_elysia_cron';
  $strongarm->value = 1;
  $export['features_admin_show_component_elysia_cron'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_admin_show_component_facetapi';
  $strongarm->value = 1;
  $export['features_admin_show_component_facetapi'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_admin_show_component_feeds_importer';
  $strongarm->value = 1;
  $export['features_admin_show_component_feeds_importer'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_admin_show_component_feeds_tamper';
  $strongarm->value = 1;
  $export['features_admin_show_component_feeds_tamper'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_admin_show_component_field_base';
  $strongarm->value = 1;
  $export['features_admin_show_component_field_base'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_admin_show_component_field_group';
  $strongarm->value = 1;
  $export['features_admin_show_component_field_group'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_admin_show_component_field_instance';
  $strongarm->value = 1;
  $export['features_admin_show_component_field_instance'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_admin_show_component_file_display';
  $strongarm->value = 1;
  $export['features_admin_show_component_file_display'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_admin_show_component_filter';
  $strongarm->value = 1;
  $export['features_admin_show_component_filter'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_admin_show_component_image';
  $strongarm->value = 1;
  $export['features_admin_show_component_image'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_admin_show_component_language';
  $strongarm->value = 1;
  $export['features_admin_show_component_language'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_admin_show_component_menu_custom';
  $strongarm->value = 1;
  $export['features_admin_show_component_menu_custom'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_admin_show_component_menu_links';
  $strongarm->value = 1;
  $export['features_admin_show_component_menu_links'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_admin_show_component_node';
  $strongarm->value = 1;
  $export['features_admin_show_component_node'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_admin_show_component_search_api_index';
  $strongarm->value = 1;
  $export['features_admin_show_component_search_api_index'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_admin_show_component_search_api_server';
  $strongarm->value = 1;
  $export['features_admin_show_component_search_api_server'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_admin_show_component_taxonomy';
  $strongarm->value = 1;
  $export['features_admin_show_component_taxonomy'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_admin_show_component_user_permission';
  $strongarm->value = 1;
  $export['features_admin_show_component_user_permission'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_admin_show_component_user_role';
  $strongarm->value = 1;
  $export['features_admin_show_component_user_role'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_admin_show_component_uuid_entities';
  $strongarm->value = 1;
  $export['features_admin_show_component_uuid_entities'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_admin_show_component_uuid_node';
  $strongarm->value = 1;
  $export['features_admin_show_component_uuid_node'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_admin_show_component_uuid_term';
  $strongarm->value = 1;
  $export['features_admin_show_component_uuid_term'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_admin_show_component_variable';
  $strongarm->value = 1;
  $export['features_admin_show_component_variable'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_admin_show_component_views_view';
  $strongarm->value = 1;
  $export['features_admin_show_component_views_view'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_codecache';
  $strongarm->value = array(
    'user_account_fields' => array(
      'field_base' => 'aeef332a07e302d53b82feeaaf25b08c',
      'field_instance' => '8997e5b1ef43bc886584227f13ad3b1f',
      'user_permission' => 'bac84756a15b2927dcef4b772f7c2dcb',
      'dependencies' => '633ebff4945d991b94da5059471dcae9',
    ),
    'landbook_nodes' => array(
      'field_base' => 'f87776afbe34dede520cf9342108b11d',
      'field_instance' => '42555825838da63283e728d781d59908',
      'dependencies' => 'a4bf35d75654189496dc596be392ba13',
      'node' => 'e2240ca4056dfe45ec66178dc8e7c950',
    ),
    'landbook_nodes_importers' => array(
      'dependencies' => '981314fbdcdc839f8ba1d10a17259887',
      'feeds_importer' => '37252ef09ebed4b286922c5cd073edf4',
    ),
    'landdebate_content_types' => array(
      'field_base' => 'fea4b308eb3a55ee20b653fb1a4dc13b',
      'field_instance' => 'e5087b7fce112472d15d9e773d501aa7',
      'taxonomy' => '57ad8fed4d3550b4d771ffc638851f02',
      'dependencies' => 'b6250ef114aafe7b3143c3a8d257a996',
      'node' => 'c1ca29a971d8af1d2092e9927f3ee6ed',
      'filter' => '550e4218430d1ffcaf251eeb7bd4af1d',
      'language' => 'fef9f0f346ed3a4d4f92637ff471fce6',
      'wysiwyg' => '6e53eac8f64faa743de05413f1677bcc',
    ),
    'landdebate_permissions' => array(
      'user_permission' => 'a03842db7f23218690f53372b557b534',
      'dependencies' => 'b98c9a1bb5480cc4be50727984e25ff4',
      'user_role' => '6fa1afa9e5038f014fdac74cf9797d91',
    ),
    'landdebate_views' => array(
      'dependencies' => '70c6d525b5b67ca2e227e6583e01382d',
      'views_view' => '4c992d51ab5ec70ae07d890369133b51',
    ),
    'landportal_user' => array(
      'field_instance' => 'ff6e582909d021cf73eded32cf21cd79',
      'user_role' => 'd3c546cc7f1d068869341db7c2f35a64',
      'dependencies' => '210f32221d07f2b962c81917b6ac87de',
      'field_base' => '32eb0b5d6bf7e85a38811866319e2e82',
      'taxonomy' => '79d0c2c312c578a150f3c7ebaf3dc484',
    ),
    'facebook_login' => array(
      'user_permission' => 'bf7c518962500d20ff6a1d2d28308b98',
      'dependencies' => 'e0dacc060541b28fca98266f9ea6680e',
      'oauthconnector_provider' => '3d3c56e5a08f18a41f1fbae6aa1cca89',
    ),
    'twitter_login' => array(
      'user_permission' => 'afd5bdec5fccedd7e9d000bbd1104f00',
      'dependencies' => 'e0dacc060541b28fca98266f9ea6680e',
      'oauthconnector_provider' => 'e55689229159bf9ab1d8e028335bef4d',
    ),
    'landportal_users' => array(
      'field_base' => 'f6f3d5d8ff6a57b77c8533b656f2f8c7',
      'field_instance' => '8e5ad249d8f02245672aaf24822f44a7',
      'user_role' => '5d628b9a8b772364dc69e72aa0fbe9ab',
      'user_permission' => '519d3879847a7804b60cdee033e6b508',
      'dependencies' => '641ccb727ea7c8da2124319757a66bc1',
      'apachesolr_environment' => 'bc42bc0d6fdf676c207bbce558f761da',
      'apachesolr_search_page' => '12f9888d5ca42450dc7bda703569d5d4',
    ),
    'landportal_homepage' => array(
      'dependencies' => 'f334ac27b969221f20f7aa53080cd124',
    ),
    'landportal_taxonomy' => array(
      'taxonomy' => '7f76feafd3ff816e141559cbc83909e0',
      'dependencies' => '7e7450a2963ca08a323b91c00d7aa58f',
    ),
    'landportal_field_base' => array(
      'field_base' => 'cb4390945da9b4957d0dd0ba3cfd41bb',
      'dependencies' => 'b442106c2453b27412e4afbab2ccf1da',
    ),
    'landportal_content_types' => array(
      'variable' => 'abcebb341b0df9f989ccf8cc3b131d75',
      'field_instance' => '9feb3458de7dacb8a92272e14031d088',
      'dependencies' => '8c979ee11d74992d2e41e55d2762e964',
      'node' => '2a7b6cadec295465bd93f8c7bbe52f39',
      'field_group' => '89ea551f04010454fdf9d3c1c85b9507',
    ),
    'landportal_extra' => array(
      'variable' => 'b7051383538658724b9233b3d54ab7bb',
      'field_instance' => '7579ee0d7ec61497ece0dac9893af4b7',
      'menu_custom' => 'bf4b56f344c02777e147383525f6c738',
      'menu_links' => '186ee67d72c47a70bde4c011a31533d8',
      'user_role' => 'c634618fb938b2f6bb599bf3eeb1b4cc',
      'dependencies' => 'd66bbe077c81a4832385593b25acd4c0',
      'field_group' => '849d1c41a734d5c8cde9a7095a77f175',
      'image' => 'fd605d450803018d7936924e4dbe72a7',
      'views_view' => '9c15f155cb18fc48671aea3dff9bab35',
    ),
    'landdebate' => array(
      'dependencies' => '993fbbca9aeb07855ce94120f757b338',
      'context' => '67c3ed946a859b1bef18124f3e7d0e5d',
      'views_view' => '10ae75abed6308f5bea2de16b6447d6e',
    ),
    'feeds_news' => array(
      'node' => 'd7002d258836b4e70734c81ba9b2dbc4',
      'field_base' => 'ac6943fc8528e131b847112f3a34933c',
      'field_instance' => '0339b0264d933c65164354426bdbc387',
      'dependencies' => '7cb125eca131a8d6fac432adc5e3f02c',
      'feeds_importer' => '10d07c68c22c77b2cdc1e0651c97c8f3',
      'views_view' => '0266b838be351653895c7c90adcff818',
    ),
    'landlibrary' => array(
      'node' => '6495cba2ed3a3b2948cd5254bc50c337',
      'variable' => '8491e68e76f389c895a09fbc1f6fba58',
      'field_base' => '8c406f2b635a1a932abc23e3e81c8b32',
      'field_instance' => '37f20b26ec71416148ba5d787f759c8b',
      'language' => '49dd66f2128657e4384f0118ccc306e9',
      'menu_custom' => '9b73a9442ad775793f93bb136a44c045',
      'taxonomy' => '0596bc3227668f5456a5a6fe66543083',
      'dependencies' => '51c6273879dd832dc49d59385cb270a5',
      'apachesolr_environment' => '1687608d206742f422c4c9e3f825f597',
      'context' => '1f126eb145d23751b0e251ec31f6620a',
      'ds_layout_settings' => 'ce2425251df281862ecf63d8cd18fcca',
      'elysia_cron' => '4a9fdea1a30a4d5403005af325d1e530',
      'feeds_importer' => '7ad816c453a1c341fdd98793d5800c9c',
      'feeds_tamper' => 'eb691a02ffd8a1e24b991755c0d2646f',
      'field_group' => '5f528fdbec552604e8e76f7acffd1449',
      'views_view' => 'e0c1acb899affdb35a40af580ffb5f22',
    ),
    'feeds_import' => array(
      'dependencies' => '981314fbdcdc839f8ba1d10a17259887',
      'feeds_importer' => '73516e8d6759de9cf6b90b5e53a98dc9',
    ),
  );
  $export['features_codecache'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_component_locked_apachesolr_environment';
  $strongarm->value = 0;
  $export['features_component_locked_apachesolr_environment'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_component_locked_apachesolr_search_page';
  $strongarm->value = 0;
  $export['features_component_locked_apachesolr_search_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_component_locked_ckeditor_profile';
  $strongarm->value = 0;
  $export['features_component_locked_ckeditor_profile'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_component_locked_context';
  $strongarm->value = 0;
  $export['features_component_locked_context'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_component_locked_dependencies';
  $strongarm->value = 0;
  $export['features_component_locked_dependencies'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_component_locked_ds_fields';
  $strongarm->value = 0;
  $export['features_component_locked_ds_fields'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_component_locked_ds_field_settings';
  $strongarm->value = 0;
  $export['features_component_locked_ds_field_settings'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_component_locked_ds_layout_settings';
  $strongarm->value = 0;
  $export['features_component_locked_ds_layout_settings'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_component_locked_ds_vd';
  $strongarm->value = 0;
  $export['features_component_locked_ds_vd'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_component_locked_ds_view_modes';
  $strongarm->value = 0;
  $export['features_component_locked_ds_view_modes'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_component_locked_elysia_cron';
  $strongarm->value = 0;
  $export['features_component_locked_elysia_cron'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_component_locked_facetapi';
  $strongarm->value = 0;
  $export['features_component_locked_facetapi'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_component_locked_feeds_importer';
  $strongarm->value = 0;
  $export['features_component_locked_feeds_importer'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_component_locked_feeds_tamper';
  $strongarm->value = 0;
  $export['features_component_locked_feeds_tamper'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_component_locked_field_base';
  $strongarm->value = 0;
  $export['features_component_locked_field_base'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_component_locked_field_group';
  $strongarm->value = 0;
  $export['features_component_locked_field_group'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_component_locked_field_instance';
  $strongarm->value = 0;
  $export['features_component_locked_field_instance'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_component_locked_file_display';
  $strongarm->value = 0;
  $export['features_component_locked_file_display'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_component_locked_filter';
  $strongarm->value = 0;
  $export['features_component_locked_filter'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_component_locked_image';
  $strongarm->value = 0;
  $export['features_component_locked_image'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_component_locked_language';
  $strongarm->value = 0;
  $export['features_component_locked_language'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_component_locked_menu_custom';
  $strongarm->value = 0;
  $export['features_component_locked_menu_custom'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_component_locked_menu_links';
  $strongarm->value = 0;
  $export['features_component_locked_menu_links'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_component_locked_node';
  $strongarm->value = 0;
  $export['features_component_locked_node'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_component_locked_search_api_index';
  $strongarm->value = 0;
  $export['features_component_locked_search_api_index'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_component_locked_search_api_server';
  $strongarm->value = 0;
  $export['features_component_locked_search_api_server'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_component_locked_taxonomy';
  $strongarm->value = 0;
  $export['features_component_locked_taxonomy'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_component_locked_user_permission';
  $strongarm->value = 0;
  $export['features_component_locked_user_permission'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_component_locked_user_role';
  $strongarm->value = 0;
  $export['features_component_locked_user_role'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_component_locked_uuid_entities';
  $strongarm->value = 0;
  $export['features_component_locked_uuid_entities'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_component_locked_uuid_node';
  $strongarm->value = 0;
  $export['features_component_locked_uuid_node'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_component_locked_uuid_term';
  $strongarm->value = 0;
  $export['features_component_locked_uuid_term'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_component_locked_variable';
  $strongarm->value = 0;
  $export['features_component_locked_variable'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_component_locked_views_view';
  $strongarm->value = 0;
  $export['features_component_locked_views_view'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_default_export_path';
  $strongarm->value = 'sites/all/modules';
  $export['features_default_export_path'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_ignored_orphans';
  $strongarm->value = array();
  $export['features_ignored_orphans'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_lock_mode';
  $strongarm->value = 'rebuild';
  $export['features_lock_mode'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_rebuild_on_flush';
  $strongarm->value = 0;
  $export['features_rebuild_on_flush'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_semaphore';
  $strongarm->value = array();
  $export['features_semaphore'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'feeds_oai:from:*:http://cdm15738.contentdm.oclc.org/oai/oai.php';
  $strongarm->value = 0;
  $export['feeds_oai:from:*:http://cdm15738.contentdm.oclc.org/oai/oai.php'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'feeds_oai:from::http://cdm15738.contentdm.oclc.org/oai/oai.php';
  $strongarm->value = 0;
  $export['feeds_oai:from::http://cdm15738.contentdm.oclc.org/oai/oai.php'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'feeds_oai:from:p15738coll2:http://cdm15738.contentdm.oclc.org/oai/oai.php';
  $strongarm->value = 0;
  $export['feeds_oai:from:p15738coll2:http://cdm15738.contentdm.oclc.org/oai/oai.php'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'feeds_oai:resumptionToken:*:http://cdm15738.contentdm.oclc.org/oai/oai.php';
  $strongarm->value = 'p15738coll2:8768:oclc-cdm-allsets:0000-00-00:9999-99-99:oai_dc';
  $export['feeds_oai:resumptionToken:*:http://cdm15738.contentdm.oclc.org/oai/oai.php'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'feeds_oai:resumptionToken::http://cdm15738.contentdm.oclc.org/oai/oai.php';
  $strongarm->value = 'p15738coll2:19815:oclc-cdm-allsets:0000-00-00:9999-99-99:oai_dc';
  $export['feeds_oai:resumptionToken::http://cdm15738.contentdm.oclc.org/oai/oai.php'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'feeds_oai:resumptionToken:p15738coll2:http://cdm15738.contentdm.oclc.org/oai/oai.php';
  $strongarm->value = 'p15738coll2:47511:p15738coll2:0000-00-00:9999-99-99:oai_dc';
  $export['feeds_oai:resumptionToken:p15738coll2:http://cdm15738.contentdm.oclc.org/oai/oai.php'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'feeds_reschedule';
  $strongarm->value = FALSE;
  $export['feeds_reschedule'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_file__audio';
  $strongarm->value = array(
    'view_modes' => array(),
    'extra_fields' => array(
      'form' => array(),
      'display' => array(
        'file' => array(
          'media_small' => array(
            'weight' => 0,
            'visible' => FALSE,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_file__audio'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_file__default';
  $strongarm->value = array(
    'view_modes' => array(),
    'extra_fields' => array(
      'form' => array(),
      'display' => array(
        'file' => array(
          'media_small' => array(
            'weight' => 0,
            'visible' => FALSE,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_file__default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_file__image';
  $strongarm->value = array(
    'view_modes' => array(),
    'extra_fields' => array(
      'form' => array(),
      'display' => array(
        'file' => array(
          'media_small' => array(
            'weight' => 0,
            'visible' => FALSE,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_file__image'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_file__video';
  $strongarm->value = array(
    'view_modes' => array(),
    'extra_fields' => array(
      'form' => array(),
      'display' => array(
        'file' => array(
          'media_small' => array(
            'weight' => 0,
            'visible' => FALSE,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_file__video'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__agris_clone2';
  $strongarm->value = array(
    'view_modes' => array(),
    'extra_fields' => array(
      'form' => array(),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_node__agris_clone2'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__landlibrary_resource';
  $strongarm->value = array(
    'view_modes' => array(
      'teaser' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'rss' => array(
        'custom_settings' => FALSE,
      ),
      'search_index' => array(
        'custom_settings' => FALSE,
      ),
      'search_result' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
      'revision' => array(
        'custom_settings' => FALSE,
      ),
      'resource' => array(
        'custom_settings' => FALSE,
      ),
      'library_source' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'locations' => array(
          'weight' => '15',
        ),
        'title' => array(
          'weight' => '0',
        ),
        'path' => array(
          'weight' => '13',
        ),
        'language' => array(
          'weight' => '5',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_node__landlibrary_resource'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__page';
  $strongarm->value = array(
    'view_modes' => array(
      'teaser' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'rss' => array(
        'custom_settings' => FALSE,
      ),
      'search_index' => array(
        'custom_settings' => FALSE,
      ),
      'search_result' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'title' => array(
          'weight' => '-5',
        ),
      ),
      'display' => array(
        'language' => array(
          'default' => array(
            'weight' => '0',
            'visible' => FALSE,
          ),
          'teaser' => array(
            'weight' => '0',
            'visible' => FALSE,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_node__page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__person';
  $strongarm->value = array(
    'view_modes' => array(
      'teaser' => array(
        'custom_settings' => TRUE,
      ),
      'resource' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'rss' => array(
        'custom_settings' => FALSE,
      ),
      'search_index' => array(
        'custom_settings' => FALSE,
      ),
      'search_result' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
      'revision' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'locations' => array(
          'weight' => '30',
        ),
        'title' => array(
          'weight' => '-5',
        ),
        'path' => array(
          'weight' => '30',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_node__person'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__subject_browse';
  $strongarm->value = array(
    'view_modes' => array(),
    'extra_fields' => array(
      'form' => array(
        'locations' => array(
          'weight' => '30',
        ),
        'title' => array(
          'weight' => '-5',
        ),
        'path' => array(
          'weight' => '30',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_node__subject_browse'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_taxonomy_term__languages';
  $strongarm->value = array(
    'view_modes' => array(
      'search_index' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'path' => array(
          'weight' => '30',
        ),
        'name' => array(
          'weight' => '-5',
        ),
        'description' => array(
          'weight' => '0',
        ),
      ),
      'display' => array(
        'description' => array(
          'default' => array(
            'weight' => '2',
            'visible' => FALSE,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_taxonomy_term__languages'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_taxonomy_term__subjects';
  $strongarm->value = array(
    'view_modes' => array(),
    'extra_fields' => array(
      'form' => array(
        'path' => array(
          'weight' => '30',
        ),
        'name' => array(
          'weight' => '-5',
        ),
        'description' => array(
          'weight' => '0',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_taxonomy_term__subjects'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'file_temporary_path';
  $strongarm->value = '/tmp';
  $export['file_temporary_path'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'filter_fallback_format';
  $strongarm->value = 'plain_text';
  $export['filter_fallback_format'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'global_filters';
  $strongarm->value = array(
    1 => array(
      'block' => 'global_filter_1',
      'uses_view' => '',
      'view' => '',
      'field' => '',
      'widget' => '',
      'label' => '',
      'option_all_text' => '',
      'convert_to_range' => '',
      'confirm_question' => '',
      'set_on_select' => '',
      'global_php_default' => '',
      'global_field_or_view_default' => '',
    ),
    2 => array(
      'block' => 'global_filter_2',
      'uses_view' => '',
      'view' => '',
      'field' => '',
      'widget' => '',
      'label' => '',
      'option_all_text' => '',
      'convert_to_range' => '',
      'confirm_question' => '',
      'set_on_select' => '',
      'global_php_default' => '',
      'global_field_or_view_default' => '',
    ),
    3 => array(
      'block' => 'global_filter_3',
      'uses_view' => '',
      'view' => '',
      'field' => '',
      'widget' => '',
      'label' => '',
      'option_all_text' => '',
      'convert_to_range' => '',
      'confirm_question' => '',
      'set_on_select' => '',
      'global_php_default' => '',
      'global_field_or_view_default' => '',
    ),
    4 => array(
      'block' => 'global_filter_4',
      'uses_view' => '',
      'view' => '',
      'field' => '',
      'widget' => '',
      'label' => '',
      'option_all_text' => '',
      'convert_to_range' => '',
      'confirm_question' => '',
      'set_on_select' => '',
      'global_php_default' => '',
      'global_field_or_view_default' => '',
    ),
    5 => array(
      'block' => 'global_filter_5',
      'uses_view' => '',
      'view' => '',
      'field' => '',
      'widget' => '',
      'label' => '',
      'option_all_text' => '',
      'convert_to_range' => '',
      'confirm_question' => '',
      'set_on_select' => '',
      'global_php_default' => '',
      'global_field_or_view_default' => '',
    ),
    6 => array(
      'block' => 'global_filter_6',
      'uses_view' => '',
      'view' => '',
      'field' => '',
      'widget' => '',
      'label' => '',
      'option_all_text' => '',
      'convert_to_range' => '',
      'confirm_question' => '',
      'set_on_select' => '',
      'global_php_default' => '',
      'global_field_or_view_default' => '',
    ),
    7 => array(
      'block' => 'global_filter_7',
      'uses_view' => '',
      'view' => '',
      'field' => '',
      'widget' => '',
      'label' => '',
      'option_all_text' => '',
      'convert_to_range' => '',
      'confirm_question' => '',
      'set_on_select' => '',
      'global_php_default' => '',
      'global_field_or_view_default' => '',
    ),
    8 => array(
      'block' => 'global_filter_8',
      'uses_view' => '',
      'view' => '',
      'field' => '',
      'widget' => '',
      'label' => '',
      'option_all_text' => '',
      'convert_to_range' => '',
      'confirm_question' => '',
      'set_on_select' => '',
      'global_php_default' => '',
      'global_field_or_view_default' => '',
    ),
    9 => array(
      'block' => 'global_filter_9',
      'uses_view' => '',
      'view' => '',
      'field' => '',
      'widget' => '',
      'label' => '',
      'option_all_text' => '',
      'convert_to_range' => '',
      'confirm_question' => '',
      'set_on_select' => '',
      'global_php_default' => '',
      'global_field_or_view_default' => '',
    ),
    10 => array(
      'block' => 'global_filter_10',
      'uses_view' => '',
      'view' => '',
      'field' => '',
      'widget' => '',
      'label' => '',
      'option_all_text' => '',
      'convert_to_range' => '',
      'confirm_question' => '',
      'set_on_select' => '',
      'global_php_default' => '',
      'global_field_or_view_default' => '',
    ),
    11 => array(
      'block' => 'global_filter_11',
      'uses_view' => '',
      'view' => '',
      'field' => '',
      'widget' => '',
      'label' => '',
      'option_all_text' => '',
      'convert_to_range' => '',
      'confirm_question' => '',
      'set_on_select' => '',
      'global_php_default' => '',
      'global_field_or_view_default' => '',
    ),
    12 => array(
      'block' => 'global_filter_12',
      'uses_view' => '',
      'view' => '',
      'field' => '',
      'widget' => '',
      'label' => '',
      'option_all_text' => '',
      'convert_to_range' => '',
      'confirm_question' => '',
      'set_on_select' => '',
      'global_php_default' => '',
      'global_field_or_view_default' => '',
    ),
    13 => array(
      'block' => 'global_filter_13',
      'uses_view' => '',
      'view' => '',
      'field' => '',
      'widget' => '',
      'label' => '',
      'option_all_text' => '',
      'convert_to_range' => '',
      'confirm_question' => '',
      'set_on_select' => '',
      'global_php_default' => '',
      'global_field_or_view_default' => '',
    ),
    14 => array(
      'block' => 'global_filter_14',
      'uses_view' => '',
      'view' => '',
      'field' => '',
      'widget' => '',
      'label' => '',
      'option_all_text' => '',
      'convert_to_range' => '',
      'confirm_question' => '',
      'set_on_select' => '',
      'global_php_default' => '',
      'global_field_or_view_default' => '',
    ),
    15 => array(
      'block' => 'global_filter_15',
      'uses_view' => '',
      'view' => '',
      'field' => '',
      'widget' => '',
      'label' => '',
      'option_all_text' => '',
      'convert_to_range' => '',
      'confirm_question' => '',
      'set_on_select' => '',
      'global_php_default' => '',
      'global_field_or_view_default' => '',
    ),
    16 => array(
      'block' => 'global_filter_16',
      'uses_view' => '',
      'view' => '',
      'field' => '',
      'widget' => '',
      'label' => '',
      'option_all_text' => '',
      'convert_to_range' => '',
      'confirm_question' => '',
      'set_on_select' => '',
      'global_php_default' => '',
      'global_field_or_view_default' => '',
    ),
    17 => array(
      'block' => 'global_filter_17',
      'uses_view' => '',
      'view' => '',
      'field' => '',
      'widget' => '',
      'label' => '',
      'option_all_text' => '',
      'convert_to_range' => '',
      'confirm_question' => '',
      'set_on_select' => '',
      'global_php_default' => '',
      'global_field_or_view_default' => '',
    ),
    18 => array(
      'block' => 'global_filter_18',
      'uses_view' => '',
      'view' => '',
      'field' => '',
      'widget' => '',
      'label' => '',
      'option_all_text' => '',
      'convert_to_range' => '',
      'confirm_question' => '',
      'set_on_select' => '',
      'global_php_default' => '',
      'global_field_or_view_default' => '',
    ),
    19 => array(
      'block' => 'global_filter_19',
      'uses_view' => '',
      'view' => '',
      'field' => '',
      'widget' => '',
      'label' => '',
      'option_all_text' => '',
      'convert_to_range' => '',
      'confirm_question' => '',
      'set_on_select' => '',
      'global_php_default' => '',
      'global_field_or_view_default' => '',
    ),
    20 => array(
      'block' => 'global_filter_20',
      'uses_view' => '',
      'view' => '',
      'field' => '',
      'widget' => '',
      'label' => '',
      'option_all_text' => '',
      'convert_to_range' => '',
      'confirm_question' => '',
      'set_on_select' => '',
      'global_php_default' => '',
      'global_field_or_view_default' => '',
    ),
  );
  $export['global_filters'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'global_filter_legacy_parameters_set';
  $strongarm->value = TRUE;
  $export['global_filter_legacy_parameters_set'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'install_profile';
  $strongarm->value = 'standard';
  $export['install_profile'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'install_task';
  $strongarm->value = 'done';
  $export['install_task'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'install_time';
  $strongarm->value = 1401876982;
  $export['install_time'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'javascript_parsed';
  $strongarm->value = array(
    0 => 'misc/drupal.js',
    1 => 'sites/all/modules/jquery_update/replace/jquery/1.10/jquery.min.js',
    2 => 'misc/jquery.once.js',
    3 => 'modules/system/system.js',
    4 => 'misc/form.js',
    5 => 'sites/all/modules/jquery_update/replace/ui/external/jquery.cookie.js',
    6 => 'modules/toolbar/toolbar.js',
    'refresh:de' => 'waiting',
    7 => 'misc/collapse.js',
    8 => 'sites/all/modules/jquery_update/replace/misc/jquery.form.min.js',
    9 => 'misc/progress.js',
    10 => 'sites/all/modules/jquery_update/js/jquery_update.js',
    11 => 'misc/ajax.js',
    12 => 'sites/all/modules/media/js/media.core.js',
    13 => 'sites/all/modules/media/js/util/json2.js',
    14 => 'sites/all/modules/media/js/util/ba-debug.min.js',
    15 => 'sites/all/modules/jquery_update/replace/ui/ui/minified/jquery.ui.core.min.js',
    16 => 'sites/all/modules/jquery_update/replace/ui/ui/minified/jquery.ui.widget.min.js',
    17 => 'sites/all/modules/jquery_update/replace/ui/ui/minified/jquery.ui.mouse.min.js',
    18 => 'sites/all/modules/jquery_update/replace/ui/ui/minified/jquery.ui.resizable.min.js',
    19 => 'sites/all/modules/jquery_update/replace/ui/ui/minified/jquery.ui.draggable.min.js',
    20 => 'sites/all/modules/jquery_update/replace/ui/ui/minified/jquery.ui.button.min.js',
    21 => 'sites/all/modules/jquery_update/replace/ui/ui/minified/jquery.ui.position.min.js',
    22 => 'sites/all/modules/jquery_update/replace/ui/ui/minified/jquery.ui.dialog.min.js',
    23 => 'sites/all/modules/media/js/media.popups.js',
    24 => 'sites/all/modules/ckeditor/plugins/media/library.js',
    25 => 'sites/all/modules/ckeditor/includes/ckeditor.utils.js',
    26 => 'misc/textarea.js',
    27 => 'modules/field/modules/text/text.js',
    28 => 'modules/filter/filter.js',
    29 => 'misc/states.js',
    30 => 'modules/menu/menu.js',
    31 => 'modules/node/node.js',
    32 => 'sites/all/modules/pathauto/pathauto.js',
    33 => 'modules/comment/comment-node-form.js',
    34 => 'misc/autocomplete.js',
    35 => 'misc/vertical-tabs.js',
    36 => 'sites/all/modules/google_analytics/googleanalytics.js',
    37 => 'modules/contextual/contextual.js',
    38 => 'misc/batch.js',
    39 => 'misc/tableheader.js',
    40 => 'sites/all/modules/views/js/base.js',
    41 => 'sites/all/modules/views/js/ajax_view.js',
    42 => 'sites/all/modules/views_bulk_operations/js/views_bulk_operations.js',
    43 => 'misc/machine-name.js',
    44 => 'sites/all/modules/jira_issue_collector/jira_issue_collector.js',
    45 => 'sites/all/modules/field_group/field_group.js',
    46 => 'modules/field_ui/field_ui.js',
    47 => 'sites/all/modules/field_group/field_group.field_ui.js',
    48 => 'misc/tabledrag.js',
    49 => 'sites/all/modules/hybridauth/js/hybridauth.modal.js',
    50 => 'sites/all/modules/hybridauth/js/hybridauth.onclick.js',
    51 => 'sites/all/modules/ctools/js/dropbutton.js',
    52 => 'sites/all/modules/ctools/js/auto-submit.js',
    53 => 'sites/all/modules/jquery_update/replace/misc/1.9/jquery.ba-bbq.min.js',
    54 => 'sites/all/modules/views/js/views-list.js',
    55 => 'sites/all/modules/views/js/ajax.js',
    56 => 'sites/all/modules/jquery_update/replace/ui/ui/minified/jquery.ui.tabs.min.js',
    57 => 'sites/all/modules/ctools/js/dependent.js',
    58 => 'sites/all/modules/ctools/js/collapsible-div.js',
    59 => 'sites/all/modules/views/js/views-admin.js',
    60 => 'sites/beta.landportal.info/modules/landbook/js/util.js',
    61 => 'sites/beta.landportal.info/modules/landbook/js/country_chart_options.js',
    62 => 'sites/beta.landportal.info/modules/landbook/js/libraries/canvg.js',
    63 => 'sites/beta.landportal.info/modules/landbook/js/libraries/rgbcolor.js',
    64 => 'sites/beta.landportal.info/modules/landbook/js/libraries/StackBlur.js',
    65 => 'sites/beta.landportal.info/modules/landbook/js/libraries/seedrandom.min.js',
    66 => 'sites/beta.landportal.info/modules/landbook/js/libraries/wesCountry.min.js',
    67 => 'sites/beta.landportal.info/modules/landbook/js/controller/datasource.js',
    68 => 'sites/all/modules/features/features.js',
    69 => 'modules/block/block.js',
    70 => 'sites/beta.landportal.info/modules/landbook/js/controller/country.js',
    71 => 'sites/all/modules/token/token.js',
    72 => 'sites/all/modules/date/date_api/date_year_range.js',
    73 => 'sites/all/modules/date/date_admin.js',
    74 => 'sites/all/modules/ctools/js/modal.js',
    75 => 'sites/all/modules/ds/js/ds.admin.js',
    76 => 'sites/all/modules/ds/modules/ds_extras/js/ds_extras.admin.js',
    77 => 'sites/beta.landportal.info/modules/landbook/js/controller/regions.js',
    78 => 'sites/all/modules/facetapi/facetapi.js',
    79 => 'sites/all/modules/search_api/search_api.admin.js',
    80 => 'sites/all/modules/rdfx/rdfui/rdfui.js',
    'refresh:es' => 'waiting',
    81 => 'misc/jquery.cookie.js',
    82 => 'sites/all/modules/module_filter/js/module_filter.js',
    83 => 'sites/all/modules/module_filter/js/modules.js',
    84 => 'sites/all/modules/module_filter/js/module_filter_tab.js',
    85 => 'sites/all/modules/module_filter/js/dynamic_position.js',
    86 => 'modules/file/file.js',
    87 => 'sites/all/modules/date/date.js',
    88 => 'sites/all/modules/entityconnect/theme/js/entityconnect.js',
  );
  $export['javascript_parsed'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'job_scheduler_rebuild_all';
  $strongarm->value = FALSE;
  $export['job_scheduler_rebuild_all'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'jquery_update_compression_type';
  $strongarm->value = 'min';
  $export['jquery_update_compression_type'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'jquery_update_jquery_admin_version';
  $strongarm->value = '';
  $export['jquery_update_jquery_admin_version'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'jquery_update_jquery_cdn';
  $strongarm->value = 'none';
  $export['jquery_update_jquery_cdn'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'jquery_update_jquery_version';
  $strongarm->value = '1.10';
  $export['jquery_update_jquery_version'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_agris_clone2';
  $strongarm->value = '0';
  $export['language_content_type_agris_clone2'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_agris_conference_';
  $strongarm->value = '0';
  $export['language_content_type_agris_conference_'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_agris_file_upload_feed';
  $strongarm->value = '0';
  $export['language_content_type_agris_file_upload_feed'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_agris_publisher_file';
  $strongarm->value = '0';
  $export['language_content_type_agris_publisher_file'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_agris_publisher_file_feeds';
  $strongarm->value = '0';
  $export['language_content_type_agris_publisher_file_feeds'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_fao_docs_feed';
  $strongarm->value = '0';
  $export['language_content_type_fao_docs_feed'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_fao_preimport_authors';
  $strongarm->value = '0';
  $export['language_content_type_fao_preimport_authors'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_fao_publications_feed';
  $strongarm->value = '0';
  $export['language_content_type_fao_publications_feed'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_general_feed';
  $strongarm->value = '0';
  $export['language_content_type_general_feed'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_ifpri_batch_file';
  $strongarm->value = '0';
  $export['language_content_type_ifpri_batch_file'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_ifpri_file_upload';
  $strongarm->value = '0';
  $export['language_content_type_ifpri_file_upload'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_ifpri_ingestion';
  $strongarm->value = '0';
  $export['language_content_type_ifpri_ingestion'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_landlibrary_resource';
  $strongarm->value = '4';
  $export['language_content_type_landlibrary_resource'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_page';
  $strongarm->value = '2';
  $export['language_content_type_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_person';
  $strongarm->value = '0';
  $export['language_content_type_person'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_subject_browse';
  $strongarm->value = '0';
  $export['language_content_type_subject_browse'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_subject_browse_item';
  $strongarm->value = '0';
  $export['language_content_type_subject_browse_item'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_count';
  $strongarm->value = 3;
  $export['language_count'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_negotiation_language';
  $strongarm->value = array(
    'locale-url' => array(
      'callbacks' => array(
        'language' => 'locale_language_from_url',
        'switcher' => 'locale_language_switcher_url',
        'url_rewrite' => 'locale_language_url_rewrite_url',
      ),
      'file' => 'includes/locale.inc',
    ),
    'locale-user' => array(
      'callbacks' => array(
        'language' => 'locale_language_from_user',
      ),
      'file' => 'includes/locale.inc',
    ),
    'language-default' => array(
      'callbacks' => array(
        'language' => 'language_from_default',
      ),
    ),
  );
  $export['language_negotiation_language'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_negotiation_language_content';
  $strongarm->value = array(
    'locale-url' => array(
      'callbacks' => array(
        'language' => 'locale_language_from_url',
        'switcher' => 'locale_language_switcher_url',
        'url_rewrite' => 'locale_language_url_rewrite_url',
      ),
      'file' => 'includes/locale.inc',
    ),
    'locale-user' => array(
      'callbacks' => array(
        'language' => 'locale_language_from_user',
      ),
      'file' => 'includes/locale.inc',
    ),
    'locale-interface' => array(
      'callbacks' => array(
        'language' => 'locale_language_from_interface',
      ),
      'file' => 'includes/locale.inc',
    ),
    'language-default' => array(
      'callbacks' => array(
        'language' => 'language_from_default',
      ),
    ),
  );
  $export['language_negotiation_language_content'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_negotiation_language_url';
  $strongarm->value = array(
    'locale-url' => array(
      'callbacks' => array(
        'language' => 'locale_language_from_url',
        'switcher' => 'locale_language_switcher_url',
        'url_rewrite' => 'locale_language_url_rewrite_url',
      ),
      'file' => 'includes/locale.inc',
    ),
    'locale-url-fallback' => array(
      'callbacks' => array(
        'language' => 'locale_language_url_fallback',
      ),
      'file' => 'includes/locale.inc',
    ),
  );
  $export['language_negotiation_language_url'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_types';
  $strongarm->value = array(
    'language' => TRUE,
    'language_content' => TRUE,
    'language_url' => FALSE,
  );
  $export['language_types'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'location_defaultnum_agris_clone2';
  $strongarm->value = '1';
  $export['location_defaultnum_agris_clone2'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'location_defaultnum_agris_conference_';
  $strongarm->value = '1';
  $export['location_defaultnum_agris_conference_'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'location_defaultnum_agris_file_upload_feed';
  $strongarm->value = '1';
  $export['location_defaultnum_agris_file_upload_feed'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'location_defaultnum_agris_publisher_file';
  $strongarm->value = '1';
  $export['location_defaultnum_agris_publisher_file'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'location_defaultnum_agris_publisher_file_feeds';
  $strongarm->value = '1';
  $export['location_defaultnum_agris_publisher_file_feeds'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'location_defaultnum_general_feed';
  $strongarm->value = '1';
  $export['location_defaultnum_general_feed'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'location_defaultnum_ifpri_batch_file';
  $strongarm->value = '1';
  $export['location_defaultnum_ifpri_batch_file'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'location_defaultnum_ifpri_file_upload';
  $strongarm->value = '1';
  $export['location_defaultnum_ifpri_file_upload'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'location_defaultnum_ifpri_ingestion';
  $strongarm->value = '1';
  $export['location_defaultnum_ifpri_ingestion'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'location_defaultnum_landlibrary_resource';
  $strongarm->value = '0';
  $export['location_defaultnum_landlibrary_resource'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'location_defaultnum_organization';
  $strongarm->value = '0';
  $export['location_defaultnum_organization'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'location_defaultnum_person';
  $strongarm->value = '1';
  $export['location_defaultnum_person'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'location_defaultnum_subject_browse';
  $strongarm->value = '1';
  $export['location_defaultnum_subject_browse'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'location_defaultnum_subject_browse_item';
  $strongarm->value = '1';
  $export['location_defaultnum_subject_browse_item'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'location_maxnum_agris_clone2';
  $strongarm->value = '1';
  $export['location_maxnum_agris_clone2'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'location_maxnum_agris_conference_';
  $strongarm->value = '1';
  $export['location_maxnum_agris_conference_'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'location_maxnum_agris_file_upload_feed';
  $strongarm->value = '1';
  $export['location_maxnum_agris_file_upload_feed'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'location_maxnum_agris_publisher_file';
  $strongarm->value = '1';
  $export['location_maxnum_agris_publisher_file'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'location_maxnum_agris_publisher_file_feeds';
  $strongarm->value = '1';
  $export['location_maxnum_agris_publisher_file_feeds'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'location_maxnum_general_feed';
  $strongarm->value = '1';
  $export['location_maxnum_general_feed'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'location_maxnum_ifpri_batch_file';
  $strongarm->value = '1';
  $export['location_maxnum_ifpri_batch_file'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'location_maxnum_ifpri_file_upload';
  $strongarm->value = '1';
  $export['location_maxnum_ifpri_file_upload'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'location_maxnum_ifpri_ingestion';
  $strongarm->value = '1';
  $export['location_maxnum_ifpri_ingestion'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'location_maxnum_landlibrary_resource';
  $strongarm->value = '0';
  $export['location_maxnum_landlibrary_resource'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'location_maxnum_organization';
  $strongarm->value = '0';
  $export['location_maxnum_organization'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'location_maxnum_person';
  $strongarm->value = '1';
  $export['location_maxnum_person'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'location_maxnum_subject_browse';
  $strongarm->value = '1';
  $export['location_maxnum_subject_browse'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'location_maxnum_subject_browse_item';
  $strongarm->value = '1';
  $export['location_maxnum_subject_browse_item'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'location_settings_node_agris_clone2';
  $strongarm->value = array(
    'multiple' => array(
      'min' => '0',
      'max' => '1',
      'add' => '1',
    ),
    'form' => array(
      'weight' => '0',
      'collapsible' => 1,
      'collapsed' => 1,
      'fields' => array(
        'name' => array(
          'collect' => '1',
          'default' => '',
          'weight' => '2',
        ),
        'street' => array(
          'collect' => '1',
          'default' => '',
          'weight' => '4',
        ),
        'additional' => array(
          'collect' => '1',
          'default' => '',
          'weight' => '6',
        ),
        'city' => array(
          'collect' => '0',
          'default' => '',
          'weight' => '8',
        ),
        'province' => array(
          'collect' => '0',
          'widget' => 'autocomplete',
          'default' => '',
          'weight' => '10',
        ),
        'postal_code' => array(
          'collect' => '0',
          'default' => '',
          'weight' => '12',
        ),
        'country' => array(
          'collect' => '1',
          'default' => 'us',
          'weight' => '14',
        ),
        'locpick' => array(
          'collect' => '1',
          'weight' => '20',
        ),
      ),
    ),
    'display' => array(
      'weight' => '0',
      'hide' => array(
        'name' => 0,
        'street' => 0,
        'additional' => 0,
        'city' => 0,
        'province' => 0,
        'postal_code' => 0,
        'country' => 0,
        'locpick' => 0,
        'province_name' => 0,
        'country_name' => 0,
        'map_link' => 0,
        'coords' => 0,
      ),
      'teaser' => 1,
      'full' => 1,
    ),
    'rss' => array(
      'mode' => 'simple',
    ),
  );
  $export['location_settings_node_agris_clone2'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'location_settings_node_agris_conference_';
  $strongarm->value = array(
    'multiple' => array(
      'min' => '0',
      'max' => '1',
      'add' => '1',
    ),
    'form' => array(
      'weight' => '0',
      'collapsible' => 1,
      'collapsed' => 1,
      'fields' => array(
        'name' => array(
          'collect' => '1',
          'default' => '',
          'weight' => '2',
        ),
        'street' => array(
          'collect' => '1',
          'default' => '',
          'weight' => '4',
        ),
        'additional' => array(
          'collect' => '1',
          'default' => '',
          'weight' => '6',
        ),
        'city' => array(
          'collect' => '0',
          'default' => '',
          'weight' => '8',
        ),
        'province' => array(
          'collect' => '0',
          'widget' => 'autocomplete',
          'default' => '',
          'weight' => '10',
        ),
        'postal_code' => array(
          'collect' => '0',
          'default' => '',
          'weight' => '12',
        ),
        'country' => array(
          'collect' => '1',
          'default' => 'us',
          'weight' => '14',
        ),
        'locpick' => array(
          'collect' => '1',
          'weight' => '20',
        ),
      ),
    ),
    'display' => array(
      'weight' => '0',
      'hide' => array(
        'name' => 0,
        'street' => 0,
        'additional' => 0,
        'city' => 0,
        'province' => 0,
        'postal_code' => 0,
        'country' => 0,
        'locpick' => 0,
        'province_name' => 0,
        'country_name' => 0,
        'map_link' => 0,
        'coords' => 0,
      ),
      'teaser' => 1,
      'full' => 1,
    ),
    'rss' => array(
      'mode' => 'simple',
    ),
  );
  $export['location_settings_node_agris_conference_'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'location_settings_node_agris_file_upload_feed';
  $strongarm->value = array(
    'multiple' => array(
      'min' => '0',
      'max' => '1',
      'add' => '1',
    ),
    'form' => array(
      'weight' => '0',
      'collapsible' => 1,
      'collapsed' => 1,
      'fields' => array(
        'name' => array(
          'collect' => '1',
          'default' => '',
          'weight' => '2',
        ),
        'street' => array(
          'collect' => '1',
          'default' => '',
          'weight' => '4',
        ),
        'additional' => array(
          'collect' => '1',
          'default' => '',
          'weight' => '6',
        ),
        'city' => array(
          'collect' => '0',
          'default' => '',
          'weight' => '8',
        ),
        'province' => array(
          'collect' => '0',
          'widget' => 'autocomplete',
          'default' => '',
          'weight' => '10',
        ),
        'postal_code' => array(
          'collect' => '0',
          'default' => '',
          'weight' => '12',
        ),
        'country' => array(
          'collect' => '1',
          'default' => 'us',
          'weight' => '14',
        ),
        'locpick' => array(
          'collect' => '1',
          'weight' => '20',
        ),
      ),
    ),
    'display' => array(
      'weight' => '0',
      'hide' => array(
        'name' => 0,
        'street' => 0,
        'additional' => 0,
        'city' => 0,
        'province' => 0,
        'postal_code' => 0,
        'country' => 0,
        'locpick' => 0,
        'province_name' => 0,
        'country_name' => 0,
        'map_link' => 0,
        'coords' => 0,
      ),
      'teaser' => 1,
      'full' => 1,
    ),
    'rss' => array(
      'mode' => 'simple',
    ),
  );
  $export['location_settings_node_agris_file_upload_feed'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'location_settings_node_agris_publisher_file';
  $strongarm->value = array(
    'multiple' => array(
      'min' => '0',
      'max' => '1',
      'add' => '1',
    ),
    'form' => array(
      'weight' => '0',
      'collapsible' => 1,
      'collapsed' => 1,
      'fields' => array(
        'name' => array(
          'collect' => '1',
          'default' => '',
          'weight' => '2',
        ),
        'street' => array(
          'collect' => '1',
          'default' => '',
          'weight' => '4',
        ),
        'additional' => array(
          'collect' => '1',
          'default' => '',
          'weight' => '6',
        ),
        'city' => array(
          'collect' => '0',
          'default' => '',
          'weight' => '8',
        ),
        'province' => array(
          'collect' => '0',
          'widget' => 'autocomplete',
          'default' => '',
          'weight' => '10',
        ),
        'postal_code' => array(
          'collect' => '0',
          'default' => '',
          'weight' => '12',
        ),
        'country' => array(
          'collect' => '1',
          'default' => 'us',
          'weight' => '14',
        ),
        'locpick' => array(
          'collect' => '1',
          'weight' => '20',
        ),
      ),
    ),
    'display' => array(
      'weight' => '0',
      'hide' => array(
        'name' => 0,
        'street' => 0,
        'additional' => 0,
        'city' => 0,
        'province' => 0,
        'postal_code' => 0,
        'country' => 0,
        'locpick' => 0,
        'province_name' => 0,
        'country_name' => 0,
        'map_link' => 0,
        'coords' => 0,
      ),
      'teaser' => 1,
      'full' => 1,
    ),
    'rss' => array(
      'mode' => 'simple',
    ),
  );
  $export['location_settings_node_agris_publisher_file'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'location_settings_node_agris_publisher_file_feeds';
  $strongarm->value = array(
    'multiple' => array(
      'min' => '0',
      'max' => '1',
      'add' => '1',
    ),
    'form' => array(
      'weight' => '0',
      'collapsible' => 1,
      'collapsed' => 1,
      'fields' => array(
        'name' => array(
          'collect' => '1',
          'default' => '',
          'weight' => '2',
        ),
        'street' => array(
          'collect' => '1',
          'default' => '',
          'weight' => '4',
        ),
        'additional' => array(
          'collect' => '1',
          'default' => '',
          'weight' => '6',
        ),
        'city' => array(
          'collect' => '0',
          'default' => '',
          'weight' => '8',
        ),
        'province' => array(
          'collect' => '0',
          'widget' => 'autocomplete',
          'default' => '',
          'weight' => '10',
        ),
        'postal_code' => array(
          'collect' => '0',
          'default' => '',
          'weight' => '12',
        ),
        'country' => array(
          'collect' => '1',
          'default' => 'us',
          'weight' => '14',
        ),
        'locpick' => array(
          'collect' => '1',
          'weight' => '20',
        ),
      ),
    ),
    'display' => array(
      'weight' => '0',
      'hide' => array(
        'name' => 0,
        'street' => 0,
        'additional' => 0,
        'city' => 0,
        'province' => 0,
        'postal_code' => 0,
        'country' => 0,
        'locpick' => 0,
        'province_name' => 0,
        'country_name' => 0,
        'map_link' => 0,
        'coords' => 0,
      ),
      'teaser' => 1,
      'full' => 1,
    ),
    'rss' => array(
      'mode' => 'simple',
    ),
  );
  $export['location_settings_node_agris_publisher_file_feeds'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'location_settings_node_general_feed';
  $strongarm->value = array(
    'multiple' => array(
      'min' => '0',
      'max' => '1',
      'add' => '1',
    ),
    'form' => array(
      'weight' => '0',
      'collapsible' => 1,
      'collapsed' => 1,
      'fields' => array(
        'name' => array(
          'collect' => '1',
          'default' => '',
          'weight' => '2',
        ),
        'street' => array(
          'collect' => '1',
          'default' => '',
          'weight' => '4',
        ),
        'additional' => array(
          'collect' => '1',
          'default' => '',
          'weight' => '6',
        ),
        'city' => array(
          'collect' => '0',
          'default' => '',
          'weight' => '8',
        ),
        'province' => array(
          'collect' => '0',
          'widget' => 'autocomplete',
          'default' => '',
          'weight' => '10',
        ),
        'postal_code' => array(
          'collect' => '0',
          'default' => '',
          'weight' => '12',
        ),
        'country' => array(
          'collect' => '1',
          'default' => 'us',
          'weight' => '14',
        ),
        'locpick' => array(
          'collect' => '1',
          'weight' => '20',
        ),
      ),
    ),
    'display' => array(
      'weight' => '0',
      'hide' => array(
        'name' => 0,
        'street' => 0,
        'additional' => 0,
        'city' => 0,
        'province' => 0,
        'postal_code' => 0,
        'country' => 0,
        'locpick' => 0,
        'province_name' => 0,
        'country_name' => 0,
        'map_link' => 0,
        'coords' => 0,
      ),
      'teaser' => 1,
      'full' => 1,
    ),
    'rss' => array(
      'mode' => 'simple',
    ),
  );
  $export['location_settings_node_general_feed'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'location_settings_node_ifpri_batch_file';
  $strongarm->value = array(
    'multiple' => array(
      'min' => '0',
      'max' => '1',
      'add' => '1',
    ),
    'form' => array(
      'weight' => '0',
      'collapsible' => 1,
      'collapsed' => 1,
      'fields' => array(
        'name' => array(
          'collect' => '1',
          'default' => '',
          'weight' => '2',
        ),
        'street' => array(
          'collect' => '1',
          'default' => '',
          'weight' => '4',
        ),
        'additional' => array(
          'collect' => '1',
          'default' => '',
          'weight' => '6',
        ),
        'city' => array(
          'collect' => '0',
          'default' => '',
          'weight' => '8',
        ),
        'province' => array(
          'collect' => '0',
          'widget' => 'autocomplete',
          'default' => '',
          'weight' => '10',
        ),
        'postal_code' => array(
          'collect' => '0',
          'default' => '',
          'weight' => '12',
        ),
        'country' => array(
          'collect' => '1',
          'default' => 'us',
          'weight' => '14',
        ),
        'locpick' => array(
          'collect' => '1',
          'weight' => '20',
        ),
      ),
    ),
    'display' => array(
      'weight' => '0',
      'hide' => array(
        'name' => 0,
        'street' => 0,
        'additional' => 0,
        'city' => 0,
        'province' => 0,
        'postal_code' => 0,
        'country' => 0,
        'locpick' => 0,
        'province_name' => 0,
        'country_name' => 0,
        'map_link' => 0,
        'coords' => 0,
      ),
      'teaser' => 1,
      'full' => 1,
    ),
    'rss' => array(
      'mode' => 'simple',
    ),
  );
  $export['location_settings_node_ifpri_batch_file'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'location_settings_node_ifpri_file_upload';
  $strongarm->value = array(
    'multiple' => array(
      'min' => '0',
      'max' => '1',
      'add' => '1',
    ),
    'form' => array(
      'weight' => '0',
      'collapsible' => 1,
      'collapsed' => 1,
      'fields' => array(
        'name' => array(
          'collect' => '1',
          'default' => '',
          'weight' => '2',
        ),
        'street' => array(
          'collect' => '1',
          'default' => '',
          'weight' => '4',
        ),
        'additional' => array(
          'collect' => '1',
          'default' => '',
          'weight' => '6',
        ),
        'city' => array(
          'collect' => '0',
          'default' => '',
          'weight' => '8',
        ),
        'province' => array(
          'collect' => '0',
          'widget' => 'autocomplete',
          'default' => '',
          'weight' => '10',
        ),
        'postal_code' => array(
          'collect' => '0',
          'default' => '',
          'weight' => '12',
        ),
        'country' => array(
          'collect' => '1',
          'default' => 'us',
          'weight' => '14',
        ),
        'locpick' => array(
          'collect' => '1',
          'weight' => '20',
        ),
      ),
    ),
    'display' => array(
      'weight' => '0',
      'hide' => array(
        'name' => 0,
        'street' => 0,
        'additional' => 0,
        'city' => 0,
        'province' => 0,
        'postal_code' => 0,
        'country' => 0,
        'locpick' => 0,
        'province_name' => 0,
        'country_name' => 0,
        'map_link' => 0,
        'coords' => 0,
      ),
      'teaser' => 1,
      'full' => 1,
    ),
    'rss' => array(
      'mode' => 'simple',
    ),
  );
  $export['location_settings_node_ifpri_file_upload'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'location_settings_node_ifpri_ingestion';
  $strongarm->value = array(
    'multiple' => array(
      'min' => '0',
      'max' => '1',
      'add' => '1',
    ),
    'form' => array(
      'weight' => '0',
      'collapsible' => 1,
      'collapsed' => 1,
      'fields' => array(
        'name' => array(
          'collect' => '1',
          'default' => '',
          'weight' => '2',
        ),
        'street' => array(
          'collect' => '1',
          'default' => '',
          'weight' => '4',
        ),
        'additional' => array(
          'collect' => '1',
          'default' => '',
          'weight' => '6',
        ),
        'city' => array(
          'collect' => '0',
          'default' => '',
          'weight' => '8',
        ),
        'province' => array(
          'collect' => '0',
          'widget' => 'autocomplete',
          'default' => '',
          'weight' => '10',
        ),
        'postal_code' => array(
          'collect' => '0',
          'default' => '',
          'weight' => '12',
        ),
        'country' => array(
          'collect' => '1',
          'default' => 'us',
          'weight' => '14',
        ),
        'locpick' => array(
          'collect' => '1',
          'weight' => '20',
        ),
      ),
    ),
    'display' => array(
      'weight' => '0',
      'hide' => array(
        'name' => 0,
        'street' => 0,
        'additional' => 0,
        'city' => 0,
        'province' => 0,
        'postal_code' => 0,
        'country' => 0,
        'locpick' => 0,
        'province_name' => 0,
        'country_name' => 0,
        'map_link' => 0,
        'coords' => 0,
      ),
      'teaser' => 1,
      'full' => 1,
    ),
    'rss' => array(
      'mode' => 'simple',
    ),
  );
  $export['location_settings_node_ifpri_ingestion'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'location_settings_node_landlibrary_resource';
  $strongarm->value = array(
    'multiple' => array(
      'min' => '0',
      'max' => '0',
      'add' => '0',
    ),
    'form' => array(
      'weight' => '0',
      'collapsible' => 1,
      'collapsed' => 1,
      'fields' => array(
        'name' => array(
          'collect' => '1',
          'default' => '',
          'weight' => '2',
        ),
        'street' => array(
          'collect' => '1',
          'default' => '',
          'weight' => '4',
        ),
        'additional' => array(
          'collect' => '1',
          'default' => '',
          'weight' => '6',
        ),
        'city' => array(
          'collect' => '0',
          'default' => '',
          'weight' => '8',
        ),
        'province' => array(
          'collect' => '0',
          'widget' => 'autocomplete',
          'default' => '',
          'weight' => '10',
        ),
        'postal_code' => array(
          'collect' => '0',
          'default' => '',
          'weight' => '12',
        ),
        'country' => array(
          'collect' => '1',
          'default' => 'us',
          'weight' => '14',
        ),
        'locpick' => array(
          'collect' => '1',
          'weight' => '20',
        ),
      ),
    ),
    'display' => array(
      'weight' => '0',
      'hide' => array(
        'name' => 0,
        'street' => 0,
        'additional' => 0,
        'city' => 0,
        'province' => 0,
        'postal_code' => 0,
        'country' => 0,
        'locpick' => 0,
        'province_name' => 0,
        'country_name' => 0,
        'map_link' => 0,
        'coords' => 0,
      ),
      'teaser' => 0,
      'full' => 0,
    ),
    'rss' => array(
      'mode' => 'simple',
    ),
  );
  $export['location_settings_node_landlibrary_resource'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'location_settings_node_organization';
  $strongarm->value = array(
    'multiple' => array(
      'min' => '0',
      'max' => '0',
      'add' => '0',
    ),
    'form' => array(
      'weight' => '0',
      'collapsible' => 1,
      'collapsed' => 1,
      'fields' => array(
        'name' => array(
          'collect' => '1',
          'default' => '',
          'weight' => '2',
        ),
        'street' => array(
          'collect' => '1',
          'default' => '',
          'weight' => '4',
        ),
        'additional' => array(
          'collect' => '1',
          'default' => '',
          'weight' => '6',
        ),
        'city' => array(
          'collect' => '0',
          'default' => '',
          'weight' => '8',
        ),
        'province' => array(
          'collect' => '0',
          'widget' => 'autocomplete',
          'default' => '',
          'weight' => '10',
        ),
        'postal_code' => array(
          'collect' => '0',
          'default' => '',
          'weight' => '12',
        ),
        'country' => array(
          'collect' => '1',
          'default' => 'us',
          'weight' => '14',
        ),
        'locpick' => array(
          'collect' => '1',
          'weight' => '20',
        ),
      ),
    ),
    'display' => array(
      'weight' => '0',
      'hide' => array(
        'name' => 0,
        'street' => 0,
        'additional' => 0,
        'city' => 0,
        'province' => 0,
        'postal_code' => 0,
        'country' => 0,
        'locpick' => 0,
        'province_name' => 0,
        'country_name' => 0,
        'map_link' => 0,
        'coords' => 0,
      ),
      'teaser' => 1,
      'full' => 1,
    ),
    'rss' => array(
      'mode' => 'simple',
    ),
  );
  $export['location_settings_node_organization'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'location_settings_node_person';
  $strongarm->value = array(
    'multiple' => array(
      'min' => '0',
      'max' => '1',
      'add' => '1',
    ),
    'form' => array(
      'weight' => '0',
      'collapsible' => 1,
      'collapsed' => 1,
      'fields' => array(
        'name' => array(
          'collect' => '1',
          'default' => '',
          'weight' => '2',
        ),
        'street' => array(
          'collect' => '1',
          'default' => '',
          'weight' => '4',
        ),
        'additional' => array(
          'collect' => '1',
          'default' => '',
          'weight' => '6',
        ),
        'city' => array(
          'collect' => '0',
          'default' => '',
          'weight' => '8',
        ),
        'province' => array(
          'collect' => '0',
          'widget' => 'autocomplete',
          'default' => '',
          'weight' => '10',
        ),
        'postal_code' => array(
          'collect' => '0',
          'default' => '',
          'weight' => '12',
        ),
        'country' => array(
          'collect' => '1',
          'default' => 'us',
          'weight' => '14',
        ),
        'locpick' => array(
          'collect' => '1',
          'weight' => '20',
        ),
      ),
    ),
    'display' => array(
      'weight' => '0',
      'hide' => array(
        'name' => 0,
        'street' => 0,
        'additional' => 0,
        'city' => 0,
        'province' => 0,
        'postal_code' => 0,
        'country' => 0,
        'locpick' => 0,
        'province_name' => 0,
        'country_name' => 0,
        'map_link' => 0,
        'coords' => 0,
      ),
      'teaser' => 1,
      'full' => 1,
    ),
    'rss' => array(
      'mode' => 'simple',
    ),
  );
  $export['location_settings_node_person'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'location_settings_node_subject_browse';
  $strongarm->value = array(
    'multiple' => array(
      'min' => '0',
      'max' => '1',
      'add' => '1',
    ),
    'form' => array(
      'weight' => '0',
      'collapsible' => 1,
      'collapsed' => 1,
      'fields' => array(
        'name' => array(
          'collect' => '1',
          'default' => '',
          'weight' => '2',
        ),
        'street' => array(
          'collect' => '1',
          'default' => '',
          'weight' => '4',
        ),
        'additional' => array(
          'collect' => '1',
          'default' => '',
          'weight' => '6',
        ),
        'city' => array(
          'collect' => '0',
          'default' => '',
          'weight' => '8',
        ),
        'province' => array(
          'collect' => '0',
          'widget' => 'autocomplete',
          'default' => '',
          'weight' => '10',
        ),
        'postal_code' => array(
          'collect' => '0',
          'default' => '',
          'weight' => '12',
        ),
        'country' => array(
          'collect' => '1',
          'default' => 'us',
          'weight' => '14',
        ),
        'locpick' => array(
          'collect' => '1',
          'weight' => '20',
        ),
      ),
    ),
    'display' => array(
      'weight' => '0',
      'hide' => array(
        'name' => 0,
        'street' => 0,
        'additional' => 0,
        'city' => 0,
        'province' => 0,
        'postal_code' => 0,
        'country' => 0,
        'locpick' => 0,
        'province_name' => 0,
        'country_name' => 0,
        'map_link' => 0,
        'coords' => 0,
      ),
      'teaser' => 1,
      'full' => 1,
    ),
    'rss' => array(
      'mode' => 'simple',
    ),
  );
  $export['location_settings_node_subject_browse'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'location_settings_node_subject_browse_item';
  $strongarm->value = array(
    'multiple' => array(
      'min' => '0',
      'max' => '1',
      'add' => '1',
    ),
    'form' => array(
      'weight' => '0',
      'collapsible' => 1,
      'collapsed' => 1,
      'fields' => array(
        'name' => array(
          'collect' => '1',
          'default' => '',
          'weight' => '2',
        ),
        'street' => array(
          'collect' => '1',
          'default' => '',
          'weight' => '4',
        ),
        'additional' => array(
          'collect' => '1',
          'default' => '',
          'weight' => '6',
        ),
        'city' => array(
          'collect' => '0',
          'default' => '',
          'weight' => '8',
        ),
        'province' => array(
          'collect' => '0',
          'widget' => 'autocomplete',
          'default' => '',
          'weight' => '10',
        ),
        'postal_code' => array(
          'collect' => '0',
          'default' => '',
          'weight' => '12',
        ),
        'country' => array(
          'collect' => '1',
          'default' => 'us',
          'weight' => '14',
        ),
        'locpick' => array(
          'collect' => '1',
          'weight' => '20',
        ),
      ),
    ),
    'display' => array(
      'weight' => '0',
      'hide' => array(
        'name' => 0,
        'street' => 0,
        'additional' => 0,
        'city' => 0,
        'province' => 0,
        'postal_code' => 0,
        'country' => 0,
        'locpick' => 0,
        'province_name' => 0,
        'country_name' => 0,
        'map_link' => 0,
        'coords' => 0,
      ),
      'teaser' => 1,
      'full' => 1,
    ),
    'rss' => array(
      'mode' => 'simple',
    ),
  );
  $export['location_settings_node_subject_browse_item'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_expanded';
  $strongarm->value = array(
    0 => 'menu-land-portal-about',
  );
  $export['menu_expanded'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_masks';
  $strongarm->value = array(
    0 => 507,
    1 => 506,
    2 => 503,
    3 => 501,
    4 => 494,
    5 => 493,
    6 => 253,
    7 => 252,
    8 => 251,
    9 => 250,
    10 => 247,
    11 => 246,
    12 => 245,
    13 => 241,
    14 => 238,
    15 => 127,
    16 => 126,
    17 => 125,
    18 => 124,
    19 => 123,
    20 => 122,
    21 => 121,
    22 => 119,
    23 => 118,
    24 => 117,
    25 => 108,
    26 => 63,
    27 => 62,
    28 => 61,
    29 => 60,
    30 => 59,
    31 => 58,
    32 => 56,
    33 => 54,
    34 => 44,
    35 => 31,
    36 => 30,
    37 => 29,
    38 => 28,
    39 => 27,
    40 => 26,
    41 => 24,
    42 => 22,
    43 => 21,
    44 => 15,
    45 => 14,
    46 => 13,
    47 => 12,
    48 => 11,
    49 => 10,
    50 => 7,
    51 => 6,
    52 => 5,
    53 => 3,
    54 => 2,
    55 => 1,
  );
  $export['menu_masks'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_agris_clone2';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_agris_clone2'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_agris_conference_';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_agris_conference_'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_agris_file_upload_feed';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_agris_file_upload_feed'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_agris_publisher_file';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_agris_publisher_file'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_agris_publisher_file_feeds';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_agris_publisher_file_feeds'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_fao_docs_feed';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_fao_docs_feed'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_fao_preimport_authors';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_fao_preimport_authors'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_fao_publications_feed';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_fao_publications_feed'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_general_feed';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_general_feed'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_ifpri_batch_file';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_ifpri_batch_file'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_ifpri_file_upload';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_ifpri_file_upload'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_ifpri_ingestion';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_ifpri_ingestion'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_landlibrary_resource';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_landlibrary_resource'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_page';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_person';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_person'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_subject_browse';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_subject_browse'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_subject_browse_item';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_subject_browse_item'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_agris_clone2';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_agris_clone2'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_agris_conference_';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_agris_conference_'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_agris_file_upload_feed';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_agris_file_upload_feed'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_agris_publisher_file';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_agris_publisher_file'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_agris_publisher_file_feeds';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_agris_publisher_file_feeds'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_fao_docs_feed';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_fao_docs_feed'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_fao_preimport_authors';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_fao_preimport_authors'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_fao_publications_feed';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_fao_publications_feed'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_general_feed';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_general_feed'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_ifpri_batch_file';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_ifpri_batch_file'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_ifpri_file_upload';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_ifpri_file_upload'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_ifpri_ingestion';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_ifpri_ingestion'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_landlibrary_resource';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_landlibrary_resource'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_page';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_person';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_person'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_subject_browse';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_subject_browse'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_subject_browse_item';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_subject_browse_item'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'module_filter_recent_modules';
  $strongarm->value = array(
    'rules_i18n' => 1431076972,
    'rules' => 1431076972,
    'rules_autotag' => 1431076972,
    'rules_admin' => 1431076972,
    'bulk_export' => 1431090019,
    'apachesolr_descr' => 1431090019,
    'uuid_redirect' => 1431090019,
  );
  $export['module_filter_recent_modules'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_admin_theme';
  $strongarm->value = '1';
  $export['node_admin_theme'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_cron_last';
  $strongarm->value = '1424961807';
  $export['node_cron_last'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_agris_clone2';
  $strongarm->value = array(
    0 => 'status',
    1 => 'promote',
  );
  $export['node_options_agris_clone2'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_agris_conference_';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_agris_conference_'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_agris_file_upload_feed';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_agris_file_upload_feed'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_agris_publisher_file';
  $strongarm->value = array(
    0 => 'status',
    1 => 'promote',
  );
  $export['node_options_agris_publisher_file'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_agris_publisher_file_feeds';
  $strongarm->value = array(
    0 => 'status',
    1 => 'promote',
  );
  $export['node_options_agris_publisher_file_feeds'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_fao_docs_feed';
  $strongarm->value = array(
    0 => 'status',
    1 => 'promote',
  );
  $export['node_options_fao_docs_feed'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_fao_preimport_authors';
  $strongarm->value = array(
    0 => 'status',
    1 => 'promote',
  );
  $export['node_options_fao_preimport_authors'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_fao_publications_feed';
  $strongarm->value = array(
    0 => 'status',
    1 => 'promote',
  );
  $export['node_options_fao_publications_feed'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_general_feed';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_general_feed'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_ifpri_batch_file';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_ifpri_batch_file'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_ifpri_file_upload';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_ifpri_file_upload'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_ifpri_ingestion';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_ifpri_ingestion'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_landlibrary_resource';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_landlibrary_resource'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_page';
  $strongarm->value = array(
    0 => 'status',
    1 => 'revision',
  );
  $export['node_options_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_person';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_person'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_subject_browse';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_subject_browse'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_subject_browse_item';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_subject_browse_item'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_agris_clone2';
  $strongarm->value = '1';
  $export['node_preview_agris_clone2'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_agris_conference_';
  $strongarm->value = '1';
  $export['node_preview_agris_conference_'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_agris_file_upload_feed';
  $strongarm->value = '0';
  $export['node_preview_agris_file_upload_feed'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_agris_publisher_file';
  $strongarm->value = '1';
  $export['node_preview_agris_publisher_file'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_agris_publisher_file_feeds';
  $strongarm->value = '1';
  $export['node_preview_agris_publisher_file_feeds'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_fao_docs_feed';
  $strongarm->value = '1';
  $export['node_preview_fao_docs_feed'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_fao_preimport_authors';
  $strongarm->value = '1';
  $export['node_preview_fao_preimport_authors'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_fao_publications_feed';
  $strongarm->value = '1';
  $export['node_preview_fao_publications_feed'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_general_feed';
  $strongarm->value = '1';
  $export['node_preview_general_feed'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_ifpri_batch_file';
  $strongarm->value = '1';
  $export['node_preview_ifpri_batch_file'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_ifpri_file_upload';
  $strongarm->value = '1';
  $export['node_preview_ifpri_file_upload'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_ifpri_ingestion';
  $strongarm->value = '1';
  $export['node_preview_ifpri_ingestion'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_landlibrary_resource';
  $strongarm->value = '1';
  $export['node_preview_landlibrary_resource'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_page';
  $strongarm->value = '1';
  $export['node_preview_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_person';
  $strongarm->value = '1';
  $export['node_preview_person'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_subject_browse';
  $strongarm->value = '1';
  $export['node_preview_subject_browse'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_agris_clone2';
  $strongarm->value = 1;
  $export['node_submitted_agris_clone2'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_agris_conference_';
  $strongarm->value = 1;
  $export['node_submitted_agris_conference_'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_agris_file_upload_feed';
  $strongarm->value = 1;
  $export['node_submitted_agris_file_upload_feed'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_agris_publisher_file';
  $strongarm->value = 1;
  $export['node_submitted_agris_publisher_file'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_agris_publisher_file_feeds';
  $strongarm->value = 1;
  $export['node_submitted_agris_publisher_file_feeds'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_fao_docs_feed';
  $strongarm->value = 1;
  $export['node_submitted_fao_docs_feed'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_fao_preimport_authors';
  $strongarm->value = 1;
  $export['node_submitted_fao_preimport_authors'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_fao_publications_feed';
  $strongarm->value = 1;
  $export['node_submitted_fao_publications_feed'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_general_feed';
  $strongarm->value = 1;
  $export['node_submitted_general_feed'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_ifpri_batch_file';
  $strongarm->value = 1;
  $export['node_submitted_ifpri_batch_file'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_ifpri_file_upload';
  $strongarm->value = 1;
  $export['node_submitted_ifpri_file_upload'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_ifpri_ingestion';
  $strongarm->value = 1;
  $export['node_submitted_ifpri_ingestion'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_landlibrary_resource';
  $strongarm->value = 1;
  $export['node_submitted_landlibrary_resource'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_page';
  $strongarm->value = 1;
  $export['node_submitted_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_person';
  $strongarm->value = 0;
  $export['node_submitted_person'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_subject_browse';
  $strongarm->value = 1;
  $export['node_submitted_subject_browse'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_subject_browse_item';
  $strongarm->value = 1;
  $export['node_submitted_subject_browse_item'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_blog_pattern';
  $strongarm->value = 'blogs/[user:name]';
  $export['pathauto_blog_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_forum_pattern';
  $strongarm->value = '[term:vocabulary]/[term:name]';
  $export['pathauto_forum_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_agris_clone2_pattern';
  $strongarm->value = '';
  $export['pathauto_node_agris_clone2_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_agris_file_upload_feed_pattern';
  $strongarm->value = '';
  $export['pathauto_node_agris_file_upload_feed_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_agris_publisher_file_feeds_pattern';
  $strongarm->value = '';
  $export['pathauto_node_agris_publisher_file_feeds_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_agris_publisher_file_pattern';
  $strongarm->value = '';
  $export['pathauto_node_agris_publisher_file_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_article_pattern';
  $strongarm->value = '';
  $export['pathauto_node_article_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_blog_post_pattern';
  $strongarm->value = '';
  $export['pathauto_node_blog_post_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_debate_pattern';
  $strongarm->value = '';
  $export['pathauto_node_debate_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_event_en_pattern';
  $strongarm->value = '';
  $export['pathauto_node_event_en_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_event_es_pattern';
  $strongarm->value = '';
  $export['pathauto_node_event_es_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_event_fr_pattern';
  $strongarm->value = '';
  $export['pathauto_node_event_fr_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_event_pattern';
  $strongarm->value = '';
  $export['pathauto_node_event_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_event_und_pattern';
  $strongarm->value = '';
  $export['pathauto_node_event_und_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_feed_item_pattern';
  $strongarm->value = '';
  $export['pathauto_node_feed_item_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_feed_pattern';
  $strongarm->value = '';
  $export['pathauto_node_feed_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_general_feed_pattern';
  $strongarm->value = '';
  $export['pathauto_node_general_feed_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_ifpri_file_upload_pattern';
  $strongarm->value = '';
  $export['pathauto_node_ifpri_file_upload_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_ifpri_ingestion_pattern';
  $strongarm->value = '';
  $export['pathauto_node_ifpri_ingestion_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_landlibrary_resource_pattern';
  $strongarm->value = 'library/[current-date:custom:Y]/[current-date:custom:m]/[node:title]';
  $export['pathauto_node_landlibrary_resource_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_news_en_pattern';
  $strongarm->value = '';
  $export['pathauto_node_news_en_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_news_es_pattern';
  $strongarm->value = '';
  $export['pathauto_node_news_es_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_news_fr_pattern';
  $strongarm->value = '';
  $export['pathauto_node_news_fr_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_news_pattern';
  $strongarm->value = '';
  $export['pathauto_node_news_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_news_und_pattern';
  $strongarm->value = '';
  $export['pathauto_node_news_und_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_organization_pattern';
  $strongarm->value = '';
  $export['pathauto_node_organization_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_page_pattern';
  $strongarm->value = '';
  $export['pathauto_node_page_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_pattern';
  $strongarm->value = '[node:content-type]/[current-date:custom:Y]/[current-date:custom:m]/[node:title]';
  $export['pathauto_node_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_person_pattern';
  $strongarm->value = '';
  $export['pathauto_node_person_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_punctuation_hyphen';
  $strongarm->value = '1';
  $export['pathauto_punctuation_hyphen'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_auto_created_voc8_470_pattern';
  $strongarm->value = '';
  $export['pathauto_taxonomy_term_auto_created_voc8_470_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_countries_pattern';
  $strongarm->value = '';
  $export['pathauto_taxonomy_term_countries_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_debate_status_pattern';
  $strongarm->value = '';
  $export['pathauto_taxonomy_term_debate_status_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_format_pattern';
  $strongarm->value = '';
  $export['pathauto_taxonomy_term_format_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_keywords_pattern';
  $strongarm->value = '';
  $export['pathauto_taxonomy_term_keywords_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_landlibrary_resource_type_pattern';
  $strongarm->value = '';
  $export['pathauto_taxonomy_term_landlibrary_resource_type_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_languages_pattern';
  $strongarm->value = '';
  $export['pathauto_taxonomy_term_languages_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_licences_pattern';
  $strongarm->value = '';
  $export['pathauto_taxonomy_term_licences_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_organization_types_pattern';
  $strongarm->value = '';
  $export['pathauto_taxonomy_term_organization_types_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_pattern';
  $strongarm->value = '[term:vocabulary]/[term:name]';
  $export['pathauto_taxonomy_term_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_regions_pattern';
  $strongarm->value = '';
  $export['pathauto_taxonomy_term_regions_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_subjects_pattern';
  $strongarm->value = '';
  $export['pathauto_taxonomy_term_subjects_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_terms_of_use_pattern';
  $strongarm->value = '';
  $export['pathauto_taxonomy_term_terms_of_use_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_topics_pattern';
  $strongarm->value = '';
  $export['pathauto_taxonomy_term_topics_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_user_pattern';
  $strongarm->value = 'users/[user:name]';
  $export['pathauto_user_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'path_alias_whitelist';
  $strongarm->value = array(
    'node' => TRUE,
    'taxonomy' => TRUE,
    'user' => TRUE,
  );
  $export['path_alias_whitelist'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'save_continue_agris_clone2';
  $strongarm->value = 'Save and add fields';
  $export['save_continue_agris_clone2'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'save_continue_agris_conference_';
  $strongarm->value = 'Save and add fields';
  $export['save_continue_agris_conference_'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'save_continue_agris_file_upload_feed';
  $strongarm->value = 'Save and add fields';
  $export['save_continue_agris_file_upload_feed'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'save_continue_agris_publisher_file';
  $strongarm->value = 'Save and add fields';
  $export['save_continue_agris_publisher_file'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'save_continue_agris_publisher_file_feeds';
  $strongarm->value = 'Save and add fields';
  $export['save_continue_agris_publisher_file_feeds'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'save_continue_general_feed';
  $strongarm->value = 'Save and add fields';
  $export['save_continue_general_feed'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'save_continue_ifpri_batch_file';
  $strongarm->value = 'Save and add fields';
  $export['save_continue_ifpri_batch_file'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'save_continue_ifpri_file_upload';
  $strongarm->value = 'Save and add fields';
  $export['save_continue_ifpri_file_upload'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'save_continue_ifpri_ingestion';
  $strongarm->value = 'Save and add fields';
  $export['save_continue_ifpri_ingestion'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'save_continue_landlibrary_resource';
  $strongarm->value = 'Save and add fields';
  $export['save_continue_landlibrary_resource'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'save_continue_person';
  $strongarm->value = 'Save and add fields';
  $export['save_continue_person'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'save_continue_subject_browse';
  $strongarm->value = 'Save and add fields';
  $export['save_continue_subject_browse'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'save_continue_subject_browse_item';
  $strongarm->value = 'Save and add fields';
  $export['save_continue_subject_browse_item'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'search_active_modules';
  $strongarm->value = array(
    'apachesolr_search' => 'apachesolr_search',
    'node' => 0,
    'user' => 0,
  );
  $export['search_active_modules'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'search_api_solr_last_optimize';
  $strongarm->value = 1431068952;
  $export['search_api_solr_last_optimize'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'site_default_country';
  $strongarm->value = '';
  $export['site_default_country'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'site_mail';
  $strongarm->value = 'info@landportal.info';
  $export['site_mail'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'site_name';
  $strongarm->value = 'Landportal';
  $export['site_name'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'taxonomy_csv_check_hierarchy';
  $strongarm->value = 1;
  $export['taxonomy_csv_check_hierarchy'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'taxonomy_csv_check_line';
  $strongarm->value = 1;
  $export['taxonomy_csv_check_line'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'taxonomy_csv_check_utf8';
  $strongarm->value = 1;
  $export['taxonomy_csv_check_utf8'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'taxonomy_csv_delete_terms';
  $strongarm->value = 1;
  $export['taxonomy_csv_delete_terms'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'taxonomy_csv_export_delimiter';
  $strongarm->value = 'comma';
  $export['taxonomy_csv_export_delimiter'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'taxonomy_csv_export_delimiter_custom';
  $strongarm->value = '';
  $export['taxonomy_csv_export_delimiter_custom'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'taxonomy_csv_export_enclosure';
  $strongarm->value = 'quotation';
  $export['taxonomy_csv_export_enclosure'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'taxonomy_csv_export_enclosure_custom';
  $strongarm->value = '';
  $export['taxonomy_csv_export_enclosure_custom'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'taxonomy_csv_export_format';
  $strongarm->value = 'fields';
  $export['taxonomy_csv_export_format'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'taxonomy_csv_export_line_ending';
  $strongarm->value = 'Unix';
  $export['taxonomy_csv_export_line_ending'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'taxonomy_csv_export_order';
  $strongarm->value = 'name';
  $export['taxonomy_csv_export_order'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'taxonomy_csv_export_vocabulary_id';
  $strongarm->value = array(
    3 => '3',
  );
  $export['taxonomy_csv_export_vocabulary_id'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'taxonomy_csv_filter_format';
  $strongarm->value = 'plain_text';
  $export['taxonomy_csv_filter_format'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'taxonomy_csv_filter_format_custom';
  $strongarm->value = 'none';
  $export['taxonomy_csv_filter_format_custom'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'taxonomy_csv_i18n_mode';
  $strongarm->value = '4';
  $export['taxonomy_csv_i18n_mode'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'taxonomy_csv_import_delimiter';
  $strongarm->value = 'comma';
  $export['taxonomy_csv_import_delimiter'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'taxonomy_csv_import_delimiter_custom';
  $strongarm->value = '';
  $export['taxonomy_csv_import_delimiter_custom'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'taxonomy_csv_import_delimiter_soft_tab_width';
  $strongarm->value = '2';
  $export['taxonomy_csv_import_delimiter_soft_tab_width'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'taxonomy_csv_import_enclosure';
  $strongarm->value = 'quotation';
  $export['taxonomy_csv_import_enclosure'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'taxonomy_csv_import_enclosure_custom';
  $strongarm->value = '';
  $export['taxonomy_csv_import_enclosure_custom'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'taxonomy_csv_import_fields_custom';
  $strongarm->value = '';
  $export['taxonomy_csv_import_fields_custom'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'taxonomy_csv_import_fields_format';
  $strongarm->value = 'name';
  $export['taxonomy_csv_import_fields_format'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'taxonomy_csv_import_format';
  $strongarm->value = 'fields';
  $export['taxonomy_csv_import_format'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'taxonomy_csv_import_language';
  $strongarm->value = 'und';
  $export['taxonomy_csv_import_language'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'taxonomy_csv_keep_order';
  $strongarm->value = 0;
  $export['taxonomy_csv_keep_order'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'taxonomy_csv_language';
  $strongarm->value = 'und';
  $export['taxonomy_csv_language'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'taxonomy_csv_locale_custom';
  $strongarm->value = '';
  $export['taxonomy_csv_locale_custom'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'taxonomy_csv_result_duplicates';
  $strongarm->value = 1;
  $export['taxonomy_csv_result_duplicates'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'taxonomy_csv_result_level';
  $strongarm->value = 'notices';
  $export['taxonomy_csv_result_level'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'taxonomy_csv_result_stats';
  $strongarm->value = 'result_stats';
  $export['taxonomy_csv_result_stats'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'taxonomy_csv_result_terms';
  $strongarm->value = 'result_terms';
  $export['taxonomy_csv_result_terms'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'taxonomy_csv_result_type';
  $strongarm->value = 'by_message';
  $export['taxonomy_csv_result_type'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'taxonomy_csv_set_hierarchy';
  $strongarm->value = '0';
  $export['taxonomy_csv_set_hierarchy'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'taxonomy_csv_source_choice';
  $strongarm->value = 'text';
  $export['taxonomy_csv_source_choice'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'taxonomy_csv_structure_type';
  $strongarm->value = 'tree';
  $export['taxonomy_csv_structure_type'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'taxonomy_csv_translate_by';
  $strongarm->value = 'name';
  $export['taxonomy_csv_translate_by'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'taxonomy_csv_translate_languages';
  $strongarm->value = 'en, fr, es';
  $export['taxonomy_csv_translate_languages'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'taxonomy_csv_update_or_ignore';
  $strongarm->value = 'update';
  $export['taxonomy_csv_update_or_ignore'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'taxonomy_csv_vocabulary_id';
  $strongarm->value = '21';
  $export['taxonomy_csv_vocabulary_id'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'taxonomy_csv_vocabulary_target';
  $strongarm->value = 'existing';
  $export['taxonomy_csv_vocabulary_target'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'theme_default';
  $strongarm->value = 'landportal';
  $export['theme_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'update_last_check';
  $strongarm->value = 1431097548;
  $export['update_last_check'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'upload_extensions_default';
  $strongarm->value = ' csv';
  $export['upload_extensions_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_admin_role';
  $strongarm->value = '30037204';
  $export['user_admin_role'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_picture_dimensions';
  $strongarm->value = '1024x1024';
  $export['user_picture_dimensions'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_picture_file_size';
  $strongarm->value = '800';
  $export['user_picture_file_size'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_register';
  $strongarm->value = '2';
  $export['user_register'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'variable_module_list';
  $strongarm->value = array(
    'locale' => array(
      0 => 'language_content_type_article',
      1 => 'language_content_type_page',
      2 => 'language_content_type_landbook_country',
      3 => 'language_content_type_landbook_indicator',
      4 => 'language_default',
    ),
    'i18n' => array(
      0 => 'i18n_language_list',
    ),
    'i18n_string' => array(
      0 => 'i18n_string_translate_langcode_en',
      1 => 'i18n_string_allowed_formats',
      2 => 'i18n_string_source_language',
      3 => 'i18n_string_debug',
    ),
    'googleanalytics' => array(
      0 => 'googleanalytics_account',
    ),
    'i18n_node' => array(
      0 => 'i18n_hide_translation_links',
      1 => 'i18n_node_default_language_none',
      2 => 'i18n_node_options_migrate_example_beer',
      3 => 'i18n_node_options_blog_post',
      4 => 'i18n_node_options_debate',
      5 => 'i18n_node_options_event',
      6 => 'i18n_node_options_group',
      7 => 'i18n_node_options_landbook_country',
      8 => 'i18n_node_options_landbook_indicator',
      9 => 'i18n_node_options_news',
      10 => 'i18n_node_options_organization',
      11 => 'i18n_node_options_page',
      12 => 'i18n_node_options_migrate_example_wine',
      13 => 'i18n_node_options_migrate_example_producer',
      14 => 'i18n_node_extended_migrate_example_beer',
      15 => 'i18n_node_extended_blog_post',
      16 => 'i18n_node_extended_debate',
      17 => 'i18n_node_extended_event',
      18 => 'i18n_node_extended_group',
      19 => 'i18n_node_extended_landbook_country',
      20 => 'i18n_node_extended_landbook_indicator',
      21 => 'i18n_node_extended_news',
      22 => 'i18n_node_extended_organization',
      23 => 'i18n_node_extended_page',
      24 => 'i18n_node_extended_migrate_example_wine',
      25 => 'i18n_node_extended_migrate_example_producer',
    ),
  );
  $export['variable_module_list'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'views_defaults';
  $strongarm->value = array(
    'admin_views_taxonomy_term' => FALSE,
    'frontpage' => TRUE,
    'latest_news' => TRUE,
    'latest_debates' => TRUE,
    'debate_facilitators' => TRUE,
    'community' => FALSE,
  );
  $export['views_defaults'] = $strongarm;

  return $export;
}

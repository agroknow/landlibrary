<?php
/**
 * @file
 * landlibrary.ds.inc
 */

/**
 * Implements hook_ds_layout_settings_info().
 */
function landlibrary_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|landlibrary_resource|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'landlibrary_resource';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col_wrapper';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_doc_description',
        1 => 'field_doc_subject',
        2 => 'field_doc_keyword',
        3 => 'field_doc_creation_date',
        4 => 'field_doc_is_shown_by_file',
        5 => 'field_doc_licencing',
        6 => 'field_doc_country',
        7 => 'field_doc_citation',
        8 => 'field_doc_citation_identifier',
        9 => 'field_doc_citation_number',
        10 => 'field_doc_citation_chronology',
        11 => 'field_doc_alt_title',
        12 => 'field_doc_copyrights_statement',
        13 => 'field_doc_contributor',
        14 => 'field_doc_provider',
        15 => 'field_doc_publisher',
        16 => 'field_doc_publisher_place',
        17 => 'field_doc_language',
        18 => 'field_doc_creator',
        19 => 'field_doc_type',
        20 => 'field_doc_pagination',
        21 => 'field_format',
        22 => 'field_doc_geographic_region',
        23 => 'field_doc_edition',
        24 => 'field_doc_identifier',
        25 => 'field_doc_terms_of_use',
      ),
    ),
    'fields' => array(
      'field_doc_description' => 'ds_content',
      'field_doc_subject' => 'ds_content',
      'field_doc_keyword' => 'ds_content',
      'field_doc_creation_date' => 'ds_content',
      'field_doc_is_shown_by_file' => 'ds_content',
      'field_doc_licencing' => 'ds_content',
      'field_doc_country' => 'ds_content',
      'field_doc_citation' => 'ds_content',
      'field_doc_citation_identifier' => 'ds_content',
      'field_doc_citation_number' => 'ds_content',
      'field_doc_citation_chronology' => 'ds_content',
      'field_doc_alt_title' => 'ds_content',
      'field_doc_copyrights_statement' => 'ds_content',
      'field_doc_contributor' => 'ds_content',
      'field_doc_provider' => 'ds_content',
      'field_doc_publisher' => 'ds_content',
      'field_doc_publisher_place' => 'ds_content',
      'field_doc_language' => 'ds_content',
      'field_doc_creator' => 'ds_content',
      'field_doc_type' => 'ds_content',
      'field_doc_pagination' => 'ds_content',
      'field_format' => 'ds_content',
      'field_doc_geographic_region' => 'ds_content',
      'field_doc_edition' => 'ds_content',
      'field_doc_identifier' => 'ds_content',
      'field_doc_terms_of_use' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|landlibrary_resource|default'] = $ds_layout;

  return $export;
}

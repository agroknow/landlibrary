<?php
/**
 * @file
 * landlibrary.ds.inc
 */

/**
 * Implements hook_ds_custom_fields_info().
 */
function landlibrary_ds_custom_fields_info() {
  $export = array();

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'view_resources';
  $ds_field->label = 'View resources';
  $ds_field->field_type = 5;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = 'organization|library_source';
  $ds_field->properties = array(
    'code' => array(
      'value' => '<?php echo \'<a href="#">Here.</a>\'; ?>',
      'format' => 'full_html',
    ),
    'use_token' => 1,
  );
  $export['view_resources'] = $ds_field;

  return $export;
}

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
  $ds_layout->layout = 'ds_2col_fluid';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'field_doc_description',
        1 => 'field_doc_keyword',
        2 => 'field_doc_creation_date',
        3 => 'field_doc_licencing',
        4 => 'field_doc_country',
        5 => 'field_doc_is_shown_by',
        6 => 'field_doc_is_shown_at',
        7 => 'field_doc_citation',
        8 => 'field_doc_citation_identifier',
        9 => 'field_doc_citation_number',
        10 => 'field_doc_citation_chronology',
        11 => 'field_doc_alt_title',
        12 => 'field_doc_subject',
        13 => 'field_doc_copyrights_statement',
        24 => 'field_doc_relation',
        25 => 'field_doc_is_part_of',
        26 => 'field_doc_has_part',
        27 => 'field_doc_has_version',
        28 => 'field_doc_is_version_of',
        29 => 'field_doc_has_translation',
        30 => 'field_doc_is_translation_of',
        31 => 'field_doc_references',
        32 => 'field_doc_is_referenced_by',
        33 => 'field_doc_replaces',
        34 => 'field_doc_is_replaced_by',
        35 => 'field_doc_is_required_by',
        36 => 'field_doc_requires',
        37 => 'field_doc_contributor',
        38 => 'field_doc_conference',
      ),
      'right' => array(
        14 => 'field_doc_publisher',
        15 => 'field_doc_publisher_place',
        16 => 'field_doc_creator',
        17 => 'field_doc_type',
        18 => 'field_doc_pagination',
        19 => 'field_format',
        20 => 'field_doc_geographic_region',
        21 => 'field_doc_edition',
        22 => 'field_doc_identifier',
        23 => 'field_doc_terms_of_use',
      ),
    ),
    'fields' => array(
      'field_doc_description' => 'left',
      'field_doc_keyword' => 'left',
      'field_doc_creation_date' => 'left',
      'field_doc_licencing' => 'left',
      'field_doc_country' => 'left',
      'field_doc_is_shown_by' => 'left',
      'field_doc_is_shown_at' => 'left',
      'field_doc_citation' => 'left',
      'field_doc_citation_identifier' => 'left',
      'field_doc_citation_number' => 'left',
      'field_doc_citation_chronology' => 'left',
      'field_doc_alt_title' => 'left',
      'field_doc_subject' => 'left',
      'field_doc_copyrights_statement' => 'left',
      'field_doc_publisher' => 'right',
      'field_doc_publisher_place' => 'right',
      'field_doc_creator' => 'right',
      'field_doc_type' => 'right',
      'field_doc_pagination' => 'right',
      'field_format' => 'right',
      'field_doc_geographic_region' => 'right',
      'field_doc_edition' => 'right',
      'field_doc_identifier' => 'right',
      'field_doc_terms_of_use' => 'right',
      'field_doc_relation' => 'left',
      'field_doc_is_part_of' => 'left',
      'field_doc_has_part' => 'left',
      'field_doc_has_version' => 'left',
      'field_doc_is_version_of' => 'left',
      'field_doc_has_translation' => 'left',
      'field_doc_is_translation_of' => 'left',
      'field_doc_references' => 'left',
      'field_doc_is_referenced_by' => 'left',
      'field_doc_replaces' => 'left',
      'field_doc_is_replaced_by' => 'left',
      'field_doc_is_required_by' => 'left',
      'field_doc_requires' => 'left',
      'field_doc_contributor' => 'left',
      'field_doc_conference' => 'left',
    ),
    'classes' => array(),
    'wrappers' => array(
      'left' => 'div',
      'right' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'hide_page_title' => '2',
    'page_option_title' => '%node:field_doc_title',
  );
  $export['node|landlibrary_resource|default'] = $ds_layout;

  return $export;
}

/**
 * Implements hook_ds_view_modes_info().
 */
function landlibrary_ds_view_modes_info() {
  $export = array();

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'resource';
  $ds_view_mode->label = 'Resource View';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['resource'] = $ds_view_mode;

  return $export;
}

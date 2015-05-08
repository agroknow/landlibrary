<?php
/**
 * @file
 * landlibrary.feeds_importer_default.inc
 */

/**
 * Implements hook_feeds_importer_default().
 */
function landlibrary_feeds_importer_default() {
  $export = array();

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'agris_conference_preimporter';
  $feeds_importer->config = array(
    'name' => 'agris conference  preimporter',
    'description' => 'agris conference preimporter',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'txt csv tsv xml opml html htm',
        'direct' => 0,
        'directory' => 'public://feeds',
        'allowed_schemes' => array(
          'public' => 'public',
        ),
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsXPathParserXML',
      'config' => array(
        'sources' => array(
          'xpathparser:0' => 'text()',
          'xpathparser:1' => 'text()',
        ),
        'rawXML' => array(
          'xpathparser:0' => 'xpathparser:0',
          'xpathparser:1' => 0,
        ),
        'context' => '/ags:resources/ags:resource//ags:creatorConference',
        'exp' => array(
          'errors' => 0,
          'debug' => array(
            'xpathparser:0' => 'xpathparser:0',
            'context' => 0,
            'xpathparser:1' => 0,
          ),
        ),
        'allow_override' => 1,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'expire' => '-1',
        'author' => '1',
        'authorize' => 1,
        'mappings' => array(
          0 => array(
            'source' => 'xpathparser:0',
            'target' => 'title',
            'unique' => 1,
          ),
          1 => array(
            'source' => 'xpathparser:1',
            'target' => 'guid',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '2',
        'input_format' => 'plain_text',
        'skip_hash_check' => 0,
        'bundle' => 'event',
        'update_non_existent' => 'skip',
      ),
    ),
    'content_type' => 'agris_conference_feed',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 0,
    'process_in_background' => 0,
  );
  $export['agris_conference_preimporter'] = $feeds_importer;

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'agris_filter';
  $feeds_importer->config = array(
    'name' => 'agris filter',
    'description' => 'Import xml files from local directory',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'txt csv tsv xml opml html htm',
        'direct' => 0,
        'directory' => 'public://feeds',
        'allowed_schemes' => array(
          'public' => 'public',
        ),
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsXPathParserXML',
      'config' => array(
        'sources' => array(
          'xpathparser:0' => 'dc:title[@xml:lang="en" or @xml:lang="eng"]/text()',
          'xpathparser:1' => 'dc:title[@xml:lang="en" or @xml:lang="eng"]/text()',
          'xpathparser:2' => 'dc:subject[not(ags:subjectClassification)]/text()',
          'xpathparser:3' => 'dc:description/dcterms:abstract/text()',
          'xpathparser:4' => 'dc:language/text()',
          'xpathparser:5' => 'dc:format/dcterms:extent/text()',
          'xpathparser:6' => 'dc:subject/ags:subjectThesaurus/text()',
          'xpathparser:8' => 'dc:publisher/ags:publisherPlace/text()',
          'xpathparser:9' => 'dc:creator/ags:creatorPersonal/text()',
          'xpathparser:10' => 'dc:publisher/ags:publisherName/text()',
          'xpathparser:12' => '',
          'xpathparser:14' => 'dc:date/dcterms:dateIssued/text()',
          'xpathparser:16' => '',
          'xpathparser:17' => '@ags:ARN',
          'xpathparser:18' => 'dc:identifier[@scheme="dcterms:URI"]/text()',
          'xpathparser:19' => 'dc:creator/ags:creatorConference/text()',
          'xpathparser:20' => 'dc:publisher/ags:publisherName/text()',
          'xpathparser:21' => '',
          'xpathparser:22' => 'dc:relation/dcterms:isPartOf[@scheme="dcterms:URI"]/text()',
          'xpathparser:25' => 'ags:citation/ags:citationNumber/text()',
          'xpathparser:27' => 'ags:citation/ags:citationChronology/text()',
          'xpathparser:28' => 'ags:citation/ags:citationTitle[@xml:lang="En"]/text()',
        ),
        'rawXML' => array(
          'xpathparser:0' => 'xpathparser:0',
          'xpathparser:1' => 'xpathparser:1',
          'xpathparser:2' => 'xpathparser:2',
          'xpathparser:3' => 'xpathparser:3',
          'xpathparser:4' => 'xpathparser:4',
          'xpathparser:5' => 'xpathparser:5',
          'xpathparser:6' => 'xpathparser:6',
          'xpathparser:8' => 'xpathparser:8',
          'xpathparser:9' => 'xpathparser:9',
          'xpathparser:10' => 'xpathparser:10',
          'xpathparser:12' => 0,
          'xpathparser:14' => 0,
          'xpathparser:16' => 0,
          'xpathparser:17' => 0,
          'xpathparser:18' => 0,
          'xpathparser:19' => 0,
          'xpathparser:20' => 0,
          'xpathparser:21' => 0,
          'xpathparser:22' => 0,
          'xpathparser:25' => 0,
          'xpathparser:27' => 0,
          'xpathparser:28' => 0,
        ),
        'context' => '/ags:resources/ags:resource',
        'exp' => array(
          'errors' => 1,
          'debug' => array(
            'xpathparser:0' => 'xpathparser:0',
            'xpathparser:1' => 'xpathparser:1',
            'xpathparser:2' => 'xpathparser:2',
            'xpathparser:3' => 'xpathparser:3',
            'xpathparser:4' => 'xpathparser:4',
            'xpathparser:5' => 'xpathparser:5',
            'xpathparser:6' => 'xpathparser:6',
            'xpathparser:8' => 'xpathparser:8',
            'xpathparser:9' => 'xpathparser:9',
            'xpathparser:10' => 'xpathparser:10',
            'context' => 0,
            'xpathparser:12' => 0,
            'xpathparser:14' => 0,
            'xpathparser:16' => 0,
            'xpathparser:17' => 0,
            'xpathparser:18' => 0,
            'xpathparser:19' => 0,
            'xpathparser:20' => 0,
            'xpathparser:21' => 0,
            'xpathparser:22' => 0,
            'xpathparser:25' => 0,
            'xpathparser:27' => 0,
            'xpathparser:28' => 0,
          ),
        ),
        'allow_override' => 1,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'expire' => '-1',
        'author' => '1',
        'authorize' => 0,
        'mappings' => array(
          0 => array(
            'source' => 'xpathparser:1',
            'target' => 'title',
            'unique' => 1,
          ),
          1 => array(
            'source' => 'xpathparser:2',
            'target' => 'field_doc_keyword',
            'term_search' => '0',
            'autocreate' => 1,
          ),
          2 => array(
            'source' => 'xpathparser:3',
            'target' => 'field_doc_description',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'xpathparser:4',
            'target' => 'field_doc_language',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'xpathparser:5',
            'target' => 'field_doc_pagination',
            'unique' => FALSE,
          ),
          5 => array(
            'source' => 'xpathparser:6',
            'target' => 'field_doc_subject',
            'term_search' => '0',
            'autocreate' => 0,
          ),
          6 => array(
            'source' => 'xpathparser:8',
            'target' => 'field_doc_publisher_place',
            'term_search' => '0',
            'autocreate' => 1,
          ),
          7 => array(
            'source' => 'xpathparser:9',
            'target' => 'field_doc_creator:label',
            'unique' => FALSE,
          ),
          8 => array(
            'source' => 'xpathparser:10',
            'target' => 'field_doc_publisher:label',
            'unique' => FALSE,
          ),
          9 => array(
            'source' => 'xpathparser:12',
            'target' => 'field_doc_provider:label',
            'unique' => FALSE,
          ),
          10 => array(
            'source' => 'xpathparser:14',
            'target' => 'field_doc_creation_date:start',
            'unique' => FALSE,
          ),
          11 => array(
            'source' => 'xpathparser:16',
            'target' => 'language',
            'unique' => FALSE,
          ),
          12 => array(
            'source' => 'xpathparser:17',
            'target' => 'field_doc_identifier',
            'unique' => FALSE,
          ),
          13 => array(
            'source' => 'xpathparser:18',
            'target' => 'field_doc_is_shown_by:title',
            'unique' => FALSE,
          ),
          14 => array(
            'source' => 'xpathparser:19',
            'target' => 'field_doc_conference:label',
            'unique' => FALSE,
          ),
          15 => array(
            'source' => 'xpathparser:20',
            'target' => 'field_doc_data_provider:label',
            'unique' => FALSE,
          ),
          16 => array(
            'source' => 'xpathparser:21',
            'target' => 'field_doc_is_shown_by:url',
            'unique' => FALSE,
          ),
          17 => array(
            'source' => 'xpathparser:22',
            'target' => 'field_doc_is_part_of:url',
            'unique' => FALSE,
          ),
          18 => array(
            'source' => 'xpathparser:25',
            'target' => 'field_doc_citation_number',
            'unique' => FALSE,
          ),
          19 => array(
            'source' => 'xpathparser:27',
            'target' => 'field_doc_citation_chronology:start',
            'unique' => FALSE,
          ),
          20 => array(
            'source' => 'xpathparser:28',
            'target' => 'field_doc_citation',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '2',
        'input_format' => 'plain_text',
        'skip_hash_check' => 0,
        'bundle' => 'landlibrary_resource',
        'update_non_existent' => 'skip',
      ),
    ),
    'content_type' => 'agris_file_upload_feed',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 0,
    'process_in_background' => 0,
  );
  $export['agris_filter'] = $feeds_importer;

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'agris_organization_preimporter';
  $feeds_importer->config = array(
    'name' => 'agris organization preimporter',
    'description' => 'Agris Publisher file preimporter in order to be ingested later all agris content resource',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'txt csv tsv xml opml html htm',
        'direct' => FALSE,
        'directory' => 'public://feeds',
        'allowed_schemes' => array(
          0 => 'public',
        ),
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsXPathParserXML',
      'config' => array(
        'sources' => array(
          'xpathparser:2' => 'text()',
          'xpathparser:0' => 'text()',
          'xpathparser:1' => 'text()',
        ),
        'rawXML' => array(
          'xpathparser:2' => 'xpathparser:2',
          'xpathparser:0' => 'xpathparser:0',
          'xpathparser:1' => 'xpathparser:1',
        ),
        'context' => '/ags:resources/ags:resource//ags:publisherName',
        'exp' => array(
          'errors' => 1,
          'debug' => array(
            'context' => 'context',
            'xpathparser:0' => 'xpathparser:0',
            'xpathparser:1' => 'xpathparser:1',
            'xpathparser:2' => 0,
          ),
        ),
        'allow_override' => 1,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'expire' => '-1',
        'author' => '1',
        'authorize' => 1,
        'mappings' => array(
          0 => array(
            'source' => 'xpathparser:2',
            'target' => 'guid',
            'unique' => 0,
          ),
          1 => array(
            'source' => 'xpathparser:0',
            'target' => 'field_org_name',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'xpathparser:1',
            'target' => 'title',
            'unique' => 1,
          ),
        ),
        'update_existing' => '0',
        'input_format' => 'plain_text',
        'skip_hash_check' => 0,
        'bundle' => 'organization',
        'update_non_existent' => 'skip',
      ),
    ),
    'content_type' => 'agris_publisher_file_feeds',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 0,
    'process_in_background' => 0,
  );
  $export['agris_organization_preimporter'] = $feeds_importer;

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'clone2_agris_file';
  $feeds_importer->config = array(
    'name' => ' agris creator preimorter file',
    'description' => 'It have to be run this preimporter in order to import later Agris creators (from Agris files)',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'txt csv tsv xml opml html htm',
        'direct' => 0,
        'directory' => 'public://feeds',
        'allowed_schemes' => array(
          'public' => 'public',
        ),
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsXPathParserXML',
      'config' => array(
        'sources' => array(
          'xpathparser:0' => 'text()',
          'xpathparser:1' => 'text()',
          'xpathparser:5' => 'text()',
        ),
        'rawXML' => array(
          'xpathparser:1' => 'xpathparser:1',
          'xpathparser:5' => 'xpathparser:5',
          'xpathparser:0' => 0,
        ),
        'context' => '/ags:resources/ags:resource//ags:creatorPersonal',
        'exp' => array(
          'errors' => 1,
          'debug' => array(
            'context' => 'context',
            'xpathparser:1' => 'xpathparser:1',
            'xpathparser:5' => 'xpathparser:5',
            'xpathparser:0' => 0,
          ),
        ),
        'allow_override' => 1,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'expire' => '-1',
        'author' => '1',
        'authorize' => 1,
        'mappings' => array(
          0 => array(
            'source' => 'xpathparser:0',
            'target' => 'field_doc_title',
            'unique' => FALSE,
          ),
          1 => array(
            'source' => 'xpathparser:1',
            'target' => 'title',
            'unique' => 1,
          ),
          2 => array(
            'source' => 'xpathparser:5',
            'target' => 'field_person_full_name',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '2',
        'input_format' => 'plain_text',
        'skip_hash_check' => 0,
        'bundle' => 'person',
        'update_non_existent' => 'skip',
      ),
    ),
    'content_type' => 'agris_clone2',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 0,
    'process_in_background' => 0,
  );
  $export['clone2_agris_file'] = $feeds_importer;

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'countries_taxonomy_iso_and_external_uris_importer';
  $feeds_importer->config = array(
    'name' => 'Countries taxonomy: ISO and external URIs importer',
    'description' => 'To import the ISO code, the Geopolitical Ontology URI and translations for all countries from a CSV',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'txt csv tsv xml opml',
        'direct' => 0,
        'directory' => 'public://feeds',
        'allowed_schemes' => array(
          'public' => 'public',
        ),
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsCSVParser',
      'config' => array(
        'delimiter' => ',',
        'no_headers' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsTermProcessor',
      'config' => array(
        'vocabulary' => 0,
        'mappings' => array(
          0 => array(
            'source' => 'CommName',
            'target' => 'name',
            'unique' => 1,
          ),
          1 => array(
            'source' => 'ISO3',
            'target' => 'field_iso3',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'URI new',
            'target' => 'field_linked_uris:url',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'URI',
            'target' => 'field_old_geopolitical_ontology_:url',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'CommName',
            'target' => 'name_field:et:en',
            'unique' => FALSE,
          ),
          5 => array(
            'source' => 'NameFR',
            'target' => 'name_field:et:fr',
            'unique' => FALSE,
          ),
          6 => array(
            'source' => 'NameES',
            'target' => 'name_field:et:es',
            'unique' => FALSE,
          ),
          7 => array(
            'source' => 'CommName',
            'target' => 'name_field:et:und',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '2',
        'update_non_existent' => 'skip',
        'input_format' => 'plain_text',
        'skip_hash_check' => 1,
        'bundle' => 'countries',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['countries_taxonomy_iso_and_external_uris_importer'] = $feeds_importer;

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'fao_authors_preimporter_';
  $feeds_importer->config = array(
    'name' => 'FAO Authors preimporter ',
    'description' => 'Preimport FAO authors  from API',
    'fetcher' => array(
      'plugin_key' => 'FeedsHTTPFetcher',
      'config' => array(
        'auto_detect_feeds' => 0,
        'use_pubsubhubbub' => 0,
        'designated_hub' => '',
        'request_timeout' => '999',
        'auto_scheme' => 'http',
        'accept_invalid_cert' => 1,
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsXPathParserXML',
      'config' => array(
        'sources' => array(
          'xpathparser:0' => 'arr[@name="fdr_author"]/str/text()',
        ),
        'rawXML' => array(
          'xpathparser:0' => 'xpathparser:0',
        ),
        'context' => '/response/result/doc',
        'exp' => array(
          'errors' => 1,
          'debug' => array(
            'xpathparser:0' => 'xpathparser:0',
            'context' => 0,
          ),
        ),
        'allow_override' => 1,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'expire' => '-1',
        'author' => 0,
        'authorize' => 1,
        'mappings' => array(
          0 => array(
            'source' => 'xpathparser:0',
            'target' => 'title',
            'unique' => 1,
          ),
        ),
        'update_existing' => '2',
        'update_non_existent' => 'skip',
        'input_format' => 'plain_text',
        'skip_hash_check' => 0,
        'bundle' => 'person',
      ),
    ),
    'content_type' => 'fao_preimport_authors',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 0,
    'process_in_background' => 0,
  );
  $export['fao_authors_preimporter_'] = $feeds_importer;

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'fao_importer';
  $feeds_importer->config = array(
    'name' => 'FAO importer',
    'description' => 'Import from http://www.fao.org/documents/api/search',
    'fetcher' => array(
      'plugin_key' => 'FeedsHTTPFetcher',
      'config' => array(
        'auto_detect_feeds' => FALSE,
        'use_pubsubhubbub' => FALSE,
        'designated_hub' => '',
        'request_timeout' => NULL,
        'auto_scheme' => 'http',
        'accept_invalid_cert' => FALSE,
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsXPathParserXML',
      'config' => array(
        'sources' => array(
          'xpathparser:0' => 'arr[@name="fdr_title@en"]/str/text()',
          'xpathparser:1' => 'arr[@name="fdr_abstract@en"]/str/text()',
          'xpathparser:2' => 'arr[@name="fdr_pub_date"]/str/text()',
          'xpathparser:3' => 'arr[@name="fdr_language"]/str/text()',
          'xpathparser:6' => 'str[@name="fdr_default_file"]/text()',
          'xpathparser:7' => 'str[@name="fdr_uuid"]/text()',
          'xpathparser:4' => '/response/lst[@name=\'fdr-files\']/lst[@name=\'$field_doc_identifier\']/str[@name=\'file_url\']/text()',
          'xpathparser:5' => '',
          'xpathparser:8' => 'arr[@name="fdr_pages"]/text()',
          'xpathparser:9' => '',
          'xpathparser:10' => 'arr[@name="fdr_author"]/str/text()',
          'xpathparser:11' => '',
          'xpathparser:12' => 'arr[@name="fdr_c_subject_classification"]/str/text()',
          'xpathparser:13' => '/response/lst[@name=\'fdr-related\']/lst[@name=\'$field_doc_subject\']/str[@name="label@en"]/text()',
          'xpathparser:14' => '',
          'xpathparser:15' => 'arr[@name="fdr_c_document_type"]/str/text()',
          'xpathparser:16' => '/response/lst[@name=\'fdr-related\']/lst[@name=\'$field_doc_type\']/str[@name="label@en"]/text()',
          'xpathparser:17' => 'arr[@name="fdr_c_concept"]/str/text()',
          'xpathparser:18' => '/response/lst[@name=\'fdr-related\']/lst[@name=\'$field_doc_subject\']/str[@name="label@en"]/text()',
        ),
        'rawXML' => array(
          'xpathparser:0' => 'xpathparser:0',
          'xpathparser:4' => 'xpathparser:4',
          'xpathparser:13' => 'xpathparser:13',
          'xpathparser:16' => 'xpathparser:16',
          'xpathparser:18' => 'xpathparser:18',
          'xpathparser:1' => 0,
          'xpathparser:2' => 0,
          'xpathparser:3' => 0,
          'xpathparser:6' => 0,
          'xpathparser:7' => 0,
          'xpathparser:5' => 0,
          'xpathparser:8' => 0,
          'xpathparser:9' => 0,
          'xpathparser:10' => 0,
          'xpathparser:11' => 0,
          'xpathparser:12' => 0,
          'xpathparser:14' => 0,
          'xpathparser:15' => 0,
          'xpathparser:17' => 0,
        ),
        'context' => '/response/result/doc',
        'exp' => array(
          'errors' => 1,
          'debug' => array(
            'context' => 'context',
            'xpathparser:0' => 'xpathparser:0',
            'xpathparser:4' => 'xpathparser:4',
            'xpathparser:5' => 'xpathparser:5',
            'xpathparser:1' => 0,
            'xpathparser:2' => 0,
            'xpathparser:3' => 0,
            'xpathparser:6' => 0,
            'xpathparser:7' => 0,
            'xpathparser:8' => 0,
            'xpathparser:9' => 0,
            'xpathparser:10' => 0,
            'xpathparser:11' => 0,
            'xpathparser:12' => 0,
            'xpathparser:13' => 0,
            'xpathparser:14' => 0,
            'xpathparser:15' => 0,
            'xpathparser:16' => 0,
            'xpathparser:17' => 0,
            'xpathparser:18' => 0,
          ),
        ),
        'allow_override' => 1,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'expire' => '-1',
        'author' => 0,
        'authorize' => 1,
        'mappings' => array(
          0 => array(
            'source' => 'xpathparser:0',
            'target' => 'title',
            'unique' => 1,
          ),
          1 => array(
            'source' => 'xpathparser:1',
            'target' => 'field_doc_description',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'xpathparser:2',
            'target' => 'field_doc_creation_date:start',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'xpathparser:3',
            'target' => 'field_doc_language',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'xpathparser:6',
            'target' => 'field_doc_identifier',
            'unique' => FALSE,
          ),
          5 => array(
            'source' => 'xpathparser:7',
            'target' => 'guid',
            'unique' => FALSE,
          ),
          6 => array(
            'source' => 'xpathparser:4',
            'target' => 'field_doc_is_shown_by:url',
            'unique' => FALSE,
          ),
          7 => array(
            'source' => 'xpathparser:5',
            'target' => 'field_doc_is_shown_at:url',
            'unique' => FALSE,
          ),
          8 => array(
            'source' => 'xpathparser:8',
            'target' => 'field_doc_pagination',
            'unique' => FALSE,
          ),
          9 => array(
            'source' => 'xpathparser:9',
            'target' => 'field_doc_provider:label',
            'unique' => FALSE,
          ),
          10 => array(
            'source' => 'xpathparser:10',
            'target' => 'field_doc_creator:label',
            'unique' => FALSE,
          ),
          11 => array(
            'source' => 'xpathparser:11',
            'target' => 'Temporary target 1',
            'unique' => FALSE,
          ),
          12 => array(
            'source' => 'xpathparser:12',
            'target' => 'field_doc_subject',
            'term_search' => '0',
            'autocreate' => 0,
          ),
          13 => array(
            'source' => 'xpathparser:13',
            'target' => 'field_doc_subject',
            'unique' => FALSE,
          ),
          14 => array(
            'source' => 'xpathparser:14',
            'target' => 'field_doc_data_provider:label',
            'unique' => FALSE,
          ),
          15 => array(
            'source' => 'xpathparser:15',
            'target' => 'field_doc_type',
            'unique' => FALSE,
          ),
          16 => array(
            'source' => 'xpathparser:16',
            'target' => 'field_doc_type',
            'unique' => FALSE,
          ),
          17 => array(
            'source' => 'xpathparser:17',
            'target' => 'field_doc_subject',
            'unique' => FALSE,
          ),
          18 => array(
            'source' => 'xpathparser:18',
            'target' => 'field_doc_subject',
            'unique' => FALSE,
          ),
          19 => array(
            'source' => 'xpathparser:19',
            'target' => 'language',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '2',
        'update_non_existent' => 'skip',
        'input_format' => 'plain_text',
        'skip_hash_check' => 0,
        'bundle' => 'landlibrary_resource',
      ),
    ),
    'content_type' => 'fao_docs_feed',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 0,
    'process_in_background' => 0,
  );
  $export['fao_importer'] = $feeds_importer;

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'fao_pub_importer';
  $feeds_importer->config = array(
    'name' => 'FAO Publications importer',
    'description' => 'Import Publications from http://www.fao.org/documents/api/search',
    'fetcher' => array(
      'plugin_key' => 'FeedsHTTPFetcher',
      'config' => array(
        'auto_detect_feeds' => FALSE,
        'use_pubsubhubbub' => FALSE,
        'designated_hub' => '',
        'request_timeout' => NULL,
        'auto_scheme' => 'http',
        'accept_invalid_cert' => FALSE,
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsXPathParserXML',
      'config' => array(
        'sources' => array(
          'xpathparser:0' => 'arr[@name="fdr_title@en"]/str/text()',
          'xpathparser:1' => 'arr[@name="fdr_abstract@en"]/str/text()',
          'xpathparser:2' => 'arr[@name="fdr_pub_date"]/str/text()',
          'xpathparser:3' => 'arr[@name="fdr_language"]/str/text()',
          'xpathparser:6' => 'str[@name="fdr_default_file"]/text()',
          'xpathparser:7' => 'str[@name="fdr_uuid"]/text()',
          'xpathparser:4' => '/response/lst[@name=\'fdr-files\']/lst[@name=\'$field_doc_identifier\']/str[@name=\'file_url\']/text()',
          'xpathparser:5' => '',
          'xpathparser:8' => 'arr[@name="fdr_pages"]/text()',
          'xpathparser:9' => '',
          'xpathparser:10' => 'arr[@name="fdr_author"]/str/text()',
          'xpathparser:11' => '',
          'xpathparser:12' => 'arr[@name="fdr_c_subject_classification"]/str/text()',
          'xpathparser:13' => '/response/lst[@name=\'fdr-related\']/lst[@name=\'$field_doc_subject\']/str[@name="label@en"]/text()',
          'xpathparser:14' => '',
          'xpathparser:15' => 'arr[@name="fdr_c_document_type"]/str/text()',
          'xpathparser:16' => '/response/lst[@name=\'fdr-related\']/lst[@name=\'$field_doc_type\']/str[@name="label@en"]/text()',
          'xpathparser:17' => 'arr[@name="fdr_c_concept"]/str/text()',
          'xpathparser:18' => '/response/lst[@name=\'fdr-related\']/lst[@name=\'$field_doc_subject\']/str[@name="label@en"]/text()',
        ),
        'rawXML' => array(
          'xpathparser:0' => 'xpathparser:0',
          'xpathparser:4' => 'xpathparser:4',
          'xpathparser:13' => 'xpathparser:13',
          'xpathparser:16' => 'xpathparser:16',
          'xpathparser:18' => 'xpathparser:18',
          'xpathparser:1' => 0,
          'xpathparser:2' => 0,
          'xpathparser:3' => 0,
          'xpathparser:6' => 0,
          'xpathparser:7' => 0,
          'xpathparser:5' => 0,
          'xpathparser:8' => 0,
          'xpathparser:9' => 0,
          'xpathparser:10' => 0,
          'xpathparser:11' => 0,
          'xpathparser:12' => 0,
          'xpathparser:14' => 0,
          'xpathparser:15' => 0,
          'xpathparser:17' => 0,
        ),
        'context' => '/response/result/doc',
        'exp' => array(
          'errors' => 1,
          'debug' => array(
            'context' => 'context',
            'xpathparser:0' => 'xpathparser:0',
            'xpathparser:4' => 'xpathparser:4',
            'xpathparser:5' => 'xpathparser:5',
            'xpathparser:1' => 0,
            'xpathparser:2' => 0,
            'xpathparser:3' => 0,
            'xpathparser:6' => 0,
            'xpathparser:7' => 0,
            'xpathparser:8' => 0,
            'xpathparser:9' => 0,
            'xpathparser:10' => 0,
            'xpathparser:11' => 0,
            'xpathparser:12' => 0,
            'xpathparser:13' => 0,
            'xpathparser:14' => 0,
            'xpathparser:15' => 0,
            'xpathparser:16' => 0,
            'xpathparser:17' => 0,
            'xpathparser:18' => 0,
          ),
        ),
        'allow_override' => 1,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'expire' => '-1',
        'author' => 0,
        'authorize' => 1,
        'mappings' => array(
          0 => array(
            'source' => 'xpathparser:0',
            'target' => 'title',
            'unique' => 1,
          ),
          1 => array(
            'source' => 'xpathparser:1',
            'target' => 'field_doc_description',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'xpathparser:2',
            'target' => 'field_doc_creation_date:start',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'xpathparser:3',
            'target' => 'field_doc_language',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'xpathparser:6',
            'target' => 'field_doc_identifier',
            'unique' => FALSE,
          ),
          5 => array(
            'source' => 'xpathparser:7',
            'target' => 'guid',
            'unique' => FALSE,
          ),
          6 => array(
            'source' => 'xpathparser:4',
            'target' => 'field_doc_is_shown_by:url',
            'unique' => FALSE,
          ),
          7 => array(
            'source' => 'xpathparser:5',
            'target' => 'field_doc_is_shown_at:url',
            'unique' => FALSE,
          ),
          8 => array(
            'source' => 'xpathparser:8',
            'target' => 'field_doc_pagination',
            'unique' => FALSE,
          ),
          9 => array(
            'source' => 'xpathparser:9',
            'target' => 'field_doc_provider:label',
            'unique' => FALSE,
          ),
          10 => array(
            'source' => 'xpathparser:10',
            'target' => 'field_doc_creator:label',
            'unique' => FALSE,
          ),
          11 => array(
            'source' => 'xpathparser:11',
            'target' => 'Temporary target 1',
            'unique' => FALSE,
          ),
          12 => array(
            'source' => 'xpathparser:12',
            'target' => 'field_doc_subject',
            'term_search' => '0',
            'autocreate' => 0,
          ),
          13 => array(
            'source' => 'xpathparser:13',
            'target' => 'field_doc_subject',
            'unique' => FALSE,
          ),
          14 => array(
            'source' => 'xpathparser:14',
            'target' => 'field_doc_data_provider:label',
            'unique' => FALSE,
          ),
          15 => array(
            'source' => 'xpathparser:15',
            'target' => 'field_doc_type',
            'unique' => FALSE,
          ),
          16 => array(
            'source' => 'xpathparser:16',
            'target' => 'field_doc_type',
            'unique' => FALSE,
          ),
          17 => array(
            'source' => 'xpathparser:17',
            'target' => 'field_doc_subject',
            'unique' => FALSE,
          ),
          18 => array(
            'source' => 'xpathparser:18',
            'target' => 'field_doc_subject',
            'unique' => FALSE,
          ),
          19 => array(
            'source' => 'xpathparser:19',
            'target' => 'language',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '2',
        'update_non_existent' => 'skip',
        'input_format' => 'plain_text',
        'skip_hash_check' => 0,
        'bundle' => 'landlibrary_resource',
      ),
    ),
    'content_type' => 'fao_publications_feed',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 0,
    'process_in_background' => 0,
  );
  $export['fao_pub_importer'] = $feeds_importer;

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'ifpri_batch_file_importer';
  $feeds_importer->config = array(
    'name' => 'ifpri batch file importer',
    'description' => 'Import IFPRI\'s xml files from directory',
    'fetcher' => array(
      'plugin_key' => 'feeds_fetcher_directory_fetcher',
      'config' => array(
        'recursive' => 1,
        'filemask' => '/\\.xml$/',
        'updated_files' => 1,
        'directory' => 'private://ifpri_1/',
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsXPathParserXML',
      'config' => array(
        'sources' => array(
          'xpathparser:0' => 'dc:title[1]/text()',
          'xpathparser:1' => '',
          'xpathparser:2' => 'dc:description[2]/text()',
          'xpathparser:3' => 'dc:format/text()',
          'xpathparser:4' => 'dc:publisher[2]/text()',
          'xpathparser:5' => 'dc:subject[2]/text()',
          'xpathparser:6' => 'dc:description[1]/text()',
          'xpathparser:7' => 'dc:language/text()',
          'xpathparser:8' => 'concat(/oai_dc:dc/dc:identifier[1]/text(),";",/oai_dc:dc/dc:identifier[2]/text(),";",/oai_dc:dc/dc:identifier[3]/text(),";",/oai_dc:dc/dc:identifier[4]/text())',
          'xpathparser:9' => '',
          'xpathparser:10' => 'dc:date[1]/text()',
          'xpathparser:11' => '',
          'xpathparser:12' => 'dc:publisher[1]/text()',
          'xpathparser:13' => 'concat(/oai_dc:dc/dc:identifier[1]/text(),";",/oai_dc:dc/dc:identifier[2]/text(),";",/oai_dc:dc/dc:identifier[3]/text(),";",/oai_dc:dc/dc:identifier[4]/text())',
          'xpathparser:14' => 'concat(/oai_dc:dc/dc:identifier[1]/text(),";",/oai_dc:dc/dc:identifier[2]/text(),";",/oai_dc:dc/dc:identifier[3]/text(),";",/oai_dc:dc/dc:identifier[4]/text())',
          'xpathparser:15' => '',
          'xpathparser:16' => '',
          'xpathparser:17' => 'dc:date[1]/text()',
          'xpathparser:18' => '',
          'xpathparser:19' => 'concat(/oai_dc:dc/dc:subject[1]/text()  , /oai_dc:dc/dc:subject[2]/text())',
          'xpathparser:20' => 'dc:creator[1]/text()',
          'xpathparser:21' => 'dc:language/text()',
          'xpathparser:22' => 'concat(/oai_dc:dc/dc:subject[1]/text()  , /oai_dc:dc/dc:subject[2]/text(), /oai_dc:dc/dc:subject[3]/text())',
          'xpathparser:23' => 'dc:identifier[2]/text()',
        ),
        'rawXML' => array(
          'xpathparser:0' => 0,
          'xpathparser:1' => 0,
          'xpathparser:2' => 0,
          'xpathparser:3' => 0,
          'xpathparser:4' => 0,
          'xpathparser:5' => 0,
          'xpathparser:6' => 0,
          'xpathparser:7' => 0,
          'xpathparser:8' => 0,
          'xpathparser:9' => 0,
          'xpathparser:10' => 0,
          'xpathparser:11' => 0,
          'xpathparser:12' => 0,
          'xpathparser:13' => 0,
          'xpathparser:14' => 0,
          'xpathparser:15' => 0,
          'xpathparser:16' => 0,
          'xpathparser:17' => 0,
          'xpathparser:18' => 0,
          'xpathparser:19' => 0,
          'xpathparser:20' => 0,
          'xpathparser:21' => 0,
          'xpathparser:22' => 0,
          'xpathparser:23' => 0,
        ),
        'context' => '/oai_dc:dc',
        'exp' => array(
          'errors' => 0,
          'debug' => array(
            'context' => 0,
            'xpathparser:0' => 0,
            'xpathparser:1' => 0,
            'xpathparser:2' => 0,
            'xpathparser:3' => 0,
            'xpathparser:4' => 0,
            'xpathparser:5' => 0,
            'xpathparser:6' => 0,
            'xpathparser:7' => 0,
            'xpathparser:8' => 0,
            'xpathparser:9' => 0,
            'xpathparser:10' => 0,
            'xpathparser:11' => 0,
            'xpathparser:12' => 0,
            'xpathparser:13' => 0,
            'xpathparser:14' => 0,
            'xpathparser:15' => 0,
            'xpathparser:16' => 0,
            'xpathparser:17' => 0,
            'xpathparser:18' => 0,
            'xpathparser:19' => 0,
            'xpathparser:20' => 0,
            'xpathparser:21' => 0,
            'xpathparser:22' => 0,
            'xpathparser:23' => 0,
          ),
        ),
        'allow_override' => 1,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'expire' => '-1',
        'author' => '1',
        'authorize' => 1,
        'mappings' => array(
          0 => array(
            'source' => 'xpathparser:0',
            'target' => 'title',
            'unique' => 1,
          ),
          1 => array(
            'source' => 'xpathparser:1',
            'target' => 'field_doc_title',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'xpathparser:2',
            'target' => 'field_doc_type',
            'term_search' => '0',
            'autocreate' => 0,
          ),
          3 => array(
            'source' => 'xpathparser:3',
            'target' => 'field_doc_pagination',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'xpathparser:4',
            'target' => 'field_doc_publisher_place',
            'term_search' => '0',
            'autocreate' => 0,
          ),
          5 => array(
            'source' => 'xpathparser:5',
            'target' => 'field_doc_keyword',
            'unique' => FALSE,
          ),
          6 => array(
            'source' => 'xpathparser:6',
            'target' => 'field_doc_description',
            'unique' => FALSE,
          ),
          7 => array(
            'source' => 'xpathparser:7',
            'target' => 'field_doc_language',
            'term_search' => '0',
            'autocreate' => 0,
          ),
          8 => array(
            'source' => 'xpathparser:8',
            'target' => 'field_doc_identifier',
            'unique' => FALSE,
          ),
          9 => array(
            'source' => 'xpathparser:9',
            'target' => 'field_date_of_submission:end',
            'unique' => FALSE,
          ),
          10 => array(
            'source' => 'xpathparser:10',
            'target' => 'field_doc_creation_date:end',
            'unique' => FALSE,
          ),
          11 => array(
            'source' => 'xpathparser:11',
            'target' => 'field_doc_replaces:title',
            'unique' => FALSE,
          ),
          12 => array(
            'source' => 'xpathparser:12',
            'target' => 'field_doc_publisher:label',
            'unique' => FALSE,
          ),
          13 => array(
            'source' => 'xpathparser:13',
            'target' => 'field_doc_is_shown_by:url',
            'unique' => FALSE,
          ),
          14 => array(
            'source' => 'xpathparser:14',
            'target' => 'field_doc_is_shown_at:url',
            'unique' => FALSE,
          ),
          15 => array(
            'source' => 'xpathparser:15',
            'target' => 'field_doc_provider:label',
            'unique' => FALSE,
          ),
          16 => array(
            'source' => 'xpathparser:16',
            'target' => 'field_doc_datepub:end',
            'unique' => FALSE,
          ),
          17 => array(
            'source' => 'xpathparser:17',
            'target' => 'field_doc_creation_date:start',
            'unique' => FALSE,
          ),
          18 => array(
            'source' => 'xpathparser:18',
            'target' => 'field_doc_creation_date:end',
            'unique' => FALSE,
          ),
          19 => array(
            'source' => 'xpathparser:19',
            'target' => 'field_doc_subject',
            'unique' => FALSE,
          ),
          20 => array(
            'source' => 'xpathparser:20',
            'target' => 'field_doc_creator:label',
            'unique' => FALSE,
          ),
          21 => array(
            'source' => 'xpathparser:21',
            'target' => 'language',
            'unique' => FALSE,
          ),
          22 => array(
            'source' => 'xpathparser:22',
            'target' => 'field_doc_geographic_region',
            'unique' => FALSE,
          ),
          23 => array(
            'source' => 'xpathparser:23',
            'target' => 'field_doc_relation:url',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '2',
        'input_format' => 'plain_text',
        'skip_hash_check' => 1,
        'bundle' => 'landlibrary_resource',
        'update_non_existent' => 'skip',
      ),
    ),
    'content_type' => 'ifpri_content_ingest',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 0,
    'process_in_background' => 0,
  );
  $export['ifpri_batch_file_importer'] = $feeds_importer;

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'ifpri_creator_preimporter';
  $feeds_importer->config = array(
    'name' => 'IFPRI creator preimporter',
    'description' => 'IFPRI creator preimporter',
    'fetcher' => array(
      'plugin_key' => 'feeds_fetcher_directory_fetcher',
      'config' => array(
        'recursive' => TRUE,
        'filemask' => '/\\.txt$/',
        'updated_files' => FALSE,
        'directory' => 'public://feeds',
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsXPathParserXML',
      'config' => array(
        'sources' => array(
          'xpathparser:0' => 'dc:creator[1]/text()',
          'xpathparser:1' => 'dc:creator[1]/text()',
        ),
        'rawXML' => array(
          'xpathparser:0' => 0,
          'xpathparser:1' => 0,
        ),
        'context' => '/oai_dc:dc',
        'exp' => array(
          'errors' => 0,
          'debug' => array(
            'context' => 0,
            'xpathparser:0' => 0,
            'xpathparser:1' => 0,
          ),
        ),
        'allow_override' => 1,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'expire' => '-1',
        'author' => 0,
        'authorize' => 1,
        'mappings' => array(
          0 => array(
            'source' => 'xpathparser:0',
            'target' => 'title',
            'unique' => 1,
          ),
          1 => array(
            'source' => 'xpathparser:1',
            'target' => 'field_person_full_name',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '0',
        'input_format' => 'plain_text',
        'skip_hash_check' => 0,
        'bundle' => 'person',
        'update_non_existent' => 'skip',
      ),
    ),
    'content_type' => 'ifpri_creator_feed',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 0,
    'process_in_background' => 0,
  );
  $export['ifpri_creator_preimporter'] = $feeds_importer;

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'landcoalition_events_rss_import';
  $feeds_importer->config = array(
    'name' => 'LandCoalition Events RSS import',
    'description' => 'Import from landcoalition RSS feed http://landcoalition.org/en/events/feeds/rss.xml all events',
    'fetcher' => array(
      'plugin_key' => 'FeedsAtomCrawler',
      'config' => array(
        'auto_detect_feeds' => FALSE,
        'use_pubsubhubbub' => FALSE,
        'designated_hub' => '',
        'request_timeout' => NULL,
        'auto_scheme' => 'http',
        'accept_invalid_cert' => FALSE,
        'num_pages' => 10,
        'first_run' => TRUE,
        'delay' => 1,
        'auto' => FALSE,
        'allow_override' => FALSE,
        'crawled' => FALSE,
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsSyndicationParser',
      'config' => array(),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'expire' => '-1',
        'author' => 0,
        'authorize' => 1,
        'mappings' => array(
          0 => array(
            'source' => 'title',
            'target' => 'title',
            'unique' => 1,
          ),
          1 => array(
            'source' => 'description',
            'target' => 'body',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'geolocations',
            'target' => 'field_geographical_focus',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'url',
            'target' => 'field_website:url',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'timestamp',
            'target' => 'field_date:start',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '2',
        'update_non_existent' => 'skip',
        'input_format' => 'plain_text',
        'skip_hash_check' => 0,
        'bundle' => 'event',
      ),
    ),
    'content_type' => 'landcoalition_events_feed',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 0,
    'process_in_background' => 0,
  );
  $export['landcoalition_events_rss_import'] = $feeds_importer;

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'landcoalition_rss_import';
  $feeds_importer->config = array(
    'name' => 'LandCoalition RSS import',
    'description' => 'landcoalition RSS importer from http://landcoalition.org/en/publication/feed/rss.xml',
    'fetcher' => array(
      'plugin_key' => 'FeedsAtomCrawler',
      'config' => array(
        'auto_detect_feeds' => FALSE,
        'use_pubsubhubbub' => FALSE,
        'designated_hub' => '',
        'request_timeout' => NULL,
        'auto_scheme' => 'http',
        'accept_invalid_cert' => FALSE,
        'num_pages' => 10,
        'first_run' => TRUE,
        'delay' => 1,
        'auto' => FALSE,
        'allow_override' => FALSE,
        'crawled' => FALSE,
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsSyndicationParser',
      'config' => array(),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'expire' => '-1',
        'author' => 0,
        'authorize' => 1,
        'mappings' => array(
          0 => array(
            'source' => 'title',
            'target' => 'title',
            'unique' => 1,
          ),
          1 => array(
            'source' => 'description',
            'target' => 'field_doc_description',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'url',
            'target' => 'field_doc_is_shown_at:url',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'timestamp',
            'target' => 'field_doc_creation_date:start',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'guid',
            'target' => 'field_doc_identifier',
            'unique' => FALSE,
          ),
          5 => array(
            'source' => 'title',
            'target' => 'field_doc_title',
            'unique' => FALSE,
          ),
          6 => array(
            'source' => 'Blank source 1',
            'target' => 'field_doc_publisher:label',
            'unique' => FALSE,
          ),
          7 => array(
            'source' => 'Blank source 2',
            'target' => 'field_doc_provider:label',
            'unique' => FALSE,
          ),
          8 => array(
            'source' => 'Blank source 3',
            'target' => 'language',
            'unique' => FALSE,
          ),
          9 => array(
            'source' => 'Blank source 4',
            'target' => 'field_doc_language',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '2',
        'update_non_existent' => 'skip',
        'input_format' => 'plain_text',
        'skip_hash_check' => 0,
        'bundle' => 'landlibrary_resource',
      ),
    ),
    'content_type' => 'landcoalition_rss_feed',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 0,
    'process_in_background' => 0,
  );
  $export['landcoalition_rss_import'] = $feeds_importer;

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'rss_usaid_commentary_importer';
  $feeds_importer->config = array(
    'name' => 'Rss USAID commentary importer',
    'description' => 'Rss USAID commentary importer ',
    'fetcher' => array(
      'plugin_key' => 'FeedsAtomCrawler',
      'config' => array(
        'auto_detect_feeds' => FALSE,
        'use_pubsubhubbub' => 0,
        'designated_hub' => '',
        'request_timeout' => '',
        'num_pages' => '200',
        'first_run' => '1',
        'delay' => '1',
        'auto' => FALSE,
        'allow_override' => '0',
        'crawled' => FALSE,
        'auto_scheme' => 'http',
        'accept_invalid_cert' => FALSE,
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsSyndicationParser',
      'config' => array(),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'expire' => '-1',
        'author' => '1',
        'authorize' => 1,
        'mappings' => array(
          0 => array(
            'source' => 'title',
            'target' => 'title',
            'unique' => 1,
          ),
          1 => array(
            'source' => 'title',
            'target' => 'field_doc_title',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'description',
            'target' => 'field_doc_description',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'timestamp',
            'target' => 'field_doc_creation_date:start',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'url',
            'target' => 'field_doc_is_shown_by:url',
            'unique' => FALSE,
          ),
          5 => array(
            'source' => 'guid',
            'target' => 'field_doc_identifier',
            'unique' => FALSE,
          ),
          6 => array(
            'source' => 'Blank source 1',
            'target' => 'field_doc_provider:label',
            'unique' => FALSE,
          ),
          7 => array(
            'source' => 'Blank source 2',
            'target' => 'language',
            'unique' => FALSE,
          ),
          8 => array(
            'source' => 'Blank source 3',
            'target' => 'field_doc_type',
            'unique' => FALSE,
          ),
          9 => array(
            'source' => 'Blank source 4',
            'target' => 'field_doc_language',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '2',
        'input_format' => 'plain_text',
        'skip_hash_check' => 0,
        'bundle' => 'landlibrary_resource',
        'update_non_existent' => 'skip',
      ),
    ),
    'content_type' => 'rss_usaid_commentary_feed',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 0,
    'process_in_background' => 0,
  );
  $export['rss_usaid_commentary_importer'] = $feeds_importer;

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'rss_usaid_issue_briefs_importer_';
  $feeds_importer->config = array(
    'name' => 'Rss USAID issue briefs importer ',
    'description' => 'Rss USAID issue briefs importer  http://usaidlandtenure.net/issue-briefs-feed',
    'fetcher' => array(
      'plugin_key' => 'FeedsAtomCrawler',
      'config' => array(
        'auto_detect_feeds' => FALSE,
        'use_pubsubhubbub' => FALSE,
        'designated_hub' => '',
        'request_timeout' => NULL,
        'auto_scheme' => 'http',
        'accept_invalid_cert' => FALSE,
        'num_pages' => 10,
        'first_run' => TRUE,
        'delay' => 1,
        'auto' => FALSE,
        'allow_override' => FALSE,
        'crawled' => FALSE,
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsSyndicationParser',
      'config' => array(),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'expire' => '-1',
        'author' => 0,
        'authorize' => 0,
        'mappings' => array(
          0 => array(
            'source' => 'title',
            'target' => 'title',
            'unique' => 1,
          ),
          1 => array(
            'source' => 'title',
            'target' => 'field_doc_title',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'description',
            'target' => 'field_doc_description',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'timestamp',
            'target' => 'field_doc_creation_date:start',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'Blank source 1',
            'target' => 'field_doc_provider:label',
            'unique' => FALSE,
          ),
          5 => array(
            'source' => 'Blank source 2',
            'target' => 'language',
            'unique' => FALSE,
          ),
          6 => array(
            'source' => 'url',
            'target' => 'field_doc_is_shown_by:url',
            'unique' => FALSE,
          ),
          7 => array(
            'source' => 'Blank source 3',
            'target' => 'field_doc_type',
            'unique' => FALSE,
          ),
          8 => array(
            'source' => 'guid',
            'target' => 'field_doc_identifier',
            'unique' => FALSE,
          ),
          9 => array(
            'source' => 'Blank source 4',
            'target' => 'field_doc_language',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '2',
        'input_format' => 'plain_text',
        'skip_hash_check' => 0,
        'bundle' => 'landlibrary_resource',
        'update_non_existent' => 'skip',
      ),
    ),
    'content_type' => 'rss_issue_briefs_feed',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 0,
    'process_in_background' => 0,
  );
  $export['rss_usaid_issue_briefs_importer_'] = $feeds_importer;

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'topic_taxonomy_land_terms_importer';
  $feeds_importer->config = array(
    'name' => 'Topic taxonomy land terms importer',
    'description' => 'To import land terms from a CSV with Agrovoc URI and translations',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'txt csv tsv xml opml',
        'direct' => 0,
        'directory' => 'public://feeds',
        'allowed_schemes' => array(
          'public' => 'public',
        ),
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsCSVParser',
      'config' => array(
        'delimiter' => ',',
        'no_headers' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsTermProcessor',
      'config' => array(
        'vocabulary' => 0,
        'mappings' => array(
          0 => array(
            'source' => 'Term added',
            'target' => 'name',
            'unique' => 1,
          ),
          1 => array(
            'source' => 'Term added',
            'target' => 'name_field:et:en',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'French term',
            'target' => 'name_field:et:fr',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'Spanish term',
            'target' => 'name_field:et:es',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'URI',
            'target' => 'field_agrovoc_uri:url',
            'unique' => FALSE,
          ),
          5 => array(
            'source' => 'Term added',
            'target' => 'name_field:et:und',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '2',
        'input_format' => 'plain_text',
        'skip_hash_check' => 1,
        'bundle' => 'landportal_topics',
        'update_non_existent' => 'skip',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['topic_taxonomy_land_terms_importer'] = $feeds_importer;

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'worldbank_importer';
  $feeds_importer->config = array(
    'name' => 'Worldbank importer',
    'description' => 'With this importer you can ingest from wordbank XML data sources.',
    'fetcher' => array(
      'plugin_key' => 'FeedsHTTPFetcher',
      'config' => array(
        'auto_detect_feeds' => FALSE,
        'use_pubsubhubbub' => FALSE,
        'designated_hub' => '',
        'request_timeout' => NULL,
        'auto_scheme' => 'http',
        'accept_invalid_cert' => FALSE,
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsXPathParserXML',
      'config' => array(
        'sources' => array(
          'xpathparser:0' => 'display_title/text()',
          'xpathparser:1' => 'abstracts/text()',
          'xpathparser:2' => '',
          'xpathparser:3' => 'authors/text()',
          'xpathparser:4' => 'keywd/text()',
          'xpathparser:5' => 'lang/text()',
          'xpathparser:6' => 'lang/text()',
          'xpathparser:7' => 'url/text()',
          'xpathparser:8' => 'alt_title/text()',
          'xpathparser:9' => 'count/text()',
          'xpathparser:10' => 'geo_regions/geo_region/text()',
        ),
        'rawXML' => array(
          'xpathparser:0' => 0,
          'xpathparser:1' => 0,
          'xpathparser:2' => 0,
          'xpathparser:3' => 0,
          'xpathparser:4' => 0,
          'xpathparser:5' => 0,
          'xpathparser:6' => 0,
          'xpathparser:7' => 0,
          'xpathparser:8' => 0,
          'xpathparser:9' => 0,
          'xpathparser:10' => 0,
        ),
        'context' => '/documents/doc',
        'exp' => array(
          'errors' => 0,
          'debug' => array(
            'context' => 0,
            'xpathparser:0' => 0,
            'xpathparser:1' => 0,
            'xpathparser:2' => 0,
            'xpathparser:3' => 0,
            'xpathparser:4' => 0,
            'xpathparser:5' => 0,
            'xpathparser:6' => 0,
            'xpathparser:7' => 0,
            'xpathparser:8' => 0,
            'xpathparser:9' => 0,
            'xpathparser:10' => 0,
          ),
        ),
        'allow_override' => 1,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'expire' => '-1',
        'author' => 0,
        'authorize' => 1,
        'mappings' => array(
          0 => array(
            'source' => 'xpathparser:0',
            'target' => 'title',
            'unique' => FALSE,
          ),
          1 => array(
            'source' => 'xpathparser:1',
            'target' => 'field_doc_description',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'xpathparser:2',
            'target' => 'field_doc_identifier',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'xpathparser:3',
            'target' => 'field_doc_creator:label',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'xpathparser:4',
            'target' => 'field_doc_keyword',
            'unique' => FALSE,
          ),
          5 => array(
            'source' => 'xpathparser:5',
            'target' => 'language',
            'unique' => FALSE,
          ),
          6 => array(
            'source' => 'xpathparser:6',
            'target' => 'field_doc_language',
            'unique' => FALSE,
          ),
          7 => array(
            'source' => 'xpathparser:7',
            'target' => 'field_doc_is_shown_at:url',
            'unique' => FALSE,
          ),
          8 => array(
            'source' => 'xpathparser:8',
            'target' => 'field_doc_alt_title',
            'unique' => FALSE,
          ),
          9 => array(
            'source' => 'xpathparser:9',
            'target' => 'field_doc_country',
            'unique' => FALSE,
          ),
          10 => array(
            'source' => 'xpathparser:10',
            'target' => 'field_doc_geographic_region',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '2',
        'input_format' => 'plain_text',
        'skip_hash_check' => 0,
        'bundle' => 'landlibrary_resource',
        'update_non_existent' => 'skip',
      ),
    ),
    'content_type' => 'worldbank_feed',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 0,
    'process_in_background' => 0,
  );
  $export['worldbank_importer'] = $feeds_importer;

  return $export;
}

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
    'agris_conference_feed' => array(
      'name' => t('agris conference  feed'),
      'base' => 'node_content',
      'description' => t('Agris Publisher file preimporter in order to be ingested later all agris content resource'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'agris_dump_file_upload_feed' => array(
      'name' => t('Agris dump file upload feed'),
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
    'fao_docs_feed' => array(
      'name' => t('FAO docs feed'),
      'base' => 'node_content',
      'description' => t('Import from http://www.fao.org/documents/api/search'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'fao_preimport_authors' => array(
      'name' => t('FAO preimport Authors'),
      'base' => 'node_content',
      'description' => t('Preimport Authors from FAO docs api'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'fao_publications_feed' => array(
      'name' => t('FAO Publications feed'),
      'base' => 'node_content',
      'description' => t('A contant type that used from FAO publications importer.'),
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
    'ifpri_content_ingest' => array(
      'name' => t('IFPRI content ingest'),
      'base' => 'node_content',
      'description' => t('IFPRI butch file upload from private://ifpri directory '),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'ifpri_creator_feed' => array(
      'name' => t('IFPRI creator feed'),
      'base' => 'node_content',
      'description' => t('This content type is the fetcher of ifpri creator preimporter'),
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
    'landcoalition_events_feed' => array(
      'name' => t('LandCoalition Events feed'),
      'base' => 'node_content',
      'description' => t('Import events from landcoalition : http://landcoalition.org/'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'landcoalition_rss_feed' => array(
      'name' => t('LandCoalition RSS feed'),
      'base' => 'node_content',
      'description' => t('LandCoalition RSS feed'),
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
    'oai_pmh_importer' => array(
      'name' => t('OAI PMH importer'),
      'base' => 'node_content',
      'description' => t('This content type is used as a fetcher from OAI-PM importer\'s configuration.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'page' => array(
      'name' => t('Page'),
      'base' => 'node_content',
      'description' => t('A basic page in the Landportal website'),
      'has_title' => '1',
      'title_label' => t('Title'),
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
    'rss_issue_briefs_feed' => array(
      'name' => t('Rss issue briefs feed'),
      'base' => 'node_content',
      'description' => t('A content type that used from RSS  issue briefs feed importer as fetcher from http://usaidlandtenure.net/issue-briefs-feed'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'rss_usaid_commentary_feed' => array(
      'name' => t('Rss usaid commentary feed'),
      'base' => 'node_content',
      'description' => t('A content type that used from RSS importer as fetcher from http://usaidlandtenure.net/commentary-feed'),
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
    'type_browse' => array(
      'name' => t('Type Browse'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'worldbank_feed' => array(
      'name' => t('Worldbank feed'),
      'base' => 'node_content',
      'description' => t('Worldbank feed content type for fetcher'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}

/**
 * Implements hook_default_search_api_index().
 */
function landlibrary_default_search_api_index() {
  $items = array();
  $items['arc2_sparql_node_index_all_library_nodes'] = entity_import('search_api_index', '{
    "name" : "ARC2 SPARQL node index: all library nodes",
    "machine_name" : "arc2_sparql_node_index_all_library_nodes",
    "description" : "Indexes entities of type Land Library Resources, Person, Organization and Event",
    "server" : "virtuoso_arc2_dev_land_portal_",
    "item_type" : "node",
    "options" : {
      "index_directly" : 1,
      "cron_limit" : "50",
      "fields" : { "search_api_language" : { "type" : "string" } },
      "data_alter_callbacks" : {
        "search_api_alter_bundle_filter" : {
          "status" : 1,
          "weight" : "-10",
          "settings" : {
            "default" : "0",
            "bundles" : {
              "event" : "event",
              "landlibrary_resource" : "landlibrary_resource",
              "organization" : "organization",
              "person" : "person"
            }
          }
        },
        "search_api_alter_language_control" : {
          "status" : 0,
          "weight" : "0",
          "settings" : { "lang_field" : "", "languages" : [] }
        },
        "search_api_alter_node_access" : { "status" : 0, "weight" : "0", "settings" : [] },
        "search_api_alter_node_status" : { "status" : 1, "weight" : "0", "settings" : [] },
        "search_api_alter_add_hierarchy" : { "status" : 0, "weight" : "0", "settings" : { "fields" : [] } },
        "search_api_alter_add_viewed_entity" : { "status" : 0, "weight" : "0", "settings" : { "mode" : "full" } },
        "search_api_alter_add_url" : { "status" : 0, "weight" : "0", "settings" : [] },
        "search_api_alter_add_aggregation" : { "status" : 0, "weight" : "0", "settings" : [] },
        "rdf_indexer_alter_entity_public" : { "status" : 0, "weight" : "0", "settings" : [] }
      },
      "processors" : {
        "search_api_case_ignore" : { "status" : 1, "weight" : "0", "settings" : { "fields" : [] } },
        "search_api_html_filter" : {
          "status" : 0,
          "weight" : "10",
          "settings" : {
            "fields" : [],
            "title" : 0,
            "alt" : 1,
            "tags" : "h1 = 5\\r\\nh2 = 3\\r\\nh3 = 2\\r\\nstrong = 2\\r\\nb = 2\\r\\nem = 1.5\\r\\nu = 1.5"
          }
        },
        "search_api_tokenizer" : {
          "status" : 1,
          "weight" : "20",
          "settings" : { "fields" : [], "spaces" : "[^[:alnum:]]", "ignorable" : "[\\u0027]" }
        },
        "search_api_stopwords" : {
          "status" : 0,
          "weight" : "30",
          "settings" : {
            "fields" : [],
            "file" : "",
            "stopwords" : "but\\r\\ndid\\r\\nthe this that those\\r\\netc"
          }
        },
        "search_api_highlighting" : {
          "status" : 0,
          "weight" : "35",
          "settings" : {
            "prefix" : "\\u003Cstrong\\u003E",
            "suffix" : "\\u003C\\/strong\\u003E",
            "excerpt" : 1,
            "excerpt_length" : "256",
            "exclude_fields" : [],
            "highlight" : "always"
          }
        }
      }
    },
    "enabled" : "1",
    "read_only" : "0",
    "rdf_mapping" : []
  }');
  $items['arc2_sparql_term_index'] = entity_import('search_api_index', '{
    "name" : "ARC2 SPARQL term index",
    "machine_name" : "arc2_sparql_term_index",
    "description" : "Indexes relevant taxonomy terms as concepts (countries, topics, resource types, keywords)",
    "server" : "virtuoso_arc2_dev_land_portal_",
    "item_type" : "taxonomy_term",
    "options" : {
      "index_directly" : 1,
      "cron_limit" : "50",
      "fields" : {
        "name" : { "type" : "text" },
        "search_api_language" : { "type" : "string" },
        "tid" : { "type" : "integer" },
        "vocabulary" : { "type" : "integer", "entity_type" : "taxonomy_vocabulary" },
        "vocabulary:name" : { "type" : "text" },
        "vocabulary:vid" : { "type" : "integer" }
      },
      "data_alter_callbacks" : {
        "search_api_alter_bundle_filter" : {
          "status" : 1,
          "weight" : "-10",
          "settings" : {
            "default" : "0",
            "bundles" : {
              "countries" : "countries",
              "landportal_topics" : "landportal_topics",
              "organization_types" : "organization_types",
              "format" : "format",
              "keywords" : "keywords",
              "landlibrary_resource_type" : "landlibrary_resource_type"
            }
          }
        },
        "search_api_alter_add_hierarchy" : { "status" : 0, "weight" : "0", "settings" : { "fields" : [] } },
        "search_api_alter_language_control" : {
          "status" : 0,
          "weight" : "0",
          "settings" : { "lang_field" : "", "languages" : [] }
        },
        "search_api_alter_add_viewed_entity" : { "status" : 0, "weight" : "0", "settings" : { "mode" : "full" } },
        "search_api_alter_add_aggregation" : { "status" : 0, "weight" : "0", "settings" : [] },
        "search_api_alter_add_url" : { "status" : 0, "weight" : "0", "settings" : [] },
        "rdf_indexer_alter_entity_public" : { "status" : 0, "weight" : "0", "settings" : [] }
      },
      "processors" : {
        "search_api_case_ignore" : { "status" : 1, "weight" : "0", "settings" : { "fields" : [] } },
        "search_api_html_filter" : {
          "status" : 0,
          "weight" : "10",
          "settings" : {
            "fields" : [],
            "title" : 0,
            "alt" : 1,
            "tags" : "h1 = 5\\r\\nh2 = 3\\r\\nh3 = 2\\r\\nstrong = 2\\r\\nb = 2\\r\\nem = 1.5\\r\\nu = 1.5"
          }
        },
        "search_api_tokenizer" : {
          "status" : 1,
          "weight" : "20",
          "settings" : { "fields" : [], "spaces" : "[^[:alnum:]]", "ignorable" : "[\\u0027]" }
        },
        "search_api_stopwords" : {
          "status" : 0,
          "weight" : "30",
          "settings" : {
            "fields" : [],
            "file" : "",
            "stopwords" : "but\\r\\ndid\\r\\nthe this that those\\r\\netc"
          }
        },
        "search_api_highlighting" : {
          "status" : 0,
          "weight" : "35",
          "settings" : {
            "prefix" : "\\u003Cstrong\\u003E",
            "suffix" : "\\u003C\\/strong\\u003E",
            "excerpt" : 1,
            "excerpt_length" : "256",
            "exclude_fields" : [],
            "highlight" : "always"
          }
        }
      }
    },
    "enabled" : "1",
    "read_only" : "0",
    "rdf_mapping" : []
  }');
  return $items;
}

/**
 * Implements hook_default_search_api_server().
 */
function landlibrary_default_search_api_server() {
  $items = array();
  $items['virtuoso_arc2_dev_land_portal_'] = entity_import('search_api_server', '{
    "name" : "Virtuoso ARC2 (Dev Land Portal)",
    "machine_name" : "virtuoso_arc2_dev_land_portal_",
    "description" : "Virtuoso connection using ARC2",
    "class" : "rdf_virtuoso_service",
    "options" : {
      "url" : "http:\\/\\/beta.landportal.info:8890\\/sparql-auth",
      "graph" : "http:\\/\\/library.landportal.info",
      "test_query" : "SELECT ?s WHERE {?s ?p ?o} LIMIT 1",
      "query_params" : "default-graph-uri=\\u0026format=text%2Fhtml\\u0026timeout=0\\u0026debug=on",
      "username" : "landportal",
      "credential" : "semberry",
      "authorization" : "Digest username=\\u0022landportal\\u0022, realm=\\u0022SPARQL\\u0022, nonce=\\u002282e2c0b9ac1cd90d3de371195107ca84\\u0022, uri=\\u0022\\/sparql-auth\\u0022, algorithm=MD5, response=\\u0022fd6cfeb3a82e1c5df95473e11d63041f\\u0022, opaque=\\u00225ebe2294ecd0e0f08eab7690d2a6ee69\\u0022, qop=auth, nc=00000001, cnonce=\\u00221430331198\\u0022"
    },
    "enabled" : "1",
    "rdf_mapping" : []
  }');
  return $items;
}

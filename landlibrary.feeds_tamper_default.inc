<?php
/**
 * @file
 * landlibrary.feeds_tamper_default.inc
 */

/**
 * Implements hook_feeds_tamper_default().
 */
function landlibrary_feeds_tamper_default() {
  $export = array();

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'agris_filter-parent_taxonomy_languages-copy';
  $feeds_tamper->importer = 'agris_filter';
  $feeds_tamper->source = 'parent:taxonomy:languages';
  $feeds_tamper->plugin_id = 'copy';
  $feeds_tamper->settings = array(
    'to_from' => 'from',
    'source' => 'xpathparser:4',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Copy source value';
  $export['agris_filter-parent_taxonomy_languages-copy'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'agris_filter-xpathparser_0-find_replace';
  $feeds_tamper->importer = 'agris_filter';
  $feeds_tamper->source = 'xpathparser:0';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => '<![CDATA[',
    'replace' => '',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 0,
    'regex' => FALSE,
    'func' => 'str_ireplace',
  );
  $feeds_tamper->weight = 3;
  $feeds_tamper->description = 'Find replace <![CDATA[';
  $export['agris_filter-xpathparser_0-find_replace'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'agris_filter-xpathparser_0-find_replace_regex';
  $feeds_tamper->importer = 'agris_filter';
  $feeds_tamper->source = 'xpathparser:0';
  $feeds_tamper->plugin_id = 'find_replace_regex';
  $feeds_tamper->settings = array(
    'find' => '/^\\s*\\/\\/<!\\[CDATA\\[([\\s\\S]*)\\/\\/\\]\\]>\\s*\\z/',
    'replace' => '\\s',
    'limit' => '',
    'real_limit' => -1,
  );
  $feeds_tamper->weight = 2;
  $feeds_tamper->description = 'Find replace REGEX';
  $export['agris_filter-xpathparser_0-find_replace_regex'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'agris_filter-xpathparser_0-find_replaces';
  $feeds_tamper->importer = 'agris_filter';
  $feeds_tamper->source = 'xpathparser:0';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => ']]>',
    'replace' => '',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 0,
    'regex' => FALSE,
    'func' => 'str_ireplace',
  );
  $feeds_tamper->weight = 4;
  $feeds_tamper->description = 'Find replace ]]>';
  $export['agris_filter-xpathparser_0-find_replaces'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'agris_filter-xpathparser_0-html_entity_decode';
  $feeds_tamper->importer = 'agris_filter';
  $feeds_tamper->source = 'xpathparser:0';
  $feeds_tamper->plugin_id = 'html_entity_decode';
  $feeds_tamper->settings = array();
  $feeds_tamper->weight = 1;
  $feeds_tamper->description = 'HTML entity decode';
  $export['agris_filter-xpathparser_0-html_entity_decode'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'agris_filter-xpathparser_0-strip_tags';
  $feeds_tamper->importer = 'agris_filter';
  $feeds_tamper->source = 'xpathparser:0';
  $feeds_tamper->plugin_id = 'strip_tags';
  $feeds_tamper->settings = array(
    'allowed_tags' => '',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Strip tags';
  $export['agris_filter-xpathparser_0-strip_tags'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'agris_filter-xpathparser_1-find_replace';
  $feeds_tamper->importer = 'agris_filter';
  $feeds_tamper->source = 'xpathparser:1';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => '<![CDATA[',
    'replace' => '',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 0,
    'regex' => FALSE,
    'func' => 'str_ireplace',
  );
  $feeds_tamper->weight = 6;
  $feeds_tamper->description = 'Find replace <![CDATA[';
  $export['agris_filter-xpathparser_1-find_replace'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'agris_filter-xpathparser_1-find_replace_regex';
  $feeds_tamper->importer = 'agris_filter';
  $feeds_tamper->source = 'xpathparser:1';
  $feeds_tamper->plugin_id = 'find_replace_regex';
  $feeds_tamper->settings = array(
    'find' => '/^\\s*\\/\\/<!\\[CDATA\\[([\\s\\S]*)\\/\\/\\]\\]>\\s*\\z/',
    'replace' => '\\s',
    'limit' => '',
    'real_limit' => -1,
  );
  $feeds_tamper->weight = 10;
  $feeds_tamper->description = 'Find replace REGEX';
  $export['agris_filter-xpathparser_1-find_replace_regex'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'agris_filter-xpathparser_1-find_replaces';
  $feeds_tamper->importer = 'agris_filter';
  $feeds_tamper->source = 'xpathparser:1';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => ']]>',
    'replace' => '',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 0,
    'regex' => FALSE,
    'func' => 'str_ireplace',
  );
  $feeds_tamper->weight = 7;
  $feeds_tamper->description = 'Find replace ]]>';
  $export['agris_filter-xpathparser_1-find_replaces'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'agris_filter-xpathparser_1-html_entity_decode';
  $feeds_tamper->importer = 'agris_filter';
  $feeds_tamper->source = 'xpathparser:1';
  $feeds_tamper->plugin_id = 'html_entity_decode';
  $feeds_tamper->settings = array();
  $feeds_tamper->weight = 9;
  $feeds_tamper->description = 'HTML entity decode';
  $export['agris_filter-xpathparser_1-html_entity_decode'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'agris_filter-xpathparser_1-strip_tags';
  $feeds_tamper->importer = 'agris_filter';
  $feeds_tamper->source = 'xpathparser:1';
  $feeds_tamper->plugin_id = 'strip_tags';
  $feeds_tamper->settings = array(
    'allowed_tags' => '',
  );
  $feeds_tamper->weight = 8;
  $feeds_tamper->description = 'Strip tags';
  $export['agris_filter-xpathparser_1-strip_tags'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'agris_filter-xpathparser_10-find_replace';
  $feeds_tamper->importer = 'agris_filter';
  $feeds_tamper->source = 'xpathparser:10';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => ']]>',
    'replace' => '',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 0,
    'regex' => FALSE,
    'func' => 'str_ireplace',
  );
  $feeds_tamper->weight = 7;
  $feeds_tamper->description = 'Find replace ]]> with space';
  $export['agris_filter-xpathparser_10-find_replace'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'agris_filter-xpathparser_10-find_replaces';
  $feeds_tamper->importer = 'agris_filter';
  $feeds_tamper->source = 'xpathparser:10';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => '<![CDATA[',
    'replace' => '',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 0,
    'regex' => FALSE,
    'func' => 'str_ireplace',
  );
  $feeds_tamper->weight = 8;
  $feeds_tamper->description = 'Find replace <![CDATA[ with space';
  $export['agris_filter-xpathparser_10-find_replaces'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'agris_filter-xpathparser_10-html_entity_decode';
  $feeds_tamper->importer = 'agris_filter';
  $feeds_tamper->source = 'xpathparser:10';
  $feeds_tamper->plugin_id = 'html_entity_decode';
  $feeds_tamper->settings = array();
  $feeds_tamper->weight = 11;
  $feeds_tamper->description = 'HTML entity decode';
  $export['agris_filter-xpathparser_10-html_entity_decode'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'agris_filter-xpathparser_11-find_replace';
  $feeds_tamper->importer = 'agris_filter';
  $feeds_tamper->source = 'xpathparser:11';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => '<![CDATA[',
    'replace' => '',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 0,
    'regex' => FALSE,
    'func' => 'str_ireplace',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Find replace';
  $export['agris_filter-xpathparser_11-find_replace'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'agris_filter-xpathparser_11-find_replaces';
  $feeds_tamper->importer = 'agris_filter';
  $feeds_tamper->source = 'xpathparser:11';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => ']]>',
    'replace' => '',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 0,
    'regex' => FALSE,
    'func' => 'str_ireplace',
  );
  $feeds_tamper->weight = 1;
  $feeds_tamper->description = 'Find replace ]]>';
  $export['agris_filter-xpathparser_11-find_replaces'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'agris_filter-xpathparser_11-html_entity_decode';
  $feeds_tamper->importer = 'agris_filter';
  $feeds_tamper->source = 'xpathparser:11';
  $feeds_tamper->plugin_id = 'html_entity_decode';
  $feeds_tamper->settings = array();
  $feeds_tamper->weight = 2;
  $feeds_tamper->description = 'HTML entity decode';
  $export['agris_filter-xpathparser_11-html_entity_decode'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'agris_filter-xpathparser_11-implode';
  $feeds_tamper->importer = 'agris_filter';
  $feeds_tamper->source = 'xpathparser:11';
  $feeds_tamper->plugin_id = 'implode';
  $feeds_tamper->settings = array(
    'glue' => ',',
    'real_glue' => ',',
  );
  $feeds_tamper->weight = 3;
  $feeds_tamper->description = 'Implode';
  $export['agris_filter-xpathparser_11-implode'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'agris_filter-xpathparser_11-truncate_text';
  $feeds_tamper->importer = 'agris_filter';
  $feeds_tamper->source = 'xpathparser:11';
  $feeds_tamper->plugin_id = 'truncate_text';
  $feeds_tamper->settings = array(
    'num_char' => '100',
    'ellipses' => 0,
  );
  $feeds_tamper->weight = 4;
  $feeds_tamper->description = 'Truncate';
  $export['agris_filter-xpathparser_11-truncate_text'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'agris_filter-xpathparser_12-default_value';
  $feeds_tamper->importer = 'agris_filter';
  $feeds_tamper->source = 'xpathparser:12';
  $feeds_tamper->plugin_id = 'default_value';
  $feeds_tamper->settings = array(
    'default_value' => 'AGRIS',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Set default value AGRIS';
  $export['agris_filter-xpathparser_12-default_value'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'agris_filter-xpathparser_14-find_replace';
  $feeds_tamper->importer = 'agris_filter';
  $feeds_tamper->source = 'xpathparser:14';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => '<![CDATA[',
    'replace' => '',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 0,
    'regex' => FALSE,
    'func' => 'str_ireplace',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Find replace <![CDATA[ with space';
  $export['agris_filter-xpathparser_14-find_replace'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'agris_filter-xpathparser_14-find_replace1';
  $feeds_tamper->importer = 'agris_filter';
  $feeds_tamper->source = 'xpathparser:14';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => ']]>',
    'replace' => '',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 0,
    'regex' => FALSE,
    'func' => 'str_ireplace',
  );
  $feeds_tamper->weight = 1;
  $feeds_tamper->description = 'Find replace ]]> with space';
  $export['agris_filter-xpathparser_14-find_replace1'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'agris_filter-xpathparser_15-find_replace';
  $feeds_tamper->importer = 'agris_filter';
  $feeds_tamper->source = 'xpathparser:15';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => '<![CDATA[',
    'replace' => '',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 0,
    'regex' => FALSE,
    'func' => 'str_ireplace',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Find replace <![CDATA[';
  $export['agris_filter-xpathparser_15-find_replace'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'agris_filter-xpathparser_15-find_replace1';
  $feeds_tamper->importer = 'agris_filter';
  $feeds_tamper->source = 'xpathparser:15';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => ']]>',
    'replace' => '',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 0,
    'regex' => FALSE,
    'func' => 'str_ireplace',
  );
  $feeds_tamper->weight = 1;
  $feeds_tamper->description = 'Find replace';
  $export['agris_filter-xpathparser_15-find_replace1'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'agris_filter-xpathparser_2-find_replace';
  $feeds_tamper->importer = 'agris_filter';
  $feeds_tamper->source = 'xpathparser:2';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => '<![CDATA[',
    'replace' => '',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 0,
    'regex' => FALSE,
    'func' => 'str_ireplace',
  );
  $feeds_tamper->weight = 8;
  $feeds_tamper->description = 'Find replace <![CDATA[';
  $export['agris_filter-xpathparser_2-find_replace'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'agris_filter-xpathparser_2-find_replace_regex';
  $feeds_tamper->importer = 'agris_filter';
  $feeds_tamper->source = 'xpathparser:2';
  $feeds_tamper->plugin_id = 'find_replace_regex';
  $feeds_tamper->settings = array(
    'find' => '/^\\s*\\/\\/<!\\[CDATA\\[([\\s\\S]*)\\/\\/\\]\\]>\\s*\\z/',
    'replace' => '\\s',
    'limit' => '',
    'real_limit' => -1,
  );
  $feeds_tamper->weight = 11;
  $feeds_tamper->description = 'Find replace REGEX';
  $export['agris_filter-xpathparser_2-find_replace_regex'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'agris_filter-xpathparser_2-find_replaces';
  $feeds_tamper->importer = 'agris_filter';
  $feeds_tamper->source = 'xpathparser:2';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => ']]>',
    'replace' => '',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 0,
    'regex' => FALSE,
    'func' => 'str_ireplace',
  );
  $feeds_tamper->weight = 9;
  $feeds_tamper->description = 'Find replace ]]>';
  $export['agris_filter-xpathparser_2-find_replaces'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'agris_filter-xpathparser_2-html_entity_decode';
  $feeds_tamper->importer = 'agris_filter';
  $feeds_tamper->source = 'xpathparser:2';
  $feeds_tamper->plugin_id = 'html_entity_decode';
  $feeds_tamper->settings = array();
  $feeds_tamper->weight = 10;
  $feeds_tamper->description = 'HTML entity decode';
  $export['agris_filter-xpathparser_2-html_entity_decode'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'agris_filter-xpathparser_2-strip_tags';
  $feeds_tamper->importer = 'agris_filter';
  $feeds_tamper->source = 'xpathparser:2';
  $feeds_tamper->plugin_id = 'strip_tags';
  $feeds_tamper->settings = array(
    'allowed_tags' => '',
  );
  $feeds_tamper->weight = 12;
  $feeds_tamper->description = 'Strip tags';
  $export['agris_filter-xpathparser_2-strip_tags'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'agris_filter-xpathparser_3-find_replace';
  $feeds_tamper->importer = 'agris_filter';
  $feeds_tamper->source = 'xpathparser:3';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => '<![CDATA[',
    'replace' => '',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 0,
    'regex' => FALSE,
    'func' => 'str_ireplace',
  );
  $feeds_tamper->weight = 2;
  $feeds_tamper->description = 'Find replace <![CDATA[ with space';
  $export['agris_filter-xpathparser_3-find_replace'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'agris_filter-xpathparser_3-find_replaces';
  $feeds_tamper->importer = 'agris_filter';
  $feeds_tamper->source = 'xpathparser:3';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => ']]>',
    'replace' => '',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 0,
    'regex' => FALSE,
    'func' => 'str_ireplace',
  );
  $feeds_tamper->weight = 3;
  $feeds_tamper->description = 'Find replace ]]> with space';
  $export['agris_filter-xpathparser_3-find_replaces'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'agris_filter-xpathparser_3-html_entity_decode';
  $feeds_tamper->importer = 'agris_filter';
  $feeds_tamper->source = 'xpathparser:3';
  $feeds_tamper->plugin_id = 'html_entity_decode';
  $feeds_tamper->settings = array();
  $feeds_tamper->weight = 4;
  $feeds_tamper->description = 'HTML entity decode';
  $export['agris_filter-xpathparser_3-html_entity_decode'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'agris_filter-xpathparser_3-strip_tags';
  $feeds_tamper->importer = 'agris_filter';
  $feeds_tamper->source = 'xpathparser:3';
  $feeds_tamper->plugin_id = 'strip_tags';
  $feeds_tamper->settings = array(
    'allowed_tags' => '',
  );
  $feeds_tamper->weight = 5;
  $feeds_tamper->description = 'Strip tags';
  $export['agris_filter-xpathparser_3-strip_tags'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'agris_filter-xpathparser_4-default_value';
  $feeds_tamper->importer = 'agris_filter';
  $feeds_tamper->source = 'xpathparser:4';
  $feeds_tamper->plugin_id = 'default_value';
  $feeds_tamper->settings = array(
    'default_value' => 'English',
  );
  $feeds_tamper->weight = 5;
  $feeds_tamper->description = 'Set default value English';
  $export['agris_filter-xpathparser_4-default_value'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'agris_filter-xpathparser_4-find_replace';
  $feeds_tamper->importer = 'agris_filter';
  $feeds_tamper->source = 'xpathparser:4';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => '<![CDATA[',
    'replace' => '',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 0,
    'regex' => FALSE,
    'func' => 'str_ireplace',
  );
  $feeds_tamper->weight = 2;
  $feeds_tamper->description = 'Find replace';
  $export['agris_filter-xpathparser_4-find_replace'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'agris_filter-xpathparser_4-find_replace_regex';
  $feeds_tamper->importer = 'agris_filter';
  $feeds_tamper->source = 'xpathparser:4';
  $feeds_tamper->plugin_id = 'find_replace_regex';
  $feeds_tamper->settings = array(
    'find' => '/^\\s*\\/\\/<!\\[CDATA\\[([\\s\\S]*)\\/\\/\\]\\]>\\s*\\z/',
    'replace' => '\\s',
    'limit' => '',
    'real_limit' => -1,
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Find replace REGEX';
  $export['agris_filter-xpathparser_4-find_replace_regex'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'agris_filter-xpathparser_4-find_replaces';
  $feeds_tamper->importer = 'agris_filter';
  $feeds_tamper->source = 'xpathparser:4';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => ']]>',
    'replace' => '',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 0,
    'regex' => FALSE,
    'func' => 'str_ireplace',
  );
  $feeds_tamper->weight = 3;
  $feeds_tamper->description = 'Find replace ]]>';
  $export['agris_filter-xpathparser_4-find_replaces'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'agris_filter-xpathparser_4-html_entity_decode';
  $feeds_tamper->importer = 'agris_filter';
  $feeds_tamper->source = 'xpathparser:4';
  $feeds_tamper->plugin_id = 'html_entity_decode';
  $feeds_tamper->settings = array();
  $feeds_tamper->weight = 4;
  $feeds_tamper->description = 'HTML entity decode';
  $export['agris_filter-xpathparser_4-html_entity_decode'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'agris_filter-xpathparser_4-strip_tags';
  $feeds_tamper->importer = 'agris_filter';
  $feeds_tamper->source = 'xpathparser:4';
  $feeds_tamper->plugin_id = 'strip_tags';
  $feeds_tamper->settings = array(
    'allowed_tags' => '',
  );
  $feeds_tamper->weight = 1;
  $feeds_tamper->description = 'Strip tags';
  $export['agris_filter-xpathparser_4-strip_tags'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'agris_filter-xpathparser_5-find_replace';
  $feeds_tamper->importer = 'agris_filter';
  $feeds_tamper->source = 'xpathparser:5';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => '<![CDATA[',
    'replace' => '',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 0,
    'regex' => FALSE,
    'func' => 'str_ireplace',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Find replace <![CDATA[ with space';
  $export['agris_filter-xpathparser_5-find_replace'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'agris_filter-xpathparser_5-find_replaces';
  $feeds_tamper->importer = 'agris_filter';
  $feeds_tamper->source = 'xpathparser:5';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => ']]>',
    'replace' => '',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 0,
    'regex' => FALSE,
    'func' => 'str_ireplace',
  );
  $feeds_tamper->weight = 1;
  $feeds_tamper->description = 'Find replace ]]> with space';
  $export['agris_filter-xpathparser_5-find_replaces'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'agris_filter-xpathparser_5-html_entity_decode';
  $feeds_tamper->importer = 'agris_filter';
  $feeds_tamper->source = 'xpathparser:5';
  $feeds_tamper->plugin_id = 'html_entity_decode';
  $feeds_tamper->settings = array();
  $feeds_tamper->weight = 2;
  $feeds_tamper->description = 'HTML entity decode';
  $export['agris_filter-xpathparser_5-html_entity_decode'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'agris_filter-xpathparser_6-find_replace';
  $feeds_tamper->importer = 'agris_filter';
  $feeds_tamper->source = 'xpathparser:6';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => ']]>',
    'replace' => '',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 0,
    'regex' => FALSE,
    'func' => 'str_ireplace',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Find replace ]]> with space';
  $export['agris_filter-xpathparser_6-find_replace'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'agris_filter-xpathparser_6-find_replaces';
  $feeds_tamper->importer = 'agris_filter';
  $feeds_tamper->source = 'xpathparser:6';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => '<![CDATA[',
    'replace' => '',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 0,
    'regex' => FALSE,
    'func' => 'str_ireplace',
  );
  $feeds_tamper->weight = 1;
  $feeds_tamper->description = 'Find replace <![CDATA[ with space';
  $export['agris_filter-xpathparser_6-find_replaces'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'agris_filter-xpathparser_6-html_entity_decode';
  $feeds_tamper->importer = 'agris_filter';
  $feeds_tamper->source = 'xpathparser:6';
  $feeds_tamper->plugin_id = 'html_entity_decode';
  $feeds_tamper->settings = array();
  $feeds_tamper->weight = 2;
  $feeds_tamper->description = 'HTML entity decode';
  $export['agris_filter-xpathparser_6-html_entity_decode'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'agris_filter-xpathparser_7-find_replace';
  $feeds_tamper->importer = 'agris_filter';
  $feeds_tamper->source = 'xpathparser:7';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => '<![CDATA[',
    'replace' => '',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 0,
    'regex' => FALSE,
    'func' => 'str_ireplace',
  );
  $feeds_tamper->weight = 1;
  $feeds_tamper->description = 'Find replace';
  $export['agris_filter-xpathparser_7-find_replace'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'agris_filter-xpathparser_7-find_replaces';
  $feeds_tamper->importer = 'agris_filter';
  $feeds_tamper->source = 'xpathparser:7';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => ']]>',
    'replace' => '',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 0,
    'regex' => FALSE,
    'func' => 'str_ireplace',
  );
  $feeds_tamper->weight = 2;
  $feeds_tamper->description = 'Find replace';
  $export['agris_filter-xpathparser_7-find_replaces'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'agris_filter-xpathparser_7-sprintf';
  $feeds_tamper->importer = 'agris_filter';
  $feeds_tamper->source = 'xpathparser:7';
  $feeds_tamper->plugin_id = 'sprintf';
  $feeds_tamper->settings = array(
    'format' => '%s',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Format string';
  $export['agris_filter-xpathparser_7-sprintf'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'agris_filter-xpathparser_8-find_replace';
  $feeds_tamper->importer = 'agris_filter';
  $feeds_tamper->source = 'xpathparser:8';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => ']]>',
    'replace' => '',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 0,
    'regex' => FALSE,
    'func' => 'str_ireplace',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Find replace ]]> with space';
  $export['agris_filter-xpathparser_8-find_replace'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'agris_filter-xpathparser_8-find_replaces';
  $feeds_tamper->importer = 'agris_filter';
  $feeds_tamper->source = 'xpathparser:8';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => '<![CDATA[',
    'replace' => '',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 0,
    'regex' => FALSE,
    'func' => 'str_ireplace',
  );
  $feeds_tamper->weight = 1;
  $feeds_tamper->description = 'Find replace <![CDATA[';
  $export['agris_filter-xpathparser_8-find_replaces'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'agris_filter-xpathparser_8-html_entity_decode';
  $feeds_tamper->importer = 'agris_filter';
  $feeds_tamper->source = 'xpathparser:8';
  $feeds_tamper->plugin_id = 'html_entity_decode';
  $feeds_tamper->settings = array();
  $feeds_tamper->weight = 2;
  $feeds_tamper->description = 'HTML entity decode';
  $export['agris_filter-xpathparser_8-html_entity_decode'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'agris_filter-xpathparser_9-explode';
  $feeds_tamper->importer = 'agris_filter';
  $feeds_tamper->source = 'xpathparser:9';
  $feeds_tamper->plugin_id = 'explode';
  $feeds_tamper->settings = array(
    'separator' => ';',
    'limit' => '',
    'real_separator' => ';',
  );
  $feeds_tamper->weight = 8;
  $feeds_tamper->description = 'Explode ;';
  $export['agris_filter-xpathparser_9-explode'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'agris_filter-xpathparser_9-find_replace';
  $feeds_tamper->importer = 'agris_filter';
  $feeds_tamper->source = 'xpathparser:9';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => '<![CDATA[',
    'replace' => '',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 0,
    'regex' => FALSE,
    'func' => 'str_ireplace',
  );
  $feeds_tamper->weight = 9;
  $feeds_tamper->description = 'Find replace <![CDATA[';
  $export['agris_filter-xpathparser_9-find_replace'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'agris_filter-xpathparser_9-find_replace_regex';
  $feeds_tamper->importer = 'agris_filter';
  $feeds_tamper->source = 'xpathparser:9';
  $feeds_tamper->plugin_id = 'find_replace_regex';
  $feeds_tamper->settings = array(
    'find' => '/^\\s*\\/\\/<!\\[CDATA\\[([\\s\\S]*)\\/\\/\\]\\]>\\s*\\z/',
    'replace' => '\\s',
    'limit' => '',
    'real_limit' => -1,
  );
  $feeds_tamper->weight = 14;
  $feeds_tamper->description = 'Find replace REGEX';
  $export['agris_filter-xpathparser_9-find_replace_regex'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'agris_filter-xpathparser_9-find_replaces';
  $feeds_tamper->importer = 'agris_filter';
  $feeds_tamper->source = 'xpathparser:9';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => ']]>',
    'replace' => '',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 0,
    'regex' => FALSE,
    'func' => 'str_ireplace',
  );
  $feeds_tamper->weight = 10;
  $feeds_tamper->description = 'Find replace ]]> with space';
  $export['agris_filter-xpathparser_9-find_replaces'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'agris_filter-xpathparser_9-html_entity_decode';
  $feeds_tamper->importer = 'agris_filter';
  $feeds_tamper->source = 'xpathparser:9';
  $feeds_tamper->plugin_id = 'html_entity_decode';
  $feeds_tamper->settings = array();
  $feeds_tamper->weight = 11;
  $feeds_tamper->description = 'HTML entity decode';
  $export['agris_filter-xpathparser_9-html_entity_decode'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'agris_filter-xpathparser_9-strip_tags';
  $feeds_tamper->importer = 'agris_filter';
  $feeds_tamper->source = 'xpathparser:9';
  $feeds_tamper->plugin_id = 'strip_tags';
  $feeds_tamper->settings = array(
    'allowed_tags' => '',
  );
  $feeds_tamper->weight = 13;
  $feeds_tamper->description = 'Strip tags';
  $export['agris_filter-xpathparser_9-strip_tags'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'ifpri_batch_file_importer-xpathparser_15-default_value';
  $feeds_tamper->importer = 'ifpri_batch_file_importer';
  $feeds_tamper->source = 'xpathparser:15';
  $feeds_tamper->plugin_id = 'default_value';
  $feeds_tamper->settings = array(
    'default_value' => 'International Food Policy Research Institute (IFPRI)',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'International Food Policy Research Institute (IFPRI)';
  $export['ifpri_batch_file_importer-xpathparser_15-default_value'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'ifpri_batch_file_importer-xpathparser_5-explode';
  $feeds_tamper->importer = 'ifpri_batch_file_importer';
  $feeds_tamper->source = 'xpathparser:5';
  $feeds_tamper->plugin_id = 'explode';
  $feeds_tamper->settings = array(
    'separator' => ';',
    'limit' => '',
    'real_separator' => ';',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Explode ; ';
  $export['ifpri_batch_file_importer-xpathparser_5-explode'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'ifpri_batch_file_importer-xpathparser_6-html_entity_decode';
  $feeds_tamper->importer = 'ifpri_batch_file_importer';
  $feeds_tamper->source = 'xpathparser:6';
  $feeds_tamper->plugin_id = 'html_entity_decode';
  $feeds_tamper->settings = array();
  $feeds_tamper->weight = 1;
  $feeds_tamper->description = 'HTML entity decode';
  $export['ifpri_batch_file_importer-xpathparser_6-html_entity_decode'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'ifpri_creator_preimporter-xpathparser_0-find_replace';
  $feeds_tamper->importer = 'ifpri_creator_preimporter';
  $feeds_tamper->source = 'xpathparser:0';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => ';',
    'replace' => '',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 0,
    'regex' => FALSE,
    'func' => 'str_ireplace',
  );
  $feeds_tamper->weight = 7;
  $feeds_tamper->description = 'Find replace';
  $export['ifpri_creator_preimporter-xpathparser_0-find_replace'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'ifpri_creator_preimporter-xpathparser_1-find_replace';
  $feeds_tamper->importer = 'ifpri_creator_preimporter';
  $feeds_tamper->source = 'xpathparser:1';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => ';',
    'replace' => '',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 0,
    'regex' => FALSE,
    'func' => 'str_ireplace',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Find replace';
  $export['ifpri_creator_preimporter-xpathparser_1-find_replace'] = $feeds_tamper;

  return $export;
}

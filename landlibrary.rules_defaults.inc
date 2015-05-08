<?php
/**
 * @file
 * landlibrary.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function landlibrary_default_rules_configuration() {
  $items = array();
  $items['rules_add_country_automatically'] = entity_import('rules_config', '{ "rules_add_country_automatically" : {
      "LABEL" : "Add country automatically",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "autotag" ],
      "REQUIRES" : [ "rules" ],
      "ON" : { "node_presave--landlibrary_resource" : { "bundle" : "landlibrary_resource" } },
      "IF" : [
        { "entity_has_field" : { "entity" : [ "node" ], "field" : "field_doc_country" } },
        { "data_is_empty" : { "data" : [ "node:field-doc-country" ] } }
      ],
      "DO" : [
        { "component_rules_autotag_tag" : {
            "text" : "[node:title] [node:field-doc-description] [node:field-doc-alt-title] [node:field-doc-title] ",
            "vocabulary" : "countries",
            "target_terms" : [ "node:field-doc-country" ]
          }
        }
      ]
    }
  }');
  return $items;
}

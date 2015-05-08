<?php
/**
 * @file
 * landlibrary.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function landlibrary_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'browse_by_subject';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Browse by Subject';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Browse Library by Subject';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'field_image' => 'field_image',
    'title' => 'title',
  );
  /* Footer: Global: PHP */
  $handler->display->display_options['footer']['php']['id'] = 'php';
  $handler->display->display_options['footer']['php']['table'] = 'views';
  $handler->display->display_options['footer']['php']['field'] = 'php';
  $handler->display->display_options['footer']['php']['php_output'] = '<br/><br/>';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_sub_referenced_subject_target_id']['id'] = 'field_sub_referenced_subject_target_id';
  $handler->display->display_options['relationships']['field_sub_referenced_subject_target_id']['table'] = 'field_data_field_sub_referenced_subject';
  $handler->display->display_options['relationships']['field_sub_referenced_subject_target_id']['field'] = 'field_sub_referenced_subject_target_id';
  /* Field: Taxonomy term: Term ID */
  $handler->display->display_options['fields']['tid']['id'] = 'tid';
  $handler->display->display_options['fields']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['tid']['field'] = 'tid';
  $handler->display->display_options['fields']['tid']['relationship'] = 'field_sub_referenced_subject_target_id';
  $handler->display->display_options['fields']['tid']['label'] = '';
  $handler->display->display_options['fields']['tid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['tid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['tid']['separator'] = '';
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['label'] = '';
  $handler->display->display_options['fields']['php']['element_type'] = 'p';
  $handler->display->display_options['fields']['php']['element_class'] = 'browse-block-subject';
  $handler->display->display_options['fields']['php']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_value'] = '$url = \'?q=/library/search&f[0]=im_field_doc_subject:\'.$row->tid;
return $url;';
  $handler->display->display_options['fields']['php']['php_output'] = '<a href="<?php print $value; ?>"><?php 
$node  = node_load($row->nid);
$file = file_load($node->field_image[\'und\'][0][\'fid\']);
print \'<img src="\'.file_create_url($file->uri).\'"/><br/>\';
print \'<span>\'.$row->title.\'</span></a>\';
?>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_image']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_image']['alter']['path'] = '/library/search[tid]&f[0]=im_field_doc_subject:[tid]';
  $handler->display->display_options['fields']['field_image']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'subject_browse' => 'subject_browse',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['path'] = 'browse-by-subject';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_1');
  $translatables['browse_by_subject'] = array(
    t('Master'),
    t('Browse Library by Subject'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('Taxonomy term entity referenced from field_sub_referenced_subject'),
    t('.'),
    t('Page'),
    t('Block'),
  );
  $export['browse_by_subject'] = $view;

  $view = new view();
  $view->name = 'browse_resource_type';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Browse Resource Type';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Browse Library by Resource Type';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Broken/missing handler */
  $handler->display->display_options['relationships']['field_referenced_type_tid']['id'] = 'field_referenced_type_tid';
  $handler->display->display_options['relationships']['field_referenced_type_tid']['table'] = 'field_data_field_referenced_type';
  $handler->display->display_options['relationships']['field_referenced_type_tid']['field'] = 'field_referenced_type_tid';
  /* Relationship: Content: Taxonomy terms on node */
  $handler->display->display_options['relationships']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['relationships']['term_node_tid']['field'] = 'term_node_tid';
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_browse_type_image']['id'] = 'field_browse_type_image';
  $handler->display->display_options['fields']['field_browse_type_image']['table'] = 'field_data_field_browse_type_image';
  $handler->display->display_options['fields']['field_browse_type_image']['field'] = 'field_browse_type_image';
  $handler->display->display_options['fields']['field_browse_type_image']['label'] = '';
  $handler->display->display_options['fields']['field_browse_type_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_browse_type_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_browse_type_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_browse_type_image']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['label'] = '';
  $handler->display->display_options['fields']['php']['element_type'] = 'p';
  $handler->display->display_options['fields']['php']['element_class'] = 'browse-block-type';
  $handler->display->display_options['fields']['php']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_value'] = '$url = \'?q=/library/search&f[0]=im_field_doc_type:\'.$row->tid;
return $url;';
  $handler->display->display_options['fields']['php']['php_output'] = '<a href="<?php print $value; ?>"><?php 
$node  = node_load($row->nid);
$file = file_load($node->field_browse_type_image[\'und\'][0][\'fid\']);
print \'<img src="\'.file_create_url($file->uri).\'"/><br/>\';
print \'<span>\'.$row->title.\'</span></a>\';
?>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  /* Field: Taxonomy term: Term ID */
  $handler->display->display_options['fields']['tid']['id'] = 'tid';
  $handler->display->display_options['fields']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['tid']['field'] = 'tid';
  $handler->display->display_options['fields']['tid']['relationship'] = 'term_node_tid';
  $handler->display->display_options['fields']['tid']['exclude'] = TRUE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'type_browse' => 'type_browse',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['path'] = 'browse-resource-type';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'field_search_url' => 'field_search_url',
  );
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $translatables['browse_resource_type'] = array(
    t('Master'),
    t('Browse Library by Resource Type'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('field_referenced_type_tid'),
    t('term'),
    t('Nid'),
    t('Term ID'),
    t('.'),
    t(','),
    t('Page'),
    t('Block'),
  );
  $export['browse_resource_type'] = $view;

  $view = new view();
  $view->name = 'landlibrary_promoted';
  $view->description = 'Visual block of home page promoted items';
  $view->tag = 'landportal';
  $view->base_table = 'node';
  $view->human_name = 'LandLibrary promoted';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Promoted to front page';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '4';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_doc_provider_target_id']['id'] = 'field_doc_provider_target_id';
  $handler->display->display_options['relationships']['field_doc_provider_target_id']['table'] = 'field_data_field_doc_provider';
  $handler->display->display_options['relationships']['field_doc_provider_target_id']['field'] = 'field_doc_provider_target_id';
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['relationship'] = 'field_doc_provider_target_id';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => '',
    'image_link' => 'content',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['max_length'] = '70';
  $handler->display->display_options['fields']['title']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Thumb */
  $handler->display->display_options['fields']['field_doc_thumb']['id'] = 'field_doc_thumb';
  $handler->display->display_options['fields']['field_doc_thumb']['table'] = 'field_data_field_doc_thumb';
  $handler->display->display_options['fields']['field_doc_thumb']['field'] = 'field_doc_thumb';
  $handler->display->display_options['fields']['field_doc_thumb']['label'] = '';
  $handler->display->display_options['fields']['field_doc_thumb']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_doc_thumb']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_doc_thumb']['settings'] = array(
    'image_style' => 'featured',
    'image_link' => 'content',
  );
  /* Sort criterion: Content: Updated date */
  $handler->display->display_options['sorts']['changed']['id'] = 'changed';
  $handler->display->display_options['sorts']['changed']['table'] = 'node';
  $handler->display->display_options['sorts']['changed']['field'] = 'changed';
  $handler->display->display_options['sorts']['changed']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Promoted to front page */
  $handler->display->display_options['filters']['promote']['id'] = 'promote';
  $handler->display->display_options['filters']['promote']['table'] = 'node';
  $handler->display->display_options['filters']['promote']['field'] = 'promote';
  $handler->display->display_options['filters']['promote']['value'] = '1';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'landlibrary_resource' => 'landlibrary_resource',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $translatables['landlibrary_promoted'] = array(
    t('Master'),
    t('Promoted to front page'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Content entity referenced from field_doc_provider'),
    t('Block'),
  );
  $export['landlibrary_promoted'] = $view;

  $view = new view();
  $view->name = 'library_search';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'apachesolr__index_landportal_v2';
  $view->human_name = 'Library Search';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Library Search';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Search';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'list-group-item';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Header: Global: Result summary */
  $handler->display->display_options['header']['result']['id'] = 'result';
  $handler->display->display_options['header']['result']['table'] = 'views';
  $handler->display->display_options['header']['result']['field'] = 'result';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'No results found.';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  /* Field: Apache Solr: sm_field_doc_provider */
  $handler->display->display_options['fields']['sm_field_doc_provider']['id'] = 'sm_field_doc_provider';
  $handler->display->display_options['fields']['sm_field_doc_provider']['table'] = 'apachesolr__index_landportal_v2';
  $handler->display->display_options['fields']['sm_field_doc_provider']['field'] = 'sm_field_doc_provider';
  $handler->display->display_options['fields']['sm_field_doc_provider']['label'] = '';
  $handler->display->display_options['fields']['sm_field_doc_provider']['exclude'] = TRUE;
  $handler->display->display_options['fields']['sm_field_doc_provider']['element_label_colon'] = FALSE;
  /* Field: Apache Solr: url */
  $handler->display->display_options['fields']['url']['id'] = 'url';
  $handler->display->display_options['fields']['url']['table'] = 'apachesolr__index_landportal_v2';
  $handler->display->display_options['fields']['url']['field'] = 'url';
  $handler->display->display_options['fields']['url']['label'] = '';
  $handler->display->display_options['fields']['url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['url']['element_label_colon'] = FALSE;
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php_1']['id'] = 'php_1';
  $handler->display->display_options['fields']['php_1']['table'] = 'views';
  $handler->display->display_options['fields']['php_1']['field'] = 'php';
  $handler->display->display_options['fields']['php_1']['label'] = '';
  $handler->display->display_options['fields']['php_1']['element_type'] = 'span';
  $handler->display->display_options['fields']['php_1']['element_class'] = 'search-block-provider';
  $handler->display->display_options['fields']['php_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php_1']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php_1']['php_output'] = '<?php 
$node_id = str_replace(\'node:\', \'\', $row->sm_field_doc_provider[0]);
$node  = node_load($node_id);
$file = file_load($node->field_image[\'und\'][0][\'fid\']);
print \'<a href="/node/\'.$node_id.\'"><img src="\'.file_create_url($file->uri).\'"/></a>\';
?>';
  $handler->display->display_options['fields']['php_1']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php_1']['php_click_sortable'] = '';
  /* Field: Apache Solr: label */
  $handler->display->display_options['fields']['label']['id'] = 'label';
  $handler->display->display_options['fields']['label']['table'] = 'apachesolr__index_landportal_v2';
  $handler->display->display_options['fields']['label']['field'] = 'label';
  $handler->display->display_options['fields']['label']['label'] = '';
  $handler->display->display_options['fields']['label']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['label']['alter']['path'] = '[url]';
  $handler->display->display_options['fields']['label']['element_label_colon'] = FALSE;
  /* Field: Apache Solr: teaser */
  $handler->display->display_options['fields']['teaser']['id'] = 'teaser';
  $handler->display->display_options['fields']['teaser']['table'] = 'apachesolr__index_landportal_v2';
  $handler->display->display_options['fields']['teaser']['field'] = 'teaser';
  $handler->display->display_options['fields']['teaser']['label'] = '';
  $handler->display->display_options['fields']['teaser']['exclude'] = TRUE;
  $handler->display->display_options['fields']['teaser']['element_label_colon'] = FALSE;
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php_2']['id'] = 'php_2';
  $handler->display->display_options['fields']['php_2']['table'] = 'views';
  $handler->display->display_options['fields']['php_2']['field'] = 'php';
  $handler->display->display_options['fields']['php_2']['label'] = '';
  $handler->display->display_options['fields']['php_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php_2']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php_2']['php_output'] = '<?php 
$desc = str_replace(\'Description:\',\'<b>Description:</b>\',$row->teaser);
print $desc;
print(\'...\');
?>';
  $handler->display->display_options['fields']['php_2']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php_2']['php_click_sortable'] = '';
  /* Field: Apache Solr: im_field_doc_keyword */
  $handler->display->display_options['fields']['im_field_doc_keyword']['id'] = 'im_field_doc_keyword';
  $handler->display->display_options['fields']['im_field_doc_keyword']['table'] = 'apachesolr__index_landportal_v2';
  $handler->display->display_options['fields']['im_field_doc_keyword']['field'] = 'im_field_doc_keyword';
  $handler->display->display_options['fields']['im_field_doc_keyword']['label'] = '';
  $handler->display->display_options['fields']['im_field_doc_keyword']['exclude'] = TRUE;
  $handler->display->display_options['fields']['im_field_doc_keyword']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['im_field_doc_keyword']['element_type'] = 'h3';
  $handler->display->display_options['fields']['im_field_doc_keyword']['element_label_colon'] = FALSE;
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['label'] = 'Keywords';
  $handler->display->display_options['fields']['php']['element_type'] = 'span';
  $handler->display->display_options['fields']['php']['element_class'] = 'search-block-keyword';
  $handler->display->display_options['fields']['php']['element_label_type'] = 'strong';
  $handler->display->display_options['fields']['php']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_output'] = '<?php
$termList = \'\';
$terms = taxonomy_term_load_multiple($row->im_field_doc_keyword);
$prefix = \'\';
foreach ($terms as $term)
{
    $termList .= $prefix . \'<a href="/library/search?keyword=\'.$term->name.\'">\' . $term->name . \'</a>\' ;
    $prefix = \', \';
}
 $termList = rtrim($termList, ",");
if ($termList == \'\')
 print "-";
else {
print $termList;
}
?>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  /* Filter criterion: Apache Solr: Search */
  $handler->display->display_options['filters']['keyword']['id'] = 'keyword';
  $handler->display->display_options['filters']['keyword']['table'] = 'apachesolr__index_landportal_v2';
  $handler->display->display_options['filters']['keyword']['field'] = 'keyword';
  $handler->display->display_options['filters']['keyword']['exposed'] = TRUE;
  $handler->display->display_options['filters']['keyword']['expose']['operator_id'] = '';
  $handler->display->display_options['filters']['keyword']['expose']['operator'] = 'keyword_op';
  $handler->display->display_options['filters']['keyword']['expose']['identifier'] = 'keyword';
  $handler->display->display_options['filters']['keyword']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    111731461 => 0,
    25521343 => 0,
    111903910 => 0,
    30037204 => 0,
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['path'] = 'library/search';
  $translatables['library_search'] = array(
    t('Master'),
    t('Library Search'),
    t('more'),
    t('Search'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('Displaying @start - @end of @total'),
    t('No results found.'),
    t('Keywords'),
    t('Page'),
  );
  $export['library_search'] = $view;

  $view = new view();
  $view->name = 'library_sources';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Sources';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Data Sources';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['pure_distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'source-list-row';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_doc_provider_target_id']['id'] = 'field_doc_provider_target_id';
  $handler->display->display_options['relationships']['field_doc_provider_target_id']['table'] = 'field_data_field_doc_provider';
  $handler->display->display_options['relationships']['field_doc_provider_target_id']['field'] = 'field_doc_provider_target_id';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['relationship'] = 'field_doc_provider_target_id';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'field_doc_provider_target_id';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['relationship'] = 'field_doc_provider_target_id';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'medium',
    'image_link' => 'content',
  );
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Provider (field_doc_provider) */
  $handler->display->display_options['filters']['field_doc_provider_target_id']['id'] = 'field_doc_provider_target_id';
  $handler->display->display_options['filters']['field_doc_provider_target_id']['table'] = 'field_data_field_doc_provider';
  $handler->display->display_options['filters']['field_doc_provider_target_id']['field'] = 'field_doc_provider_target_id';
  $handler->display->display_options['filters']['field_doc_provider_target_id']['operator'] = 'not empty';
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['relationship'] = 'field_doc_provider_target_id';
  $handler->display->display_options['filters']['title']['operator'] = '!=';
  $handler->display->display_options['filters']['title']['value'] = 'unknown';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'library/sources';
  $translatables['library_sources'] = array(
    t('Master'),
    t('Data Sources'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Content entity referenced from field_doc_provider'),
    t('Page'),
  );
  $export['library_sources'] = $view;

  $view = new view();
  $view->name = 'resource_options';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Resource options';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Resource options';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Is shown at */
  $handler->display->display_options['fields']['field_doc_is_shown_at']['id'] = 'field_doc_is_shown_at';
  $handler->display->display_options['fields']['field_doc_is_shown_at']['table'] = 'field_data_field_doc_is_shown_at';
  $handler->display->display_options['fields']['field_doc_is_shown_at']['field'] = 'field_doc_is_shown_at';
  $handler->display->display_options['fields']['field_doc_is_shown_at']['label'] = '';
  $handler->display->display_options['fields']['field_doc_is_shown_at']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_doc_is_shown_at']['alter']['text'] = 'Document Page';
  $handler->display->display_options['fields']['field_doc_is_shown_at']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_doc_is_shown_at']['alter']['path'] = '[field_doc_is_shown_at-url]';
  $handler->display->display_options['fields']['field_doc_is_shown_at']['alter']['link_class'] = 'btn data-button';
  $handler->display->display_options['fields']['field_doc_is_shown_at']['alter']['target'] = '_blank';
  $handler->display->display_options['fields']['field_doc_is_shown_at']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_doc_is_shown_at']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_doc_is_shown_at']['type'] = 'link_absolute';
  /* Field: Content: Is shown by */
  $handler->display->display_options['fields']['field_doc_is_shown_by']['id'] = 'field_doc_is_shown_by';
  $handler->display->display_options['fields']['field_doc_is_shown_by']['table'] = 'field_data_field_doc_is_shown_by';
  $handler->display->display_options['fields']['field_doc_is_shown_by']['field'] = 'field_doc_is_shown_by';
  $handler->display->display_options['fields']['field_doc_is_shown_by']['label'] = '';
  $handler->display->display_options['fields']['field_doc_is_shown_by']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_doc_is_shown_by']['alter']['text'] = 'Document URL';
  $handler->display->display_options['fields']['field_doc_is_shown_by']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_doc_is_shown_by']['alter']['path'] = '[field_doc_is_shown_by-url]';
  $handler->display->display_options['fields']['field_doc_is_shown_by']['alter']['link_class'] = 'btn data-button';
  $handler->display->display_options['fields']['field_doc_is_shown_by']['alter']['target'] = '_blank';
  $handler->display->display_options['fields']['field_doc_is_shown_by']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_doc_is_shown_by']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_doc_is_shown_by']['type'] = 'link_url';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'landlibrary_resource' => 'landlibrary_resource',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['path'] = 'resource-options/%';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_1');
  $handler->display->display_options['block_description'] = 'Resource Options';
  $translatables['resource_options'] = array(
    t('Master'),
    t('Resource options'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('Document Page'),
    t('Document URL'),
    t('All'),
    t('Page'),
    t('Block'),
    t('Resource Options'),
  );
  $export['resource_options'] = $view;

  $view = new view();
  $view->name = 'resources_view';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Resources View';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Resources View';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    2 => '2',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Updated date */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'node';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['date_format'] = 'long';
  $handler->display->display_options['fields']['changed']['second_date_format'] = 'long';
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = 'Edit';
  /* Field: Content: Delete link */
  $handler->display->display_options['fields']['delete_node']['id'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['delete_node']['field'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['label'] = 'Delete';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['sorts']['title']['order'] = 'DESC';
  $handler->display->display_options['sorts']['title']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['title']['expose']['label'] = 'Title';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'landlibrary_resource' => 'landlibrary_resource',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'resources-view';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $translatables['resources_view'] = array(
    t('Master'),
    t('Resources View'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('Title'),
    t('Updated date'),
    t('Edit'),
    t('Delete'),
    t('Page'),
    t('Block'),
  );
  $export['resources_view'] = $view;

  $view = new view();
  $view->name = 'terms_management';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'taxonomy_term_data';
  $view->human_name = 'Terms management';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Terms management';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '250';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'views_bulk_operations' => 'views_bulk_operations',
    'name' => 'name',
    'name_field_et' => 'name_field_et',
    'name_field_et_1' => 'name_field_et_1',
    'field_iso3' => 'field_iso3',
    'field_machine_name_2' => 'field_iso3',
    'field_agrovoc_uri' => 'field_iso3',
    'field_linked_uris' => 'field_iso3',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'views_bulk_operations' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'name_field_et' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'name_field_et_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_iso3' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '<br />',
      'empty_column' => 0,
    ),
    'field_machine_name_2' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_agrovoc_uri' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_linked_uris' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Header: Global: Result summary */
  $handler->display->display_options['header']['result']['id'] = 'result';
  $handler->display->display_options['header']['result']['table'] = 'views';
  $handler->display->display_options['header']['result']['field'] = 'result';
  /* Relationship: Taxonomy term: Representative node */
  $handler->display->display_options['relationships']['tid_representative']['id'] = 'tid_representative';
  $handler->display->display_options['relationships']['tid_representative']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['relationships']['tid_representative']['field'] = 'tid_representative';
  $handler->display->display_options['relationships']['tid_representative']['subquery_sort'] = 'node.nid';
  $handler->display->display_options['relationships']['tid_representative']['subquery_order'] = 'ASC';
  $handler->display->display_options['relationships']['tid_representative']['subquery_view'] = '';
  $handler->display->display_options['relationships']['tid_representative']['subquery_namespace'] = '';
  /* Field: Bulk operations: Taxonomy term */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['label'] = '';
  $handler->display->display_options['fields']['views_bulk_operations']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '0';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
    'action::views_bulk_operations_delete_item' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_delete_revision' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_script_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_modify_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'settings' => array(
        'show_all_tokens' => 1,
        'display_values' => array(
          '_all_' => '_all_',
        ),
      ),
    ),
    'action::views_bulk_operations_argument_selector_action' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'settings' => array(
        'url' => '',
      ),
    ),
    'action::system_send_email_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::pathauto_taxonomy_term_update_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
  );
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_taxonomy'] = TRUE;
  /* Field: Entity translation: Name: translated */
  $handler->display->display_options['fields']['name_field_et']['id'] = 'name_field_et';
  $handler->display->display_options['fields']['name_field_et']['table'] = 'field_data_name_field';
  $handler->display->display_options['fields']['name_field_et']['field'] = 'name_field_et';
  $handler->display->display_options['fields']['name_field_et']['label'] = 'Name EN';
  $handler->display->display_options['fields']['name_field_et']['language'] = 'en';
  /* Field: Entity translation: Name: translated */
  $handler->display->display_options['fields']['name_field_et_1']['id'] = 'name_field_et_1';
  $handler->display->display_options['fields']['name_field_et_1']['table'] = 'field_data_name_field';
  $handler->display->display_options['fields']['name_field_et_1']['field'] = 'name_field_et';
  $handler->display->display_options['fields']['name_field_et_1']['label'] = 'Name: FR';
  $handler->display->display_options['fields']['name_field_et_1']['language'] = 'fr';
  /* Field: Taxonomy term: ISO3 */
  $handler->display->display_options['fields']['field_iso3']['id'] = 'field_iso3';
  $handler->display->display_options['fields']['field_iso3']['table'] = 'field_data_field_iso3';
  $handler->display->display_options['fields']['field_iso3']['field'] = 'field_iso3';
  $handler->display->display_options['fields']['field_iso3']['label'] = 'Codes, URIs';
  $handler->display->display_options['fields']['field_iso3']['settings'] = array(
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: Taxonomy term: Machine name (ISO 639-2) */
  $handler->display->display_options['fields']['field_machine_name_2']['id'] = 'field_machine_name_2';
  $handler->display->display_options['fields']['field_machine_name_2']['table'] = 'field_data_field_machine_name_2';
  $handler->display->display_options['fields']['field_machine_name_2']['field'] = 'field_machine_name_2';
  $handler->display->display_options['fields']['field_machine_name_2']['label'] = 'ISO 639-2';
  $handler->display->display_options['fields']['field_machine_name_2']['settings'] = array(
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: Taxonomy term: AGROVOC URI */
  $handler->display->display_options['fields']['field_agrovoc_uri']['id'] = 'field_agrovoc_uri';
  $handler->display->display_options['fields']['field_agrovoc_uri']['table'] = 'field_data_field_agrovoc_uri';
  $handler->display->display_options['fields']['field_agrovoc_uri']['field'] = 'field_agrovoc_uri';
  $handler->display->display_options['fields']['field_agrovoc_uri']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_agrovoc_uri']['type'] = 'link_url';
  $handler->display->display_options['fields']['field_agrovoc_uri']['settings'] = array(
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: Taxonomy term: FAO Country Profiles Geopolitical Ontology URI */
  $handler->display->display_options['fields']['field_linked_uris']['id'] = 'field_linked_uris';
  $handler->display->display_options['fields']['field_linked_uris']['table'] = 'field_data_field_linked_uris';
  $handler->display->display_options['fields']['field_linked_uris']['field'] = 'field_linked_uris';
  $handler->display->display_options['fields']['field_linked_uris']['label'] = 'Geopolitical Ontology URI';
  $handler->display->display_options['fields']['field_linked_uris']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_linked_uris']['type'] = 'link_url';
  $handler->display->display_options['fields']['field_linked_uris']['settings'] = array(
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'tid_representative';
  $handler->display->display_options['fields']['title']['label'] = 'One node';
  /* Sort criterion: Taxonomy vocabulary: Name */
  $handler->display->display_options['sorts']['name']['id'] = 'name';
  $handler->display->display_options['sorts']['name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['sorts']['name']['field'] = 'name';
  /* Sort criterion: Taxonomy term: Name */
  $handler->display->display_options['sorts']['name_1']['id'] = 'name_1';
  $handler->display->display_options['sorts']['name_1']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['sorts']['name_1']['field'] = 'name';
  /* Filter criterion: Taxonomy term: Vocabulary */
  $handler->display->display_options['filters']['vid']['id'] = 'vid';
  $handler->display->display_options['filters']['vid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['filters']['vid']['field'] = 'vid';
  $handler->display->display_options['filters']['vid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['vid']['expose']['operator_id'] = 'vid_op';
  $handler->display->display_options['filters']['vid']['expose']['label'] = 'Vocabulary';
  $handler->display->display_options['filters']['vid']['expose']['operator'] = 'vid_op';
  $handler->display->display_options['filters']['vid']['expose']['identifier'] = 'vid';
  $handler->display->display_options['filters']['vid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['vid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    111731461 => 0,
    25521343 => 0,
    111903910 => 0,
    30037204 => 0,
  );
  /* Filter criterion: Taxonomy term: AGROVOC URI (field_agrovoc_uri:url) */
  $handler->display->display_options['filters']['field_agrovoc_uri_url']['id'] = 'field_agrovoc_uri_url';
  $handler->display->display_options['filters']['field_agrovoc_uri_url']['table'] = 'field_data_field_agrovoc_uri';
  $handler->display->display_options['filters']['field_agrovoc_uri_url']['field'] = 'field_agrovoc_uri_url';
  $handler->display->display_options['filters']['field_agrovoc_uri_url']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_agrovoc_uri_url']['expose']['operator_id'] = 'field_agrovoc_uri_url_op';
  $handler->display->display_options['filters']['field_agrovoc_uri_url']['expose']['label'] = 'AGROVOC URI';
  $handler->display->display_options['filters']['field_agrovoc_uri_url']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['field_agrovoc_uri_url']['expose']['operator'] = 'field_agrovoc_uri_url_op';
  $handler->display->display_options['filters']['field_agrovoc_uri_url']['expose']['identifier'] = 'field_agrovoc_uri_url';
  $handler->display->display_options['filters']['field_agrovoc_uri_url']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    111731461 => 0,
    25521343 => 0,
    111903910 => 0,
    30037204 => 0,
  );
  /* Filter criterion: Taxonomy term: FAO Country Profiles Geopolitical Ontology URI (field_linked_uris:url) */
  $handler->display->display_options['filters']['field_linked_uris_url']['id'] = 'field_linked_uris_url';
  $handler->display->display_options['filters']['field_linked_uris_url']['table'] = 'field_data_field_linked_uris';
  $handler->display->display_options['filters']['field_linked_uris_url']['field'] = 'field_linked_uris_url';
  $handler->display->display_options['filters']['field_linked_uris_url']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_linked_uris_url']['expose']['operator_id'] = 'field_linked_uris_url_op';
  $handler->display->display_options['filters']['field_linked_uris_url']['expose']['label'] = 'Geopolitical URI';
  $handler->display->display_options['filters']['field_linked_uris_url']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['field_linked_uris_url']['expose']['operator'] = 'field_linked_uris_url_op';
  $handler->display->display_options['filters']['field_linked_uris_url']['expose']['identifier'] = 'field_linked_uris_url';
  $handler->display->display_options['filters']['field_linked_uris_url']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    111731461 => 0,
    25521343 => 0,
    111903910 => 0,
    30037204 => 0,
  );
  /* Filter criterion: Taxonomy term: Name (name_field) */
  $handler->display->display_options['filters']['name_field_value']['id'] = 'name_field_value';
  $handler->display->display_options['filters']['name_field_value']['table'] = 'field_data_name_field';
  $handler->display->display_options['filters']['name_field_value']['field'] = 'name_field_value';
  $handler->display->display_options['filters']['name_field_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['name_field_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['name_field_value']['expose']['operator_id'] = 'name_field_value_op';
  $handler->display->display_options['filters']['name_field_value']['expose']['label'] = 'Search';
  $handler->display->display_options['filters']['name_field_value']['expose']['operator'] = 'name_field_value_op';
  $handler->display->display_options['filters']['name_field_value']['expose']['identifier'] = 'name_field_value';
  $handler->display->display_options['filters']['name_field_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    111731461 => 0,
    25521343 => 0,
    111903910 => 0,
    30037204 => 0,
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'admin/terms';
  $translatables['terms_management'] = array(
    t('Master'),
    t('Terms management'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('Displaying @start - @end of @total'),
    t('Representative node'),
    t('- Choose an operation -'),
    t('Name EN'),
    t('Name: FR'),
    t('Codes, URIs'),
    t('ISO 639-2'),
    t('AGROVOC URI'),
    t('Geopolitical Ontology URI'),
    t('One node'),
    t('Vocabulary'),
    t('Geopolitical URI'),
    t('Search'),
    t('Page'),
  );
  $export['terms_management'] = $view;

  return $export;
}

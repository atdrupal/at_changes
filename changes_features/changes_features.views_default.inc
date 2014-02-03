<?php
/**
 * @file
 * changes_features.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function changes_features_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'commits';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Commits';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Commits';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['commit_issue_target_id']['id'] = 'commit_issue_target_id';
  $handler->display->display_options['relationships']['commit_issue_target_id']['table'] = 'field_data_commit_issue';
  $handler->display->display_options['relationships']['commit_issue_target_id']['field'] = 'commit_issue_target_id';
  $handler->display->display_options['relationships']['commit_issue_target_id']['label'] = 'Issue';
  /* Field: Content: SHA1 */
  $handler->display->display_options['fields']['commit_sha1']['id'] = 'commit_sha1';
  $handler->display->display_options['fields']['commit_sha1']['table'] = 'field_data_commit_sha1';
  $handler->display->display_options['fields']['commit_sha1']['field'] = 'commit_sha1';
  $handler->display->display_options['fields']['commit_sha1']['alter']['max_length'] = '7';
  $handler->display->display_options['fields']['commit_sha1']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['commit_sha1']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['commit_sha1']['alter']['trim'] = TRUE;
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = 'Date';
  $handler->display->display_options['fields']['created']['date_format'] = 'custom';
  $handler->display->display_options['fields']['created']['custom_date_format'] = 'Y/m/d';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Message';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['relationship'] = 'commit_issue_target_id';
  $handler->display->display_options['fields']['nid']['label'] = 'Issue';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  /* Field: Content: Source NID */
  $handler->display->display_options['fields']['issue_nid']['id'] = 'issue_nid';
  $handler->display->display_options['fields']['issue_nid']['table'] = 'field_data_issue_nid';
  $handler->display->display_options['fields']['issue_nid']['field'] = 'issue_nid';
  $handler->display->display_options['fields']['issue_nid']['relationship'] = 'commit_issue_target_id';
  $handler->display->display_options['fields']['issue_nid']['label'] = 'Issue';
  $handler->display->display_options['fields']['issue_nid']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['issue_nid']['alter']['text'] = '#[issue_nid]';
  $handler->display->display_options['fields']['issue_nid']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['issue_nid']['alter']['path'] = 'node/[nid]';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $handler->display->display_options['sorts']['created']['expose']['label'] = 'Post date';
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
    'commit' => 'commit',
  );
  /* Filter criterion: Content: Component (issue_component) */
  $handler->display->display_options['filters']['issue_component_tid']['id'] = 'issue_component_tid';
  $handler->display->display_options['filters']['issue_component_tid']['table'] = 'field_data_issue_component';
  $handler->display->display_options['filters']['issue_component_tid']['field'] = 'issue_component_tid';
  $handler->display->display_options['filters']['issue_component_tid']['relationship'] = 'commit_issue_target_id';
  $handler->display->display_options['filters']['issue_component_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['issue_component_tid']['expose']['operator_id'] = 'issue_component_tid_op';
  $handler->display->display_options['filters']['issue_component_tid']['expose']['label'] = 'Component';
  $handler->display->display_options['filters']['issue_component_tid']['expose']['operator'] = 'issue_component_tid_op';
  $handler->display->display_options['filters']['issue_component_tid']['expose']['identifier'] = 'component';
  $handler->display->display_options['filters']['issue_component_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['issue_component_tid']['type'] = 'select';
  $handler->display->display_options['filters']['issue_component_tid']['vocabulary'] = 'issue_component';
  $handler->display->display_options['filters']['issue_component_tid']['hierarchy'] = 1;
  /* Filter criterion: Content: Tags (issue_tags) */
  $handler->display->display_options['filters']['issue_tags_tid']['id'] = 'issue_tags_tid';
  $handler->display->display_options['filters']['issue_tags_tid']['table'] = 'field_data_issue_tags';
  $handler->display->display_options['filters']['issue_tags_tid']['field'] = 'issue_tags_tid';
  $handler->display->display_options['filters']['issue_tags_tid']['relationship'] = 'commit_issue_target_id';
  $handler->display->display_options['filters']['issue_tags_tid']['value'] = '';
  $handler->display->display_options['filters']['issue_tags_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['issue_tags_tid']['expose']['operator_id'] = 'issue_tags_tid_op';
  $handler->display->display_options['filters']['issue_tags_tid']['expose']['label'] = 'Tags';
  $handler->display->display_options['filters']['issue_tags_tid']['expose']['operator'] = 'issue_tags_tid_op';
  $handler->display->display_options['filters']['issue_tags_tid']['expose']['identifier'] = 'tags';
  $handler->display->display_options['filters']['issue_tags_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['issue_tags_tid']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['issue_tags_tid']['vocabulary'] = 'issue_tags';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'commits';
  $export['commits'] = $view;

  $view = new view();
  $view->name = 'components';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'taxonomy_term_data';
  $view->human_name = 'Components';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Components';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Taxonomy term: Term ID */
  $handler->display->display_options['fields']['tid']['id'] = 'tid';
  $handler->display->display_options['fields']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['tid']['field'] = 'tid';
  $handler->display->display_options['fields']['tid']['label'] = '';
  $handler->display->display_options['fields']['tid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['tid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['tid']['separator'] = '';
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['text'] = '<a href="/commits?component=[tid]">[name]</>';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  /* Sort criterion: Taxonomy term: Name */
  $handler->display->display_options['sorts']['name']['id'] = 'name';
  $handler->display->display_options['sorts']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['sorts']['name']['field'] = 'name';
  /* Filter criterion: Taxonomy vocabulary: Machine name */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'issue_component' => 'issue_component',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $export['components'] = $view;

  return $export;
}
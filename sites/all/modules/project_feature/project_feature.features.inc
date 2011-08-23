<?php
/**
 * @file
 * project_feature.features.inc
 */

/**
 * Implementation of hook_views_api().
 */
function project_feature_views_api() {
  list($module, $api) = func_get_args();
  if ($module == "views" && $api == "views_default") {
    return array("version" => "3.0");
  }
}

/**
 * Implementation of hook_node_info().
 */
function project_feature_node_info() {
  $items = array(
    'projects' => array(
      'name' => t('Projects'),
      'base' => 'node_content',
      'description' => t('Form for Organizations to start posting projects for students to browse'),
      'has_title' => '1',
      'title_label' => t('Project Title'),
      'help' => t('Note: If proposing more than one project, please submit responses to the following questions for each project.  Organizations that submit more than one project are more likely to attract student interest, but only one is required and no more than two are recommended.'),
    ),
  );
  return $items;
}

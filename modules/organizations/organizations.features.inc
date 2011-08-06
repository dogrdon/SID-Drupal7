<?php

/**
 * Implementation of hook_node_info().
 */
function organizations_node_info() {
  $items = array(
    'organization' => array(
      'name' => t('Organization'),
      'module' => 'features',
      'description' => t('This content type is for organizations to describe themselves.'),
      'has_title' => '1',
      'title_label' => t('Organization Title'),
      'has_body' => '0',
      'body_label' => '',
      'min_word_count' => '0',
      'help' => '',
    ),
  );
  return $items;
}

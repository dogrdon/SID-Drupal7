<?php
/**
 * @file
 * permissions.features.user_permission.inc
 */

/**
 * Implementation of hook_user_default_permissions().
 */
function permissions_user_default_permissions() {
  $permissions = array();

  // Exported permission: access administration pages
  $permissions['access administration pages'] = array(
    'name' => 'access administration pages',
    'roles' => array(
      0 => 'super administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: access all views
  $permissions['access all views'] = array(
    'name' => 'access all views',
    'roles' => array(
      0 => 'SID Staff Admin',
      1 => 'super administrator',
    ),
    'module' => 'views',
  );

  // Exported permission: access comments
  $permissions['access comments'] = array(
    'name' => 'access comments',
    'roles' => array(
      0 => 'SID Staff Admin',
      1 => 'super administrator',
    ),
    'module' => 'comment',
  );

  // Exported permission: access content
  $permissions['access content'] = array(
    'name' => 'access content',
    'roles' => array(
      0 => 'Organizational Partner',
      1 => 'anonymous user',
      2 => 'authenticated user',
      3 => 'super administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: access content overview
  $permissions['access content overview'] = array(
    'name' => 'access content overview',
    'roles' => array(
      0 => 'SID Staff Admin',
      1 => 'super administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: access contextual links
  $permissions['access contextual links'] = array(
    'name' => 'access contextual links',
    'roles' => array(
      0 => 'Organizational Partner',
      1 => 'super administrator',
    ),
    'module' => 'contextual',
  );

  // Exported permission: access overlay
  $permissions['access overlay'] = array(
    'name' => 'access overlay',
    'roles' => array(
      0 => 'SID Staff Admin',
      1 => 'super administrator',
    ),
    'module' => 'overlay',
  );

  // Exported permission: access rules debug
  $permissions['access rules debug'] = array(
    'name' => 'access rules debug',
    'roles' => array(),
  );

  // Exported permission: access site in maintenance mode
  $permissions['access site in maintenance mode'] = array(
    'name' => 'access site in maintenance mode',
    'roles' => array(
      0 => 'super administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: access site reports
  $permissions['access site reports'] = array(
    'name' => 'access site reports',
    'roles' => array(
      0 => 'super administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: access toolbar
  $permissions['access toolbar'] = array(
    'name' => 'access toolbar',
    'roles' => array(
      0 => 'SID Staff Admin',
      1 => 'super administrator',
    ),
    'module' => 'toolbar',
  );

  // Exported permission: access user profiles
  $permissions['access user profiles'] = array(
    'name' => 'access user profiles',
    'roles' => array(
      0 => 'SID Staff Admin',
      1 => 'super administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: administer CAPTCHA settings
  $permissions['administer CAPTCHA settings'] = array(
    'name' => 'administer CAPTCHA settings',
    'roles' => array(
      0 => 'super administrator',
    ),
    'module' => 'captcha',
  );

  // Exported permission: administer actions
  $permissions['administer actions'] = array(
    'name' => 'administer actions',
    'roles' => array(
      0 => 'super administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: administer advanced pane settings
  $permissions['administer advanced pane settings'] = array(
    'name' => 'administer advanced pane settings',
    'roles' => array(
      0 => 'SID Staff Admin',
      1 => 'super administrator',
    ),
    'module' => 'panels',
  );

  // Exported permission: administer autoassignrole
  $permissions['administer autoassignrole'] = array(
    'name' => 'administer autoassignrole',
    'roles' => array(
      0 => 'super administrator',
    ),
    'module' => 'autoassignrole',
  );

  // Exported permission: administer blocks
  $permissions['administer blocks'] = array(
    'name' => 'administer blocks',
    'roles' => array(
      0 => 'super administrator',
    ),
    'module' => 'block',
  );

  // Exported permission: administer comments
  $permissions['administer comments'] = array(
    'name' => 'administer comments',
    'roles' => array(
      0 => 'SID Staff Admin',
      1 => 'super administrator',
    ),
    'module' => 'comment',
  );

  // Exported permission: administer content types
  $permissions['administer content types'] = array(
    'name' => 'administer content types',
    'roles' => array(
      0 => 'SID Staff Admin',
      1 => 'super administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: administer ctools access ruleset
  $permissions['administer ctools access ruleset'] = array(
    'name' => 'administer ctools access ruleset',
    'roles' => array(
      0 => 'super administrator',
    ),
    'module' => 'ctools_access_ruleset',
  );

  // Exported permission: administer custom content
  $permissions['administer custom content'] = array(
    'name' => 'administer custom content',
    'roles' => array(
      0 => 'super administrator',
    ),
    'module' => 'ctools_custom_content',
  );

  // Exported permission: administer features
  $permissions['administer features'] = array(
    'name' => 'administer features',
    'roles' => array(
      0 => 'super administrator',
    ),
    'module' => 'features',
  );

  // Exported permission: administer fieldgroups
  $permissions['administer fieldgroups'] = array(
    'name' => 'administer fieldgroups',
    'roles' => array(
      0 => 'super administrator',
    ),
    'module' => 'field_group',
  );

  // Exported permission: administer filters
  $permissions['administer filters'] = array(
    'name' => 'administer filters',
    'roles' => array(
      0 => 'super administrator',
    ),
    'module' => 'filter',
  );

  // Exported permission: administer image styles
  $permissions['administer image styles'] = array(
    'name' => 'administer image styles',
    'roles' => array(
      0 => 'super administrator',
    ),
    'module' => 'image',
  );

  // Exported permission: administer masquerade
  $permissions['administer masquerade'] = array(
    'name' => 'administer masquerade',
    'roles' => array(
      0 => 'super administrator',
    ),
    'module' => 'masquerade',
  );

  // Exported permission: administer menu
  $permissions['administer menu'] = array(
    'name' => 'administer menu',
    'roles' => array(
      0 => 'SID Staff Admin',
      1 => 'super administrator',
    ),
    'module' => 'menu',
  );

  // Exported permission: administer mini panels
  $permissions['administer mini panels'] = array(
    'name' => 'administer mini panels',
    'roles' => array(
      0 => 'SID Staff Admin',
      1 => 'super administrator',
    ),
    'module' => 'panels_mini',
  );

  // Exported permission: administer modules
  $permissions['administer modules'] = array(
    'name' => 'administer modules',
    'roles' => array(
      0 => 'super administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: administer nodes
  $permissions['administer nodes'] = array(
    'name' => 'administer nodes',
    'roles' => array(
      0 => 'SID Staff Admin',
      1 => 'super administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: administer page manager
  $permissions['administer page manager'] = array(
    'name' => 'administer page manager',
    'roles' => array(
      0 => 'SID Staff Admin',
      1 => 'super administrator',
    ),
    'module' => 'page_manager',
  );

  // Exported permission: administer pane access
  $permissions['administer pane access'] = array(
    'name' => 'administer pane access',
    'roles' => array(
      0 => 'SID Staff Admin',
      1 => 'super administrator',
    ),
    'module' => 'panels',
  );

  // Exported permission: administer panel-nodes
  $permissions['administer panel-nodes'] = array(
    'name' => 'administer panel-nodes',
    'roles' => array(
      0 => 'SID Staff Admin',
      1 => 'super administrator',
    ),
    'module' => 'panels_node',
  );

  // Exported permission: administer panels layouts
  $permissions['administer panels layouts'] = array(
    'name' => 'administer panels layouts',
    'roles' => array(
      0 => 'SID Staff Admin',
      1 => 'super administrator',
    ),
    'module' => 'panels',
  );

  // Exported permission: administer permissions
  $permissions['administer permissions'] = array(
    'name' => 'administer permissions',
    'roles' => array(
      0 => 'SID Staff Admin',
      1 => 'super administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: administer rules
  $permissions['administer rules'] = array(
    'name' => 'administer rules',
    'roles' => array(
      0 => 'SID Staff Admin',
      1 => 'super administrator',
    ),
    'module' => 'rules',
  );

  // Exported permission: administer search
  $permissions['administer search'] = array(
    'name' => 'administer search',
    'roles' => array(
      0 => 'super administrator',
    ),
    'module' => 'search',
  );

  // Exported permission: administer shortcuts
  $permissions['administer shortcuts'] = array(
    'name' => 'administer shortcuts',
    'roles' => array(
      0 => 'super administrator',
    ),
    'module' => 'shortcut',
  );

  // Exported permission: administer site configuration
  $permissions['administer site configuration'] = array(
    'name' => 'administer site configuration',
    'roles' => array(
      0 => 'super administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: administer software updates
  $permissions['administer software updates'] = array(
    'name' => 'administer software updates',
    'roles' => array(
      0 => 'super administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: administer stylizer
  $permissions['administer stylizer'] = array(
    'name' => 'administer stylizer',
    'roles' => array(
      0 => 'super administrator',
    ),
    'module' => 'stylizer',
  );

  // Exported permission: administer taxonomy
  $permissions['administer taxonomy'] = array(
    'name' => 'administer taxonomy',
    'roles' => array(
      0 => 'super administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: administer themes
  $permissions['administer themes'] = array(
    'name' => 'administer themes',
    'roles' => array(
      0 => 'super administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: administer url aliases
  $permissions['administer url aliases'] = array(
    'name' => 'administer url aliases',
    'roles' => array(
      0 => 'SID Staff Admin',
      1 => 'super administrator',
    ),
    'module' => 'path',
  );

  // Exported permission: administer user locations
  $permissions['administer user locations'] = array(
    'name' => 'administer user locations',
    'roles' => array(
      0 => 'SID Staff Admin',
      1 => 'super administrator',
    ),
    'module' => 'location_user',
  );

  // Exported permission: administer users
  $permissions['administer users'] = array(
    'name' => 'administer users',
    'roles' => array(
      0 => 'SID Staff Admin',
      1 => 'super administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: administer views
  $permissions['administer views'] = array(
    'name' => 'administer views',
    'roles' => array(
      0 => 'SID Staff Admin',
      1 => 'super administrator',
    ),
    'module' => 'views',
  );

  // Exported permission: block IP addresses
  $permissions['block IP addresses'] = array(
    'name' => 'block IP addresses',
    'roles' => array(
      0 => 'super administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: bypass node access
  $permissions['bypass node access'] = array(
    'name' => 'bypass node access',
    'roles' => array(
      0 => 'SID Staff Admin',
      1 => 'super administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: bypass rules access
  $permissions['bypass rules access'] = array(
    'name' => 'bypass rules access',
    'roles' => array(),
  );

  // Exported permission: cancel account
  $permissions['cancel account'] = array(
    'name' => 'cancel account',
    'roles' => array(
      0 => 'super administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: change own username
  $permissions['change own username'] = array(
    'name' => 'change own username',
    'roles' => array(
      0 => 'super administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: create article content
  $permissions['create article content'] = array(
    'name' => 'create article content',
    'roles' => array(
      0 => 'SID Staff Admin',
      1 => 'super administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: create blog content
  $permissions['create blog content'] = array(
    'name' => 'create blog content',
    'roles' => array(
      0 => 'SID Staff Admin',
      1 => 'super administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: create gmap macro
  $permissions['create gmap macro'] = array(
    'name' => 'create gmap macro',
    'roles' => array(
      0 => 'super administrator',
    ),
    'module' => 'gmap_macro_builder',
  );

  // Exported permission: create mini panels
  $permissions['create mini panels'] = array(
    'name' => 'create mini panels',
    'roles' => array(
      0 => 'SID Staff Admin',
      1 => 'super administrator',
    ),
    'module' => 'panels_mini',
  );

  // Exported permission: create page content
  $permissions['create page content'] = array(
    'name' => 'create page content',
    'roles' => array(
      0 => 'SID Staff Admin',
      1 => 'super administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: create panel content
  $permissions['create panel content'] = array(
    'name' => 'create panel content',
    'roles' => array(
      0 => 'SID Staff Admin',
      1 => 'super administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: create panel-nodes
  $permissions['create panel-nodes'] = array(
    'name' => 'create panel-nodes',
    'roles' => array(
      0 => 'SID Staff Admin',
      1 => 'super administrator',
    ),
    'module' => 'panels_node',
  );

  // Exported permission: create partners content
  $permissions['create partners content'] = array(
    'name' => 'create partners content',
    'roles' => array(
      0 => 'Organizational Partner',
      1 => 'SID Staff Admin',
      2 => 'SID Staff Reviewer',
    ),
    'module' => 'node',
  );

  // Exported permission: create projects content
  $permissions['create projects content'] = array(
    'name' => 'create projects content',
    'roles' => array(
      0 => 'Organizational Partner',
      1 => 'SID Staff Admin',
      2 => 'super administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: create technical_support_request content
  $permissions['create technical_support_request content'] = array(
    'name' => 'create technical_support_request content',
    'roles' => array(
      0 => 'SID Staff Admin',
    ),
    'module' => 'node',
  );

  // Exported permission: create url aliases
  $permissions['create url aliases'] = array(
    'name' => 'create url aliases',
    'roles' => array(
      0 => 'SID Staff Admin',
      1 => 'super administrator',
    ),
    'module' => 'path',
  );

  // Exported permission: customize shortcut links
  $permissions['customize shortcut links'] = array(
    'name' => 'customize shortcut links',
    'roles' => array(
      0 => 'super administrator',
    ),
    'module' => 'shortcut',
  );

  // Exported permission: delete any article content
  $permissions['delete any article content'] = array(
    'name' => 'delete any article content',
    'roles' => array(
      0 => 'SID Staff Admin',
      1 => 'super administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any blog content
  $permissions['delete any blog content'] = array(
    'name' => 'delete any blog content',
    'roles' => array(
      0 => 'SID Staff Admin',
      1 => 'super administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any page content
  $permissions['delete any page content'] = array(
    'name' => 'delete any page content',
    'roles' => array(
      0 => 'SID Staff Admin',
      1 => 'super administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any panel content
  $permissions['delete any panel content'] = array(
    'name' => 'delete any panel content',
    'roles' => array(
      0 => 'SID Staff Admin',
      1 => 'super administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any panel-nodes
  $permissions['delete any panel-nodes'] = array(
    'name' => 'delete any panel-nodes',
    'roles' => array(
      0 => 'SID Staff Admin',
      1 => 'super administrator',
    ),
    'module' => 'panels_node',
  );

  // Exported permission: delete any partners content
  $permissions['delete any partners content'] = array(
    'name' => 'delete any partners content',
    'roles' => array(
      0 => 'SID Staff Admin',
      1 => 'SID Staff Reviewer',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any projects content
  $permissions['delete any projects content'] = array(
    'name' => 'delete any projects content',
    'roles' => array(
      0 => 'SID Staff Admin',
      1 => 'super administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any technical_support_request content
  $permissions['delete any technical_support_request content'] = array(
    'name' => 'delete any technical_support_request content',
    'roles' => array(
      0 => 'SID Staff Admin',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own article content
  $permissions['delete own article content'] = array(
    'name' => 'delete own article content',
    'roles' => array(
      0 => 'SID Staff Admin',
      1 => 'super administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own blog content
  $permissions['delete own blog content'] = array(
    'name' => 'delete own blog content',
    'roles' => array(
      0 => 'SID Staff Admin',
      1 => 'super administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own page content
  $permissions['delete own page content'] = array(
    'name' => 'delete own page content',
    'roles' => array(
      0 => 'SID Staff Admin',
      1 => 'super administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own panel content
  $permissions['delete own panel content'] = array(
    'name' => 'delete own panel content',
    'roles' => array(
      0 => 'SID Staff Admin',
      1 => 'super administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own panel-nodes
  $permissions['delete own panel-nodes'] = array(
    'name' => 'delete own panel-nodes',
    'roles' => array(
      0 => 'SID Staff Admin',
      1 => 'super administrator',
    ),
    'module' => 'panels_node',
  );

  // Exported permission: delete own partners content
  $permissions['delete own partners content'] = array(
    'name' => 'delete own partners content',
    'roles' => array(
      0 => 'Organizational Partner',
      1 => 'SID Staff Admin',
      2 => 'SID Staff Reviewer',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own projects content
  $permissions['delete own projects content'] = array(
    'name' => 'delete own projects content',
    'roles' => array(
      0 => 'Organizational Partner',
      1 => 'SID Staff Admin',
      2 => 'super administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own technical_support_request content
  $permissions['delete own technical_support_request content'] = array(
    'name' => 'delete own technical_support_request content',
    'roles' => array(
      0 => 'SID Staff Admin',
    ),
    'module' => 'node',
  );

  // Exported permission: delete revisions
  $permissions['delete revisions'] = array(
    'name' => 'delete revisions',
    'roles' => array(
      0 => 'SID Staff Admin',
      1 => 'super administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete terms in 1
  $permissions['delete terms in 1'] = array(
    'name' => 'delete terms in 1',
    'roles' => array(
      0 => 'super administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: edit any article content
  $permissions['edit any article content'] = array(
    'name' => 'edit any article content',
    'roles' => array(
      0 => 'SID Staff Admin',
      1 => 'super administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any blog content
  $permissions['edit any blog content'] = array(
    'name' => 'edit any blog content',
    'roles' => array(
      0 => 'SID Staff Admin',
      1 => 'super administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any page content
  $permissions['edit any page content'] = array(
    'name' => 'edit any page content',
    'roles' => array(
      0 => 'SID Staff Admin',
      1 => 'super administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any panel content
  $permissions['edit any panel content'] = array(
    'name' => 'edit any panel content',
    'roles' => array(
      0 => 'SID Staff Admin',
      1 => 'super administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any panel-nodes
  $permissions['edit any panel-nodes'] = array(
    'name' => 'edit any panel-nodes',
    'roles' => array(
      0 => 'SID Staff Admin',
      1 => 'super administrator',
    ),
    'module' => 'panels_node',
  );

  // Exported permission: edit any partners content
  $permissions['edit any partners content'] = array(
    'name' => 'edit any partners content',
    'roles' => array(
      0 => 'SID Staff Admin',
      1 => 'SID Staff Reviewer',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any projects content
  $permissions['edit any projects content'] = array(
    'name' => 'edit any projects content',
    'roles' => array(
      0 => 'SID Staff Admin',
      1 => 'super administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any technical_support_request content
  $permissions['edit any technical_support_request content'] = array(
    'name' => 'edit any technical_support_request content',
    'roles' => array(
      0 => 'SID Staff Admin',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own article content
  $permissions['edit own article content'] = array(
    'name' => 'edit own article content',
    'roles' => array(
      0 => 'SID Staff Admin',
      1 => 'super administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own blog content
  $permissions['edit own blog content'] = array(
    'name' => 'edit own blog content',
    'roles' => array(
      0 => 'SID Staff Admin',
      1 => 'super administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own comments
  $permissions['edit own comments'] = array(
    'name' => 'edit own comments',
    'roles' => array(
      0 => 'SID Staff Admin',
      1 => 'super administrator',
    ),
    'module' => 'comment',
  );

  // Exported permission: edit own page content
  $permissions['edit own page content'] = array(
    'name' => 'edit own page content',
    'roles' => array(
      0 => 'SID Staff Admin',
      1 => 'super administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own panel content
  $permissions['edit own panel content'] = array(
    'name' => 'edit own panel content',
    'roles' => array(
      0 => 'SID Staff Admin',
      1 => 'super administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own panel-nodes
  $permissions['edit own panel-nodes'] = array(
    'name' => 'edit own panel-nodes',
    'roles' => array(
      0 => 'SID Staff Admin',
      1 => 'super administrator',
    ),
    'module' => 'panels_node',
  );

  // Exported permission: edit own partners content
  $permissions['edit own partners content'] = array(
    'name' => 'edit own partners content',
    'roles' => array(
      0 => 'Organizational Partner',
      1 => 'SID Staff Admin',
      2 => 'SID Staff Reviewer',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own projects content
  $permissions['edit own projects content'] = array(
    'name' => 'edit own projects content',
    'roles' => array(
      0 => 'Organizational Partner',
      1 => 'SID Staff Admin',
      2 => 'super administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own technical_support_request content
  $permissions['edit own technical_support_request content'] = array(
    'name' => 'edit own technical_support_request content',
    'roles' => array(
      0 => 'SID Staff Admin',
    ),
    'module' => 'node',
  );

  // Exported permission: edit terms in 1
  $permissions['edit terms in 1'] = array(
    'name' => 'edit terms in 1',
    'roles' => array(
      0 => 'super administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: manage features
  $permissions['manage features'] = array(
    'name' => 'manage features',
    'roles' => array(
      0 => 'super administrator',
    ),
    'module' => 'features',
  );

  // Exported permission: masquerade as admin
  $permissions['masquerade as admin'] = array(
    'name' => 'masquerade as admin',
    'roles' => array(
      0 => 'super administrator',
    ),
    'module' => 'masquerade',
  );

  // Exported permission: masquerade as user
  $permissions['masquerade as user'] = array(
    'name' => 'masquerade as user',
    'roles' => array(
      0 => 'SID Staff Admin',
      1 => 'super administrator',
    ),
    'module' => 'masquerade',
  );

  // Exported permission: post comments
  $permissions['post comments'] = array(
    'name' => 'post comments',
    'roles' => array(
      0 => 'SID Staff Admin',
      1 => 'super administrator',
    ),
    'module' => 'comment',
  );

  // Exported permission: revert revisions
  $permissions['revert revisions'] = array(
    'name' => 'revert revisions',
    'roles' => array(
      0 => 'SID Staff Admin',
      1 => 'super administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: search content
  $permissions['search content'] = array(
    'name' => 'search content',
    'roles' => array(
      0 => 'super administrator',
    ),
    'module' => 'search',
  );

  // Exported permission: select account cancellation method
  $permissions['select account cancellation method'] = array(
    'name' => 'select account cancellation method',
    'roles' => array(
      0 => 'super administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: set own user location
  $permissions['set own user location'] = array(
    'name' => 'set own user location',
    'roles' => array(
      0 => 'SID Staff Admin',
      1 => 'super administrator',
    ),
    'module' => 'location_user',
  );

  // Exported permission: skip CAPTCHA
  $permissions['skip CAPTCHA'] = array(
    'name' => 'skip CAPTCHA',
    'roles' => array(
      0 => 'super administrator',
    ),
    'module' => 'captcha',
  );

  // Exported permission: skip comment approval
  $permissions['skip comment approval'] = array(
    'name' => 'skip comment approval',
    'roles' => array(
      0 => 'SID Staff Admin',
      1 => 'super administrator',
    ),
    'module' => 'comment',
  );

  // Exported permission: submit latitude/longitude
  $permissions['submit latitude/longitude'] = array(
    'name' => 'submit latitude/longitude',
    'roles' => array(
      0 => 'super administrator',
    ),
    'module' => 'location',
  );

  // Exported permission: switch shortcut sets
  $permissions['switch shortcut sets'] = array(
    'name' => 'switch shortcut sets',
    'roles' => array(
      0 => 'super administrator',
    ),
    'module' => 'shortcut',
  );

  // Exported permission: use PHP for settings
  $permissions['use PHP for settings'] = array(
    'name' => 'use PHP for settings',
    'roles' => array(
      0 => 'super administrator',
    ),
    'module' => 'php',
  );

  // Exported permission: use advanced search
  $permissions['use advanced search'] = array(
    'name' => 'use advanced search',
    'roles' => array(
      0 => 'super administrator',
    ),
    'module' => 'search',
  );

  // Exported permission: use bulk exporter
  $permissions['use bulk exporter'] = array(
    'name' => 'use bulk exporter',
    'roles' => array(
      0 => 'super administrator',
    ),
    'module' => 'bulk_export',
  );

  // Exported permission: use page manager
  $permissions['use page manager'] = array(
    'name' => 'use page manager',
    'roles' => array(
      0 => 'SID Staff Admin',
      1 => 'super administrator',
    ),
    'module' => 'page_manager',
  );

  // Exported permission: use panels caching features
  $permissions['use panels caching features'] = array(
    'name' => 'use panels caching features',
    'roles' => array(
      0 => 'SID Staff Admin',
      1 => 'super administrator',
    ),
    'module' => 'panels',
  );

  // Exported permission: use panels dashboard
  $permissions['use panels dashboard'] = array(
    'name' => 'use panels dashboard',
    'roles' => array(
      0 => 'SID Staff Admin',
      1 => 'super administrator',
    ),
    'module' => 'panels',
  );

  // Exported permission: use panels in place editing
  $permissions['use panels in place editing'] = array(
    'name' => 'use panels in place editing',
    'roles' => array(
      0 => 'SID Staff Admin',
      1 => 'super administrator',
    ),
    'module' => 'panels',
  );

  // Exported permission: use text format filtered_html
  $permissions['use text format filtered_html'] = array(
    'name' => 'use text format filtered_html',
    'roles' => array(
      0 => 'authenticated user',
      1 => 'super administrator',
    ),
    'module' => 'filter',
  );

  // Exported permission: use text format full_html
  $permissions['use text format full_html'] = array(
    'name' => 'use text format full_html',
    'roles' => array(
      0 => 'super administrator',
    ),
    'module' => 'filter',
  );

  // Exported permission: use text format php_code
  $permissions['use text format php_code'] = array(
    'name' => 'use text format php_code',
    'roles' => array(),
  );

  // Exported permission: view advanced help index
  $permissions['view advanced help index'] = array(
    'name' => 'view advanced help index',
    'roles' => array(
      0 => 'super administrator',
    ),
    'module' => 'advanced_help',
  );

  // Exported permission: view advanced help popup
  $permissions['view advanced help popup'] = array(
    'name' => 'view advanced help popup',
    'roles' => array(
      0 => 'super administrator',
    ),
    'module' => 'advanced_help',
  );

  // Exported permission: view advanced help topic
  $permissions['view advanced help topic'] = array(
    'name' => 'view advanced help topic',
    'roles' => array(
      0 => 'super administrator',
    ),
    'module' => 'advanced_help',
  );

  // Exported permission: view all user locations
  $permissions['view all user locations'] = array(
    'name' => 'view all user locations',
    'roles' => array(
      0 => 'SID Staff Admin',
      1 => 'super administrator',
    ),
    'module' => 'location_user',
  );

  // Exported permission: view location directory
  $permissions['view location directory'] = array(
    'name' => 'view location directory',
    'roles' => array(
      0 => 'super administrator',
    ),
    'module' => 'location',
  );

  // Exported permission: view node location table
  $permissions['view node location table'] = array(
    'name' => 'view node location table',
    'roles' => array(
      0 => 'super administrator',
    ),
    'module' => 'location',
  );

  // Exported permission: view node map
  $permissions['view node map'] = array(
    'name' => 'view node map',
    'roles' => array(
      0 => 'super administrator',
    ),
    'module' => 'gmap_location',
  );

  // Exported permission: view own unpublished content
  $permissions['view own unpublished content'] = array(
    'name' => 'view own unpublished content',
    'roles' => array(
      0 => 'Organizational Partner',
      1 => 'SID Staff Admin',
      2 => 'super administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: view own user location
  $permissions['view own user location'] = array(
    'name' => 'view own user location',
    'roles' => array(
      0 => 'SID Staff Admin',
      1 => 'super administrator',
    ),
    'module' => 'location_user',
  );

  // Exported permission: view pane admin links
  $permissions['view pane admin links'] = array(
    'name' => 'view pane admin links',
    'roles' => array(
      0 => 'SID Staff Admin',
      1 => 'super administrator',
    ),
    'module' => 'panels',
  );

  // Exported permission: view revisions
  $permissions['view revisions'] = array(
    'name' => 'view revisions',
    'roles' => array(
      0 => 'SID Staff Admin',
      1 => 'super administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: view the administration theme
  $permissions['view the administration theme'] = array(
    'name' => 'view the administration theme',
    'roles' => array(
      0 => 'super administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: view user location details
  $permissions['view user location details'] = array(
    'name' => 'view user location details',
    'roles' => array(
      0 => 'super administrator',
    ),
    'module' => 'gmap_location',
  );

  // Exported permission: view user location table
  $permissions['view user location table'] = array(
    'name' => 'view user location table',
    'roles' => array(
      0 => 'super administrator',
    ),
    'module' => 'location',
  );

  // Exported permission: view user map
  $permissions['view user map'] = array(
    'name' => 'view user map',
    'roles' => array(
      0 => 'super administrator',
    ),
    'module' => 'gmap_location',
  );

  return $permissions;
}

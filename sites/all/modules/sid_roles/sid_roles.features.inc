<?php
/**
 * @file
 * sid_roles.features.inc
 */

/**
 * Implementation of hook_ctools_plugin_api().
 */
function sid_roles_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
}

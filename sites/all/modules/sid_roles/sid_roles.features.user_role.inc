<?php
/**
 * @file
 * sid_roles.features.user_role.inc
 */

/**
 * Implementation of hook_user_default_roles().
 */
function sid_roles_user_default_roles() {
  $roles = array();

  // Exported role: Organizational Partner
  $roles['Organizational Partner'] = array(
    'name' => 'Organizational Partner',
    'weight' => '3',
  );

  // Exported role: SID Staff Admin
  $roles['SID Staff Admin'] = array(
    'name' => 'SID Staff Admin',
    'weight' => '5',
  );

  // Exported role: Student
  $roles['Student'] = array(
    'name' => 'Student',
    'weight' => '4',
  );

  return $roles;
}

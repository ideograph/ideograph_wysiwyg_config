<?php
/**
 * @file
 * ideograph_wysiwyg_config.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function ideograph_wysiwyg_config_user_default_permissions() {
  $permissions = array();

  // Exported permission: switch users
  $permissions['switch users'] = array(
    'name' => 'switch users',
    'roles' => array(
      0 => 'administrator',
      1 => 'contributor',
      2 => 'editor',
    ),
    'module' => 'devel',
  );

  return $permissions;
}

<?php


error_reporting(E_ALL);
ini_set('display_errors', TRUE);
ini_set('display_startup_errors', TRUE);


/**
 * @file
 * The PHP page that serves all page requests on a Drupal installation.
 *
 * The routines here dispatch control to the appropriate handler, which then
 * prints the appropriate page.
 *
 * All Drupal code is released under the GNU General Public License.
 * See COPYRIGHT.txt and LICENSE.txt.
 */

/**
 * Root directory of Drupal installation.
 */
 
if ( !extension_loaded( 'mysql' )) {
 if ( !dl( 'mysql.so' )) {
     exit( 'Cannot load mysql extension.' );
 }
}

if ( !extension_loaded( 'pdo' )) {
  dl( 'pdo.so' ); 
}

if ( !extension_loaded( 'pdo_mysql' )) {
  dl( 'pdo_mysql.so' ); 
}
 
define('DRUPAL_ROOT', getcwd());

require_once DRUPAL_ROOT . '/includes/bootstrap.inc';
drupal_bootstrap(DRUPAL_BOOTSTRAP_FULL);
menu_execute_active_handler();

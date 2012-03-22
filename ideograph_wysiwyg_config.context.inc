<?php
/**
 * @file
 * ideograph_wysiwyg_config.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function ideograph_wysiwyg_config_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'wysiwyw_sitewide';
  $context->description = 'display blocks site-wide for the wysiwyw pofile';
  $context->tag = 'blocks';
  $context->conditions = array(
    'sitewide' => array(
      'values' => array(
        1 => 1,
      ),
    ),
    'user' => array(
      'values' => array(
        'administrator' => 'administrator',
        'contributor' => 'contributor',
        'editor' => 'editor',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'devel-switch_user' => array(
          'module' => 'devel',
          'delta' => 'switch_user',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('blocks');
  t('display blocks site-wide for the wysiwyw pofile');
  $export['wysiwyw_sitewide'] = $context;

  return $export;
}

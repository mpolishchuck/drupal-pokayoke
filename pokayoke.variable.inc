<?php

/**
 * Implements hook_variable_info().
 */
function pokayoke_variable_info() {
  $variables['pokayoke_features_disable_generation'] = array(
    'type' => 'boolean',
    'title' => t('Prevent direct feature generation'),
    'default' => FALSE,
    'description' => t('Hide "Generate Feature" button on feature create form.'),
    'group' => 'pokayoke',
  );

  $variables['pokayoke_update_disable_install'] = array(
    'type' => 'boolean',
    'title' => t('Prevent direct module or theme install'),
    'default' => FALSE,
    'description' => t('Hide "Install new module/theme" local action on appearance, modules and update pages (menu cache clear required).'),
    'group' => 'pokayoke',
  );

  $variables['pokayoke_update_disable_upgrade'] = array(
    'type' => 'boolean',
    'title' => t('Prevent direct module or theme upgrade'),
    'default' => FALSE,
    'description' => t('Hide "Download these updates" button on update list form.'),
    'group' => 'pokayoke',
  );

  return $variables;
}

/**
 * Implements hook_variable_group_info().
 */
function pokayoke_variable_group_info() {
  $groups['pokayoke'] = array(
    'title' => t('Poka-yoke'),
    'description' => t('Poka-yoke fool proofing settings.'),
  );

  return $groups;
}

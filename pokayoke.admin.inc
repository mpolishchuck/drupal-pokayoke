<?php

function pokayoke_settings_form($form, &$form_state) {

  $form['features'] = array(
    '#type' => 'fieldset',
    '#title' => t('Features'),
    '#collapsible' => TRUE,
    '#collapsed' => FALSE,
  );

  $form['features']['pokayoke_features_disable_generation'] = array(
    '#type' => 'checkbox',
    '#title' => t('Prevent direct feature generation'),
    '#description' => t('Hides "Generate Feature" button.'),
    '#default_value' => variable_get('pokayoke_features_disable_generation', FALSE),
  );

  $form['update'] = array(
    '#type' => 'fieldset',
    '#title' => t('Update'),
    '#collapsible' => TRUE,
    '#collapsed' => FALSE,
  );

  $form['update']['pokayoke_update_disable_install'] = array(
    '#type' => 'checkbox',
    '#title' => t('Prevent direct module or theme install'),
    '#description' => t('Hides "Install new module/theme" local action (menu cache clear required).'),
    '#default_value' => variable_get('pokayoke_update_disable_install', FALSE),
  );

  $form['update']['pokayoke_update_disable_upgrade'] = array(
    '#type' => 'checkbox',
    '#title' => t('Prevent direct module or theme upgrade'),
    '#description' => t('Hides "Download these updates" button.'),
    '#default_value' => variable_get('pokayoke_update_disable_upgrade', FALSE),
  );

  return system_settings_form($form);
}

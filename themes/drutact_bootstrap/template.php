<?php
/**
 * @file
 * template.php
 */

/**
 * Implements hook_preprocess_node().
 *
 * Add primary button class to 'Read more' link.
 */
function drutact_bootstrap_preprocess_node(&$variables) {
  $variables['content']['links']['node']['#links']['node-readmore']['attributes']['class'][] = 'btn btn-primary';
}

function drutact_bootstrap_preprocess_mimemail_message(&$variables) {
  global $base_url;
  $variables['base_url'] = $base_url;
  if ($logo_file = file_load(variable_get('drutact_email_logo', 0))) {
    $logo_url = file_create_url($logo_file->uri);
    $variables['logo_url'] = $logo_url;
  }
  else {
    $variables['logo_url'] = $base_url . '/profiles/drutact/themes/drutact_bootstrap/logo.png';
  }
}

/**
 * Implements theme_menu_link().
 *
 * @see http://webmar.com.au/blog/drupal-bootstrap-3-multilevel-submenus-hover
 */
function drutact_bootstrap_menu_link(array $variables) {
  $element = $variables['element'];
  $sub_menu = '';

  if ($element['#below']) {
    // Prevent dropdown functions from being added to management menu so it
    // does not affect the navbar module.
    if (($element['#original_link']['menu_name'] == 'management') && (module_exists('navbar'))) {
      $sub_menu = drupal_render($element['#below']);
    }
    // Here we need to change from ==1 to >=1 to allow for multilevel submenus
    elseif ((!empty($element['#original_link']['depth'])) && ($element['#original_link']['depth'] >= 1)) {
      // Add our own wrapper.
      unset($element['#below']['#theme_wrappers']);
      $sub_menu = '<ul class="dropdown-menu">' . drupal_render($element['#below']) . '</ul>';
      // Generate as standard dropdown.
      $element['#title'] .= ' <span class="caret"></span>';
      $element['#attributes']['class'][] = 'dropdown';
      $element['#localized_options']['html'] = TRUE;

      // Set dropdown trigger element to # to prevent inadvertant page loading
      // when a submenu link is clicked.
      $element['#localized_options']['attributes']['data-target'] = '#';
      $element['#localized_options']['attributes']['class'][] = 'dropdown-toggle';
      //comment element bellow if you want your parent menu links to be "clickable"
      //$element['#localized_options']['attributes']['data-toggle'] = 'dropdown';
    }
  }
  // On primary navigation menu, class 'active' is not set on active menu item.
  // @see https://drupal.org/node/1896674
  if (($element['#href'] == $_GET['q'] || ($element['#href'] == '<front>' && drupal_is_front_page())) && (empty($element['#localized_options']['language']))) {
    $element['#attributes']['class'][] = 'active';
  }
  $output = l($element['#title'], $element['#href'], $element['#localized_options']);
  return '<li' . drupal_attributes($element['#attributes']) . '>' . $output . $sub_menu . "</li>\n";
}

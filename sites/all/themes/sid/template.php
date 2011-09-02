<?php

/**
* Replacement for theme_webform_element() to enable descriptions to come BEFORE the field to be filled out.
*/
function sid_webform_element($variables) {
  $element = $variables['element'];
  $value = $variables['element']['#children'];

  $wrapper_classes = array(
    'form-item',
  );
  $output = '<div class="' . implode(' ', $wrapper_classes) . '" id="' . $element['#id'] . '-wrapper">' . "\n";
  $required = !empty($element['#required']) ? '<span class="form-required" title="' . t('This field is required.') . '">*</span>' : '';

  if (!empty($element['#title'])) {
    $title = $element['#title'];
    $output .= ' <label for="' . $element['#id'] . '">' . t('!title: !required', array('!title' => filter_xss_admin($title), '!required' => $required)) . "</label>\n";
  }

  if (!empty($element['#description'])) {
    $output .= ' <div class="description">' . $element['#description'] . "</div>\n";
  }

  $output .= '<div id="' . $element['#id'] . '">' . $value . '</div>' . "\n";

  $output .= "</div>\n";

  return $output;
}

?>

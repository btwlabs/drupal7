<?php
function omega_4_boilerplate_status_messages($variables) {
  if (module_exists('absolute_messages')) {
    return theme_absolute_messages($variables);
  }
  return omega_status_messages($variables);
}
?>
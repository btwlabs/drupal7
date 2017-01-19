<?php

// Include local settings if on a local.
$dir = dirname(__FILE__);
if (file_exists($dir .'/local/settings.local.php')) {
  include_once($dir . '/local/settings.local.php');
}


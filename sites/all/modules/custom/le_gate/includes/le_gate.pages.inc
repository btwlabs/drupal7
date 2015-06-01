<?php
/**
 * @file
 * le_gate.pages.inc
 */

/**
 * Page callback for Le Gate page.
 */
function le_gate_page() {
  $content = '';
  $content .= theme('le_gate_gate');
  return $content;
}

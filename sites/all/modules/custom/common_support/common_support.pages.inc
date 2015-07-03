<?php
/**
 * common_support.pages.inc
 */

/**
 * Page not found page callback.
 */
function common_support_404_page() {
  return theme('common_support_404_page');
}

/**
 * Page callback for no content router items.
 */
function common_support_blank_page() {
  return '';
}

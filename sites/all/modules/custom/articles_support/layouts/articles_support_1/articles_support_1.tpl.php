<?php

/**
 * @file
 * Display Suite 1 column template.
 */
?>
<<?php print $article_content_wrapper; print $layout_attributes; ?> class="article_content_1 <?php print $classes;?> clearfix">

  <?php if (isset($title_suffix['contextual_links'])): ?>
  <?php print render($title_suffix['contextual_links']); ?>
  <?php endif; ?>

  <?php print $article_content; ?>
</<?php print $article_content_wrapper ?>>

<?php if (!empty($drupal_render_children)): ?>
  <?php print $drupal_render_children ?>
<?php endif; ?>

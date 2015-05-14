<?php

/**
 * @file
 * common-support-teaser-1.tpl.php
 */
?>

<<?php print $layout_wrapper; print $layout_attributes; ?> class="common-support-teaser-1 <?php print $classes;?> clearfix">
  <?php if (isset($title_suffix['contextual_links'])): ?>
    <?php print render($title_suffix['contextual_links']); ?>
  <?php endif; ?>

  <div class="outer-wrapper col1-outer-wrapper">
    <<?php print $col1_wrapper ?> class="col col1-wrapper <?php print $col1_classes;?>">
      <?php print $col1; ?>
    </<?php print $col1_wrapper ?>>
  </div>

  <div class="outer-wrapper col2-outer-wrapper">
    <<?php print $col2_wrapper ?> class="col col2-wrapper <?php print $col2_classes;?>">
      <?php print $col2; ?>
    </<?php print $col2_wrapper ?>>
  </div>

</<?php print $layout_wrapper ?>>

<?php if (!empty($drupal_render_children)): ?>
  <?php print $drupal_render_children ?>
<?php endif; ?>

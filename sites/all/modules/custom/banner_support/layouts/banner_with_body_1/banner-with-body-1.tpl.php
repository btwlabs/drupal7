<?php

/**
 * @file
 * articles support v1 full node layout template.
 */
?>

<<?php print $layout_wrapper; print $layout_attributes; ?> class="banner-with-body-1 <?php print $classes;?> clearfix">
  <?php if (isset($title_suffix['contextual_links'])): ?>
    <?php print render($title_suffix['contextual_links']); ?>
  <?php endif; ?>

  <?php if (!empty($row1)) : ?>
    <div class="outer-wrapper row1-outer-wrapper">
      <<?php print $row1_wrapper ?> class="row row-1-wrapper <?php print $row1_classes;?>">
        <?php print $row1; ?>
      </<?php print $row1_wrapper ?>>
    </div>
  <?php endif; ?>

  <?php if (!empty($row2)) : ?>
    <div class="outer-wrapper row2-outer-wrapper">
      <<?php print $row2_wrapper ?> class="row row-2-wrapper <?php print $row2_classes;?>">
         <?php print $row2; ?>
      </<?php print $row2_wrapper ?>>
    </div>
  <?php endif; ?>

</<?php print $layout_wrapper ?>>

<?php if (!empty($drupal_render_children)): ?>
  <?php print $drupal_render_children ?>
<?php endif; ?>